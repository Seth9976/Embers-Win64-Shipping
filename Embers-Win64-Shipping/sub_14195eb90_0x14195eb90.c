// 函数: sub_14195eb90
// 地址: 0x14195eb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_398
int64_t rax_2 = __security_cookie ^ &var_398
int128_t zmm6
int128_t var_38_1 = zmm6
int128_t zmm7
int128_t var_48_1 = zmm7
int64_t var_358 = arg1
int64_t var_350_1 = arg1 - 0x60 + sx.q(arg2) * 0x60
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_348_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_340
memset(&var_340, 0, 0x2e8)
int64_t* r14_1 = &var_358

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x60).d + 1
    
    if (rbp_1 == 0)
    label_14195eef6:
        sub_14195d040(r11_1, rdx_3)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x60)
                    uint128_t* rax_29 = r11_1
                    void* rcx_14 = &r11_1[6]
                    
                    if (&r11_1[6] u<= i)
                        do
                            if ((*(rcx_14 + 0x4c)).d f< *(rax_29 + 0x4c))
                                rax_29 = rcx_14
                            
                            rcx_14 += 0x60
                        while (rcx_14 u<= i)
                    
                    if (rax_29 != i)
                        zmm2 = *rax_29
                        zmm3 = rax_29[1]
                        zmm4_1 = rax_29[2]
                        zmm5_1 = rax_29[3]
                        zmm6 = rax_29[4]
                        zmm7 = rax_29[5]
                        *rax_29 = *i
                        rax_29[1] = *(i + 0x10)
                        rax_29[2] = *(i + 0x20)
                        rax_29[3] = *(i + 0x30)
                        rax_29[4] = *(i + 0x40)
                        rax_29[5] = *(i + 0x50)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                        *(i + 0x30) = zmm5_1
                        *(i + 0x40) = zmm6
                        *(i + 0x50) = zmm7
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_16 = &r11_1[sx.q((temp1_1 - temp0_3) s>> 1) * 6]
            
            if (rax_16 != r11_1)
                zmm2 = *rax_16
                zmm3 = *(rax_16 + 0x10)
                zmm4_1 = *(rax_16 + 0x20)
                zmm5_1 = *(rax_16 + 0x30)
                zmm6 = *(rax_16 + 0x40)
                zmm7 = *(rax_16 + 0x50)
                *rax_16 = *r11_1
                *(rax_16 + 0x10) = r11_1[1]
                *(rax_16 + 0x20) = r11_1[2]
                *(rax_16 + 0x30) = r11_1[3]
                *(rax_16 + 0x40) = r11_1[4]
                *(rax_16 + 0x50) = r11_1[5]
                *r11_1 = zmm2
                r11_1[1] = zmm3
                r11_1[2] = zmm4_1
                r11_1[3] = zmm5_1
                r11_1[4] = zmm6
                r11_1[5] = zmm7
            
            uint128_t* r10_1 = i + 0x60
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 = &r9_1[6]
                
                if (r9_1 u<= i && (*(r11_1 + 0x4c)).d f<= *(r9_1 + 0x4c))
                    continue
                
                do
                    r10_1 = &r10_1[-6]
                    
                    if (r10_1 u<= r11_1)
                        break
                while ((*(r10_1 + 0x4c)).d f<= *(r11_1 + 0x4c))
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    zmm2 = *r9_1
                    zmm3 = r9_1[1]
                    zmm4_1 = r9_1[2]
                    zmm5_1 = r9_1[3]
                    zmm6 = r9_1[4]
                    zmm7 = r9_1[5]
                    *r9_1 = *r10_1
                    r9_1[1] = r10_1[1]
                    r9_1[2] = r10_1[2]
                    r9_1[3] = r10_1[3]
                    r9_1[4] = r10_1[4]
                    r9_1[5] = r10_1[5]
                    *r10_1 = zmm2
                    r10_1[1] = zmm3
                    r10_1[2] = zmm4_1
                    r10_1[3] = zmm5_1
                    r10_1[4] = zmm6
                    r10_1[5] = zmm7
            
            if (r11_1 != r10_1)
                zmm2 = *r11_1
                zmm3 = r11_1[1]
                zmm4_1 = r11_1[2]
                zmm5_1 = r11_1[3]
                zmm6 = r11_1[4]
                zmm7 = r11_1[5]
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2] = r10_1[2]
                r11_1[3] = r10_1[3]
                r11_1[4] = r10_1[4]
                r11_1[5] = r10_1[5]
                *r10_1 = zmm2
                r10_1[1] = zmm3
                r10_1[2] = zmm4_1
                r10_1[3] = zmm5_1
                r10_1[4] = zmm6
                r10_1[5] = zmm7
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x60) s/ 0x60 s< (i - r9_1) s/ 0x60)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (&r11_1[6] u>= r10_1)
                    break
                
                i = &r10_1[-6]
            else
                if (&r11_1[6] u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = &r10_1[-6]
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0x60).d + 1
            
            if (rbp_1 == 0)
                goto label_14195eef6
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_358)
        break

__security_check_cookie(rax_2 ^ &var_398)
