// 函数: sub_14193f080
// 地址: 0x14193f080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg1[1].d
int64_t rbx = sx.q(arg3)
int64_t rbp = sx.q(arg4)
int32_t rax = r14 + rbx.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405daba0(arg1)

int64_t rdx_2 = *arg1 + rbp
memmove(rbx + rdx_2, rdx_2, r14 - rbp.d)
memcpy(*arg1 + rbp, arg2, rbx.d)
return zx.q(rbp.d)
