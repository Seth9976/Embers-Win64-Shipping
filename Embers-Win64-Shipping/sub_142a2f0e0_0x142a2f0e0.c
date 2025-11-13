// 函数: sub_142a2f0e0
// 地址: 0x142a2f0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char rax_2 = sub_142a20ce0(arg1 + 0x36a0, zx.d(*(arg1 + 0x3824)))
arg3[2] = rax_2
int32_t result

if (rax_2 == 0)
    *(arg3 + 4) = 0
    char rax_49 = sub_142a2fae0(arg1 + 0x36a0, arg1 + 0x308b)
    *arg3 = rax_49
    
    if (rax_49 == 4)
        arg3[3] = 1
        void* rsi_3 = arg2 + 0xc
        int64_t i_1 = 0x10
        int64_t i
        
        do
            *rsi_3 = sub_142a2edc0(arg1 + 0x36a0, arg1 + 0x3082)
            rsi_3 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = sub_142a2fa10(arg1 + 0x36a0, arg1 + 0x308f)
    arg3[1] = result.b
else
    int32_t var_68
    int32_t* var_90_1 = &var_68
    void* var_58
    int64_t* r15_1 = &var_58
    int64_t rcx_1 = sx.q(*(arg1 + 0xf08)) * 0x4c
    arg3[0xa] = 0
    char* rax_5 = arg2 - rcx_1
    
    if (sub_142a20ce0(arg1 + 0x36a0, zx.d(*(arg1 + 0x3825))) != 0)
        arg3[2] = sub_142a20ce0(arg1 + 0x36a0, zx.d(*(arg1 + 0x3826))) + 2
    
    int32_t rsi_1 = 0
    int64_t var_64 = 0
    int32_t r13_1 = 0
    var_68 = 0
    int32_t var_4c_1 = 0
    int32_t r12_2 = 0
    char rdx_3 = rax_5[2]
    int32_t var_98_1 = 0
    int32_t var_50_1 = 0
    var_58 = nullptr
    
    if (rdx_3 != 0)
        int32_t rcx_4 = *(rax_5 + 4)
        
        if (rcx_4 != 0)
            var_90_1 = &var_64
            r13_1 = rcx_4
            var_64.d = rcx_4
            
            if (*(arg1 + (zx.q(rdx_3) << 2) + 0x2c04) != *(arg1 + (zx.q(arg3[2]) << 2) + 0x2c04))
                var_64.w = neg.w(var_64.w)
                var_64:2.w = neg.w(var_64:2.w)
                r13_1 = var_64.d
            
            r15_1 = &var_58:4
        
        *r15_1 += 2
        r12_2 = var_58.d
        var_98_1 = var_50_1
    
    char rcx_6 = *(arg2 - 0x4a)
    int32_t* r9_1
    
    if (rcx_6 == 0)
        r9_1 = var_90_1
    else
        int32_t rax_11 = *(arg2 - 0x48)
        
        if (rax_11 == 0)
            r12_2 += 2
            var_58.d = r12_2
            r9_1 = var_90_1
        else
            if (*(arg1 + (zx.q(rcx_6) << 2) + 0x2c04) != *(arg1 + (zx.q(arg3[2]) << 2) + 0x2c04))
                int32_t var_98_2
                var_98_2.w = neg.w(rax_11.w)
                var_98_2:2.w = neg.w(var_98_2:2.w)
                rax_11 = var_98_2
            
            r9_1 = var_90_1
            
            if (rax_11 != *r9_1)
                r9_1 = &r9_1[1]
                var_90_1 = r9_1
                r15_1 += 4
                *r9_1 = rax_11
                r13_1 = var_64.d
            
            *r15_1 += 2
            r12_2 = var_58.d
            var_98_1 = var_50_1
    
    char rcx_8 = rax_5[-0x4a]
    int32_t r15_2
    
    if (rcx_8 == 0)
        r15_2 = var_98_1
    else
        int32_t rax_13 = *(rax_5 - 0x48)
        
        if (rax_13 == 0)
            r12_2 += 1
            r15_2 = var_98_1
        else
            if (*(arg1 + (zx.q(rcx_8) << 2) + 0x2c04) != *(arg1 + (zx.q(arg3[2]) << 2) + 0x2c04))
                int32_t var_98_3
                var_98_3.w = neg.w(rax_13.w)
                var_98_3:2.w = neg.w(var_98_3:2.w)
                rax_13 = var_98_3
            
            if (rax_13 != *r9_1)
                var_90_1 = &r9_1[1]
                r15_1 += 4
                r9_1[1] = rax_13
                r13_1 = var_64.d
            
            *r15_1 += 1
            r15_2 = var_50_1
            r12_2 = var_58.d
    
    result = sub_142a20ce0(arg1 + 0x36a0, *(&data_14360ab30 + sx.q(r12_2) * 0x10))
    
    if (result == 0)
        *arg3 = 7
        *(arg3 + 4) = 0
    else
        int32_t rcx_11
        rcx_11.b = *var_90_1 == r13_1
        int32_t rax_17
        rax_17.b = var_4c_1 s> 0
        int32_t rcx_13 = (rcx_11 & rax_17) + var_58:4.d
        int32_t var_98_4 = rcx_13
        int32_t rdx_8 = rcx_13
        
        if (r15_2 s> rcx_13)
            rdx_8 = r15_2
            int32_t rax_18 = r13_1
            r15_2 = rcx_13
            var_98_4 = rdx_8
            int32_t rcx_14 = var_64:4.d
            r13_1 = rcx_14
            var_64.d = rcx_14
            var_64:4.d = rax_18
        
        if (sub_142a20ce0(arg1 + 0x36a0, *(sx.q(rdx_8) * 0x10 + 0x14360ab34)) == 0)
            *arg3 = 5
            *(arg3 + 4) = r13_1
        label_142a2f54b:
            int32_t rdx_19 = sx.d(*(arg3 + 6))
            
            if (rdx_19 s< *(arg1 + 0xf84) - 0x80)
                *(arg3 + 6) = *(arg1 + 0xf84) - 0x80
            else if (rdx_19 s> *(arg1 + 0xf88) + 0x80)
                *(arg3 + 6) = *(arg1 + 0xf88) + 0x80
            
            int32_t rdx_20 = sx.d(*(arg3 + 4))
            
            if (rdx_20 s>= *(arg1 + 0xf8c) - 0x80)
                result = *(arg1 + 0xf90) + 0x80
                
                if (rdx_20 s> result)
                    result.w = *(arg1 + 0xf90) + 0x80
                    *(arg3 + 4) = result.w
            else
                result.w = *(arg1 + 0xf8c) - 0x80
                *(arg3 + 4) = result.w
        else
            if (sub_142a20ce0(arg1 + 0x36a0, *(sx.q(r15_2) * 0x10 + 0x14360ab38)) == 0)
                *(arg3 + 4) = var_64:4.d
                *arg3 = 6
                goto label_142a2f54b
            
            int32_t r13_3 = *(arg1 + 0xf8c) - 0x80
            int32_t r15_4 = *(arg1 + 0xf90) + 0x80
            int32_t rdx_12 = *(arg1 + 0xf88) + 0x80
            int32_t r8_3 = *(arg1 + 0xf84) - 0x80
            var_58 = arg1 + 0x34b5
            var_90_1.d = rdx_12
            int64_t rax_26
            rax_26.b = var_98_4 s>= r12_2
            int64_t r9_3 = rax_26 << 2
            int32_t rax_27 = sx.d(*(&var_68:2 + r9_3))
            var_98_4.q = r9_3
            
            if (rax_27 s< r8_3)
                *(&var_68:2 + r9_3) = *(arg1 + 0xf84) - 0x80
            else if (rax_27 s> rdx_12)
                *(&var_68:2 + r9_3) = *(arg1 + 0xf88) + 0x80
            
            int32_t rax_29 = sx.d((&var_68)[rax_26].w)
            
            if (rax_29 s< r13_3)
                (&var_68)[rax_26].w = *(arg1 + 0xf8c) - 0x80
            else if (rax_29 s> r15_4)
                (&var_68)[rax_26].w = *(arg1 + 0xf90) + 0x80
            
            int32_t rax_31 = 0
            int32_t rcx_17
            rcx_17.b = rax_5[-0x4c] == 9
            
            if (*(arg2 - 0x4c) == 9)
                rax_31 = 2
            
            if (*rax_5 == 9)
                rsi_1 = 2
            
            int32_t rax_35 =
                sub_142a20ce0(arg1 + 0x36a0, *(zx.q(rax_31 + rcx_17 + rsi_1) * 0x10 + 0x14360ab3c))
            void* rsi_2 = var_58
            
            if (rax_35 == 0)
                *(arg3 + 4) = sub_142a2f650(arg1 + 0x36a0, rsi_2) * 2
                int64_t rcx_23 = var_98_4.q
                *(arg3 + 6) = sub_142a2f650(arg1 + 0x36a0, rsi_2 + 0x13) * 2
                *(arg3 + 4) += *(&var_68 + rcx_23)
                *(arg3 + 6) += *(&var_68:2 + rcx_23)
                result = sx.d(*(arg3 + 6))
                bool cond:2_1 = result s< r8_3
                int32_t rcx_24 = sx.d(*(arg3 + 4))
                *arg3 = 8
                result.b = result s> var_90_1.d
                bool rdx_18 = cond:2_1 | result.b
                result.b = rcx_24 s> r15_4
                rdx_18 |= result.b
                result.b = rcx_24 s< r13_3
                arg3[0xa] = rdx_18 | result.b
            else
                sub_142a2e600(arg1 + 0x36a0, arg2, arg2 - 0x4c, rax_5, arg3, 
                    *(&var_68 + var_98_4.q), rsi_2, r8_3, var_90_1.d, r13_3, r15_4)
                result = *(arg2 + 0x48)
                *(arg3 + 4) = result
                *arg3 = 9
                arg3[3] = 1

__security_check_cookie(rax_1 ^ &var_f8)
return result
