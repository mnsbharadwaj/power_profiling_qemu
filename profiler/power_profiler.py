
import re
from energy_model import power_table

def parse_qemu_trace(trace_file):
    total_energy = 0.0
    with open(trace_file, 'r') as f:
        for line in f:
            match = re.search(r'\s+([a-z]+)', line)
            if match:
                instr = match.group(1)
                energy = power_table.get(instr, 1.0)  # default energy if unknown
                total_energy += energy
    print(f"Total estimated energy: {total_energy:.2f} units")

if __name__ == "__main__":
    import sys
    if len(sys.argv) != 2:
        print("Usage: python power_profiler.py <trace_file>")
    else:
        parse_qemu_trace(sys.argv[1])
