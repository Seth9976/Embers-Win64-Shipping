// 函数: sub_141f4ae80
// 地址: 0x141f4ae80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x71c)
char rax_2
int64_t* rcx

if ((rax & 4) != 0 && (rax & 0x20) != 0 && *(arg1 + 0x938) == *(arg1 + 0x964))
    rcx = *(arg1 + 0x650)
    
    if (rcx != 0)
        rax_2 = sub_141e050b0(rcx)

int64_t rdi

if ((rax & 4) == 0 || (rax & 0x20) == 0 || *(arg1 + 0x938) != *(arg1 + 0x964)
        || (rcx != 0 && rax_2 != 0))
    rdi.b = 0
else
    rdi.b = 1

if (sub_141f73dd0(arg1) != 0 && (*(arg1 + 0x71b) & 0x40) == 0 && rdi.b == 0)
    return 1

return 0
