// 函数: sub_14274cc80
// 地址: 0x14274cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int16_t* rax_2 = *(arg1 + 0x10)
void* rsi = arg1
char rdx = *(arg1 + 0xac)
int16_t r8 = *rax_2
*(arg1 + 0x10) = &rax_2[1]
void* result

if (rdx == 0)
    uint64_t rbp_2 = zx.q(zx.d(rax_2[1]) * *(arg1 + 0x80))
    *(arg1 + 0x10) = &rax_2[2]
    int16_t i_8 = rax_2[2]
    result = &rax_2[3]
    *(arg1 + 0x10) = result
    int64_t rbp_3 = rbp_2 + *(arg1 + 0x70)
    int64_t var_b0_1 = rbp_3
    
    if (0 u< i_8)
        int64_t r9_4 = zx.q(r8) * 0x70
        uint64_t i_5 = zx.q(i_8)
        int64_t var_60_1 = r9_4
        uint64_t i_6 = i_5
        uint64_t i
        
        do
            int16_t* rax_13 = *(rsi + 0x10)
            void* r10_2 = nullptr
            int32_t j = *(rsi + 0xa8)
            int32_t j_1 = j
            void* var_b8_1 = nullptr
            uint64_t rbx_2 = zx.q(zx.d(*rax_13) * *(rsi + 0x80))
            *(rsi + 0x10) = &rax_13[1]
            uint64_t r8_2 = zx.q(rax_13[1])
            *(rsi + 0x10) = &rax_13[2]
            int64_t rax_15 = *(rsi + 0x50)
            int64_t rbx_3 = rbx_2 + *(rsi + 0x70)
            result = *(*(r9_4 + rax_15 + 8) + (r8_2 << 3))
            void* r9_5 = result + ((sx.q(*(r9_4 + rax_15 + 0x14)) + sx.q(*(rsi + 0xa4))) << 2)
            void* var_c0_1 = r9_5
            
            if (j s>= 4)
                int64_t r8_3 = rbx_3
                
                do
                    int64_t rdx_7 = sx.q(*(r10_2 + rbp_3))
                    int64_t rcx_4 = rdx_7 - (rdx_7 u>> 1 & 0x5555555555555555)
                    int64_t rax_23 =
                        (rcx_4 u>> 2 & 0x3333333333333333) + (rcx_4 & 0x3333333333333333)
                    int128_t var_58
                    int128_t* rax_24 = &var_58
                    uint8_t rcx_11 = (((((rax_23 u>> 4) + rax_23) & 0xf0f0f0f0f0f0f0f)
                        * 0x101010101010101) u>> 0x38).b
                    int32_t k = 0
                    void* rcx_13 = &(&data_143f87850)[rdx_7] - &var_58
                    char* var_78_1 = rcx_13 + 0xe
                    char* var_70_1 = rcx_13 + 0xf
                    
                    do
                        char rcx_15 = *(&(&data_143f87850)[rdx_7] - &var_58 + rax_24)
                        
                        if (rcx_15 s>= 0)
                            int32_t rcx_17 = sx.d(rcx_15) & 0x8000000f
                            
                            if (rcx_17 s< 0)
                                rcx_17 = ((rcx_17 - 1) | 0xfffffff0) + 1
                            
                            rcx_15 = *(sx.q(rcx_17) + r8_3)
                        else
                            rcx_15 = 0
                        
                        *rax_24 = rcx_15
                        char rcx_21 = *(rcx_13 + 1 + rax_24)
                        
                        if (rcx_21 s>= 0)
                            int32_t rcx_23 = sx.d(rcx_21) & 0x8000000f
                            
                            if (rcx_23 s< 0)
                                rcx_23 = ((rcx_23 - 1) | 0xfffffff0) + 1
                            
                            rcx_21 = *(sx.q(rcx_23) + r8_3)
                        else
                            rcx_21 = 0
                        
                        *(rax_24 + 1) = rcx_21
                        char rcx_27 = *(rcx_13 + 2 + rax_24)
                        
                        if (rcx_27 s>= 0)
                            int32_t rcx_29 = sx.d(rcx_27) & 0x8000000f
                            
                            if (rcx_29 s< 0)
                                rcx_29 = ((rcx_29 - 1) | 0xfffffff0) + 1
                            
                            rcx_27 = *(sx.q(rcx_29) + r8_3)
                        else
                            rcx_27 = 0
                        
                        *(rax_24 + 2) = rcx_27
                        char rcx_33 = *(rcx_13 + 3 + rax_24)
                        
                        if (rcx_33 s>= 0)
                            int32_t rcx_35 = sx.d(rcx_33) & 0x8000000f
                            
                            if (rcx_35 s< 0)
                                rcx_35 = ((rcx_35 - 1) | 0xfffffff0) + 1
                            
                            rcx_33 = *(sx.q(rcx_35) + r8_3)
                        else
                            rcx_33 = 0
                        
                        *(rax_24 + 3) = rcx_33
                        char rcx_39 = *(rcx_13 + 4 + rax_24)
                        
                        if (rcx_39 s>= 0)
                            int32_t rcx_41 = sx.d(rcx_39) & 0x8000000f
                            
                            if (rcx_41 s< 0)
                                rcx_41 = ((rcx_41 - 1) | 0xfffffff0) + 1
                            
                            rcx_39 = *(sx.q(rcx_41) + r8_3)
                        else
                            rcx_39 = 0
                        
                        *(rax_24 + 4) = rcx_39
                        char rcx_45 = *(rax_24 + rcx_13 + 5)
                        
                        if (rcx_45 s>= 0)
                            int32_t rcx_47 = sx.d(rcx_45) & 0x8000000f
                            
                            if (rcx_47 s< 0)
                                rcx_47 = ((rcx_47 - 1) | 0xfffffff0) + 1
                            
                            rcx_45 = *(sx.q(rcx_47) + r8_3)
                        else
                            rcx_45 = 0
                        
                        *(rax_24 + 5) = rcx_45
                        char rcx_51 = *(rax_24 + rcx_13 + 6)
                        
                        if (rcx_51 s>= 0)
                            int32_t rcx_53 = sx.d(rcx_51) & 0x8000000f
                            
                            if (rcx_53 s< 0)
                                rcx_53 = ((rcx_53 - 1) | 0xfffffff0) + 1
                            
                            rcx_51 = *(sx.q(rcx_53) + r8_3)
                        else
                            rcx_51 = 0
                        
                        *(rax_24 + 6) = rcx_51
                        char rcx_57 = *(rcx_13 + 7 + rax_24)
                        
                        if (rcx_57 s>= 0)
                            int32_t rcx_59 = sx.d(rcx_57) & 0x8000000f
                            
                            if (rcx_59 s< 0)
                                rcx_59 = ((rcx_59 - 1) | 0xfffffff0) + 1
                            
                            rcx_57 = *(sx.q(rcx_59) + r8_3)
                        else
                            rcx_57 = 0
                        
                        *(rax_24 + 7) = rcx_57
                        char rcx_63 = *(rcx_13 + 8 + rax_24)
                        
                        if (rcx_63 s>= 0)
                            int32_t rcx_65 = sx.d(rcx_63) & 0x8000000f
                            
                            if (rcx_65 s< 0)
                                rcx_65 = ((rcx_65 - 1) | 0xfffffff0) + 1
                            
                            rcx_63 = *(sx.q(rcx_65) + r8_3)
                        else
                            rcx_63 = 0
                        
                        *(rax_24 + 8) = rcx_63
                        char rcx_69 = *(rcx_13 + 9 + rax_24)
                        
                        if (rcx_69 s>= 0)
                            int32_t rcx_71 = sx.d(rcx_69) & 0x8000000f
                            
                            if (rcx_71 s< 0)
                                rcx_71 = ((rcx_71 - 1) | 0xfffffff0) + 1
                            
                            rcx_69 = *(sx.q(rcx_71) + r8_3)
                        else
                            rcx_69 = 0
                        
                        *(rax_24 + 9) = rcx_69
                        char rcx_75 = *(rcx_13 + 0xa + rax_24)
                        
                        if (rcx_75 s>= 0)
                            int32_t rcx_77 = sx.d(rcx_75) & 0x8000000f
                            
                            if (rcx_77 s< 0)
                                rcx_77 = ((rcx_77 - 1) | 0xfffffff0) + 1
                            
                            rcx_75 = *(sx.q(rcx_77) + r8_3)
                        else
                            rcx_75 = 0
                        
                        *(rax_24 + 0xa) = rcx_75
                        char rcx_82 = *(rcx_13 + 0xb + rax_24)
                        
                        if (rcx_82 s>= 0)
                            int32_t rcx_84 = sx.d(rcx_82) & 0x8000000f
                            
                            if (rcx_84 s< 0)
                                rcx_84 = ((rcx_84 - 1) | 0xfffffff0) + 1
                            
                            rcx_82 = *(sx.q(rcx_84) + r8_3)
                        else
                            rcx_82 = 0
                        
                        *(rax_24 + 0xb) = rcx_82
                        char rcx_89 = *(rcx_13 + 0xc + rax_24)
                        
                        if (rcx_89 s>= 0)
                            int32_t rcx_91 = sx.d(rcx_89) & 0x8000000f
                            
                            if (rcx_91 s< 0)
                                rcx_91 = ((rcx_91 - 1) | 0xfffffff0) + 1
                            
                            rcx_89 = *(sx.q(rcx_91) + r8_3)
                        else
                            rcx_89 = 0
                        
                        *(rax_24 + 0xc) = rcx_89
                        char rcx_96 = *(rcx_13 + 0xd + rax_24)
                        
                        if (rcx_96 s>= 0)
                            int32_t rcx_98 = sx.d(rcx_96) & 0x8000000f
                            
                            if (rcx_98 s< 0)
                                rcx_98 = ((rcx_98 - 1) | 0xfffffff0) + 1
                            
                            rcx_96 = *(sx.q(rcx_98) + r8_3)
                        else
                            rcx_96 = 0
                        
                        *(rax_24 + 0xd) = rcx_96
                        char rcx_103 = *(var_78_1 + rax_24)
                        
                        if (rcx_103 s>= 0)
                            int32_t rcx_105 = sx.d(rcx_103) & 0x8000000f
                            
                            if (rcx_105 s< 0)
                                rcx_105 = ((rcx_105 - 1) | 0xfffffff0) + 1
                            
                            rcx_103 = *(sx.q(rcx_105) + r8_3)
                        else
                            rcx_103 = 0
                        
                        *(rax_24 + 0xe) = rcx_103
                        char rcx_110 = *(var_70_1 + rax_24)
                        
                        if (rcx_110 s>= 0)
                            int32_t rcx_112 = sx.d(rcx_110) & 0x8000000f
                            
                            if (rcx_112 s< 0)
                                rcx_112 = ((rcx_112 - 1) | 0xfffffff0) + 1
                            
                            rcx_110 = *(sx.q(rcx_112) + r8_3)
                        else
                            rcx_110 = 0
                        
                        *(rax_24 + 0xf) = rcx_110
                        k += 0x10
                        rax_24 = &rax_24[1]
                    while (k u< 0x10)
                    
                    r8_3 += 0x10
                    r10_2 = var_b8_1 + 1
                    rbp_3 = var_b0_1
                    *var_c0_1 = var_58
                    var_b8_1 = r10_2
                    r9_5 = var_c0_1 + (sx.q(rcx_11) << 2)
                    result = zx.q(sx.d(rcx_11))
                    j = j_1 - result.d
                    var_c0_1 = r9_5
                    j_1 = j
                while (j s>= 4)
                
                rsi = arg1
                i_5 = i_6
            
            if (j != 0)
                void* r8_4 = r10_2 + rbp_3
                int128_t* r10_6 = (r10_2 << 4) + rbx_3
                
                do
                    int64_t rdx_9 = sx.q(*r8_4)
                    int64_t rcx_118 = rdx_9 - (rdx_9 u>> 1 & 0x5555555555555555)
                    result = (rcx_118 u>> 2 & 0x3333333333333333) + (rcx_118 & 0x3333333333333333)
                    uint8_t rcx_125 = (((((result u>> 4) + result) & 0xf0f0f0f0f0f0f0f)
                        * 0x101010101010101) u>> 0x38).b
                    
                    if (rcx_125 != 0)
                        char rdx_10 = rdx_9.b
                        int64_t var_48_1
                        var_48_1.o = *r10_6
                        
                        if ((rdx_10 & 1) != 0)
                            *r9_5 = var_48_1.d
                            r9_5 += 4
                        
                        if ((rdx_10 & 2) != 0)
                            *r9_5 = var_48_1:4.d
                            r9_5 += 4
                        
                        if ((rdx_10 & 4) != 0)
                            int32_t var_40
                            *r9_5 = var_40
                            r9_5 += 4
                        
                        if ((rdx_10 & 8) != 0)
                            int32_t var_3c
                            *r9_5 = var_3c
                            r9_5 += 4
                        
                        result = zx.q(sx.d(rcx_125))
                        j -= result.d
                    
                    r8_4 += 1
                    r10_6 = &r10_6[1]
                while (j != 0)
                
                rsi = arg1
            
            r9_4 = var_60_1
            i = i_5
            i_5 -= 1
            i_6 = i_5
        while (i != 1)
