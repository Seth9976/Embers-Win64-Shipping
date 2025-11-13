// 函数: sub_140e3b760
// 地址: 0x140e3b760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint64_t result = 0
int32_t i = 0
int64_t var_68 = 0
int64_t r10 = arg2
int64_t var_60 = 0
int32_t i_1 = 0

if (*(arg1 + 0x288) s> 0)
    do
        int32_t j = 0
        int64_t var_58 = 0
        int64_t var_50_1 = 0
        int32_t j_2 = 0
        
        if (*(arg1 + 0x284) s> 0)
            int32_t rax_2 = arg1[0x250].d
            
            do
                int32_t rdi_1 = 0
                int32_t rsi_1 = 0
                
                if (*(arg1 + 0x24fc) != 0 && rax_2 == 0)
                    sub_140e42430(arg1, arg3)
                    j = j_2
                    r10 = arg2
                
                int32_t k = 0
                
                if (*(arg1 + 0x27c) s> 0)
                    void* __offset(_SETJMP_FLOAT128, 0x28c) r15_1 = arg1 + 0x28c
                    
                    do
                        int64_t rdx = sx.q(*r15_1)
                        int32_t r13_1 = *(&var_58 + (rdx << 2))
                        r10(arg1, rdx, zx.q(rdi_1 + r13_1), zx.q(*(&var_68 + (rdx << 2)) + rsi_1), 
                            j_2, arg2)
                        
                        if (arg1[0x23].d != 1)
                            int32_t rax_4 = *(arg1 + (rdx << 2) + 0x1d0)
                            rdi_1 += 1
                            
                            if (rdi_1 == rax_4)
                                rdi_1 = 0
                                rsi_1 += 1
                                
                                if (rsi_1 == *(arg1 + (rdx << 2) + 0x1e0))
                                    rsi_1 = 0
                                    *(&var_58 + (rdx << 2)) = rax_4 + r13_1
                        else
                            *(&var_58 + (rdx << 2)) = r13_1 + 1
                        
                        r10 = arg2
                        k += 1
                        r15_1 += 4
                    while (k s< *(arg1 + 0x27c))
                    
                    j = j_2
                
                arg1[0x250].d -= 1
                j += 1
                rax_2 = arg1[0x250].d
                r10 = arg2
                j_2 = j
            while (j s< *(arg1 + 0x284))
            
            i = i_1
        
        result = zx.q(arg1[0x23].d)
        
        if (result.d == 1)
            result = sx.q(*(arg1 + 0x234))
            *(&var_68 + (result << 2)) += 1
        else if (result.d s> 0)
            void* __offset(_SETJMP_FLOAT128, 0x234) rdx_1 = arg1 + 0x234
            uint64_t r8_2 = result
            uint64_t j_1
            
            do
                int64_t rax_5 = sx.q(*rdx_1)
                int32_t* rcx_2 = &var_68 + (rax_5 << 2)
                rdx_1 += 4
                result = zx.q(*(arg1 + (rax_5 << 2) + 0x1e0))
                *rcx_2 += result.d
                j_1 = r8_2
                r8_2 -= 1
            while (j_1 != 1)
        
        i += 1
        i_1 = i
    while (i s< *(arg1 + 0x288))

__security_check_cookie(rax_1 ^ &var_98)
return result
