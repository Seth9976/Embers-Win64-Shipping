// 函数: sub_1423ced80
// 地址: 0x1423ced80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0
arg1[1] = arg2[1]
arg2[1] = 0
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
arg2[2] = 0
arg1[3] = arg2[3]
arg1[4] = arg2[4]
void* rax_5 = arg2[5]
arg1[5] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

arg1[6].d = arg2[6].d
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x48) = *(arg2 + 0x48)
arg1[0xb].b = arg2[0xb].b
return arg1
