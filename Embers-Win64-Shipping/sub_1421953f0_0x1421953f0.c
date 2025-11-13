// 函数: sub_1421953f0
// 地址: 0x1421953f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg1[1].d
int64_t rbx = sx.q(arg3)
int64_t rbp = sx.q(arg2)
int32_t rax = r14 + rbx.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t rdi = rbp << 3
int64_t rdx_2 = *arg1 + rdi
int64_t rbx_1 = rbx << 3
memmove(rbx_1 + rdx_2, rdx_2, (r14 - rbp.d) << 3)
return memset(*arg1 + rdi, 0, rbx_1) __tailcall
