// 函数: sub_141e8e910
// 地址: 0x141e8e910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3a8
int64_t rax_2 = __security_cookie ^ &var_3a8
int128_t zmm6
int128_t var_38_1 = zmm6
int128_t zmm7
int128_t var_48_1 = zmm7
int128_t zmm8
int128_t var_58_1 = zmm8
int64_t var_368 = arg1
int64_t var_360_1 = arg1 - 0x70 + sx.q(arg2) * 0x70
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_358_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_350
memset(&var_350, 0, 0x2e8)
int64_t* r14_1 = &var_368

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x70).d + 1
    
    if (rbp_1 == 0)
    label_141e8ecad:
        sub_141e8df10(r11_1, rdx_3)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x70)
                    uint128_t* rax_28 = r11_1
                    void* rcx_14 = &r11_1[7]
                    
                    if (&r11_1[7] u<= i)
                        do
                            if ((*(rcx_14 + 0x10)).d f< rax_28[1].d)
                                rax_28 = rcx_14
                            
                            rcx_14 += 0x70
                        while (rcx_14 u<= i)
                    
                    if (rax_28 != i)
                        zmm2 = *rax_28
                        zmm3 = rax_28[1]
                        zmm4_1 = rax_28[2]
                        zmm5_1 = rax_28[3]
                        zmm6 = rax_28[4]
                        zmm7 = rax_28[5]
                        zmm8 = rax_28[6]
                        *rax_28 = *i
                        rax_28[1] = *(i + 0x10)
                        rax_28[2] = *(i + 0x20)
                        rax_28[3] = *(i + 0x30)
                        rax_28[4] = *(i + 0x40)
                        rax_28[5] = *(i + 0x50)
                        rax_28[6] = *(i + 0x60)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                        *(i + 0x30) = zmm5_1
                        *(i + 0x40) = zmm6
                        *(i + 0x50) = zmm7
                        *(i + 0x60) = zmm8
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_15 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x70 + r11_1
            
            if (rax_15 != r11_1)
                zmm2 = *rax_15
                zmm3 = *(rax_15 + 0x10)
                zmm4_1 = *(rax_15 + 0x20)
                zmm5_1 = *(rax_15 + 0x30)
                zmm6 = *(rax_15 + 0x40)
                zmm7 = *(rax_15 + 0x50)
                zmm8 = *(rax_15 + 0x60)
                *rax_15 = *r11_1
                *(rax_15 + 0x10) = r11_1[1]
                *(rax_15 + 0x20) = r11_1[2]
                *(rax_15 + 0x30) = r11_1[3]
                *(rax_15 + 0x40) = r11_1[4]
                *(rax_15 + 0x50) = r11_1[5]
                *(rax_15 + 0x60) = r11_1[6]
                *r11_1 = zmm2
                r11_1[1] = zmm3
                r11_1[2] = zmm4_1
                r11_1[3] = zmm5_1
                r11_1[4] = zmm6
                r11_1[5] = zmm7
                r11_1[6] = zmm8
            
            uint128_t* r10_1 = i + 0x70
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 = &r9_1[7]
                
                if (r9_1 u<= i && r9_1[1].d.d f>= r11_1[1].d)
                    continue
                
                do
                    r10_1 = &r10_1[-7]
                    
                    if (r10_1 u<= r11_1)
                        break
                while (r11_1[1].d.d f>= r10_1[1].d)
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    zmm2 = *r9_1
                    zmm3 = r9_1[1]
                    zmm4_1 = r9_1[2]
                    zmm5_1 = r9_1[3]
                    zmm6 = r9_1[4]
                    zmm7 = r9_1[5]
                    zmm8 = r9_1[6]
                    *r9_1 = *r10_1
                    r9_1[1] = r10_1[1]
                    r9_1[2] = r10_1[2]
                    r9_1[3] = r10_1[3]
                    r9_1[4] = r10_1[4]
                    r9_1[5] = r10_1[5]
                    r9_1[6] = r10_1[6]
                    *r10_1 = zmm2
                    r10_1[1] = zmm3
                    r10_1[2] = zmm4_1
                    r10_1[3] = zmm5_1
                    r10_1[4] = zmm6
                    r10_1[5] = zmm7
                    r10_1[6] = zmm8
            
            if (r11_1 != r10_1)
                zmm2 = *r11_1
                zmm3 = r11_1[1]
                zmm4_1 = r11_1[2]
                zmm5_1 = r11_1[3]
                zmm6 = r11_1[4]
                zmm7 = r11_1[5]
                zmm8 = r11_1[6]
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2] = r10_1[2]
                r11_1[3] = r10_1[3]
                r11_1[4] = r10_1[4]
                r11_1[5] = r10_1[5]
                r11_1[6] = r10_1[6]
                *r10_1 = zmm2
                r10_1[1] = zmm3
                r10_1[2] = zmm4_1
                r10_1[3] = zmm5_1
                r10_1[4] = zmm6
                r10_1[5] = zmm7
                r10_1[6] = zmm8
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x70) s/ 0x70 s< (i - r9_1) s/ 0x70)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r11_1[7] u>= r10_1)
                    break
                
                i = &r10_1[-7]
            else
                if (&r11_1[7] u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = &r10_1[-7]
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0x70).d + 1
            
            if (rbp_1 == 0)
                goto label_141e8ecad
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_368)
        break

__security_check_cookie(rax_2 ^ &var_3a8)
