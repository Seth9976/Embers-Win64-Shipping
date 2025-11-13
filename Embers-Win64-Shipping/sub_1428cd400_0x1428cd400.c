// 函数: sub_1428cd400
// 地址: 0x1428cd400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)
char rax = (arg1[4].d).b

if ((rax & 4) != 0)
    sub_1428a6780(*arg1)
    sub_1428a6780(arg1[1])
    rax = (arg1[4].d).b
    arg1[1] = 0
    *arg1 = 0

if ((rax & 8) != 0)
    sub_1428a6780(arg1[3])
    rax = (arg1[4].d).b
    arg1[3] = 0
    *(arg1 + 0x14) = 0

if ((rax & 1) != 0)
    sub_1428a6780(arg1)
