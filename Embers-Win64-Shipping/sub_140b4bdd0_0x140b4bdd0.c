// 函数: sub_140b4bdd0
// 地址: 0x140b4bdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_368
int64_t rax_2 = __security_cookie ^ &var_368
int64_t var_328 = arg1
int64_t var_320_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_318_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_310
memset(&var_310, 0, 0x2e8)
int64_t* rsi_1 = &var_328

while (true)
    uint128_t zmm2 = *rsi_1
    uint32_t r11_1 = (rsi_1[2]).d
    uint128_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - r10_1) s>> 4).d + 1
    
    if (r11_1 == 0)
    label_140b4bfce:
        sub_140b4b860(r10_1, rax_10)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                for (; i u> r10_1; i -= 0x10)
                    uint128_t* rdx_3 = r10_1
                    uint128_t* rcx_12 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            uint64_t r8_2 = *rcx_12
                            int64_t temp3_1 = *rdx_3
                            bool c_3 = temp3_1 u< r8_2
                            
                            if (temp3_1 == r8_2)
                                r8_2 = zx.q(*(rcx_12 + 8))
                                int32_t temp6_1 = *(rdx_3 + 8)
                                c_3 = temp6_1 u< r8_2.d
                                
                                if (temp6_1 == r8_2.d)
                                    c_3 = *(rdx_3 + 0xc) u< *(rcx_12 + 0xc)
                            
                            r8_2.b = c_3
                            uint128_t* rax_26 = rcx_12
                            
                            if (r8_2.b == 0)
                                rax_26 = rdx_3
                            
                            rcx_12 = &rcx_12[1]
                            rdx_3 = rax_26
                        while (rcx_12 u<= i)
                    
                    if (rdx_3 != i)
                        zmm1 = *rdx_3
                        *rdx_3 = *i
                        *i = zmm1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_4 = &r10_1[sx.q((temp1_1 - temp0_3) s>> 1)]
            
            if (rcx_4 != r10_1)
                zmm1 = *rcx_4
                *rcx_4 = *r10_1
                *r10_1 = zmm1
            
            uint128_t* r8 = i + 0x10
            uint128_t* rdx_1 = r10_1
            
            while (true)
                rdx_1 = &rdx_1[1]
                
                if (rdx_1 u<= i)
                    uint64_t rax_14 = *r10_1
                    int64_t temp2_1 = *rdx_1
                    bool c_1 = rax_14 u< temp2_1
                    
                    if (rax_14 == temp2_1)
                        rax_14 = zx.q(*(r10_1 + 8))
                        int32_t temp5_1 = *(rdx_1 + 8)
                        c_1 = rax_14.d u< temp5_1
                        
                        if (rax_14.d == temp5_1)
                            c_1 = *(r10_1 + 0xc) u< *(rdx_1 + 0xc)
                    
                    rax_14.b = c_1
                    
                    if (rax_14.b == 0)
                        continue
                
                uint64_t rax_15
                
                do
                    r8 = &r8[-1]
                    
                    if (r8 u<= r10_1)
                        break
                    
                    rax_15 = *r8
                    int64_t temp4_1 = *r10_1
                    bool c_2 = rax_15 u< temp4_1
                    
                    if (rax_15 == temp4_1)
                        rax_15 = zx.q(*(r8 + 8))
                        int32_t temp7_1 = *(r10_1 + 8)
                        c_2 = rax_15.d u< temp7_1
                        
                        if (rax_15.d == temp7_1)
                            c_2 = *(r8 + 0xc) u< *(r10_1 + 0xc)
                    
                    rax_15.b = c_2
                while (rax_15.b == 0)
                
                if (rdx_1 u> r8)
                    break
                
                if (rdx_1 != r8)
                    zmm1 = *rdx_1
                    *rdx_1 = *r8
                    *r8 = zmm1
            
            if (r10_1 != r8)
                zmm1 = *r10_1
                *r10_1 = *r8
                *r8 = zmm1
            
            r11_1 -= 1
            
            if (((r8 - r10_1 - 0x10) & 0xfffffffffffffff0) s< ((i - rdx_1) & 0xfffffffffffffff0))
                if (i u> rdx_1)
                    *rsi_1 = rdx_1
                    rsi_1[1] = i
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r10_1[1] u>= r8)
                    break
                
                i = &r8[-1]
            else
                if (&r10_1[1] u< r8)
                    *rsi_1 = r10_1
                    rsi_1[1] = &r8[-1]
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i u<= rdx_1)
                    break
                
                r10_1 = rdx_1
            
            rax_10 = ((i - r10_1) s>> 4).d + 1
            
            if (r11_1 == 0)
                goto label_140b4bfce
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
