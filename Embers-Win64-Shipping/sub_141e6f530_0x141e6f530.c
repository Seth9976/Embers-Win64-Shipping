// 函数: sub_141e6f530
// 地址: 0x141e6f530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2))
int64_t var_330_1 = arg1 - 0x38 + sx.q(arg2) * 0x38
int64_t var_338 = arg1
float zmm0_1 = logf(zmm0.d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x38).d + 1
    
    if (rbp_1 == 0)
    label_141e6f814:
        sub_141e6eae0(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x38)
                    uint128_t* rax_28 = r11_1
                    void* rcx_14 = r11_1 + 0x38
                    
                    if (r11_1 + 0x38 u<= i)
                        do
                            if ((*(rcx_14 + 0x28)).d f< *(rax_28 + 0x28))
                                rax_28 = rcx_14
                            
                            rcx_14 += 0x38
                        while (rcx_14 u<= i)
                    
                    if (rax_28 != i)
                        zmm3 = *rax_28
                        zmm4_1 = rax_28[1]
                        zmm5_1 = rax_28[2]
                        zmm2 = zx.o(rax_28[3].q)
                        *rax_28 = *i
                        rax_28[1] = *(i + 0x10)
                        rax_28[2] = *(i + 0x20)
                        rax_28[3].q = *(i + 0x30)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm5_1
                        *(i + 0x30) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_15 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x38 + r11_1
            
            if (rax_15 != r11_1)
                zmm3 = *rax_15
                zmm4_1 = *(rax_15 + 0x10)
                zmm5_1 = *(rax_15 + 0x20)
                zmm2 = zx.o(*(rax_15 + 0x30))
                *rax_15 = *r11_1
                *(rax_15 + 0x10) = r11_1[1]
                *(rax_15 + 0x20) = r11_1[2]
                *(rax_15 + 0x30) = r11_1[3].q
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2] = zmm5_1
                r11_1[3].q = zmm2.q
            
            uint128_t* r10_1 = i + 0x38
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 += 0x38
                
                if (r9_1 u<= i && (*(r9_1 + 0x28)).d f>= *(r11_1 + 0x28))
                    continue
                
                do
                    r10_1 -= 0x38
                    
                    if (r10_1 u<= r11_1)
                        break
                while ((*(r11_1 + 0x28)).d f>= *(r10_1 + 0x28))
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    zmm3 = *r9_1
                    zmm4_1 = r9_1[1]
                    zmm5_1 = r9_1[2]
                    zmm2 = zx.o(r9_1[3].q)
                    *r9_1 = *r10_1
                    r9_1[1] = r10_1[1]
                    r9_1[2] = r10_1[2]
                    r9_1[3].q = r10_1[3].q
                    *r10_1 = zmm3
                    r10_1[1] = zmm4_1
                    r10_1[2] = zmm5_1
                    r10_1[3].q = zmm2.q
            
            if (r11_1 != r10_1)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm5_1 = r11_1[2]
                zmm2 = zx.o(r11_1[3].q)
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2] = r10_1[2]
                r11_1[3].q = r10_1[3].q
                *r10_1 = zmm3
                r10_1[1] = zmm4_1
                r10_1[2] = zmm5_1
                r10_1[3].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x38) s/ 0x38 s< (i - r9_1) s/ 0x38)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x38 u>= r10_1)
                    break
                
                i = r10_1 - 0x38
            else
                if (r11_1 + 0x38 u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0x38
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0x38).d + 1
            
            if (rbp_1 == 0)
                goto label_141e6f814
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
