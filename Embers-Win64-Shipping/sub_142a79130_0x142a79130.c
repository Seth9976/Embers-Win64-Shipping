// 函数: sub_142a79130
// 地址: 0x142a79130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t* r15 = arg4
void* rsi = arg2
void* result = arg1

if (*arg4 s<= 0)
    int32_t rax_2 = *(arg1 + 0x13c)
    
    if (rax_2 s> 0)
        *arg4 = rax_2
    else if (*(arg1 + 0x82) != 0)
        int32_t* rax_3
        int512_t zmm0_1
        rax_3, zmm0_1 = sub_142aea860(rsi)
        int32_t* r13_1 = rax_3
        int64_t r8 = *(result + 0x88)
        int64_t rdx = *(result + 0xa0)
        
        if (r8 s<= rdx)
            goto label_142a792cd
        
        void* r10_1 = *(result + 0x20)
        int64_t rcx_1
        
        if (*(r10_1 + 0x20) == 0)
            rcx_1 = *(result + 0x30)
        
        int32_t var_d4
        
        if (*(r10_1 + 0x20) != 0 || rcx_1 != *(r10_1 + 0x10) || rcx_1 != sx.q(*(r10_1 + 0x1c)))
            int32_t rdi_2
            
            if (*(*(r10_1 + 0x38) + 0x48) != 0)
                var_d4 = 0
                rdi_2 = sub_142aea690(r10_1, rdx, r8, 0, 0, &var_d4)
            else
                rdi_2 = r8.d - rdx.d
            
            int64_t rax_9 = sub_142a7dd00(sx.q(rdi_2 + 1) * 2)
            
            if (rax_9 != 0)
                sub_142aea690(*(result + 0x20), *(result + 0xa0), *(result + 0x88), rax_9, 
                    rdi_2 + 1, r15)
                r13_1 += sx.q(sub_142aeaca0(arg2, r13_1, r13_1, rax_9, rdi_2, r15))
                zmm0_1 = sub_142a7dcd0(rax_9)
                rsi = arg2
                goto label_142a792cd
            
            *r15 = 7
        else
            int32_t rax_6
            rax_6, zmm0_1 =
                sub_142aeaca0(rsi, r13_1, r13_1, *(r10_1 + 0x30) + (rdx << 1), r8.d - rdx.d, r15)
            r13_1 += sx.q(rax_6)
        label_142a792cd:
            *(result + 0xa0) = *(result + 0x90)
            int64_t rcx_14 = neg.q(*(arg3 + 0x20))
            
            if (rcx_14 s< 0 || rcx_14 s>= sx.q(*(arg3 + 0x1c))
                    || *(*(arg3 + 0x30) + (rcx_14 << 1)) u>= 0xdc00)
                sub_142aeacd0(arg3, 0)
            else
                *(arg3 + 0x28) = rcx_14.d
            
            int64_t rdx_4 = sx.q(*(arg3 + 0x28))
            int16_t i_1
            
            if (rdx_4.d s< *(arg3 + 0x2c))
                i_1 = *(*(arg3 + 0x30) + (rdx_4 << 1))
            
            uint32_t i
            
            if (rdx_4.d s>= *(arg3 + 0x2c) || i_1 u>= 0xd800)
                i = sub_142aea870(arg3, zmm0_1)
            else
                i = zx.d(i_1)
                *(arg3 + 0x28) = (rdx_4 + 1).d
            
            if (*r15 s<= 0)
                while (i != 0xffffffff)
                    int16_t var_d8
                    
                    if (i == 0x5c)
                        int64_t rax_17 = sx.q(*(arg3 + 0x28))
                        int16_t rdx_5
                        
                        if (rax_17.d s< *(arg3 + 0x2c))
                            rdx_5 = *(*(arg3 + 0x30) + (rax_17 << 1))
                        
                        uint32_t rdi_3
                        
                        if (rax_17.d s>= *(arg3 + 0x2c) || rdx_5 u>= 0xd800)
                            rdi_3 = sub_142aea4f0(arg3, zmm0_1)
                        else
                            rdi_3 = zx.d(rdx_5)
                        
                        if (rdi_3 == 0xffffffff)
                            break
                        
                        if (((rdi_3 - 0x55) & 0xffffffdf) == 0)
                            int32_t var_c0 = 0
                            void* var_b0 = arg3
                            int32_t var_a8_1 = 0xffffffff
                            int32_t rax_24
                            rax_24, zmm0_1 =
                                sub_142a8c490(sub_142af4c20, &var_c0, 0x7fffffff, &var_b0, zmm0_1)
                            int16_t rcx_21 = rax_24.w
                            
                            if (rax_24 != 0xffffffff)
                                int32_t rax_25
                                
                                if (rax_24 u> 0xffff)
                                    int16_t var_c4 = (rax_24 s>> 0xa).w - 0x2840
                                    int16_t var_c2_1 = (rcx_21 & 0x3ff) | 0xdc00
                                    
                                    if (*r15 s<= 0)
                                        rax_25, zmm0_1 =
                                            sub_142aeaca0(rsi, r13_1, r13_1, &var_c4, 2, r15)
                                        r13_1 += sx.q(rax_25)
                                else
                                    var_d8 = rcx_21
                                    rax_25, zmm0_1 = sub_142aeaca0(rsi, r13_1, r13_1, &var_d8, 1, 
                                        r15, var_d8, arg2)
                                    r13_1 += sx.q(rax_25)
                                int32_t rdx_10 = var_c0
                                
                                if (var_a8_1 == rdx_10)
                                    int32_t rax_27 = *(arg3 + 0x28)
                                    
                                    if (rax_27 s<= 0 || *(*(arg3 + 0x30) + (sx.q(rax_27 - 1) << 1))
                                            u>= 0xd800)
                                        sub_142aeabf0(arg3)
                                    else
                                        *(arg3 + 0x28) = rax_27 - 1
                                else if (var_a8_1 != rdx_10 - 1)
                                    sub_142aea770(arg3, rdx_10 - var_a8_1 - 1, zmm0_1)
                        else
                            int64_t rdx_6 = sx.q(*(arg3 + 0x28))
                            
                            if (rdx_6.d s>= *(arg3 + 0x2c)
                                    || *(*(arg3 + 0x30) + (rdx_6 << 1)) u>= 0xd800)
                                sub_142aea870(arg3, zmm0_1)
                            else
                                *(arg3 + 0x28) = (rdx_6 + 1).d
                            
                            int32_t rax_48
                            
                            if (rdi_3 u> 0xffff)
                                int16_t var_c8 = (rdi_3 s>> 0xa).w - 0x2840
                                rdi_3.w &= 0x3ff
                                rdi_3.w |= 0xdc00
                                int16_t var_c6_1 = rdi_3.w
                                
                                if (*r15 s<= 0)
                                    rax_48, zmm0_1 =
                                        sub_142aeaca0(rsi, r13_1, r13_1, &var_c8, 2, r15)
                                    r13_1 += sx.q(rax_48)
                            else
                                var_d8 = rdi_3.w
                                rax_48, zmm0_1 = sub_142aeaca0(rsi, r13_1, r13_1, &var_d8, 1, r15)
                                r13_1 += sx.q(rax_48)
                    else if (i == 0x24)
                        uint64_t r14_2 = 0
                        int32_t rsi_2 = 0
                        int32_t j_1 = sub_142aea4f0(arg3, zmm0_1)
                        int32_t j = j_1
                        
                        if (j_1 == 0x7b)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                            int16_t var_90_1 = 2
                            sub_142aea870(arg3, zmm0_1)
                            
                            if (*r15 s<= 0)
                                while (j != 0x7d)
                                    int32_t j_2 = sub_142aea870(arg3, zmm0_1)
                                    j = j_2
                                    
                                    if (j_2 == 0xffffffff)
                                        *r15 = 0x10315
                                    else if (j_2 - 0x41 u<= 0x19 || j - 0x61 u<= 0x19
                                            || j - 0x31 u<= 8)
                                        zmm0_1 = sub_142a48580(&var_98, j)
                                    else
                                        int32_t rax_37
                                        
                                        if (j == 0x7d)
                                            rax_37 = sub_142a86c70(*(*(result + 8) + 0xd0), &var_98)
                                            r14_2 = zx.q(rax_37)
                                        
                                        if (j != 0x7d || rax_37 == 0)
                                            *r15 = 0x10315
                                    
                                    if (*r15 s> 0)
                                        break
                            
                            zmm0_1 = sub_142a47ff0(&var_98)
                            goto label_142a7973f
                        
                        if (sub_142a54580(j_1) == 0)
                            *r15 = 0x10315
                            rsi = arg2
                        else
                            int32_t r12 = *(*(*(result + 8) + 0x88) + 8)
                            
                            while (true)
                                int64_t rax_40 = sx.q(*(arg3 + 0x28))
                                int16_t rdx_18
                                
                                if (rax_40.d s< *(arg3 + 0x2c))
                                    rdx_18 = *(*(arg3 + 0x30) + (rax_40 << 1))
                                
                                uint32_t rdi_4
                                
                                if (rax_40.d s>= *(arg3 + 0x2c) || rdx_18 u>= 0xd800)
                                    rdi_4 = sub_142aea4f0(arg3, zmm0_1)
                                else
                                    rdi_4 = zx.d(rdx_18)
                                
                                if (rdi_4 == 0xffffffff)
                                    goto label_142a7973b
                                
                                if (sub_142a54580(rdi_4) == 0)
                                    goto label_142a7973b
                                
                                int32_t rdi_5 = sub_142a53ce0(rdi_4) + ((r14_2 * 5).d << 1)
                                
                                if (rdi_5 s> r12)
                                    if (rsi_2 != 0)
                                    label_142a7973b:
                                        result = arg1
                                        break
                                    
                                    *r15 = 8
                                    rsi = arg2
                                    goto label_142a79795
                                
                                int64_t rdx_19 = sx.q(*(arg3 + 0x28))
                                
                                if (rdx_19.d s>= *(arg3 + 0x2c)
                                        || *(*(arg3 + 0x30) + (rdx_19 << 1)) u>= 0xd800)
                                    sub_142aea870(arg3, zmm0_1)
                                else
                                    *(arg3 + 0x28) = (rdx_19 + 1).d
                                
                                r14_2 = zx.q(rdi_5)
                                rsi_2 += 1
                            
                        label_142a7973f:
                            rsi = arg2
                            
                            if (*r15 s<= 0)
                                int64_t rax_47
                                rax_47, zmm0_1 = sub_142a78da0(result, r14_2.d, rsi, r15)
                                r13_1 += rax_47
                    else if (i u> 0xffff)
                        var_d4.w = (i s>> 0xa).w - 0x2840
                        i.w &= 0x3ff
                        i.w |= 0xdc00
                        var_d4:2.w = i.w
                        
                        if (*r15 s<= 0)
                            int32_t rax_33
                            rax_33, zmm0_1 = sub_142aeaca0(rsi, r13_1, r13_1, &var_d4, 2, r15)
                            r13_1 += sx.q(rax_33)
                    else
                        var_d8 = i.w
                        int32_t rax_30
                        rax_30, zmm0_1 =
                            sub_142aeaca0(rsi, r13_1, r13_1, &var_d8, 1, r15, var_d8, arg2)
                        r13_1 += sx.q(rax_30)
                label_142a79795:
                    int64_t rdx_22 = sx.q(*(arg3 + 0x28))
                    int16_t i_2
                    
                    if (rdx_22.d s< *(arg3 + 0x2c))
                        i_2 = *(*(arg3 + 0x30) + (rdx_22 << 1))
                    
                    if (rdx_22.d s>= *(arg3 + 0x2c) || i_2 u>= 0xd800)
                        i = sub_142aea870(arg3, zmm0_1)
                    else
                        i = zx.d(i_2)
                        *(arg3 + 0x28) = (rdx_22 + 1).d
                    
                    result = arg1
                    
                    if (*r15 s> 0)
                        break
    else
        *arg4 = 0x10302

__security_check_cookie(rax_1 ^ &var_108)
return result
