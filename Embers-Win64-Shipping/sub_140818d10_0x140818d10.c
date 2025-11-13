// 函数: sub_140818d10
// 地址: 0x140818d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = (sx.q(arg2) << 5) + arg1 - 0x20
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r15_1 = &var_338

while (true)
    uint128_t zmm2 = *r15_1
    uint32_t r14_1 = (r15_1[2]).d
    uint128_t* rsi_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - rsi_1) s>> 5).d + 1
    
    if (r14_1 == 0)
    label_140818f35:
        sub_140818760(rsi_1, rax_10, zx.q(arg3), arg4)
    else
        while (true)
            int128_t zmm3
            
            if (rax_10 s<= 8)
                for (; i u> rsi_1; i -= 0x20)
                    int32_t* r10_2 = rsi_1
                    int32_t* r11_2 = &rsi_1[2]
                    
                    if (&rsi_1[2] u<= i)
                        do
                            if (sub_14081dbf0(arg4, r10_2, r11_2) != 0)
                                r10_2 = r11_2
                            
                            r11_2 = &r11_2[8]
                        while (r11_2 u<= i)
                    
                    if (r10_2 != i)
                        zmm2 = *r10_2
                        zmm3 = *(r10_2 + 0x10)
                        *r10_2 = *i
                        *(r10_2 + 0x10) = *(i + 0x10)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_4 = &rsi_1[sx.q((temp1_1 - temp0_3) s>> 1) * 2]
            
            if (rcx_4 != rsi_1)
                zmm2 = *rcx_4
                zmm3 = *(rcx_4 + 0x10)
                *rcx_4 = *rsi_1
                *(rcx_4 + 0x10) = rsi_1[1]
                *rsi_1 = zmm2
                rsi_1[1] = zmm3
            
            uint128_t* r10_1 = rsi_1
            uint128_t* r11_1 = i + 0x20
            
            while (true)
                r10_1 = &r10_1[2]
                
                if (r10_1 u<= i && sub_14081dbf0(arg4, rsi_1, r10_1) == 0)
                    continue
                
                char i_1
                
                do
                    r11_1 = &r11_1[-2]
                    
                    if (r11_1 u<= rsi_1)
                        break
                    
                    i_1 = sub_14081dbf0(arg4, r11_1, rsi_1)
                while (i_1 == 0)
                
                if (r10_1 u> r11_1)
                    break
                
                if (r10_1 != r11_1)
                    zmm2 = *r10_1
                    zmm3 = r10_1[1]
                    *r10_1 = *r11_1
                    r10_1[1] = r11_1[1]
                    *r11_1 = zmm2
                    r11_1[1] = zmm3
            
            if (rsi_1 != r11_1)
                zmm2 = *rsi_1
                zmm3 = rsi_1[1]
                *rsi_1 = *r11_1
                rsi_1[1] = r11_1[1]
                *r11_1 = zmm2
                r11_1[1] = zmm3
            
            r14_1 -= 1
            
            if (((r11_1 - rsi_1 - 0x20) & 0xffffffffffffffe0) s< ((i - r10_1) & 0xffffffffffffffe0))
                if (i u> r10_1)
                    *r15_1 = r10_1
                    r15_1[1] = i
                    r15_1[2].d = r14_1
                    r15_1 = &r15_1[3]
                
                if (&rsi_1[2] u>= r11_1)
                    break
                
                i = &r11_1[-2]
            else
                if (&rsi_1[2] u< r11_1)
                    *r15_1 = rsi_1
                    r15_1[1] = &r11_1[-2]
                    r15_1[2].d = r14_1
                    r15_1 = &r15_1[3]
                
                if (i u<= r10_1)
                    break
                
                rsi_1 = r10_1
            
            rax_10 = ((i - rsi_1) s>> 5).d + 1
            
            if (r14_1 == 0)
                goto label_140818f35
    
    r15_1 -= 0x18
    
    if (r15_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
