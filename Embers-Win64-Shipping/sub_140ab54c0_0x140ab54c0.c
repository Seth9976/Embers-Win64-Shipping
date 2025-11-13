// 函数: sub_140ab54c0
// 地址: 0x140ab54c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14_1 = *(arg1 + 8) + 0x10
int64_t* rax = j_sub_140a82f30(0x68)
int64_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rax = r14_1
    void* rcx = &rax[3]
    rax[1] = 0
    rax[2] = 0
    *(rcx + 0x10) = 0
    *(rcx + 0x18) = 0
    *(rcx + 0x1c) = 0x80
    void* rax_1 = *(rcx + 0x10)
    
    if (rax_1 != 0)
        rcx = rax_1
    
    *rcx = 0
    *(rcx + 8) = 0
    rdi[7].d = 0xffffffff
    *(rdi + 0x3c) = 0
    rdi[9] = 0
    rdi[0xa].d = 0

sub_140ab2a90(rdi, arg2, arg3)

if (*arg2 == 0)
    AcquireSRWLockExclusive(r14_1 + 0x98)
    int64_t rbp_1 = sx.q(*(r14_1 + 0xa8))
    int32_t rax_2 = (rbp_1 + 1).d
    *(r14_1 + 0xa8) = rax_2
    
    if (rax_2 s> *(r14_1 + 0xac))
        sub_1405a4d70(r14_1 + 0xa0)
    
    *(*(r14_1 + 0xa0) + (rbp_1 << 3)) = rdi
    ReleaseSRWLockExclusive(r14_1 + 0x98)
else if (rdi != 0)
    sub_1405ae100(&rdi[1])
    j_sub_140a74f90(rdi)

return arg2
