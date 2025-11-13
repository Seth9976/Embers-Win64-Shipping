// 函数: sub_142898ec0
// 地址: 0x142898ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t r10 = *(arg1 + 8)
int32_t rcx = *arg1
int64_t rax = sx.q(arg2)
int64_t result = *(r10 + (rax << 3))

if (arg2 != rcx - 1)
    memmove(r10 + (rax << 3), r10 + (sx.q(arg2 + 1) << 3), (rcx - arg2 - 1) << 3)
    rcx = *arg1

*arg1 = rcx - 1
return result
