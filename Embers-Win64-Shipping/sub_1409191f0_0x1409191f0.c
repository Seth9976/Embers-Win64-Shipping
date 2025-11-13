// 函数: sub_1409191f0
// 地址: 0x1409191f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax = arg2[1]
arg1[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg1[2].d = arg2[2].d
arg1[3] = arg2[3]
void* rax_3 = arg2[4]
arg1[4] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[5].d = arg2[5].d
arg1[6] = arg2[6]
void* rax_6 = arg2[7]
arg1[7] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[8].d = arg2[8].d
arg1[9].b = arg2[9].b
arg1[0xa] = arg2[0xa]
return arg1
