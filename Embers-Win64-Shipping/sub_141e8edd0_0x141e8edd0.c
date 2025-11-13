// 函数: sub_141e8edd0
// 地址: 0x141e8edd0
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
    label_141e8f151:
        sub_141e8e1f0(r11_1, rdx_3, zx.q(arg3), arg4)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x48)
                    void* rdx_14 = r11_1
                    void* rcx_16 = r11_1 + 0x48
                    
                    if (r11_1 + 0x48 u<= i)
                        do
                            char r9_2 = *(rdx_14 + 0x44)
                            char r10_2 = *(rcx_16 + 0x44)
                            int64_t r8_1
                            
                            if (r9_2 == r10_2)
                                r8_1.b = *(rdx_14 + 0x18) u< *(rcx_16 + 0x18)
                            else
                                char rax_30 = (*arg4).b
                                r8_1.b = (rax_30 & r9_2) != 0
                                
                                if (r8_1.b == (rax_30 & r10_2) != 0)
                                    r8_1.b = r9_2 u< r10_2
                            
                            void* rax_32 = rcx_16
                            
                            if (r8_1.b == 0)
                                rax_32 = rdx_14
                            
                            rcx_16 += 0x48
                            rdx_14 = rax_32
                        while (rcx_16 u<= i)
                    
                    if (rdx_14 != i)
                        zmm3 = *rdx_14
                        zmm4_1 = *(rdx_14 + 0x10)
                        zmm5_1 = *(rdx_14 + 0x20)
                        zmm6 = *(rdx_14 + 0x30)
                        zmm2 = zx.o(*(rdx_14 + 0x40))
                        *rdx_14 = *i
                        *(rdx_14 + 0x10) = *(i + 0x10)
                        *(rdx_14 + 0x20) = *(i + 0x20)
                        *(rdx_14 + 0x30) = *(i + 0x30)
                        *(rdx_14 + 0x40) = *(i + 0x40)
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
            uint128_t* r9 = r11_1
            
            while (true)
                r9 += 0x48
                
                if (r9 u<= i)
                    char rdx_5 = *(r11_1 + 0x44)
                    char r8_2 = *(r9 + 0x44)
                    
                    if (rdx_5 == r8_2)
                        rcx_5.b = *(r11_1 + 0x18) u< *(r9 + 0x18)
                    else
                        char rax_14 = (*arg4).b
                        rcx_5.b = (rax_14 & rdx_5) != 0
                        
                        if (rcx_5.b == (rax_14 & r8_2) != 0)
                            rcx_5.b = rdx_5 u< r8_2
                    
                    if (rcx_5.b == 0)
                        continue
                
                do
                    r10_1 -= 0x48
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    char rdx_6 = *(r10_1 + 0x44)
                    char r8_3 = *(r11_1 + 0x44)
                    
                    if (rdx_6 == r8_3)
                        rcx_5.b = *(r10_1 + 0x18) u< *(r11_1 + 0x18)
                    else
                        char rax_16 = (*arg4).b
                        rcx_5.b = (rax_16 & rdx_6) != 0
                        
                        if (rcx_5.b == (rax_16 & r8_3) != 0)
                            rcx_5.b = rdx_6 u< r8_3
                while (rcx_5.b == 0)
                
                if (r9 u> r10_1)
                    break
                
                if (r9 != r10_1)
                    zmm3 = *r9
                    zmm4_1 = r9[1]
                    zmm5_1 = r9[2]
                    zmm6 = r9[3]
                    zmm2 = zx.o(r9[4].q)
                    *r9 = *r10_1
                    r9[1] = r10_1[1]
                    r9[2] = r10_1[2]
                    r9[3] = r10_1[3]
                    r9[4].q = r10_1[4].q
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
            
            if ((r10_1 - r11_1 - 0x48) s/ 0x48 s< (i - r9) s/ 0x48)
                if (i u> r9)
                    *r14_1 = r9
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
                
                if (i u<= r9)
                    break
                
                r11_1 = r9
            
            rdx_3 = ((i - r11_1) s/ 0x48).d + 1
            
            if (rbp_1 == 0)
                goto label_141e8f151
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
