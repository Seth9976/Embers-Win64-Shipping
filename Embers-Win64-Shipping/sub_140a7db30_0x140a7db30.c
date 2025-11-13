// 函数: sub_140a7db30
// 地址: 0x140a7db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg2)

if (arg2 u>= 8)
    int64_t zmm0 = *(r10 + arg1 - 8)
    int64_t rcx_1 = *arg1 + -0x651e95c4d06fbfb1
    int64_t rdx_3 = (ror.q(rcx_1, 0x19) + zmm0) * (zx.q((r10 * 2).d) + -0x651e95c4d06fbfb1)
    int64_t rax_5 = ((rol.q(zmm0, 0x1b) * (zx.q((r10 * 2).d) + -0x651e95c4d06fbfb1) + rcx_1)
        ^ rdx_3) * (zx.q((r10 * 2).d) + -0x651e95c4d06fbfb1)
    int64_t rcx_6 = (rax_5 u>> 0x2f ^ rax_5 ^ rdx_3) * (zx.q((r10 * 2).d) + -0x651e95c4d06fbfb1)
    return (rcx_6 u>> 0x2f ^ rcx_6) * (zx.q((r10 * 2).d) + -0x651e95c4d06fbfb1)

if (r10.d u>= 4)
    uint64_t r8_2 = zx.q(*(r10 + arg1 - 4))
    int64_t rdx_6 = ((r10 + (zx.q(*arg1) << 3)) ^ r8_2) * (zx.q((r10 * 2).d) + -0x651e95c4d06fbfb1)
    int64_t rcx_11 = (rdx_6 u>> 0x2f ^ rdx_6 ^ r8_2) * (zx.q((r10 * 2).d) + -0x651e95c4d06fbfb1)
    return (rcx_11 u>> 0x2f ^ rcx_11) * (zx.q((r10 * 2).d) + -0x651e95c4d06fbfb1)

if (arg2 == 0)
    return -0x651e95c4d06fbfb1

int64_t rdx_10 = (zx.q(*arg1) * -0x651e95c4d06fbfb1
    - zx.q(*((r10 u>> 1) + arg1)) * 0x1e95c4d06fbfb100)
    ^ (zx.q((r10 + (zx.q(*(zx.q((r10 - 1).d) + arg1)) << 2)).d) * -0x3c5a37a36834ced9)
return (rdx_10 u>> 0x2f ^ rdx_10) * -0x651e95c4d06fbfb1
