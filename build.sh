rm -rf ~/Projects/payroll/build;
mkdir ~/Projects/payroll/build;
cd ~/Projects/payroll/build;
cmake ..;
cmake --build .;
./payroll;