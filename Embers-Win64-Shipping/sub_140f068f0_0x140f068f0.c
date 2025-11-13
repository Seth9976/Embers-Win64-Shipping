// 函数: sub_140f068f0
// 地址: 0x140f068f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d
int64_t r14 = sx.q(arg3)
arg1[1].d = rbp + 1

if (rbp + 1 s> *(arg1 + 0xc))
    sub_1405c4f50(arg1)

int64_t rbx_1 = r14 * 0x30
int64_t rdx_2 = *arg1 + rbx_1
memmove(rdx_2 + 0x30, rdx_2, (rbp - r14.d) * 0x30)
int64_t* rcx_2 = *arg1 + rbx_1
*rcx_2 = *arg2
void* rax_3 = arg2[1]
rcx_2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

rcx_2[2] = 0
rcx_2[2] = arg2[2]
__builtin_memset(&arg2[2], 0, 0x20)
rcx_2[3].d = arg2[3].d
*(rcx_2 + 0x1c) = *(arg2 + 0x1c)
rcx_2[4] = 0
rcx_2[4] = arg2[4]
rcx_2[5].d = arg2[5].d
*(rcx_2 + 0x2c) = *(arg2 + 0x2c)
return zx.q(r14.d)
