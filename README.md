# Cheatsheet & exam

###### fping
###### nmap 
###### search Exploit-db.comm

# fping
  **Run a ping scan on the entire network with fping**<br>
     +fping -a -g 192.168.10.0 2> /dev/null

# nmap 
 **Running a ping scan with nmap reports**<br>
   +nmap -sn -n 192.168.6.* 

 **run nmap only on the alive hosts**<br>
   +nmap -sS 192.168.6.1,5,88,115 

 **Fingerprint the operating systems running on the hosts with the -O nmap option.**<br>
   +nmap -O 192.168.6.1 
 **Probe open ports to determine service/version info**
   +nmap -sV 192.168.6.130

# search Exploit-db.comm
   +searchsploit pchart 2.1.3
