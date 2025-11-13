// 函数: sub_141512980
// 地址: 0x141512980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (arg2 == 0)
    *arg1 = 0
    int64_t rax = j_sub_140a74f90(arg1[2])
    arg1[2] = 0
    return rax

int64_t rax_1 = 2 * rdi

if (mulu.dp.q(2, rdi) u>> 0x40 != zx.o(0))
    rax_1 = -1

int64_t rax_2 = j_sub_140a82f30(rax_1)
int32_t rax_3 = *(arg1 + 4)

if (rax_3 != 0)
    memcpy(rax_2, arg1[2], rax_3 * 2)
    rax_3 = j_sub_140a74f90(arg1[2])

bool cond:0 = *arg1 u<= rdi.d
int32_t rcx_4 = rdi.d
*(arg1 + 4) = rdi.d

if (cond:0)
    rcx_4 = *arg1

*arg1 = rcx_4
arg1[2] = rax_2
return rax_3
