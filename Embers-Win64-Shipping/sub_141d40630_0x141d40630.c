// 函数: sub_141d40630
// 地址: 0x141d40630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_88 = &data_142d42d18
AcquireSRWLockExclusive(&arg1[0x20])
void*** rax = j_sub_140a82f30(0x70)
int64_t (* var_68)(int64_t arg1, int64_t* arg2, int32_t* arg3)
int64_t var_58
void*** r15

if (rax == 0)
    r15 = nullptr
else
    var_68 = sub_141d35ce0
    var_58 = 0
    void** const* rcx_1 = &var_88
    (**rcx_1)(rcx_1, &var_58)
    r15 = sub_141d2cbe0(rax, arg1, &var_68)

int32_t rax_3 = *(arg1 + 0x10)

if (rax_3 s< 0)
    uint64_t i_3 = zx.q(neg.d(rax_3))
    uint64_t i
    
    do
        int64_t rdi_1 = sx.q(*(arg1 + 0x10))
        int32_t rax_5 = (rdi_1 + 1).d
        *(arg1 + 0x10) = rax_5
        
        if (rax_5 s> *(arg1 + 0x14))
            sub_1405a4d70(&arg1[8])
        
        *(*(arg1 + 8) + (rdi_1 << 3)) = 0
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t rdi_2 = sx.q(*(arg1 + 0x10))
int32_t rax_7 = (rdi_2 + 1).d
*(arg1 + 0x10) = rax_7

if (rax_7 s> *(arg1 + 0x14))
    sub_1405a4d70(&arg1[8])

void* rdx_5 = *(arg1 + 8)
memmove(rdx_5 + 8, rdx_5, (rdi_2 << 3).d)
**(arg1 + 8) = r15
ReleaseSRWLockExclusive(&arg1[0x20])
void** const* rcx_7 = &var_88
(*rcx_7)[2](rcx_7)
sub_141d3fe80(arg1)
sub_141d408b0(arg1)
var_88 = &data_142d42d18
AcquireSRWLockExclusive(&arg1[0x20])
void*** rax_10 = j_sub_140a82f30(0x70)
void*** r14_1

if (rax_10 == 0)
    r14_1 = nullptr
else
    var_68 = sub_141d35cd0
    var_58 = 0
    void** const* rcx_11 = &var_88
    (**rcx_11)(rcx_11, &var_58)
    r14_1 = sub_141d2cd80(rax_10, arg1, &var_68)

int32_t rcx_13 = *(arg1 + 0x10)

if (rcx_13 s< 3)
    uint64_t i_2 = zx.q(3 - rcx_13)
    uint64_t i_1
    
    do
        int64_t rdi_4 = sx.q(*(arg1 + 0x10))
        int32_t rax_13 = (rdi_4 + 1).d
        *(arg1 + 0x10) = rax_13
        
        if (rax_13 s> *(arg1 + 0x14))
            sub_1405a4d70(&arg1[8])
        
        *(*(arg1 + 8) + (rdi_4 << 3)) = 0
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int32_t rdi_5 = *(arg1 + 0x10)
*(arg1 + 0x10) = rdi_5 + 1

if (rdi_5 + 1 s> *(arg1 + 0x14))
    sub_1405a4d70(&arg1[8])

void* rdx_11 = *(arg1 + 8) + 0x18
memmove(rdx_11 + 8, rdx_11, (rdi_5 - 3) << 3)
*(*(arg1 + 8) + 0x18) = r14_1
ReleaseSRWLockExclusive(&arg1[0x20])
void** const* rcx_18 = &var_88
return (*rcx_18)[2](rcx_18)
