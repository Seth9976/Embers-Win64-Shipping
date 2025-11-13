// 函数: sub_14177fe50
// 地址: 0x14177fe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
char* rdx = *(arg1 + 0x398)

if (rdx[rdi] == 1 && arg3 == 0)
    void* rcx = *(arg1 + 0x1b8)
    uint64_t* rdx_1 = *(arg1 + 0x3f8)
    int64_t r8 = rdi * 0xc
    *(rdx_1 + r8) = *(rcx + r8)
    *(rdx_1 + r8 + 8) = *(rcx + r8 + 8)
    void* rcx_1 = *(arg1 + 0x1d0)
    uint64_t* rdx_2 = *(arg1 + 0x410)
    *(rdx_2 + r8) = *(rcx_1 + r8)
    *(rdx_2 + r8 + 8) = *(rcx_1 + r8 + 8)
    rdx = *(arg1 + 0x398)

int32_t rax
rax.b = rdx[rdi] == 1

if (rax.b != arg3)
    int64_t rcx_2 = *(*(arg1 + 0xc8) + (rdi << 3))
    char var_20_1 = arg3
    AcquireSRWLockExclusive(arg1 + 0x3b8)
    int64_t rbp_1 = sx.q(*(arg1 + 0x3b0))
    int32_t rax_4 = (rbp_1 + 1).d
    *(arg1 + 0x3b0) = rax_4
    
    if (rax_4 s> *(arg1 + 0x3b4))
        sub_1405a4f90(arg1 + 0x3a8)
    
    *(*(arg1 + 0x3a8) + rbp_1 * 0x10) = rcx_2.o
    ReleaseSRWLockExclusive(arg1 + 0x3b8)
    rdx = *(arg1 + 0x398)

uint64_t result = zx.q(rdx[rdi])

if (result.b == 4 || result.b == 1)
    result = 4
    
    if (arg3 != 0)
        result = 1
    
    rdx[rdi] = result.b
    rdx = *(arg1 + 0x398)

if (rdx[rdi] != 2)
    goto label_14177ffa7

if (arg3 != 0)
    rdx[rdi] = 1
label_14177ffa7:
    
    if (arg3 != 0)
        result = *(arg1 + 0x398)
        *(rdi + result)

return result
