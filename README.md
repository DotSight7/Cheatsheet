# Cheatsheet & exam

###### fping
###### nmap 

# fping
  +Run a ping scan on the entire network with fping<br>
     +fping -a -g 192.168.10.0 2> /dev/null

# nmap 
**double asterisks**  +Running a ping scan with nmap reports<br>
   +nmap -sn -n 192.168.6.* 

**double asterisks**  +run nmap only on the alive hosts<br>
   +nmap -sS 192.168.6.1,5,88,115 

**double asterisks**  +Fingerprint the operating systems running on the hosts with the -O nmap option.<br>
   +nmap -O 192.168.6.1 
