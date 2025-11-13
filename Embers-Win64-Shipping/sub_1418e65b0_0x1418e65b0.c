// 函数: sub_1418e65b0
// 地址: 0x1418e65b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r12 = *arg3
void* r13 = *(arg1 + 0x58)
uint64_t r15 = zx.q(arg3[1].d)
char* var_58 = r12
int32_t var_50 = r15.d
uint64_t rdx_3 = zx.q(sub_140b21160(r12, r15.d, 0)) << 0x20 | r15
uint64_t arg_10 = rdx_3
void*** rax_1 = sub_1418cd330(r13 + 0x470, rdx_3)
void*** rdi = rax_1

if (rax_1 == 0)
    void*** rax_2 = j_sub_140a82f30(0x1a0)
    rdi = rax_2
    
    if (rax_2 == 0)
        rdi = nullptr
    else
        *rdi = &data_142d3ff08
        rdi[1].d = 0
        *(rdi + 0xc) = 0
        rdi[2].w = 0x100
        __builtin_memset(&rdi[3], 0, 0x14)
        *rdi = &data_142ef2928
        *(rdi + 0x2c) = 2
        sub_1418d12b0(&rdi[6], r13, 2, 4)
        *rdi = &data_142feee68
        rdi[6] = &data_142feee70
    
    uint64_t r8_1 = arg_10
    void* rbx_1 = &rdi[6]
    int32_t var_70_1 = r15.d
    int128_t var_48 = r12.o
    sub_1418ee3f0(rbx_1, &var_48, r8_1, arg4)
    AcquireSRWLockExclusive(r13 + 0x470)
    uint64_t* var_68 = &arg_10
    
    if (rdi == 0)
        rbx_1 = nullptr
    
    void* arg_18 = rbx_1
    void** var_60_1 = &arg_18
    int32_t arg_8
    sub_1418ca8c0(r13 + 0x518, &arg_8, &var_68, nullptr)
    ReleaseSRWLockExclusive(r13 + 0x470)

*arg2 = rdi

if (rdi != 0)
    rdi[1].d += 1

return arg2
