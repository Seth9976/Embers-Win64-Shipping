// 函数: sub_142893020
// 地址: 0x142893020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1 - arg2
int64_t rdx = sx.q(arg3)
int32_t r9
r9.b = rcx u> neg.q(rdx)
int32_t rax_2
rax_2.b = rcx u< rdx
int32_t rax_3 = 0

if (rcx != 0)
    rax_3 = r9 | rax_2

int32_t r10
r10.b = arg3 s> 0
return zx.q(rax_3) & zx.q(r10)
