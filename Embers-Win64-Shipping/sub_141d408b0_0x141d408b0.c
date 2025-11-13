// 函数: sub_141d408b0
// 地址: 0x141d408b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_38 = &data_142d42d18
void*** var_48 = nullptr
int64_t (* var_58)(int64_t arg1, int64_t* arg2, int32_t* arg3) = sub_141d35b70
AcquireSRWLockExclusive(&arg1[0x20])
void*** rax = j_sub_140a82f30(0x70)
void*** rsi = rax

if (rax == 0)
    rsi = nullptr
else
    void* var_88 = nullptr
    
    if (var_58 != 0)
        void** const* rcx_2 = &var_38
        
        if (var_48 != 0)
            rcx_2 = var_48
        
        (**rcx_2)(rcx_2, &var_88)
    
    *rsi = &data_143222700
    rsi[2] = var_58
    rsi[4] = 0
    void var_78
    
    if (rsi[2] != 0)
        void* rax_3 = var_88
        void* rcx_3 = &var_78
        
        if (rax_3 != 0)
            rcx_3 = rax_3
        
        (**rcx_3)(rcx_3)
    
    sub_141d36630(&rsi[0xa], *arg1)
    rsi[0xb] = 0
    rsi[0xc] = 0
    
    if (var_58 != 0)
        void* rax_5 = var_88
        void* rcx_5 = &var_78
        
        if (rax_5 != 0)
            rcx_5 = rax_5
        
        (*(*rcx_5 + 0x10))(rcx_5)

int32_t rcx_6 = *(arg1 + 0x10)

if (rcx_6 s< 2)
    uint64_t i_1 = zx.q(2 - rcx_6)
    uint64_t i
    
    do
        int64_t rdi_1 = sx.q(*(arg1 + 0x10))
        int32_t rax_7 = (rdi_1 + 1).d
        *(arg1 + 0x10) = rax_7
        
        if (rax_7 s> *(arg1 + 0x14))
            sub_1405a4d70(&arg1[8])
        
        *(*(arg1 + 8) + (rdi_1 << 3)) = 0
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rdi_2 = *(arg1 + 0x10)
*(arg1 + 0x10) = rdi_2 + 1

if (rdi_2 + 1 s> *(arg1 + 0x14))
    sub_1405a4d70(&arg1[8])

void* rdx_8 = *(arg1 + 8) + 0x10
memmove(rdx_8 + 8, rdx_8, (rdi_2 - 2) << 3)
*(*(arg1 + 8) + 0x10) = rsi
int64_t result = ReleaseSRWLockExclusive(&arg1[0x20])

if (var_58 == 0)
    return result

void** const* rcx_11 = &var_38

if (var_48 != 0)
    rcx_11 = var_48

return (*rcx_11)[2](rcx_11)
