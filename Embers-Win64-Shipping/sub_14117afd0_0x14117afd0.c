// 函数: sub_14117afd0
// 地址: 0x14117afd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
*arg1 = &data_142f18ee0
void* rax = *arg3
arg1[2] = rax

if (rax != 0)
    *(rax + 8) += 1

int32_t rax_2 = *(arg2 + 0x15a0) - *(arg2 + 0x1598)
*(arg1 + 0x1c) = *(arg2 + 0x15a4) - *(arg2 + 0x159c)
arg1[3].d = rax_2
sub_1405d1550(arg3)
return arg1
