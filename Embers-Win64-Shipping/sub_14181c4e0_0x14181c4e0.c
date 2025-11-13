// 函数: sub_14181c4e0
// 地址: 0x14181c4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t r15_1 = sx.q(arg3)
int64_t var_340_1 = arg1 - 0x18 + sx.q(arg2) * 0x18
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
    int32_t rdx_3 = ((i - r11_1) s/ 0x18).d + 1
    
    if (rbp_1 == 0)
    label_14181c75b:
        sub_14181b0b0(r11_1, rdx_3, r15_1.d)
    else
        while (true)
            uint128_t zmm3
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x18)
                    void* r8_4 = r11_1
                    void* rdx_12 = r11_1 + 0x18
                    
                    if (r11_1 + 0x18 u<= i)
                        do
                            void* rcx_16 = rdx_12
                            
                            if (*(r15_1 + r8_4) u>= *(r15_1 + rdx_12))
                                rcx_16 = r8_4
                            
                            rdx_12 += 0x18
                            r8_4 = rcx_16
                        while (rdx_12 u<= i)
                    
                    if (r8_4 != i)
                        zmm3 = *r8_4
                        zmm2 = zx.o(*(r8_4 + 0x10))
                        *r8_4 = *i
                        *(r8_4 + 0x10) = *(i + 0x10)
                        *i = zmm3
                        *(i + 0x10) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = r11_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0x18
            
            if (rcx_5 != r11_1)
                zmm3 = *rcx_5
                zmm2 = zx.o(*(rcx_5 + 0x10))
                *rcx_5 = *r11_1
                *(rcx_5 + 0x10) = r11_1[1].q
                *r11_1 = zmm3
                r11_1[1].q = zmm2.q
            
            uint128_t* r10_1 = i + 0x18
            uint128_t* r9_2 = r11_1
            
            while (true)
                r9_2 += 0x18
                
                if (r9_2 u<= i && *(r15_1 + r11_1) u>= *(r15_1 + r9_2))
                    continue
                
                do
                    r10_1 -= 0x18
                    
                    if (r10_1 u<= r11_1)
                        break
                while (*(r15_1 + r10_1) u>= *(r15_1 + r11_1))
                
                if (r9_2 u> r10_1)
                    break
                
                if (r9_2 != r10_1)
                    zmm3 = *r9_2
                    zmm2 = zx.o(r9_2[1].q)
                    *r9_2 = *r10_1
                    r9_2[1].q = r10_1[1].q
                    *r10_1 = zmm3
                    r10_1[1].q = zmm2.q
            
            if (r11_1 != r10_1)
                zmm3 = *r11_1
                zmm2 = zx.o(r11_1[1].q)
                *r11_1 = *r10_1
                r11_1[1].q = r10_1[1].q
                *r10_1 = zmm3
                r10_1[1].q = zmm2.q
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x18) s/ 0x18 s< (i - r9_2) s/ 0x18)
                if (i u> r9_2)
                    *r14_1 = r9_2
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x18 u>= r10_1)
                    break
                
                i = r10_1 - 0x18
            else
                if (r11_1 + 0x18 u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0x18
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_2)
                    break
                
                r11_1 = r9_2
            
            rdx_3 = ((i - r11_1) s/ 0x18).d + 1
            
            if (rbp_1 == 0)
                goto label_14181c75b
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
