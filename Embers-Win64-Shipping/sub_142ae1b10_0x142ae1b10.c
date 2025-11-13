// 函数: sub_142ae1b10
// 地址: 0x142ae1b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rdi = arg1
struct icu_64::PatternMapIterator::VTable** result = nullptr
struct icu_64::PatternMapIterator::VTable** result_2 = nullptr
int32_t r12 = 0x7fffffff
int64_t var_128 = 0
struct icu_64::PatternMapIterator::VTable* var_110
sub_142adf2f0(&var_110, arg5)

if (*arg5 s<= 0)
    int64_t rdx_1 = *(rdi + 0x100)
    int64_t var_f0_1 = rdx_1
    struct icu_64::PatternMapIterator::VTable** result_1
    
    while (true)
        void* var_100
        void* const rcx_1 = var_100
        struct icu_64::PatternMapIterator::VTable** result_3
        int32_t result_4
        
        if (rdx_1 != 0)
            result_3 = sx.q(result_4)
        
        if (rdx_1 == 0 || result_3 s>= 0x34)
        label_142ae1bed:
            result_3.b = 0
        else
            int64_t* rdx_3 = rdx_1 + (result_3 << 3) + 8
            
            while (true)
                if (rcx_1 != 0)
                    if (*(rcx_1 + 0x98) != 0)
                        result_3.b = 1
                        break
                    
                    rcx_1 = nullptr
                else if (*rdx_3 != 0)
                    result_3.b = 1
                    break
                
                result_3 += 1
                rdx_3 = &rdx_3[1]
                
                if (result_3 s>= 0x34)
                    goto label_142ae1bed
        
        if (result_3.b == 0)
            result_1 = result_2
            break
        
        struct icu_64::DateTimeMatcher::VTable* const var_e8_1 = &icu_64::DateTimeMatcher::`vftable'
        struct icu_64::PtnSkeleton::VTable* const var_e0 = &icu_64::PtnSkeleton::`vftable'
        void* rax_2 = sub_142ae33a0(&var_110)
        void* rcx_3 = *(rdi + 0x1188)
        int128_t zmm1_1 = *(rax_2 + 0x20)
        int128_t var_d8 = *(rax_2 + 0x10)
        int128_t var_c8_1 = zmm1_1
        int128_t var_b8_1 = *(rax_2 + 0x30)
        int128_t var_a8_1 = *(rax_2 + 0x40)
        int128_t var_98_1 = *(rax_2 + 0x50)
        int128_t var_88_1 = *(rax_2 + 0x60)
        int128_t var_78_1 = *(rax_2 + 0x70)
        int128_t var_68_1 = *(rax_2 + 0x80)
        
        if (rcx_3 == 0 || var_98_1.q != *(rcx_3 + 0x50) || var_98_1:8.q != *(rcx_3 + 0x58)
                || var_88_1.q != *(rcx_3 + 0x60) || var_88_1:8.q != *(rcx_3 + 0x68))
            int128_t* r9 = &var_d8
            int32_t rcx_4 = 1
            int32_t rbx_1 = 0
            int32_t rdi_1 = 0
            int32_t rsi_1 = 0
            
            for (int32_t i = 0; i s< 0x10; )
                result_3 = nullptr
                
                if ((arg3 & rcx_4) != 0)
                    result_3 = zx.q(*(arg2 - &var_d8 + r9 + 0x10))
                
                int32_t rdx_4 = *r9
                
                if (result_3.d != rdx_4)
                    if (result_3.d == 0)
                        rbx_1 += 0x10000
                        rdi_1 |= 1 << (i u% 0x20)
                    else if (rdx_4 != 0)
                        int32_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(result_3.d - rdx_4)
                        rbx_1 += (temp1_1 ^ temp0_1) - temp0_1
                    else
                        rbx_1 += 0x1000
                        rsi_1 |= 1 << (i u% 0x20)
                
                i += 1
                rcx_4 = rol.d(rcx_4, 1)
                r9 += 4
            
            if (rbx_1 s< r12)
                r12 = rbx_1
                result_3 = sub_142ae25f0(*(arg1 + 0x100), &var_e0, &var_128)
                result_2 = result_3
                result_1 = result_3
                *(arg4 + 8) = rsi_1
                *(arg4 + 0xc) = rdi_1
                
                if (rbx_1 == 0)
                    break
            
            rdi = arg1
        
        rdx_1 = var_f0_1
    
    if (result_1 != 0 && arg6 != 0)
        *arg6 = var_128
    
    result = result_1

int64_t* var_f8

if (var_f8 != 0)
    int64_t r8_1 = *var_f8
    (*r8_1)(var_f8, 1, r8_1)

__security_check_cookie(rax_1 ^ &var_158)
return result
