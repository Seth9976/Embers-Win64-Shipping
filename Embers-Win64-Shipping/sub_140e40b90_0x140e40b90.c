// 函数: sub_140e40b90
// 地址: 0x140e40b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t i_1 = 0
int64_t var_48 = 0
int64_t var_40 = 0
int32_t i = 0
int32_t i_2 = 0

if (*(arg1 + 0x284) s> 0)
    do
        int32_t rcx_11 = *(arg1 + 0x27c)
        int32_t rsi_1 = 0
        int32_t rbp_1 = 0
        int32_t r12_1 = 0
        
        if (rcx_11 s> 0)
            int64_t rdx_1 = 0
            void* r14_1 = arg1 + 0x2540
            int64_t var_60_1 = 0
            
            do
                int64_t r13 = sx.q(*(r14_1 - 0x22b4))
                int16_t* rbx_2 = *(arg1 + 0x2538) + rdx_1
                void* rdx_2 = *(arg1 + (r13 << 3) + 0x328)
                int32_t r9_2 = *(arg1 + (r13 << 2) + 0x34c) + rbp_1
                int64_t rax_3 = *(arg1 + (sx.q(*(arg1 + (r13 << 2) + 0x1f0)) << 3) + 0x1a8)
                int32_t r8_1 = *(&var_48 + (r13 << 2))
                int32_t r10_1 = r8_1 + rsi_1
                int64_t* r8_2 = *(arg1 + (r13 << 3) + 0x308)
                void* r11_3 = sx.q(*(rdx_2 + 8) * r9_2 * *(rdx_2 + 0x18))
                    + sx.q(r10_1 * *(rdx_2 + 0x18)) + *rdx_2
                int64_t rdx_3 = 0xf4
                *rbx_2 = *(sx.q(r8_2[1].d * r9_2 * r8_2[3].d) + sx.q(r10_1 * r8_2[3].d) + *r8_2)
                *(rbx_2 + 2) = *(r11_3 + 2)
                *(rbx_2 + 0x12) = *(r11_3 + 0x12)
                *(rbx_2 + 0x22) = *(r11_3 + 0x22)
                *(rbx_2 + 0x32) = *(r11_3 + 0x32)
                *(rbx_2 + 0x42) = *(r11_3 + 0x42)
                *(rbx_2 + 0x52) = *(r11_3 + 0x52)
                *(rbx_2 + 0x62) = *(r11_3 + 0x62)
                *(rbx_2 + 0x72) = *(r11_3 + 0x72)
                *(rbx_2 + 0x7a) = *(r11_3 + 0x7a)
                rbx_2[0x3f] = *(r11_3 + 0x7e)
                int32_t rax_18 = 0x3f
                int64_t r8_3 = 0x3f
                
                while (rbx_2[sx.q(*(rdx_3 + 0x1439b36b8))] == 0)
                    if (rbx_2[sx.q(*(rdx_3 + 0x1439b36b4))] != 0)
                        r8_3 -= 1
                        rax_18 -= 1
                        break
                    
                    if (rbx_2[sx.q(*(rdx_3 + &data_1439b36b0))] != 0)
                        r8_3 -= 2
                        rax_18 -= 2
                        break
                    
                    r8_3 -= 3
                    rdx_3 -= 0xc
                    rax_18 -= 3
                    
                    if (rdx_3 s<= -8)
                        break
                
                *r14_1 = rax_18 + 1
                
                if (rax_18 s>= 0)
                    void* r9_3 = &data_1439b36b0 + (r8_3 << 2)
                    int16_t* r10_3 = rax_3 + (r8_3 << 1)
                    int32_t temp0_1
                    
                    do
                        int64_t rcx_8 = sx.q(*r9_3)
                        int16_t rdx_4 = rbx_2[rcx_8]
                        
                        if (rdx_4 != 0)
                            rbx_2[rcx_8] = rdx_4 * *r10_3
                        
                        r9_3 -= 4
                        r10_3 -= 2
                        temp0_1 = rax_18
                        rax_18 -= 1
                    while (temp0_1 - 1 s>= 0)
                
                if (*(arg1 + 0x230) != 1)
                    int32_t rax_21 = *(arg1 + (r13 << 2) + 0x1d0)
                    rsi_1 += 1
                    
                    if (rsi_1 == rax_21)
                        rbp_1 += 1
                        rsi_1 = 0
                        
                        if (rbp_1 == *(arg1 + (r13 << 2) + 0x1e0))
                            rbp_1 = 0
                            *(&var_48 + (r13 << 2)) = rax_21 + r8_1
                else
                    *(&var_48 + (r13 << 2)) = r8_1 + 1
                
                r12_1 += 1
                rcx_11 = *(arg1 + 0x27c)
                rdx_1 = var_60_1 + 0x80
                r14_1 += 4
                var_60_1 = rdx_1
            while (r12_1 s< rcx_11)
            
            i = i_2
        
        if (*(arg1 + 0x251c) == 0)
            int16_t* rbp_2 = *(arg1 + 0x2538)
            int32_t j = 0
            uint32_t* rbx_4 = sx.q((rcx_11 * i) << 6) + *(arg1 + 0x2568)
            
            if (rcx_11 s> 0)
                void* rsi_2 = arg1 + 0x2540
                
                do
                    sub_140e3df00(rbp_2, rbx_4, zx.q(*rsi_2))
                    rbp_2 -= -0x80
                    rsi_2 += 4
                    rbx_4 = &rbx_4[0x10]
                    j += 1
                while (j s< *(arg1 + 0x27c))
        else
            _input_s_l(arg1, i)
        
        i += 1
        i_2 = i
    while (i s< *(arg1 + 0x284))

uint64_t result = zx.q(*(arg1 + 0x230))

if (result.d == 1)
    result = sx.q(*(arg1 + 0x234))
    *(arg1 + (result << 2) + 0x34c) += 1
else if (result.d s> 0)
    void* rdx_10 = arg1 + 0x234
    
    do
        int64_t rax_25 = sx.q(*rdx_10)
        rdx_10 += 4
        i_1 += 1
        void* rcx_14 = arg1 + (rax_25 << 2)
        result = zx.q(*(arg1 + (rax_25 << 2) + 0x1e0))
        *(rcx_14 + 0x34c) += result.d
    while (i_1 s< *(arg1 + 0x230))

__security_check_cookie(rax_1 ^ &var_88)
return result
