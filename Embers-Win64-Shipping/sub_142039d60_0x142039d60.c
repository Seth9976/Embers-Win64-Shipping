// 函数: sub_142039d60
// 地址: 0x142039d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

if (sub_1424b2a30(arg1, arg2) != 0)
    *(arg1 + 0x2cc) -= 1
    return 

char rax
void* rdx
void* r8_1
rax, rdx, r8_1 = sub_14243ae00((*(*arg1 + 0x150))(arg1))

if (rax == 0 && sub_14226f910(arg2, rdx, r8_1) == 0)
    *(arg1 + 0x2dc) -= 1
    return 

arg1[0x5a].d -= 1
