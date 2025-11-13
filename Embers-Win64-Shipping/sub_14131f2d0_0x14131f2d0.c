// 函数: sub_14131f2d0
// 地址: 0x14131f2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x168))
int64_t var_20 = arg3
int32_t rax = (rdi + 1).d
*(arg1 + 0x168) = rax

if (rax s> *(arg1 + 0x16c))
    sub_14119a720(arg1 + 0x160, rdi.d)

int64_t result = *(arg1 + 0x160)
int64_t rcx_1 = rdi * 3
*(result + (rcx_1 << 3)) = arg2.o
*(result + (rcx_1 << 3) + 0x10) = arg4.q
return result
