// 函数: sub_140f43630
// 地址: 0x140f43630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1

if (*(arg1 + 0x590) == 0)
    rcx_1 = *(arg1 + 0x6f0) + 0x238
else
    rcx_1 = sub_140eff6e0(arg1 + 0x540)

*arg2 = *rcx_1
arg2[1] = rcx_1[1]
*(arg2 + 0x10) = *(rcx_1 + 0x10)
*(arg2 + 0x20) = *(rcx_1 + 0x20)
arg2[6] = rcx_1[6]
void* rax_5 = rcx_1[7]
arg2[7] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

arg2[8] = rcx_1[8]
arg2[9].d = rcx_1[9].d
*(arg2 + 0x4c) = *(rcx_1 + 0x4c)
return arg2
