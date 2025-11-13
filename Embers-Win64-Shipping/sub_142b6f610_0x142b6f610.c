// 函数: sub_142b6f610
// 地址: 0x142b6f610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_280 = -2
void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int64_t rbp = sx.q(arg4)
void* rsi = arg6
void* var_288 = rsi
int64_t rdi = sx.q(arg3)
sub_142aeacd0(arg2, rdi)
sub_142aea770(arg2, 4, arg5)
uint64_t result

if (sub_142aea6a0(arg2) s< rbp)
    sub_142aeacd0(arg2, rdi)
    int32_t r14_1 = 0
    int32_t result_1 = 0
    int32_t result_2 = 0
    int32_t i = 0
    int64_t (* var_2a8_1)() = sub_140594850
    void var_278
    `eh vector constructor iterator'(&var_278, 0xb4, 3)
    sub_142aeacd0(arg2, rdi)
    
    while (i s<= 0)
        int32_t rax_3 = sub_142aea6a0(arg2)
        
        if (rax_3 s>= rbp.d)
            break
        
        int32_t rdi_1 = 0
        void* rsi_1 = &var_278 + zx.q(result_1 u% 3) * 0xb4
        int32_t rax_6 = sub_142b6dcd0(rsi_1, arg2, *(arg1 + 0x4b8), rbp.d)
        
        if (rax_6 == 1)
            sub_142aeacd0(arg2, sx.q(*(rsi_1 + (sx.q(*(rsi_1 + 0xc)) << 2) + 0x14) + *(rsi_1 + 8)))
            r14_1 = *(rsi_1 + (sx.q(*(rsi_1 + 0xc)) << 2) + 0x14)
            rdi_1 = *(rsi_1 + (sx.q(*(rsi_1 + 0xc)) << 2) + 0x64)
            result_1 += 1
            result_2 = result_1
        else if (rax_6 s> 1)
            if (sub_142aea6a0(arg2) s< rbp.d)
                int32_t* rdi_2 = &var_278 + zx.q((result_1 + 1) u% 3) * 0xb4
                
                while (true)
                    if (sub_142b6dcd0(rdi_2, arg2, *(arg1 + 0x4b8), rbp.d) s> 0)
                        *(rsi_1 + 0xc) = *(rsi_1 + 0x10)
                        
                        if (sub_142aea6a0(arg2) s< rbp.d)
                            while (true)
                                if (sub_142b6dcd0(&var_278 + zx.q((result_1 + 2) u% 3) * 0xb4, 
                                        arg2, *(arg1 + 0x4b8), rbp.d) != 0)
                                    *(rsi_1 + 0xc) = *(rsi_1 + 0x10)
                                    break
                                
                                int32_t rax_19 = rdi_2[4]
                                
                                if (rax_19 s<= 0)
                                    goto label_142b6f83b
                                
                                rdi_2[4] = rax_19 - 1
                                sub_142aeacd0(arg2, sx.q(rdi_2[sx.q(rax_19 - 1) + 5] + rdi_2[2]))
                        
                        break
                    
                label_142b6f83b:
                    int32_t rax_22 = *(rsi_1 + 0x10)
                    
                    if (rax_22 s<= 0)
                        break
                    
                    *(rsi_1 + 0x10) = rax_22 - 1
                    sub_142aeacd0(arg2, 
                        sx.q(*(rsi_1 + (sx.q(rax_22 - 1) << 2) + 0x14) + *(rsi_1 + 8)))
            
            void* rdi_3 = &var_278 + zx.q(result_1 u% 3) * 0xb4
            sub_142aeacd0(arg2, sx.q(*(rdi_3 + (sx.q(*(rdi_3 + 0xc)) << 2) + 0x14) + *(rdi_3 + 8)))
            r14_1 = *(rdi_3 + (sx.q(*(rdi_3 + 0xc)) << 2) + 0x14)
            rdi_1 = *(rdi_3 + (sx.q(*(rdi_3 + 0xc)) << 2) + 0x64)
            result_1 += 1
            result_2 = result_1
        
        int32_t r12_4
        int32_t var_274[0x87]
        
        if (sub_142aea6a0(arg2) s>= rbp.d || rdi_1 s>= 3)
            r12_4 = rax_3
        else if (sub_142b6dcd0(&var_278 + zx.q(result_1 u% 3) * 0xb4, arg2, *(arg1 + 0x4b8), rbp.d)
                s> 0 || (r14_1 != 0 && var_274[zx.q(result_1 u% 3) * 0x2d] s>= 3))
            r12_4 = rax_3
            sub_142aeacd0(arg2, sx.q(r12_4 + r14_1))
        else
            int32_t rax_35
            int512_t zmm0
            rax_35, zmm0 = sub_142aea6a0(arg2)
            int32_t r13_1 = sub_142aea870(arg2, zmm0)
            int32_t rax_37
            int512_t zmm0_1
            rax_37, zmm0_1 = sub_142aea6a0(arg2)
            int32_t r12_3 = rax_37 - rax_35
            int32_t rax_47
            
            for (int32_t j = rbp.d - r12_3 - rax_3 - r14_1; j s> 0; j -= rax_47)
                int32_t rax_38 = sub_142aea4f0(arg2, zmm0_1)
                
                if (sub_142a9f280(arg1 + 0x198, zx.q(r13_1)) != 0
                        && sub_142a9f280(arg1 + 0x260, zx.q(rax_38)) != 0)
                    int32_t rax_43 = sub_142b6dcd0(zx.q((result_2 + 1) u% 3) * 0xb4 + &var_278, 
                        arg2, *(arg1 + 0x4b8), rbp.d)
                    sub_142aeacd0(arg2, sx.q(rax_3 + r12_3 + r14_1))
                    
                    if (rax_43 s> 0)
                        break
                
                int32_t rax_44
                int512_t zmm0_2
                rax_44, zmm0_2 = sub_142aea6a0(arg2)
                r13_1 = sub_142aea870(arg2, zmm0_2)
                int32_t rax_46
                rax_46, zmm0_1 = sub_142aea6a0(arg2)
                rax_47 = rax_46 - rax_44
                r12_3 += rax_47
            
            int32_t result_3 = result_2 + 1
            
            if (r14_1 s> 0)
                result_3 = result_2
            
            result_1 = result_3
            result_2 = result_3
            r14_1 += r12_3
            r12_4 = rax_3
        int32_t j_3
        int512_t zmm0_3
        j_3, zmm0_3 = sub_142aea6a0(arg2)
        int32_t j_2 = j_3
        
        if (j_3 s< rbp.d)
            int32_t j_1
            
            do
                char rax_50
                int512_t zmm0_4
                rax_50, zmm0_4 = sub_142a9f280(arg1 + 0x3f0, zx.q(sub_142aea4f0(arg2, zmm0_3)))
                
                if (rax_50 == 0)
                    break
                
                sub_142aea870(arg2, zmm0_4)
                r14_1 += sub_142aea6a0(arg2) - j_2
                j_1, zmm0_3 = sub_142aea6a0(arg2)
                j_2 = j_1
            while (j_1 s< rbp.d)
        
        if (sub_142aea6a0(arg2) s>= rbp.d)
        label_142b6fb9b:
            rsi = var_288
            
            if (r14_1 s> 0)
                int32_t rdx_33 = *(rsi + 8)
                char rax_70
                
                if (rdx_33 + 1 s< 0 || *(rsi + 0xc) s< rdx_33 + 1)
                    rax_70 = sub_142ae7df0(rsi, rdx_33 + 1, &i)
                
                if ((rdx_33 + 1 s>= 0 && *(rsi + 0xc) s>= rdx_33 + 1) || rax_70 != 0)
                    *(*(rsi + 0x18) + (sx.q(*(rsi + 8)) << 2)) = r12_4 + r14_1
                    *(rsi + 8) += 1
        else
            if (r14_1 s> 0)
                int32_t rax_56
                int512_t zmm0_5
                rax_56, zmm0_5 = sub_142b6dcd0(zx.q(result_1 u% 3) * 0xb4 + &var_278, arg2, 
                    *(arg1 + 0x4b8), rbp.d)
                char rax_58
                int32_t rdi_9
                int512_t zmm0_6
                
                if (rax_56 s<= 0)
                    int32_t rax_57 = sub_142aea4f0(arg2, zmm0_5)
                    rdi_9 = rax_57
                    rax_58, zmm0_6 = sub_142a9f280(arg1 + 0x328, zx.q(rax_57))
                
                if (rax_56 s> 0 || rax_58 == 0)
                    sub_142aeacd0(arg2, sx.q(r12_4 + r14_1))
                else
                    if (rdi_9 != 0xe2f)
                        goto label_142b6fb47
                    
                    char rax_60
                    rax_60, zmm0_6 = sub_142a9f280(arg1 + 0x328, zx.q(sub_142aeabf0(arg2)))
                    
                    if (rax_60 != 0)
                        sub_142aea870(arg2, zmm0_6)
                    else
                        sub_142aea870(arg2, zmm0_6)
                        int32_t rax_61
                        int512_t zmm0_7
                        rax_61, zmm0_7 = sub_142aea6a0(arg2)
                        sub_142aea870(arg2, zmm0_7)
                        int32_t rax_62
                        rax_62, zmm0_6 = sub_142aea6a0(arg2)
                        r14_1 += rax_62 - rax_61
                        rdi_9 = sub_142aea4f0(arg2, zmm0_6)
                    label_142b6fb47:
                        
                        if (rdi_9 == 0xe46)
                            if (sub_142aeabf0(arg2) == rdi_9)
                                sub_142aea870(arg2, zmm0_6)
                            else
                                sub_142aea870(arg2, zmm0_6)
                                int32_t rax_66
                                int512_t zmm0_8
                                rax_66, zmm0_8 = sub_142aea6a0(arg2)
                                sub_142aea870(arg2, zmm0_8)
                                r14_1 += sub_142aea6a0(arg2) - rax_66
                
                goto label_142b6fb9b
            
            rsi = var_288
        
        r14_1 = 0
    
    int32_t rdx_35 = *(rsi + 8)
    
    if (rdx_35 - 1 s>= 0 && rdx_35 s> 0 && 0 + 1 s> 0)
        r14_1 = *(*(rsi + 0x18) + (sx.q(rdx_35 - 1) << 2))
    
    if (r14_1 s>= rbp.d)
        if (rdx_35 s> 0)
            *(rsi + 8) = rdx_35 - 1
        
        result_1 -= 1
    
    `eh vector vbase constructor iterator'(&var_278, 0xb4, 3)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_2c8)
return result
