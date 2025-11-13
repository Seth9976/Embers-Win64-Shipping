// 函数: sub_14239e6f0
// 地址: 0x14239e6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0x30 + sx.q(arg2) * 0x30
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x30).d + 1
    
    if (rbp_1 == 0)
    label_14239e9be:
        sub_14239dfd0(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm0_2
            int128_t zmm3
            int128_t zmm4_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x30)
                    void* rdx_12 = r11_1
                    void* rcx_14 = &r11_1[3]
                    
                    if (&r11_1[3] u<= i)
                        do
                            int64_t r8_6 = *rcx_14
                            int64_t temp3_1 = *rdx_12
                            bool c_3 = temp3_1 u< r8_6
                            
                            if (temp3_1 == r8_6)
                                zmm0_2 = *(rdx_12 + 0x24)
                                float temp6_1 = *(rcx_14 + 0x24)
                                zmm0_2.d f- temp6_1
                                c_3 = zmm0_2.d f< temp6_1
                            
                            r8_6.b = c_3
                            void* rax_31 = rcx_14
                            
                            if (r8_6.b == 0)
                                rax_31 = rdx_12
                            
                            rcx_14 += 0x30
                            rdx_12 = rax_31
                        while (rcx_14 u<= i)
                    
                    if (rdx_12 != i)
                        zmm2 = *rdx_12
                        zmm3 = *(rdx_12 + 0x10)
                        zmm4_1 = *(rdx_12 + 0x20)
                        *rdx_12 = *i
                        *(rdx_12 + 0x10) = *(i + 0x10)
                        *(rdx_12 + 0x20) = *(i + 0x20)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_16 = &r11_1[sx.q((temp1_1 - temp0_3) s>> 1) * 3]
            
            if (rax_16 != r11_1)
                zmm2 = *rax_16
                zmm3 = *(rax_16 + 0x10)
                zmm4_1 = *(rax_16 + 0x20)
                *rax_16 = *r11_1
                *(rax_16 + 0x10) = r11_1[1]
                *(rax_16 + 0x20) = r11_1[2]
                *r11_1 = zmm2
                r11_1[1] = zmm3
                r11_1[2] = zmm4_1
            
            uint128_t* r10_1 = i + 0x30
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 = &r9_1[3]
                
                if (r9_1 u<= i)
                    int64_t rax_17 = *r11_1
                    int64_t temp2_1 = *r9_1
                    bool c_1 = rax_17 u< temp2_1
                    
                    if (rax_17 == temp2_1)
                        zmm0_2 = *(r11_1 + 0x24)
                        float temp5_1 = *(r9_1 + 0x24)
                        zmm0_2.d f- temp5_1
                        c_1 = zmm0_2.d f< temp5_1
                    
                    rax_17.b = c_1
                    
                    if (rax_17.b == 0)
                        continue
                
                int64_t rax_18
                
                do
                    r10_1 = &r10_1[-3]
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    rax_18 = *r10_1
                    int64_t temp4_1 = *r11_1
                    bool c_2 = rax_18 u< temp4_1
                    
                    if (rax_18 == temp4_1)
                        zmm0_2 = *(r10_1 + 0x24)
                        float temp7_1 = *(r11_1 + 0x24)
                        zmm0_2.d f- temp7_1
                        c_2 = zmm0_2.d f< temp7_1
                    
                    rax_18.b = c_2
                while (rax_18.b == 0)
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    zmm2 = *r9_1
                    zmm3 = r9_1[1]
                    zmm4_1 = r9_1[2]
                    *r9_1 = *r10_1
                    r9_1[1] = r10_1[1]
                    r9_1[2] = r10_1[2]
                    *r10_1 = zmm2
                    r10_1[1] = zmm3
                    r10_1[2] = zmm4_1
            
            if (r11_1 != r10_1)
                zmm2 = *r11_1
                zmm3 = r11_1[1]
                zmm4_1 = r11_1[2]
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2] = r10_1[2]
                *r10_1 = zmm2
                r10_1[1] = zmm3
                r10_1[2] = zmm4_1
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x30) s/ 0x30 s< (i - r9_1) s/ 0x30)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r11_1[3] u>= r10_1)
                    break
                
                i = &r10_1[-3]
            else
                if (&r11_1[3] u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = &r10_1[-3]
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0x30).d + 1
            
            if (rbp_1 == 0)
                goto label_14239e9be
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
