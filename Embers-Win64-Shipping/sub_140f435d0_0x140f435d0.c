// 函数: sub_140f435d0
// 地址: 0x140f435d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rcx_1

if (*(arg1 + 0x610) == 0)
    rcx_1 = *(arg1 + 0x6f0) + 0x2b0
else
    rcx_1 = sub_140e11270(arg1 + 0x5e8, arg3)

*arg2 = *rcx_1
arg2[1].b = rcx_1[1].b
*(arg2 + 0x18) = *(rcx_1 + 0x18)
void* rax_4 = rcx_1[2].q
arg2[2].q = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return arg2
