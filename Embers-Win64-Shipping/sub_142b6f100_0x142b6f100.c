// 函数: sub_142b6f100
// 地址: 0x142b6f100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_288 = -2
void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t rdi = sx.q(arg3)
void* r12 = arg5
void* var_290 = r12
uint64_t result

if (arg4 - rdi.d s>= 4)
    int32_t rsi_1 = 0
    int32_t result_1 = 0
    int32_t result_2 = 0
    int32_t i = 0
    int64_t (* var_2b8_1)() = sub_140594850
    void var_278
    `eh vector constructor iterator'(&var_278, 0xb4, 3)
    sub_142aeacd0(arg2, rdi)
    
    while (i s<= 0)
        int32_t rax_4 = sub_142aea6a0(arg2)
        
        if (rax_4 s>= arg4)
            break
        
        int32_t r14_1 = 0
        int32_t rdi_1 = 0
        void* rsi_2 = &var_278 + zx.q(result_1 u% 3) * 0xb4
        int32_t rax_7 = sub_142b6dcd0(rsi_2, arg2, *(arg1 + 0x3f0), arg4)
        
        if (rax_7 == 1)
            sub_142aeacd0(arg2, sx.q(*(rsi_2 + (sx.q(*(rsi_2 + 0xc)) << 2) + 0x14) + *(rsi_2 + 8)))
            r14_1 = *(rsi_2 + (sx.q(*(rsi_2 + 0xc)) << 2) + 0x14)
            rdi_1 = *(rsi_2 + (sx.q(*(rsi_2 + 0xc)) << 2) + 0x64)
            result_1 += 1
            result_2 = result_1
        else if (rax_7 s> 1)
            if (sub_142aea6a0(arg2) s< arg4)
                int32_t* rdi_2 = &var_278 + zx.q((result_1 + 1) u% 3) * 0xb4
                
                while (true)
                    if (sub_142b6dcd0(rdi_2, arg2, *(arg1 + 0x3f0), arg4) s> 0)
                        *(rsi_2 + 0xc) = *(rsi_2 + 0x10)
                        
                        if (sub_142aea6a0(arg2) s< arg4)
                            while (true)
                                if (sub_142b6dcd0(&var_278 + zx.q((result_1 + 2) u% 3) * 0xb4, 
                                        arg2, *(arg1 + 0x3f0), arg4) != 0)
                                    *(rsi_2 + 0xc) = *(rsi_2 + 0x10)
                                    break
                                
                                int32_t rax_20 = rdi_2[4]
                                
                                if (rax_20 s<= 0)
                                    goto label_142b6f2fb
                                
                                rdi_2[4] = rax_20 - 1
                                sub_142aeacd0(arg2, sx.q(rdi_2[sx.q(rax_20 - 1) + 5] + rdi_2[2]))
                        
                        break
                    
                label_142b6f2fb:
                    int32_t rax_23 = *(rsi_2 + 0x10)
                    
                    if (rax_23 s<= 0)
                        break
                    
                    *(rsi_2 + 0x10) = rax_23 - 1
                    sub_142aeacd0(arg2, 
                        sx.q(*(rsi_2 + (sx.q(rax_23 - 1) << 2) + 0x14) + *(rsi_2 + 8)))
            
            void* rdi_3 = &var_278 + zx.q(result_1 u% 3) * 0xb4
            sub_142aeacd0(arg2, sx.q(*(rdi_3 + (sx.q(*(rdi_3 + 0xc)) << 2) + 0x14) + *(rdi_3 + 8)))
            r14_1 = *(rdi_3 + (sx.q(*(rdi_3 + 0xc)) << 2) + 0x14)
            rdi_1 = *(rdi_3 + (sx.q(*(rdi_3 + 0xc)) << 2) + 0x64)
            result_1 += 1
            result_2 = result_1
        
        int32_t var_274[0x87]
        
        if (sub_142aea6a0(arg2) s< arg4 && rdi_1 s< 3)
            if (sub_142b6dcd0(&var_278 + zx.q(result_1 u% 3) * 0xb4, arg2, *(arg1 + 0x3f0), arg4)
                    s> 0 || (r14_1 != 0 && var_274[zx.q(result_1 u% 3) * 0x2d] s>= 3))
                sub_142aeacd0(arg2, sx.q(rax_4 + r14_1))
            else
                int32_t rax_36
                int512_t zmm0_1
                rax_36, zmm0_1 = sub_142aea6a0(arg2)
                int32_t r13_1 = sub_142aea870(arg2, zmm0_1)
                int32_t rax_38
                int512_t zmm0_2
                rax_38, zmm0_2 = sub_142aea6a0(arg2)
                int32_t r12_2 = rax_38 - rax_36
                int32_t rax_51
                
                for (int32_t j = arg4 - r12_2 - rax_4 - r14_1; j s> 0; j -= rax_51)
                    int32_t rax_39 = sub_142aea4f0(arg2, zmm0_2)
                    
                    if (sub_142a9f280(arg1 + 0x198, zx.q(r13_1)) != 0
                            && sub_142a9f280(arg1 + 0x260, zx.q(rax_39)) != 0)
                        int32_t rax_44 = sub_142b6dcd0(zx.q((result_2 + 1) u% 3) * 0xb4 + &var_278, 
                            arg2, *(arg1 + 0x3f0), arg4)
                        sub_142aeacd0(arg2, sx.q(rax_4 + r12_2 + r14_1))
                        
                        if (rax_44 s> 0)
                            break
                    
                    int32_t rax_48
                    int512_t zmm0_3
                    rax_48, zmm0_3 = sub_142aea6a0(arg2)
                    r13_1 = sub_142aea870(arg2, zmm0_3)
                    int32_t rax_50
                    rax_50, zmm0_2 = sub_142aea6a0(arg2)
                    rax_51 = rax_50 - rax_48
                    r12_2 += rax_51
                
                int32_t result_3 = result_2 + 1
                
                if (r14_1 s> 0)
                    result_3 = result_2
                
                result_1 = result_3
                result_2 = result_3
                r14_1 += r12_2
                r12 = var_290
        int32_t rax_54
        int512_t zmm0_4
        rax_54, zmm0_4 = sub_142aea6a0(arg2)
        int32_t rdi_9 = rax_54
        
        if (rax_54 s< arg4)
            int32_t rax_59
            
            do
                char rax_56
                int512_t zmm0_5
                rax_56, zmm0_5 = sub_142a9f280(arg1 + 0x328, zx.q(sub_142aea4f0(arg2, zmm0_4)))
                
                if (rax_56 == 0)
                    break
                
                sub_142aea870(arg2, zmm0_5)
                r14_1 += sub_142aea6a0(arg2) - rdi_9
                rax_59, zmm0_4 = sub_142aea6a0(arg2)
                rdi_9 = rax_59
            while (rax_59 s< arg4)
        
        if (r14_1 s> 0)
            int32_t rdx_25 = *(r12 + 8)
            char rax_60
            
            if (rdx_25 + 1 s< 0 || *(r12 + 0xc) s< rdx_25 + 1)
                rax_60 = sub_142ae7df0(r12, rdx_25 + 1, &i)
            
            if ((rdx_25 + 1 s>= 0 && *(r12 + 0xc) s>= rdx_25 + 1) || rax_60 != 0)
                *(*(r12 + 0x18) + (sx.q(*(r12 + 8)) << 2)) = rax_4 + r14_1
                *(r12 + 8) += 1
        
        rsi_1 = 0
    
    int32_t rdx_27 = *(r12 + 8)
    
    if (rdx_27 - 1 s>= 0 && rdx_27 s> 0 && 0 + 1 s> 0)
        rsi_1 = *(*(r12 + 0x18) + (sx.q(rdx_27 - 1) << 2))
    
    if (rsi_1 s>= arg4)
        if (rdx_27 s> 0)
            *(r12 + 8) = rdx_27 - 1
        
        result_1 -= 1
    
    `eh vector vbase constructor iterator'(&var_278, 0xb4, 3)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_2d8)
return result
