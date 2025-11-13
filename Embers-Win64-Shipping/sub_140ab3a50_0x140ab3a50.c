// 函数: sub_140ab3a50
// 地址: 0x140ab3a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg1[1].d
int64_t rbx = sx.q(arg3)
int64_t rbp = sx.q(arg4)
int32_t rax = r14 + rbx.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140594770(arg1)

int64_t rdi = rbp << 1
int64_t rdx_2 = *arg1 + rdi
int64_t rbx_1 = rbx * 2
memmove(rbx_1 + rdx_2, rdx_2, (r14 - rbp.d) * 2)
memcpy(*arg1 + rdi, arg2, rbx_1.d)
return zx.q(rbp.d)
