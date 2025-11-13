// 函数: sub_1429ce210
// 地址: 0x1429ce210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (((*(arg1 + 0x30) - *(arg1 + 0x28)) s>> 3).d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rdi_1 = *(rsi_1 + *(arg1 + 0x28))
        
        if (rdi_1 != 0)
            sub_1429c9e00(rdi_1)
            j_sub_140a74f90(rdi_1)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< ((*(arg1 + 0x30) - *(arg1 + 0x28)) s>> 3).d)

int32_t rsi_2 = 0
int32_t result = ((*(arg1 + 0x48) - *(arg1 + 0x40)) s>> 3).d

if (result s> 0)
    int64_t* rdi_2 = nullptr
    
    do
        int64_t* rcx_2 = *(rdi_2 + *(arg1 + 0x40))
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        rsi_2 += 1
        rdi_2 = &rdi_2[1]
        result = ((*(arg1 + 0x48) - *(arg1 + 0x40)) s>> 3).d
    while (rsi_2 s< result)

void* r8_1 = *(arg1 + 0x58)

if (r8_1 != 0)
    int64_t rax_13
    int64_t rdx_2
    rdx_2:rax_13 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x68) - r8_1)
    int64_t rdx_3 = rdx_2 s>> 2
    int64_t rdx_4 = rdx_3 + (rdx_3 u>> 0x3f)
    
    if (rdx_4 u> 0xaaaaaaaaaaaaaaa)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rdx_4 * 0x18 u>= 0x1000)
        if ((r8_1.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_18 = *(r8_1 - 8)
        
        if (rax_18 u>= r8_1)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* r8 = r8_1 - rax_18
        
        if (r8 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (r8 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        r8_1 = rax_18
    
    result = j_sub_140a74f90(r8_1)
    __builtin_memset(arg1 + 0x58, 0, 0x18)

void* rcx_7 = *(arg1 + 0x40)

if (rcx_7 != 0)
    int64_t rax_21 = (*(arg1 + 0x50) - rcx_7) s>> 3
    
    if (rax_21 u> 0x1fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_21 << 3 u>= 0x1000)
        if ((rcx_7.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_23 = *(rcx_7 - 8)
        
        if (rax_23 u>= rcx_7)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_6 = rcx_7 - rax_23
        
        if (rcx_6 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_6 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_7 = rax_23
    
    result = j_sub_140a74f90(rcx_7)
    __builtin_memset(arg1 + 0x40, 0, 0x18)

void* rcx_9 = *(arg1 + 0x28)

if (rcx_9 != 0)
    int64_t rax_26 = (*(arg1 + 0x38) - rcx_9) s>> 3
    
    if (rax_26 u> 0x1fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_26 << 3 u>= 0x1000)
        if ((rcx_9.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_28 = *(rcx_9 - 8)
        
        if (rax_28 u>= rcx_9)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_8 = rcx_9 - rax_28
        
        if (rcx_8 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_8 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_9 = rax_28
    
    result = j_sub_140a74f90(rcx_9)
    __builtin_memset(arg1 + 0x28, 0, 0x18)

return result
