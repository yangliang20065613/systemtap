# systemtap
gcc -Wall -g -o ./stap_set_var ./stap_set_var.c
stap -g stap_set_var.stp -c ./stap_set_var
