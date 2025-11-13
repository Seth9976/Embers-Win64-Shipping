// 函数: sub_1428901a0
// 地址: 0x1428901a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)
char rax = (*(arg1 + 0x14)).b

if ((rax & 2) == 0)
    int64_t rcx = *arg1
    
    if ((rax & 8) == 0)
        sub_1428a6780(rcx)
    else
        sub_1428a7190(rcx)

if ((*(arg1 + 0x14) & 1) != 0)
    sub_1428a6780(arg1)
