# hashcat-hook
A few LD_PRELOAD hooks to fix specific issues with hashcat

## umask_hook
A simple hook to change the hardcoded `umask(077)` in hashcat: https://github.com/hashcat/hashcat/blob/4359f61f84fc90a064c2c84f5f07c5d1a27d9b13/src/shared.c#L424

This should allow for multi-seat environments with a shared group to work properly. 
