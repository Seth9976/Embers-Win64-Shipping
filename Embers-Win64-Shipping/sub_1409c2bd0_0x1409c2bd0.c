// 函数: sub_1409c2bd0
// 地址: 0x1409c2bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
*arg2 = 0
arg2[1] = 0
int64_t r14 = sx.q(arg3) * 0x18
int32_t rdx = *(r14 + *(arg1 + 0x70) + 0x10)

if (rdx s>= 1)
    sub_1405dadb0(arg2, rdx)

int64_t rax_2 = *(arg1 + 0x70)
int32_t* rdi = *(r14 + rax_2 + 8)
uint64_t r14_2 = sx.q(*(r14 + rax_2 + 0x10)) << 2 u>> 2

if (rdi u> &rdi[sx.q(*(r14 + rax_2 + 0x10))])
    r14_2 = 0

if (r14_2 != 0)
    do
        sub_1408d92c0(arg2, *(arg1 + 0xa8) + 0xc + (sx.q(*rdi) << 4))
        rbx += 1
        rdi = &rdi[1]
    while (rbx != r14_2)

return arg2
