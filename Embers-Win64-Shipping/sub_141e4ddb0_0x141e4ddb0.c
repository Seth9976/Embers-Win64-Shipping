// 函数: sub_141e4ddb0
// 地址: 0x141e4ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = arg1 - 0x48 + sx.q(arg2) * 0x48
int128_t zmm6
int128_t var_38_1 = zmm6
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r14_1 = &var_348

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x48).d + 1
    
    if (rbp_1 == 0)
    label_141e4e0dd:
        sub_141e4d3e0(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x48)
                    uint128_t* rax_26 = r11_1
                    void* rcx_16 = r11_1 + 0x48
                    
                    if (r11_1 + 0x48 u<= i)
                        do
                            if ((*(rcx_16 + 0x44)).d f< *(rax_26 + 0x44))
                                rax_26 = rcx_16
                            
                            rcx_16 += 0x48
                        while (rcx_16 u<= i)
                    
                    if (rax_26 != i)
                        zmm3 = *rax_26
                        zmm4_1 = rax_26[1]
                        zmm5_1 = rax_26[2]
                        zmm6 = rax_26[3]
                        zmm2 = zx.o(rax_26[4].q)
                        *rax_26 = *i
                        rax_26[1] = *(i + 0x10)
                        rax_26[2] = *(i + 0x20)
                        rax_26[3] = *(i + 0x30)
                        rax_26[4].q = *(i + 0x40)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm5_1
                        *(i + 0x30) = zmm6
                        *(i + 0x40) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = r11_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0x48
            
            if (rcx_5 != r11_1)
                zmm3 = *rcx_5
                zmm4_1 = *(rcx_5 + 0x10)
                zmm5_1 = *(rcx_5 + 0x20)
                zmm6 = *(rcx_5 + 0x30)
                zmm2 = zx.o(*(rcx_5 + 0x40))
                *rcx_5 = *r11_1
                *(rcx_5 + 0x10) = r11_1[1]
                *(rcx_5 + 0x20) = r11_1[2]
                *(rcx_5 + 0x30) = r11_1[3]
                *(rcx_5 + 0x40) = r11_1[4].q
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2] = zmm5_1
                r11_1[3] = zmm6
                r11_1[4].q = zmm2.q
            
            uint128_t* r10_1 = i + 0x48
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 += 0x48
                
                if (r9_1 u<= i && (*(r9_1 + 0x44)).d f>= *(r11_1 + 0x44))
                    continue
                
                do
                    r10_1 -= 0x48
                    
                    if (r10_1 u<= r11_1)
                        break
                while ((*(r11_1 + 0x44)).d f>= *(r10_1 + 0x44))
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    zmm3 = *r9_1
                    zmm4_1 = r9_1[1]
                    zmm5_1 = r9_1[2]
                    zmm6 = r9_1[3]
                    zmm2 = zx.o(r9_1[4].q)
                    *r9_1 = *r10_1
                    r9_1[1] = r10_1[1]
                    r9_1[2] = r10_1[2]
                    r9_1[3] = r10_1[3]
                    r9_1[4].q = r10_1[4].q
                    *r10_1 = zmm3
                    r10_1[1] = zmm4_1
                    r10_1[2] = zmm5_1
                    r10_1[3] = zmm6
                    r10_1[4].q = zmm2.q
            
            if (r11_1 != r10_1)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm5_1 = r11_1[2]
                zmm6 = r11_1[3]
                zmm2 = zx.o(r11_1[4].q)
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2] = r10_1[2]
                r11_1[3] = r10_1[3]
                r11_1[4].q = r10_1[4].q
                *r10_1 = zmm3
                r10_1[1] = zmm4_1
                r10_1[2] = zmm5_1
                r10_1[3] = zmm6
                r10_1[4].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x48) s/ 0x48 s< (i - r9_1) s/ 0x48)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x48 u>= r10_1)
                    break
                
                i = r10_1 - 0x48
            else
                if (r11_1 + 0x48 u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0x48
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0x48).d + 1
            
            if (rbp_1 == 0)
                goto label_141e4e0dd
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
