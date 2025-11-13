// 函数: sub_142b39410
// 地址: 0x142b39410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t rax_2 = *arg4
void var_d8
void* r15 = &var_d8
void var_a8
void* r14 = &var_a8
char rax_3 = arg2[2].b
int32_t* result = arg1
char rcx = arg3[2].b
char rsi = (rax_3 ^ rcx) & 0x80
char r10 = rax_3 | rcx
void* var_e8 = nullptr
void* var_f0 = nullptr
int32_t* r11 = arg2
uint32_t var_110 = 0
int32_t var_118 = 0
char var_158 = rsi
int32_t var_150

if ((r10 & 0x70) == 0)
    if (*(arg3 + 9) != 0 || *arg3 != 1 || (rcx & 0x70) != 0)
        void* rdi_1 = r11 + 9
        
        if (*(r11 + 9) != 0 || *r11 != 1 || (rax_3 & 0x70) != 0)
            int32_t rcx_7 = arg3[1]
            int32_t r8_5 = *r11 - *arg3 - rcx_7
            int32_t rdx_5 = r11[1]
            int32_t r8_6 = r8_5 + rdx_5
            char r9_2 = arg5
            int32_t var_154_1 = r8_6
            
            if (r8_5 + rdx_5 s>= 0 || r9_2 == 0x80)
            label_142b39746:
                uint32_t rbp_1 = rax_2 + 1
                
                if (rbp_1 s<= 0x31)
                    rbp_1 = zx.d(*(sx.q(rbp_1) + &data_14366c490))
                
                if (rbp_1 u<= 0x2f)
                    goto label_142b39798
                
                void* rax_11 = sub_142a7dd00(sx.q(rbp_1))
                var_e8 = rax_11
                
                if (rax_11 != 0)
                    r11 = arg2
                    r9_2 = arg5
                    r15 = rax_11
                label_142b39798:
                    uint32_t rcx_12 = rax_2 - 1 + *arg3
                    
                    if (*r11 s> rcx_12)
                        rcx_12 = *r11
                    
                    if (rcx_12 s<= 0x31)
                        rcx_12 = zx.d(*(sx.q(rcx_12) + &data_14366c490))
                    
                    int32_t rsi_2 = rcx_12 + 3
                    
                    if (r9_2 s< 0)
                        rsi_2 = rcx_12 + 2
                    
                    if (rsi_2 + 1 u<= 0x49)
                        goto label_142b397ec
                    
                    void* rax_15 = sub_142a7dd00(sx.q(rsi_2 + 1))
                    var_f0 = rax_15
                    
                    if (rax_15 != 0)
                        r11 = arg2
                        r14 = rax_15
                    label_142b397ec:
                        int64_t rax_16 = sx.q(*r11)
                        void* i_5 = sx.q(rsi_2) - 1 + r14
                        
                        if (rax_16.d s<= 0x31)
                            rax_16 = zx.q(*(rax_16 + &data_14366c490))
                        
                        void* rdx_9 = &r11[2] + sx.q(rax_16.d)
                        void* i = i_5
                        
                        while (rdx_9 u>= rdi_1)
                            char rax_18 = *rdx_9
                            rdx_9 -= 1
                            *i = rax_18
                            i -= 1
                        
                        for (; i u>= r14; i -= 1)
                            *i = 0
                        
                        int32_t r11_1 = rsi_2
                        var_150 = rsi_2
                        int64_t rcx_14 = sx.q(*arg3)
                        int32_t var_144_1 = rcx_14.d
                        
                        if (rcx_14.d s<= 0x31)
                            rcx_14 = zx.q(*(rcx_14 + &data_14366c490))
                            var_144_1 = rcx_14.d
                        
                        void* r10_2 = arg3 + 9
                        void* r8_10 = r10_2 - 1 + sx.q(rcx_14.d)
                        void* var_100_1 = r8_10
                        uint64_t r9_5 = zx.q(*r8_10)
                        int32_t var_14c_1 = r9_5.d
                        uint32_t rdx_11 = (r9_5 * 5).d * 2
                        uint32_t var_138_1 = rdx_11
                        
                        if (rcx_14.d s> 1)
                            uint32_t rdx_12 = rdx_11 + zx.d(*(r8_10 - 1))
                            var_138_1 = rdx_12
                            
                            if (rcx_14.d s> 2)
                                var_138_1 = rdx_12 + 1
                        
                        uint64_t i_4 = zx.q(*i_5)
                        int32_t rdx_14 = var_154_1
                        void* const rax_21 = &data_14366c46c
                        
                        if (i_4.d u>= 0xa)
                            do
                                rdx_14 -= 1
                                rax_21 += 4
                            while (i_4.d u>= *rax_21)
                            
                            var_154_1 = rdx_14
                        
                        int32_t* rax_22 = &data_14366c46c
                        
                        if (r9_5.d u>= 0xa)
                            do
                                rdx_14 += 1
                                rax_22 = &rax_22[1]
                            while (r9_5.d u>= *rax_22)
                            
                            var_154_1 = rdx_14
                        
                        int32_t r9_6
                        
                        if (arg5 s< 0)
                            r9_6 = var_14c_1
                            var_118 = arg2[1] - arg3[1]
                            
                            if (i_4.b u< r9_6.b)
                                r11_1 -= 1
                                var_150 = r11_1
                                var_154_1 = rdx_14 - 1
                        else
                            int64_t rax_25 = sx.q(*arg2)
                            
                            if (rax_25.d s<= 0x31)
                                rax_25 = zx.q(*(rax_25 + &data_14366c490))
                            
                            int32_t i_11
                            
                            if (rdx_14 s>= 0)
                                i_11 = 1
                            else
                                i_11 = neg.d(rdx_14)
                            
                            sub_142b3ae30(r14, rsi_2, i_11)
                            var_154_1 += i_11
                            var_110 = rsi_2 - rax_25.d - i_11
                            void* i_7 = i_5
                            
                            if (i_11 s>= 1)
                                i_4 = zx.q(i_11)
                                uint64_t i_1
                                
                                do
                                    *i_7 = 0
                                    i_7 -= 1
                                    i_1 = i_4
                                    i_4 -= 1
                                while (i_1 != 1)
                            
                            r9_6 = var_14c_1
                            r11_1 = rsi_2
                            r8_10 = var_100_1
                            r10_2 = arg3 + 9
                        
                        uint32_t i_6 = 0
                        int32_t var_114_1 = 0
                        void* var_140_1 = r15 - 1 + sx.q(rbp_1)
                        int32_t rdx_23
                        int32_t rbp_2
                        void* rdi_5
                        void* r8_19
                        
                        while (true)
                            rdi_5.b = 0
                            
                            while (true)
                                if (*i_5 == 0)
                                    while (i_5 u> r14)
                                        i_5 -= 1
                                        rsi_2 -= 1
                                        
                                        if (*i_5 != 0)
                                            break
                                
                                if (rsi_2 s< r11_1)
                                    break
                                
                                uint32_t r9_7
                                
                                if (rsi_2 != r11_1)
                                    int32_t r8_13 = zx.d(*(i_5 - 1)) + ((zx.q(*i_5) * 5).d << 1)
                                    r9_7 = divu.dp.d(0:r8_13, r9_6 + 1)
                                    
                                    if (var_144_1 s<= 1)
                                        r9_7 = divu.dp.d(0:r8_13, r9_6)
                                else
                                    void* i_8 = i_5
                                    
                                    while (true)
                                        i_4.b = 0
                                        void* rdx_16 = i_8 + r8_10 - i_5
                                        
                                        if (rdx_16 u>= r10_2)
                                            i_4 = zx.q(*rdx_16)
                                        
                                        if (*i_8 != i_4.b)
                                            break
                                        
                                        if (i_8 == r14)
                                            break
                                        
                                        i_8 -= 1
                                    
                                    char rdx_18 = *i_8
                                    
                                    if (rdx_18 u< i_4.b)
                                        break
                                    
                                    if (rdx_18 == i_4.b)
                                        rdi_5.b += 1
                                        *r14 = 0
                                        rsi_2 = 1
                                        break
                                    
                                    r9_7 = divu.dp.d(
                                        0:(zx.d(*(i_5 - 1)) + ((zx.q(*i_5) * 5).d << 1)), var_138_1)
                                
                                if (r9_7 == 0)
                                    r9_7 = 1
                                
                                int32_t r8_16 = neg.d(var_144_1) + r11_1
                                rdi_5.b += r9_7.b
                                char* rcx_20 = sx.q(r8_16) + r14
                                sub_142b3b1a0(rcx_20, rsi_2 - r8_16, r10_2, var_144_1, 0, rcx_20, 
                                    neg.d(r9_7))
                                r10_2 = arg3 + 9
                                r11_1 = var_150
                                r8_10 = var_100_1
                                r9_6 = var_14c_1
                            
                            rbp_2 = var_114_1
                            
                            if (rbp_2 != 0 || rdi_5.b != 0)
                                i_6 += 1
                                *var_140_1 = rdi_5.b
                                
                                if (rbp_2 == 0)
                                    uint32_t i_2 = zx.d(rdi_5.b)
                                    int32_t* rax_41 = &data_14366c46c
                                    
                                    if (i_2 u>= 0xa)
                                        do
                                            i_6 += 1
                                            rax_41 = &rax_41[1]
                                        while (i_2 u>= *rax_41)
                                
                                rdi_5 = zx.q(rax_2)
                                rbp_2 += 1
                                r8_19 = var_140_1 - 1
                                var_114_1 = rbp_2
                                var_140_1 = r8_19
                                
                                if (i_6 s> rdi_5.d)
                                    rdx_23 = var_154_1
                                    i_4 = zx.q(arg5)
                                    break
                            else
                                r8_19 = var_140_1
                                rdi_5 = zx.q(rax_2)
                            
                            i_4 = zx.q(arg5)
                            rdx_23 = var_154_1
                            
                            if (*r14 == 0 && rsi_2 == 1)
                                if ((i_4.b & 0x50) != 0)
                                    break
                                
                                if (i_4.b s< 0 && rdx_23 s<= var_118)
                                    break
                            
                            if (rdx_23 == 0 && i_4.b s>= 0)
                                break
                            
                            r8_10 = var_100_1
                            r11_1 -= 1
                            r9_6 = var_14c_1
                            var_154_1 = rdx_23 - 1
                            var_150 = r11_1
                        
                        if (rbp_2 != 0)
                            r8_19 += 1
                            var_140_1 = r8_19
                        else
                            i_6 = 1
                            *r8_19 = rbp_2.b
                        
                        result = arg1
                        var_150 = 0
                        
                        if (i_4.b s< 0)
                            if (*r14 != 0 || rsi_2 s> 1)
                                var_150 = 1
                            
                            goto label_142b39e9a
                        
                        if (i_6 + rdx_23 s<= rdi_5.d)
                            if ((i_4.b & 0x50) == 0)
                                goto label_142b39e9a
                            
                            char r8_20 = arg2[2].b
                            var_158 = r8_20
                            
                            if (*r14 != 0 || rsi_2 != 1)
                                void* rdi_6 = var_140_1
                                uint32_t i_3 = i_6
                                uint32_t r8_24 = arg3[1] - arg2[1] + rdx_23 + var_110
                                char r15_2 = *rdi_6 & 1
                                
                                if (var_110 s< r8_24)
                                    r8_24 = var_110
                                
                                uint32_t i_9 = sub_142b3ae30(r14, rsi_2, r8_24)
                                i_6 = i_9
                                r8_19 = r14
                                void* rcx_24 = sx.q(i_9 - 1) + r14
                                
                                if (rcx_24 u>= r14)
                                    while (*rcx_24 == 0)
                                        if (i_6 == 1)
                                            break
                                        
                                        i_6 -= 1
                                        rcx_24 -= 1
                                        
                                        if (rcx_24 u< r14)
                                            break
                                
                                uint32_t i_10
                                
                                if (i_6 s> 0x31)
                                    i_10 = i_6
                                else
                                    i_10 = zx.d(*(sx.q(i_6) + &data_14366c490))
                                
                                int32_t rcx_25 = arg2[1]
                                int32_t rax_50 = arg3[1]
                                
                                if (rax_50 s< rcx_25)
                                    rcx_25 = rax_50
                                
                                var_154_1 = rcx_25
                                
                                if ((arg5 & 0x10) == 0)
                                    goto label_142b39e9a
                                
                                int64_t rsi_3 =
                                    sx.q(sub_142b3b1a0(r14, i_10, r8_19, i_10, 0, r14, 1))
                                int64_t r9_12 = sx.q(*arg3)
                                
                                if (r9_12.d s<= 0x31)
                                    r9_12 = zx.q(*(r9_12 + &data_14366c490))
                                
                                int32_t rax_54 = sub_142b3b450(r14, rsi_3.d, arg3 + 9, r9_12.d, 
                                    arg3[1] - var_154_1)
                                
                                if (rax_54 != 0x80000000)
                                    void* r8_26 = r14 + rsi_3
                                    void* rdx_28 = r14
                                    
                                    if (r14 u< r8_26)
                                        do
                                            uint8_t rcx_29 = *rdx_28
                                            *rdx_28 = rcx_29 u>> 1
                                            
                                            if ((rcx_29 & 1) != 0)
                                                *(rdx_28 - 1) += 5
                                            
                                            rdx_28 += 1
                                        while (rdx_28 u< r8_26)
                                    
                                    char rcx_37
                                    
                                    if (rax_54 s> 0 || (rax_54 == 0 && r15_2 != 0))
                                        if (i_3 != rax_2)
                                        label_142b39e20:
                                            int32_t* rax_58 = arg3
                                            int64_t r9_14 = sx.q(*rax_58)
                                            
                                            if (r9_14.d s<= 0x31)
                                                r9_14 = zx.q(*(r9_14 + &data_14366c490))
                                            
                                            i_6 = neg.d(sub_142b3b1a0(r14, i_10, arg3 + 9, r9_14.d, 
                                                rax_58[1] - var_154_1, r14, 0xffffffff))
                                            void* rcx_36 = sx.q(i_6 - 1) + r14
                                            
                                            if (rcx_36 u>= r14)
                                                while (*rcx_36 == 0)
                                                    if (i_6 == 1)
                                                        break
                                                    
                                                    i_6 -= 1
                                                    rcx_36 -= 1
                                                    
                                                    if (rcx_36 u< r14)
                                                        break
                                            
                                            r8_19 = r14
                                            rcx_37 = var_158 ^ 0x80
                                            goto label_142b39eb9
                                        
                                        while (i_3 s> 1)
                                            if (*rdi_6 != 9)
                                                goto label_142b39e20
                                            
                                            i_3 -= 1
                                            rdi_6 += 1
                                        
                                        if (zx.d(*rdi_6)
                                                != *((sx.q(i_3) << 2) + &data_14366c468) - 1)
                                            goto label_142b39e20
                                        
                                        *arg6 |= 4
                                    else
                                        r8_19 = r14
                                    label_142b39e9a:
                                        rcx_37 = var_158
                                    label_142b39eb9:
                                        result[1] = var_154_1
                                        result[2].b = rcx_37 & 0x80
                                        sub_142b3a960(result, arg4, r8_19, i_6, &var_150, arg6)
                                        sub_142b39f50(result, arg4, &var_150, arg6)
                                else
                                    *arg6 |= 0x10
                            else
                                int32_t rcx_21 = arg2[1]
                                
                                if (arg3[1] s< rcx_21)
                                    rcx_21 = arg3[1]
                                
                                *result = 1
                                *(result + 9) = 0
                                result[1] = rcx_21
                                result[2].b = r8_20 & 0x80
                                sub_142b39f50(result, arg4, &var_150, arg6)
                        else
                            *arg6 |= 4
                        
                        if (var_f0 != 0)
                            sub_142a7dcd0(var_f0)
                    else
                        *arg6 |= 0x10
                    
                    if (var_e8 != 0)
                        sub_142a7dcd0(var_e8)
                else
                    *arg6 |= 0x10
            else if ((r9_2 & 0x20) == 0)
                if (rdx_5 s> rcx_7 || ((r9_2 & 0x40) == 0 && r8_6 s>= 0xffffffff))
                    goto label_142b39746
                
                result[2].b = rax_3
                result[1] = r11[1]
                int32_t r9_3 = *r11
                uint64_t var_178_3 = &var_150
                var_150 = 0
                sub_142b3a960(result, arg4, rdi_1, r9_3, var_178_3, arg6)
                sub_142b39f50(result, arg4, &var_150, arg6)
            else
                *result = 1
                *(result + 9) = 0
                result[2].b = rsi
        else if (arg5 s< 0)
            int32_t rbx_1 = r11[1]
            var_150 = 0
            int32_t rbx_2 = rbx_1 - arg3[1]
            sub_142b3b5e0(result, r11)
            result[2].b = rsi
            result[1] = rbx_2
            sub_142b39f50(result, arg4, &var_150, arg6)
        else if ((arg5 & 0x20) == 0)
            int32_t rbx_3 = arg3[1]
            sub_142b3b5e0(result, r11)
            
            if (rbx_3 s< result[1])
                result[1] = rbx_3
        else
            *result = 1
            *(result + 9) = 0
            result[2].b = rsi
    else if (*(r11 + 9) != 0 || *r11 != 1 || (rax_3 & 0x70) != 0)
        result[2].w = 0
        *result = 1
        
        if ((arg5 & 0x50) != 0)
            *arg6 |= 0x80
        else
            *arg6 |= 2
            result[2].b = rsi | 0x40
    else
        result[2].w = 0
        *result = 1
        *arg6 |= 8
else if ((r10 & 0x30) != 0)
    sub_142b3a860(result, arg2, arg3, arg4, arg6)
else if ((rax_3 & 0x40) == 0)
    var_150 = 0
    
    if ((arg5 & 0x50) == 0)
        *result = 1
        *(result + 9) = 0
        result[2].b = rsi
        
        if (arg5 s< 0)
            result[1] = arg4[2] - *arg4 + 1
            *arg6 |= 0x400
    else
        result[2].b = rax_3
        result[1] = arg2[1]
        sub_142b3a960(result, arg4, arg2 + 9, *arg2, &var_150, arg6)
    
    sub_142b39f50(result, arg4, &var_150, arg6)
else if ((rcx & 0x40) != 0 || (arg5 & 0x50) != 0)
    *arg6 |= 0x80
else
    *result = 1
    *(result + 9) = 0
    result[2].b = rsi | 0x40
__security_check_cookie(rax_1 ^ &var_198)
return result
