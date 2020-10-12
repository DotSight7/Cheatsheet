# Cheatsheet & exam

# fping > Run a ping scan on the entire network with fping
  fping -a -g 192.168.10.0 2> /dev/null

# nmap 
  nmap -sn -n 192.168.6.* # Running a ping scan with nmap reports
  nmap -sS 192.168.6.1,5,88,115 # un nmap only on the alive hosts
  nmap -O 192.168.6.1 # Fingerprint the operating systems running on the hosts with the -O nmap option.
