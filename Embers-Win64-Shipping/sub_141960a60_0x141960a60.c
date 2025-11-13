// 函数: sub_141960a60
// 地址: 0x141960a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_378
int64_t rax_2 = __security_cookie ^ &var_378
int64_t var_338 = arg1
int64_t var_330_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_328_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_320
memset(&var_320, 0, 0x2e8)
int64_t* r15_1 = &var_338

while (true)
    uint128_t zmm2 = *r15_1
    int32_t rsi_1 = r15_1[2].d
    int64_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r11_1) s>> 3).d + 1
    
    if (rsi_1 == 0)
    label_141960ca8:
        sub_14195e5d0(r11_1, rax_8, zx.q(arg3), arg4)
    else
        while (true)
            uint64_t zmm0_2
            uint128_t zmm1
            
            if (rax_8 s<= 8)
                for (; i u> r11_1; i -= 8)
                    void** r10_2 = r11_1
                    void** rdx_2 = &r11_1[1]
                    
                    if (&r11_1[1] u<= i)
                        int32_t rsi_2 = *arg4
                        
                        do
                            void* r8_3 = *rdx_2
                            void* r9_3 = *r10_2
                            bool c_3
                            
                            if (rsi_2 == 2)
                                c_3 = *(r8_3 + 0x34) u< *(r9_3 + 0x34)
                            else if (rsi_2 == 3)
                                c_3 = *(r8_3 + 0x38) u< *(r9_3 + 0x38)
                            else
                                zmm0_2 = *(r8_3 + 0x3c)
                                float temp7_1 = *(r9_3 + 0x3c)
                                zmm0_2.d f- temp7_1
                                c_3 = zmm0_2.d f< temp7_1
                            
                            int32_t rcx_16
                            rcx_16.b = c_3
                            void** rax_22 = rdx_2
                            
                            if (rcx_16.b == 0)
                                rax_22 = r10_2
                            
                            rdx_2 = &rdx_2[1]
                            r10_2 = rax_22
                        while (rdx_2 u<= i)
                    
                    if (r10_2 != i)
                        zmm1 = zx.o(*r10_2)
                        *r10_2 = *i
                        *i = zmm1.q
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* rcx_3 = &r11_1[sx.q(rax_8 s>> 1)]
            
            if (rcx_3 != r11_1)
                zmm1 = zx.o(*rcx_3)
                *rcx_3 = *r11_1
                *r11_1 = zmm1.q
            
            uint64_t* r10_1 = i + 8
            int64_t* rdx = r11_1
            
            while (true)
                rdx = &rdx[1]
                int64_t rax_10
                
                if (rdx u<= i)
                    int32_t rcx_4 = *arg4
                    void* r8 = *rdx
                    void* r9 = *r11_1
                    bool c_1
                    
                    if (rcx_4 == 2)
                        c_1 = *(r8 + 0x34) u< *(r9 + 0x34)
                    else if (rcx_4 == 3)
                        c_1 = *(r8 + 0x38) u< *(r9 + 0x38)
                    else
                        zmm0_2 = *(r8 + 0x3c)
                        float temp10_1 = *(r9 + 0x3c)
                        zmm0_2.d f- temp10_1
                        c_1 = zmm0_2.d f< temp10_1
                    
                    rax_10.b = c_1
                    
                    if (rax_10.b == 0)
                        continue
                
                do
                    r10_1 = &r10_1[-1]
                    
                    if (r10_1 u<= r11_1)
                        break
                    
                    int32_t rcx_6 = *arg4
                    void* r8_1 = *r11_1
                    uint64_t r9_1 = *r10_1
                    bool c_2
                    
                    if (rcx_6 == 2)
                        c_2 = *(r8_1 + 0x34) u< *(r9_1 + 0x34)
                    else if (rcx_6 == 3)
                        c_2 = *(r8_1 + 0x38) u< *(r9_1 + 0x38)
                    else
                        zmm0_2 = *(r8_1 + 0x3c)
                        float temp12_1 = *(r9_1 + 0x3c)
                        zmm0_2.d f- temp12_1
                        c_2 = zmm0_2.d f< temp12_1
                    
                    rax_10.b = c_2
                while (rax_10.b == 0)
                
                if (rdx u> r10_1)
                    break
                
                if (rdx != r10_1)
                    zmm1 = zx.o(*rdx)
                    *rdx = *r10_1
                    *r10_1 = zmm1.q
            
            if (r11_1 != r10_1)
                zmm1 = zx.o(*r11_1)
                *r11_1 = *r10_1
                *r10_1 = zmm1.q
            
            rsi_1 -= 1
            
            if (((r10_1 - r11_1 - 8) & 0xfffffffffffffff8) s< ((i - rdx) & 0xfffffffffffffff8))
                if (i u> rdx)
                    *r15_1 = rdx
                    r15_1[1] = i
                    r15_1[2].d = rsi_1
                    r15_1 = &r15_1[3]
                
                if (&r11_1[1] u>= r10_1)
                    break
                
                i = &r10_1[-1]
            else
                if (&r11_1[1] u< r10_1)
                    *r15_1 = r11_1
                    r15_1[1] = &r10_1[-1]
                    r15_1[2].d = rsi_1
                    r15_1 = &r15_1[3]
                
                if (i u<= rdx)
                    break
                
                r11_1 = rdx
            
            rax_8 = ((i - r11_1) s>> 3).d + 1
            
            if (rsi_1 == 0)
                goto label_141960ca8
    
    r15_1 -= 0x18
    
    if (r15_1 u< &var_338)
        break

__security_check_cookie(rax_2 ^ &var_378)
