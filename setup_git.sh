
#!/bin/bash
# Initialize git repo and push to GitHub
git init
git add .
git commit -m "Initial commit for power profiling Kyber512 on QEMU"
git branch -M main
git remote add origin https://github.com/YOUR_USERNAME/power_profiling_qemu.git
git push -u origin main
