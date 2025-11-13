// 函数: sub_142bca000
// 地址: 0x142bca000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_1 = *arg2 + 1
int32_t rax = *(arg1 + 0x18)

if (rcx_1 u<= rax)
    *arg2 = rax
    return 1

int32_t rcx_2 = rcx_1 - rax

if (rcx_2 u>= *(arg1 + 0x1c))
    *arg2 = 0
    return 0

*arg2 = rax + rcx_2
return zx.q(rcx_2 + 1)
