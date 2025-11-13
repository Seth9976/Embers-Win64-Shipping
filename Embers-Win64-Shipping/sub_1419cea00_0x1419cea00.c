// 函数: sub_1419cea00
// 地址: 0x1419cea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
*arg2 = 0
int32_t rax_1 = rdi.d & 0x8000001f

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xffffffe0) + 1

SRWLOCK* SRWLock = &arg1[5 + sx.q(rax_1)]
AcquireSRWLockShared(SRWLock)
sub_1405d16e0(arg2, arg1[1][rdi])
ReleaseSRWLockShared(SRWLock)

if (*arg2 == 0)
    AcquireSRWLockExclusive(SRWLock)
    int64_t* rcx_5 = *arg1
    void arg_8
    sub_1405d1600(arg2, (*(*rcx_5 + 0x58))(rcx_5, &arg_8, zx.q(rdi.d)))
    sub_1405d1550(&arg_8)
    sub_1405d16e0(arg1[1] + (rdi << 3), *arg2)
    ReleaseSRWLockExclusive(SRWLock)

return arg2
