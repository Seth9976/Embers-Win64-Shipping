// 函数: sub_141960280
// 地址: 0x141960280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3a8
int64_t rax_2 = __security_cookie ^ &var_3a8
int128_t zmm6
int128_t var_28_1 = zmm6
int128_t zmm7
int128_t var_38_1 = zmm7
int64_t var_368 = arg1
int128_t zmm8
int128_t var_48_1 = zmm8
int64_t var_360_1 = (sx.q(arg2) << 7) + arg1 - 0x80
int128_t zmm9
int128_t var_58_1 = zmm9
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_358_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_350
memset(&var_350, 0, 0x2e8)
int64_t* rsi_1 = &var_368

while (true)
    uint128_t zmm2 = *rsi_1
    uint32_t r11_1 = (rsi_1[2]).d
    uint128_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - r10_1) s>> 7).d + 1
    
    if (r11_1 == 0)
    label_14196062f:
        sub_14195e000(r10_1, rax_10)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rax_10 s<= 8)
                for (; i u> r10_1; i -= 0x80)
                    void* rdx_3 = r10_1
                    void* rcx_12 = &r10_1[8]
                    
                    if (&r10_1[8] u<= i)
                        do
                            int64_t r8_2 = *(rcx_12 + 0x68)
                            int64_t temp3_1 = *(rdx_3 + 0x68)
                            
                            if (temp3_1 != r8_2)
                                r8_2.b = temp3_1 u> r8_2
                            else
                                r8_2.b = *(rcx_12 + 0x70) u< *(rdx_3 + 0x70)
                            
                            void* rax_26 = rcx_12
                            
                            if (r8_2.b == 0)
                                rax_26 = rdx_3
                            
                            rcx_12 -= -0x80
                            rdx_3 = rax_26
                        while (rcx_12 u<= i)
                    
                    if (rdx_3 != i)
                        zmm2 = *rdx_3
                        zmm3 = *(rdx_3 + 0x10)
                        zmm4_1 = *(rdx_3 + 0x20)
                        zmm5_1 = *(rdx_3 + 0x30)
                        zmm6 = *(rdx_3 + 0x40)
                        zmm7 = *(rdx_3 + 0x50)
                        zmm8 = *(rdx_3 + 0x60)
                        zmm9 = *(rdx_3 + 0x70)
                        *rdx_3 = *i
                        *(rdx_3 + 0x10) = *(i + 0x10)
                        *(rdx_3 + 0x20) = *(i + 0x20)
                        *(rdx_3 + 0x30) = *(i + 0x30)
                        *(rdx_3 + 0x40) = *(i + 0x40)
                        *(rdx_3 + 0x50) = *(i + 0x50)
                        *(rdx_3 + 0x60) = *(i + 0x60)
                        *(rdx_3 + 0x70) = *(i + 0x70)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                        *(i + 0x30) = zmm5_1
                        *(i + 0x40) = zmm6
                        *(i + 0x50) = zmm7
                        *(i + 0x60) = zmm8
                        *(i + 0x70) = zmm9
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_4 = &r10_1[sx.q((temp1_1 - temp0_3) s>> 1) * 8]
            
            if (rcx_4 != r10_1)
                zmm2 = *rcx_4
                zmm3 = *(rcx_4 + 0x10)
                zmm4_1 = *(rcx_4 + 0x20)
                zmm5_1 = *(rcx_4 + 0x30)
                zmm6 = *(rcx_4 + 0x40)
                zmm7 = *(rcx_4 + 0x50)
                zmm8 = *(rcx_4 + 0x60)
                zmm9 = *(rcx_4 + 0x70)
                *rcx_4 = *r10_1
                *(rcx_4 + 0x10) = r10_1[1]
                *(rcx_4 + 0x20) = r10_1[2]
                *(rcx_4 + 0x30) = r10_1[3]
                *(rcx_4 + 0x40) = r10_1[4]
                *(rcx_4 + 0x50) = r10_1[5]
                *(rcx_4 + 0x60) = r10_1[6]
                *(rcx_4 + 0x70) = r10_1[7]
                *r10_1 = zmm2
                r10_1[1] = zmm3
                r10_1[2] = zmm4_1
                r10_1[3] = zmm5_1
                r10_1[4] = zmm6
                r10_1[5] = zmm7
                r10_1[6] = zmm8
                r10_1[7] = zmm9
            
            uint128_t* r8 = i + 0x80
            uint128_t* rdx_1 = r10_1
            
            while (true)
                rdx_1 -= -0x80
                
                if (rdx_1 u<= i)
                    int64_t rax_14 = *(r10_1 + 0x68)
                    int64_t temp2_1 = *(rdx_1 + 0x68)
                    
                    if (rax_14 != temp2_1)
                        rax_14.b = rax_14 u> temp2_1
                    else
                        rax_14.b = rdx_1[7].q u< r10_1[7].q
                    
                    if (rax_14.b == 0)
                        continue
                
                int64_t rax_15
                
                do
                    r8 = &r8[-8]
                    
                    if (r8 u<= r10_1)
                        break
                    
                    rax_15 = *(r8 + 0x68)
                    int64_t temp4_1 = *(r10_1 + 0x68)
                    
                    if (rax_15 != temp4_1)
                        rax_15.b = rax_15 u> temp4_1
                    else
                        rax_15.b = r10_1[7].q u< r8[7].q
                while (rax_15.b == 0)
                
                if (rdx_1 u> r8)
                    break
                
                if (rdx_1 != r8)
                    zmm2 = *rdx_1
                    zmm3 = rdx_1[1]
                    zmm4_1 = rdx_1[2]
                    zmm5_1 = rdx_1[3]
                    zmm6 = rdx_1[4]
                    zmm7 = rdx_1[5]
                    zmm8 = rdx_1[6]
                    zmm9 = rdx_1[7]
                    *rdx_1 = *r8
                    rdx_1[1] = r8[1]
                    rdx_1[2] = r8[2]
                    rdx_1[3] = r8[3]
                    rdx_1[4] = r8[4]
                    rdx_1[5] = r8[5]
                    rdx_1[6] = r8[6]
                    rdx_1[7] = r8[7]
                    *r8 = zmm2
                    r8[1] = zmm3
                    r8[2] = zmm4_1
                    r8[3] = zmm5_1
                    r8[4] = zmm6
                    r8[5] = zmm7
                    r8[6] = zmm8
                    r8[7] = zmm9
            
            if (r10_1 != r8)
                zmm2 = *r10_1
                zmm3 = r10_1[1]
                zmm4_1 = r10_1[2]
                zmm5_1 = r10_1[3]
                zmm6 = r10_1[4]
                zmm7 = r10_1[5]
                zmm8 = r10_1[6]
                zmm9 = r10_1[7]
                *r10_1 = *r8
                r10_1[1] = r8[1]
                r10_1[2] = r8[2]
                r10_1[3] = r8[3]
                r10_1[4] = r8[4]
                r10_1[5] = r8[5]
                r10_1[6] = r8[6]
                r10_1[7] = r8[7]
                *r8 = zmm2
                r8[1] = zmm3
                r8[2] = zmm4_1
                r8[3] = zmm5_1
                r8[4] = zmm6
                r8[5] = zmm7
                r8[6] = zmm8
                r8[7] = zmm9
            
            r11_1 -= 1
            
            if (((r8 - r10_1 - 0x80) & 0xffffffffffffff80) s< ((i - rdx_1) & 0xffffffffffffff80))
                if (i u> rdx_1)
                    *rsi_1 = rdx_1
                    rsi_1[1] = i
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r10_1[8] u>= r8)
                    break
                
                i = &r8[-8]
            else
                if (&r10_1[8] u< r8)
                    *rsi_1 = r10_1
                    rsi_1[1] = &r8[-8]
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i u<= rdx_1)
                    break
                
                r10_1 = rdx_1
            
            rax_10 = ((i - r10_1) s>> 7).d + 1
            
            if (r11_1 == 0)
                goto label_14196062f
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_368)
        break

__security_check_cookie(rax_2 ^ &var_3a8)
