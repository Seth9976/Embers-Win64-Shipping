// 函数: sub_142ae08a0
// 地址: 0x142ae08a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** result = arg2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_d0 = arg2
int32_t var_f0 = 0
*arg2 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg2[1].w = 2
int32_t var_f0_1 = 1
sub_142ae4070(*(arg1 + 0xe8), arg3)
int32_t i = 0
int32_t i_1 = 0
void* rcx_1 = *(arg1 + 0xe8)

if (*(rcx_1 + 0xc88) s> 0)
    do
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
        sub_142a479b0(&var_c8, rcx_1 + 8 + (sx.q(i) << 6))
        int32_t j_4
        int32_t j_3 = j_4
        int16_t var_c0
        int16_t rsi_1 = var_c0
        int32_t j_5
        
        if (rsi_1 s< 0)
            j_5 = j_3
        else
            j_5 = sx.d(rsi_1) s>> 5
        
        char r15_1 = var_c0.b
        void var_be
        void* var_b0
        int16_t rcx_3
        
        if (j_5 == 0)
            rcx_3 = -1
        else
            void* rax_5 = &var_be
            
            if ((r15_1 & 2) == 0)
                rax_5 = var_b0
            
            rcx_3 = *rax_5
        
        if (rcx_3 != 0x27)
            int32_t rbx = 0
            int32_t rax_7 = sub_142a4a1f0(&var_c8)
            
            if (rax_7 s> 0)
                int64_t r8_1 = 0
                int64_t r9_2 = 0
                
                do
                    int32_t j_6
                    
                    if (rsi_1 s< 0)
                        j_6 = j_3
                    else
                        j_6 = sx.d(rsi_1) s>> 5
                    
                    int16_t rcx_8
                    
                    if (rbx u< j_6)
                        void* rax_9 = &var_be
                        
                        if ((r15_1 & 2) == 0)
                            rax_9 = var_b0
                        
                        rcx_8 = *(rax_9 + r9_2) - 0x20
                    
                    if (rbx u>= j_6 || rcx_8 u> 0x3c
                            || not(test_bit(0x1000000004003085, zx.q(rcx_8))))
                        void* rcx_10 = *(arg1 + 0xe8) + r8_1
                        int16_t rdx_5 = *(rcx_10 + 0x10)
                        int32_t rax_12
                        
                        if (rdx_5 s< 0)
                            rax_12 = *(rcx_10 + 0x14)
                        else
                            rax_12 = sx.d(rdx_5) s>> 5
                        
                        void* rcx_11
                        
                        if (rax_12 != 0)
                            if ((rdx_5.b & 2) == 0)
                                rcx_11 = *(rcx_10 + 0x20)
                            else
                                rcx_11 = rcx_10 + 0x12
                        
                        if (rax_12 == 0 || *rcx_11 != 0x2e)
                            rdx_5.b = 1
                            int32_t rax_13 = sub_142ae1ec0(&var_c8, rdx_5.b)
                            
                            if (rax_13 s>= 0)
                                int64_t r9_3 = sx.q(*((sx.q(rax_13) << 4) + 0x14365a164))
                                char rdx_6 = arg5
                                
                                if ((rdx_6 & 1) == 0 || r9_3.d != 0xd)
                                    int64_t rax_16 = *(arg1 + 0xf0)
                                    
                                    if (*(rax_16 + (r9_3 << 2) + 0x10) != 0)
                                        int16_t r10_2 = sx.w(*(r9_3 + rax_16 + 0x50))
                                        int32_t j = sx.d(*(r9_3 + rax_16 + 0x60))
                                        
                                        if (r10_2 == 0x45 && j s< 3)
                                            j = 3
                                        
                                        bool cond:3_1
                                        
                                        if (r9_3.d == 0xb)
                                            cond:3_1 = (arg6 & 0x800) == 0
                                        label_142ae0bb9:
                                            
                                            if (cond:3_1)
                                                goto label_142ae0ba7
                                            
                                            goto label_142ae0bc0
                                        
                                        if (r9_3.d == 0xc)
                                            cond:3_1 = (arg6 & 0x1000) == 0
                                            goto label_142ae0bb9
                                        
                                        if (r9_3.d != 0xd || (arg6 & 0x2000) != 0)
                                        label_142ae0bc0:
                                            
                                            if (arg4 != 0)
                                                int16_t rdx_9 = *((sx.q(rax_13) << 4) + 0x14365a168)
                                                int32_t rcx_18 = *(arg4 + (r9_3 << 2) + 8)
                                                
                                                if (sx.d(*(r9_3 + arg4 + 0x58)) == j)
                                                label_142ae0bec:
                                                    rdx_6 = arg5
                                                    
                                                    if (rsi_1 s< 0)
                                                        j = j_3
                                                    else
                                                        j = sx.d(rsi_1) s>> 5
                                                else if (rdx_9 s<= 0)
                                                    if (rcx_18 s> 0 && rdx_9 s<= 0)
                                                        goto label_142ae0bec
                                                    
                                                    rdx_6 = arg5
                                                else
                                                    if (rcx_18 s<= 0 || rdx_9 s<= 0)
                                                        goto label_142ae0bec
                                                    
                                                    rdx_6 = arg5
                                        else
                                        label_142ae0ba7:
                                            
                                            if (rsi_1 s< 0)
                                                j = j_3
                                            else
                                                j = sx.d(rsi_1) s>> 5
                                        
                                        int16_t rdi_3
                                        
                                        if ((r9_3.d u> 0xb || not(test_bit(0x848, r9_3.d)))
                                                && (r9_3.d != 1 || r10_2 == 0x59))
                                            rdi_3 = r10_2
                                        else
                                            int32_t j_7
                                            
                                            if (rsi_1 s< 0)
                                                j_7 = j_3
                                            else
                                                j_7 = sx.d(rsi_1) s>> 5
                                            
                                            if (j_7 == 0)
                                                rdi_3 = -1
                                            else
                                                void* rax_19 = &var_be
                                                
                                                if ((r15_1 & 2) == 0)
                                                    rax_19 = var_b0
                                                
                                                rdi_3 = *rax_19
                                        
                                        if (r9_3.d == 0xb && (rdx_6 & 2) != 0)
                                            rdi_3 = *(arg1 + 0x11d8)
                                        
                                        rsi_1 &= 0x1f
                                        
                                        if ((r15_1 & 1) != 0)
                                            rsi_1 = 2
                                        
                                        var_c0 = rsi_1
                                        
                                        if (j s> 0)
                                            do
                                                i_1.w = rdi_3
                                                sub_142a48d70(&var_c8, &i_1, 0, 1)
                                                j -= 1
                                            while (j s> 0)
                                            
                                            j_3 = j_4
                                            rsi_1 = var_c0
                                else
                                    int16_t rax_14 = *(arg1 + 0x1150)
                                    int32_t r9_5
                                    
                                    if (rax_14 s< 0)
                                        r9_5 = *(arg1 + 0x1154)
                                    else
                                        r9_5 = sx.d(rax_14) s>> 5
                                    
                                    sub_142a48d00(&var_c8, arg1 + 0x1148, 0, r9_5)
                                    void* rax_15 = *(arg1 + 0xf0)
                                    int16_t rdi_2 = sx.w(*(rax_15 + 0x5e))
                                    int32_t j_8 = sx.d(*(rax_15 + 0x6e))
                                    
                                    if (j_8 s> 0)
                                        uint64_t j_2 = zx.q(j_8)
                                        uint64_t j_1
                                        
                                        do
                                            i_1.w = rdi_2
                                            sub_142a48d70(&var_c8, &i_1, 0, 1)
                                            j_1 = j_2
                                            j_2 -= 1
                                        while (j_1 != 1)
                                    
                                    j_3 = j_4
                                    rsi_1 = var_c0
                            
                            break
                    
                    rbx += 1
                    r9_2 += 2
                    r8_1 += 0x40
                while (rbx s< rax_7)
            
            if (rsi_1 s>= 0)
                j_3 = sx.d(rsi_1) s>> 5
            
            result = arg2
            sub_142a48d00(result, &var_c8, 0, j_3)
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_80_1 = 2
            sub_142ae26e0(*(arg1 + 0xe8), &var_88, &i_1)
            int32_t r9_1
            int32_t var_7c
            
            if (var_80_1 s< 0)
                r9_1 = var_7c
            else
                r9_1 = sx.d(var_80_1) s>> 5
            sub_142a48d00(result, &var_88, 0, r9_1)
            sub_142a47ff0(&var_88)
            i = i_1
        
        sub_142a47ff0(&var_c8)
        i += 1
        i_1 = i
        rcx_1 = *(arg1 + 0xe8)
    while (i s< *(rcx_1 + 0xc88))

__security_check_cookie(rax_1 ^ &var_118)
return result
