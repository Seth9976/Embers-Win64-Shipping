// 函数: sub_142b03070
// 地址: 0x142b03070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* r13 = *(arg1 + 8)
uint64_t r12 = arg2
uint64_t result = *(arg1 + 0x30)
void* result_12 = arg1
void* result_9 = *(arg1 + 0x20)
int64_t r8 = *(arg1 + 0x18)
int16_t* result_7 = *(arg1 + 0x10)
uint64_t result_1 = result
void* r10 = *(r13 + 0x10)
uint32_t rbx = *(r13 + 0x54)
int64_t rdx = *(arg1 + 0x28)
void* result_11 = arg1
int32_t* rsi = r10 + 0x62
int32_t* var_58 = rsi
void* var_60 = r13
uint32_t r11 = 0
void* result_10 = result_9
int32_t r14 = 0
int64_t var_78 = rdx
int64_t var_90 = r8
uint32_t var_b0 = 0
void* var_a0 = r10
int32_t var_b4 = 0

if (rbx != 0 && result_9 u< rdx)
    goto label_142b0313c

while (true)
    if (result_7 u< r8)
        if (result_9 u>= rdx)
            *r12 = 0xf
            goto label_142b0371e
        
        rbx = zx.d(*result_7)
        result_7 = &result_7[1]
        int16_t* result_8 = result_7
        result = zx.q(rbx) & 0xfffff800
        
        if (result.d != 0xd800)
            goto label_142b03173
        
        if (test_bit(rbx, 0xa))
            *r12 = 0xc
            *(r13 + 0x54) = rbx
        else
        label_142b0313c:
            
            if (result_7 u>= r8)
                *(r13 + 0x54) = rbx
            else
                uint32_t rcx = zx.d(*result_7)
                result = zx.q(rcx) & 0xfffffc00
                
                if (result.d != 0xdc00)
                    *r12 = 0xc
                    *(r13 + 0x54) = rbx
                else
                    result_7 = &result_7[1]
                    rbx = ((rbx - 0xd7f7) << 0xa) + rcx
                    result_8 = result_7
                    *(r13 + 0x54) = 0
                label_142b03173:
                    char result_2
                    int32_t r8_1
                    
                    if (rbx s> 0x7f)
                        char var_b8
                        
                        if (r14 == 0)
                            char rax_4 = *(rsi + 1)
                            char rcx_2 = rax_4
                            result = zx.q(*(r10 + 0x6c))
                            
                            if (rax_4 == 0)
                                rcx_2 = 1
                            
                            var_b8 = rcx_2
                            char var_b7
                            
                            if (result.d == 0)
                                result = 1
                                r14 = 2
                                
                                if (rcx_2 == 1)
                                    result = 0x21
                                
                                var_b4 = 2
                                var_b7 = result.b
                            else if (result.d != 1)
                                var_b8.w = 0x121
                            else
                                int32_t rcx_3 = sx.d(rcx_2)
                                
                                if (rcx_3 == 1)
                                    r14 = 3
                                    var_b7.w = 0x221
                                    var_b4 = 3
                                else if (rcx_3 == 2)
                                    r14 = 3
                                    var_b7.w = 0x2101
                                    var_b4 = 3
                                else
                                    r14 = 3
                                    var_b7.w = 0x201
                                    var_b4 = 3
                        
                        char r12_1 = *(r13 + 0x3f)
                        result_12.b = 0
                        result_7.b = 0
                        int64_t rdx_1 = sx.q(r14)
                        int64_t var_a8_1 = rdx_1
                        int32_t rsi_1 = 0
                        int64_t r13_1 = 0
                        
                        if (r14 s<= 0)
                            goto label_142b036b0
                        
                        do
                            if (rsi_1 s> 0)
                                goto label_142b0344a
                            
                            char result_4 = (&var_b8)[r13_1]
                            
                            if (result_4 s> 0)
                                uint32_t var_ac
                                
                                if (result_4 s< 0x20)
                                    result = sx.q(result_4)
                                    void* r10_1 = *(r10 + (result << 3))
                                    
                                    if (rbx s>= 0x10000 && (*(r10_1 + 0xfd) & 1) == 0)
                                        goto label_142b033e2
                                    
                                    int64_t rdx_3 = *(r10_1 + 0x58)
                                    int32_t r8_3 = *(rdx_3 + (zx.q(
                                        zx.d(*(rdx_3 + (sx.q(rbx) s>> 0xa << 1)))
                                        + (rbx s>> 4 & 0x3f)) << 2))
                                    int32_t rdx_5 = rbx & 0xf
                                    uint32_t r9_1 = zx.d(*(*(r10_1 + 0xe8)
                                        + (zx.q((zx.d(r8_3.w) << 4) + rdx_5) << 1)))
                                    int32_t rax_11
                                    rax_11.b = r9_1 u> 0xff
                                    result = zx.q(rax_11 + 1)
                                    
                                    if (not(test_bit(r8_3, zx.d(rdx_5.b + 0x10))))
                                        if (r12_1 == 0 && rbx - 0xe000 u>= 0x1900)
                                            if (rbx - 0xf0000 u>= 0x20000 || r9_1 == 0)
                                                goto label_142b033de
                                            
                                            goto label_142b033d6
                                        
                                        if (r9_1 != 0)
                                        label_142b033d6:
                                            var_ac = r9_1
                                            result = zx.q(neg.d(result.d))
                                            goto label_142b03405
                                        
                                    label_142b033de:
                                        rdx_1 = var_a8_1
                                    label_142b033e2:
                                        void* rcx_14 = *(r10_1 + 0x120)
                                        
                                        if (rcx_14 != 0)
                                            result = sub_142b6cc10(rcx_14, rbx, &var_ac, r12_1)
                                            r9_1 = var_ac
                                            r11 = var_b0
                                            goto label_142b03405
                                        
                                        r10 = var_a0
                                    else
                                        var_ac = r9_1
                                    label_142b03405:
                                        
                                        if (result.d == 2 || (result.d == 0xfffffffe && rsi_1 == 0))
                                            r11 = r9_1
                                            var_b0 = r9_1
                                            rsi_1 = result.d
                                            result_7 = zx.q(result_4)
                                            result_12.b = 1
                                            r12_1 = 0
                                            rdx_1 = var_a8_1
                                            r10 = var_a0
                                        else
                                            rdx_1 = var_a8_1
                                            r10 = var_a0
                                else
                                    int64_t var_d8
                                    var_d8.d = 2
                                    result =
                                        sub_142b04670(*(r10 + 0x18), rbx, &var_ac, r12_1, var_d8.d)
                                    
                                    if (result.d == 3 || (result.d == 0xfffffffd && rsi_1 == 0))
                                        r11 = var_ac
                                        result_7.b = (r11 u>> 0x10).b - 0x60
                                        var_b0 = r11
                                        
                                        if (result.d s< 0)
                                            rsi_1 = -2
                                            r12_1 = 0
                                        else
                                            rsi_1 = 2
                                        
                                        if (result_7.b != 0x21)
                                            r10 = var_a0
                                            rdx_1 = var_a8_1
                                            
                                            if (result_7.b == 0x22)
                                                result_12.b = 2
                                            else if (*(r10 + 0x6c) != 1)
                                                rsi_1 = 0
                                            else
                                                result_12.b = 3
                                        else
                                            result_12.b = 1
                                            rdx_1 = var_a8_1
                                            r10 = var_a0
                                    else
                                        r11 = var_b0
                                        rdx_1 = var_a8_1
                                        r10 = var_a0
                            
                            r13_1 += 1
                        while (r13_1 s< rdx_1)
                        
                        if (rsi_1 != 0)
                        label_142b0344a:
                            char* r8_5 = sx.q(result_12.b)
                            rsi = r10 + 0x62
                            int32_t rdx_8 = 0
                            
                            if (result_7.b == *(r8_5 + rsi))
                                r14 = var_b4
                            else
                                int64_t rax_12
                                
                                if (result_7.b s>= 3)
                                    rax_12 = sx.q(sx.d(result_7.b) - 0x1e)
                                else
                                    rax_12 = sx.q(result_7.b)
                                
                                r14 = var_b4
                                rdx_8 = 4
                                
                                if (result_12.b == 1)
                                    r14 = 0
                                
                                result_2.d = *(&data_143665ab0)[rax_12]
                                var_b4 = r14
                                *(r8_5 + rsi) = result_7.b
                            
                            if (result_12.b != rsi[1].b)
                                int32_t rcx_16 = sx.d(result_12.b)
                                uint64_t rax_16 = zx.q(rdx_8)
                                
                                if (rcx_16 == 1)
                                    (&result_2)[rax_16] = 0xe
                                    rdx_8 += 1
                                    rsi[1].b = 1
                                else
                                    (&result_2)[rax_16] = 0x1b
                                    uint64_t rcx_18 = zx.q(rdx_8 + 1)
                                    rdx_8 = (rcx_18 + 1).d
                                    
                                    if (rcx_16 == 2)
                                        (&result_2)[rcx_18] = 0x4e
                                    else
                                        (&result_2)[rcx_18] = 0x4f
                            
                            result_9 = result_10
                            result_7 = result_8
                            r13 = var_60
                            result_12 = result_11
                            r12 = arg2
                            (&result_2)[zx.q(rdx_8)] = (r11 u>> 8).b
                            uint64_t rcx_21 = zx.q(rdx_8 + 1)
                            rdx = var_78
                            r8_1 = (rcx_21 + 1).d
                            (&result_2)[rcx_21] = r11.b
                            goto label_142b0350d
                        
                        result_9 = result_10
                        r8 = var_90
                    label_142b036b0:
                        r12 = arg2
                        r13 = var_60
                        result_7 = result_8
                        rsi = var_58
                        result_12 = result_11
                        *r12 = 0xa
                        *(r13 + 0x54) = rbx
                    else
                        if (rbx s< 0x20)
                            result = zx.q(1 << rbx.b)
                        
                        if (rbx s< 0x20 && (result.d & 0x800c000) != 0)
                            *r12 = 0xc
                            *(r13 + 0x54) = rbx
                        else
                            char result_3
                            
                            if (rsi[1].b != 0)
                                result_2 = 0xf
                                r8_1 = 2
                                result_3 = rbx.b
                                r14 = 0
                                rsi[1].b = 0
                                var_b4 = 0
                            else
                                result_2 = rbx.b
                                r8_1 = 1
                            
                            if (rbx != 0xd && rbx != 0xa)
                                goto label_142b0350d
                            
                            var_b4 = 0
                            *rsi = 0
                            r14 = 0
                            rsi[1].w = 0
                        label_142b0350d:
                            
                            if (r8_1 != 1)
                                if (r8_1 != 2 || result_9 + 2 u> rdx)
                                    result_8 = result_9
                                    int32_t rax_26
                                    rax_26.b = rbx u> 0xffff
                                    result = sub_142b6b510(r13, &result_2, r8_1, &result_8, rdx, 
                                        &result_1, 
                                        ((result_7 - *(result_12 + 0x10)) s>> 1).d - (rax_26 + 1), 
                                        r12)
                                    result_9 = result_8
                                    result_10 = result_9
                                    
                                    if (*r12 s> 0)
                                        break
                                    
                                    r10 = var_a0
                                    r11 = var_b0
                                    r8 = var_90
                                else
                                    r8 = var_90
                                    *result_9 = result_2
                                    result = zx.q(result_3)
                                    *(result_9 + 1) = result.b
                                    result_9 += 2
                                    uint64_t result_6 = result_1
                                    result_10 = result_9
                                    
                                    if (result_6 != 0)
                                        int32_t rax_23
                                        rax_23.b = rbx u> 0xffff
                                        int32_t rcx_25 = ((result_7 - *(result_12 + 0x10)) s>> 1).d
                                            - (rax_23 + 1)
                                        *result_6 = rcx_25
                                        result = result_1 + 4
                                        result_1 = result
                                        *result = rcx_25
                                        result_1 += 4
                                
                                rdx = var_78
                                continue
                            else
                                result = zx.q(result_2)
                                r8 = var_90
                                *result_9 = result.b
                                result_9 += 1
                                uint64_t result_5 = result_1
                                result_10 = result_9
                                
                                if (result_5 == 0)
                                    continue
                                else
                                    result = zx.q(((result_7 - *(result_12 + 0x10)) s>> 1).d - 1)
                                    *result_5 = result.d
                                    result_1 += 4
                                    continue
    
    if (*r12 s<= 0 && rsi[1].b != 0 && *(result_12 + 2) != 0 && result_7 u>= r8
            && *(r13 + 0x54) == 0)
        rsi[1].b = 0
        int64_t r8_6 = *(result_12 + 0x10)
        int32_t rdx_12 = ((result_7 - r8_6) s>> 1).d
        int32_t rdx_13
        
        if (rdx_12 s<= 0)
            rdx_13 = -1
        else
            rdx_13 = rdx_12 - 1
            
            if ((zx.d(*(r8_6 + (sx.q(rdx_13) << 1))) & 0xfffffc00) == 0xdc00 && (rdx_13 == 0
                    || (zx.d(*(r8_6 + (sx.q(rdx_13 - 1) << 1))) & 0xfffffc00) == 0xd800))
                rdx_13 -= 1
        
        uint64_t* var_d0_2 = &result_1
        result_11 = result_9
        result = sub_142b6b510(r13, &data_143665a70, 1, &result_11, var_78, var_d0_2, rdx_13, r12)
        result_9 = result_11
    
label_142b0371e:
    *(result_12 + 0x10) = result_7
    *(result_12 + 0x20) = result_9
    __security_check_cookie(rax_1 ^ &var_f8)
    return result

goto label_142b0371e
