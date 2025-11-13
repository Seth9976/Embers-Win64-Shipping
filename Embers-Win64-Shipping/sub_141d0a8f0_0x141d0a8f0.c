// 函数: sub_141d0a8f0
// 地址: 0x141d0a8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t result = 0

if (data_143a21050 != 0)
    uint64_t result_1 = 0
    int64_t rdi_1 = 0
    int32_t r15_1 = 0
    int128_t var_98 = data_14321e0d0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x1c)
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    int64_t var_58_1 = 0
    char var_50_1 = 0
    void* const var_b8 = nullptr
    int64_t var_a8 = 0
    int32_t var_a0_1 = 0
    EnterCriticalSection(arg1 + 0x38)
    int64_t r12_1 = sx.q(*(arg1 + 0x18))
    int32_t temp0_1 = r12_1.d
    
    if (temp0_1 != 0)
        if (temp0_1 s> 0)
            sub_1405a5410(&var_a8, r12_1.d)
            r15_1 = var_a0_1
            rdi_1 = var_a8
        
        memcpy((sx.q(r15_1) << 4) + rdi_1, *(arg1 + 0x10), (r12_1 << 4).d)
        var_a0_1 = r15_1 + r12_1.d
    
    if (arg1 != -0x38)
        LeaveCriticalSection(arg1 + 0x38)
    
    char rax_2 = sub_141d02340(&var_a8, arg2, &var_b8, &var_98)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    void* const rdi_2
    
    if (rax_2 != 0)
        rdi_2 = var_b8
    
    if (rax_2 == 0 || rdi_2 == 0)
        var_b8 = nullptr
        int32_t rdx_9 = 0
        int32_t var_b0_1 = 0
        int32_t rcx_18 = 0
        int32_t var_ac_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rdi_5 = -1
            
            do
                rdi_5 += 1
            while (arg2[rdi_5] != 0)
            
            if (rdi_5.d + 1 s> 0)
                sub_1405947f0(&var_b8, rdi_5.d + 1)
                rcx_18 = var_ac_1
                rdx_9 = var_b0_1
            
            int32_t rax_9 = rdx_9 + rdi_5.d + 1
            int32_t var_b0_2 = rax_9
            
            if (rax_9 s> rcx_18)
                sub_140594770(&var_b8)
            
            UnDecorator::getReferenceType(var_b8, arg2, (rdi_5.d + 1) * 2)
        
        char rax_10 = sub_141d06c80(arg1, &var_b8)
        void* const rcx_23 = var_b8
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        if (rax_10 != 0)
            int64_t* rcx_24 = *(arg1 + 8)
            result_1 = (*(*rcx_24 + 0x128))(rcx_24, arg2)
    else if (var_58_1:4.d == 0 && (var_50_1 & 1) == 0)
        EnterCriticalSection(rdi_2 + 0x160)
        int64_t rax_5
        
        if (*(rdi_2 + 0x158) == 0)
            int16_t* const rdx_3
            
            if (*(rdi_2 + 0x10) == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *(rdi_2 + 8)
            
            int64_t* rcx_9 = *(arg1 + 8)
            rax_5 = (*(*rcx_9 + 0x128))(rcx_9, rdx_3)
            *(rdi_2 + 0x158) = rax_5
        
        if (*(rdi_2 + 0x158) != 0 || rax_5 != 0)
            void*** result_2 = j_sub_140a82f30(0x38)
            
            if (result_2 != 0)
                int32_t rax_6 = *(rdi_2 + 0xa4)
                int64_t rcx_10 = 0x30
                int64_t r8_4 = *(rdi_2 + 0x140)
                
                if (rax_6 s>= 3)
                    rcx_10 = 0x35
                    
                    if (var_58_1:4.d != 0)
                        rcx_10 = (sx.q(var_60_1) << 4) + 0x39
                
                int64_t rdx_4 = rcx_10 + 8
                
                if (rax_6 s>= 2)
                    rdx_4 = rcx_10
                
                int64_t rcx_13 = *(rdi_2 + 0x158)
                int64_t rdx_5 = rdx_4 + var_98.q
                result_2[1] = var_88
                *result_2 = &data_14321d650
                result_2[2] = rcx_13
                result_2[3] = rdx_5
                result_2[4] = r8_4
                result_2[5] = 0
                result_2[6] = 0
                
                if (arg2 != 0 && *arg2 != 0)
                    int64_t rdi_3 = -1
                    
                    do
                        rdi_3 += 1
                    while (arg2[rdi_3] != 0)
                    
                    if (rdi_3.d + 1 s> 0)
                        sub_1405947f0(&result_2[5], rdi_3.d + 1)
                        result_1 = zx.q(result_2[6].d)
                    
                    int32_t rax_8 = result_1.d + rdi_3.d + 1
                    result_2[6].d = rax_8
                    
                    if (rax_8 s> *(result_2 + 0x34))
                        sub_140594770(&result_2[5])
                    
                    UnDecorator::getReferenceType(result_2[5], arg2, (rdi_3.d + 1) * 2)
                
                result_1 = result_2
        
        if (rdi_2 != -0x160)
            LeaveCriticalSection(rdi_2 + 0x160)
    
    sub_140a1d5c0(&var_68)
    result = result_1

__security_check_cookie(rax_1 ^ &var_d8)
return result