else
    *(arg1 + 0x10) = &rax_2[2]
    int16_t i_7 = rax_2[2]
    result = &rax_2[3]
    *(rsi + 0x10) = result
    
    if (0 u< i_7)
        if (*(rsi + 0xa8) != 0)
            int64_t rdi_1 = zx.q(r8) * 0x70
            uint64_t i_4 = zx.q(i_7)
            uint64_t i_1
            
            do
                int16_t* rax_6 = *(rsi + 0x10)
                int64_t r9_1 = *(rsi + 0x50)
                int32_t count = *(rsi + 0xa8) << 2
                uint64_t rdx_2 = zx.q(zx.d(*rax_6) * *(rsi + 0x80))
                *(rsi + 0x10) = &rax_6[1]
                uint64_t r10_1 = zx.q(rax_6[1])
                *(rsi + 0x10) = &rax_6[2]
                result = memcpy(
                    *(*(r9_1 + rdi_1 + 8) + (r10_1 << 3))
                        + ((sx.q(*(r9_1 + rdi_1 + 0x14)) + sx.q(*(rsi + 0xa4))) << 2), 
                    rdx_2 + *(rsi + 0x70), count)
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        else
            uint64_t i_3 = zx.q(i_7)
            uint64_t i_2
            
            do
                result += 4
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            *(rsi + 0x10) = result

__security_check_cookie(rax_1 ^ &var_e8)
return result
