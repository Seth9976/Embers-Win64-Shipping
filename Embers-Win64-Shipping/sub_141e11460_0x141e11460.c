// 函数: sub_141e11460
// 地址: 0x141e11460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 - 0xc + sx.q(arg2) * 0xc
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r14_1 = &var_338

while (true)
    uint128_t zmm2 = *r14_1
    int32_t rbp_1 = r14_1[2].d
    int64_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0xc).d + 1
    
    if (rbp_1 == 0)
    label_141e116c0:
        sub_141e10f70(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0xc)
                    void* rdx_13 = r11_1
                    void* rax_29 = r11_1 + 0xc
                    
                    if (r11_1 + 0xc u<= i)
                        do
                            if ((*(rdx_13 + 4)).d f< *(rax_29 + 4))
                                rdx_13 = rax_29
                            
                            rax_29 += 0xc
                        while (rax_29 u<= i)
                    
                    if (rdx_13 != i)
                        zmm1 = zx.o(*rdx_13)
                        int32_t rcx_18 = *(rdx_13 + 8)
                        *rdx_13 = *i
                        *(rdx_13 + 8) = *(i + 8)
                        *i = zmm1.q
                        *(i + 8) = rcx_18
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            int64_t* rdx_5 = r11_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0xc
            
            if (rdx_5 != r11_1)
                zmm1 = zx.o(*rdx_5)
                int32_t rcx_5 = rdx_5[1].d
                *rdx_5 = *r11_1
                rdx_5[1].d = r11_1[1].d
                *r11_1 = zmm1.q
                r11_1[1].d = rcx_5
            
            uint64_t* r10_1 = i + 0xc
            int64_t* r9_1 = r11_1
            
            while (true)
                r9_1 += 0xc
                
                if (r9_1 u<= i && (*(r9_1 + 4)).d f<= *(r11_1 + 4))
                    continue
                
                do
                    r10_1 -= 0xc
                    
                    if (r10_1 u<= r11_1)
                        break
                while ((*(r11_1 + 4)).d f<= *(r10_1 + 4))
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    zmm1 = zx.o(*r9_1)
                    int32_t rcx_6 = r9_1[1].d
                    *r9_1 = *r10_1
                    r9_1[1].d = r10_1[1].d
                    *r10_1 = zmm1.q
                    r10_1[1].d = rcx_6
            
            if (r11_1 != r10_1)
                zmm1 = zx.o(*r11_1)
                int32_t rcx_7 = r11_1[1].d
                *r11_1 = *r10_1
                r11_1[1].d = r10_1[1].d
                *r10_1 = zmm1.q
                r10_1[1].d = rcx_7
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0xc) s/ 0xc s< (i - r9_1) s/ 0xc)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0xc u>= r10_1)
                    break
                
                i = r10_1 - 0xc
            else
                if (r11_1 + 0xc u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0xc
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0xc).d + 1
            
            if (rbp_1 == 0)
                goto label_141e116c0
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
