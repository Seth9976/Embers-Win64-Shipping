// 函数: sub_141e37480
// 地址: 0x141e37480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_368
int64_t rax_2 = __security_cookie ^ &var_368
int64_t var_328 = arg1
int64_t var_320_1 = (sx.q(arg2) << 6) + arg1 - 0x40
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
    int32_t rax_10 = ((i - r10_1) s>> 6).d + 1
    
    if (r11_1 == 0)
    label_141e37701:
        sub_141e362b0(r10_1, rax_10)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rax_10 s<= 8)
                for (; i u> r10_1; i -= 0x40)
                    uint128_t* rax_23 = r10_1
                    void* rcx_12 = &r10_1[4]
                    
                    if (&r10_1[4] u<= i)
                        do
                            if ((*(rcx_12 + 0x10)).d f< rax_23[1].d)
                                rax_23 = rcx_12
                            
                            rcx_12 += 0x40
                        while (rcx_12 u<= i)
                    
                    if (rax_23 != i)
                        zmm2 = *rax_23
                        zmm3 = rax_23[1]
                        zmm4_1 = rax_23[2]
                        zmm5_1 = rax_23[3]
                        *rax_23 = *i
                        rax_23[1] = *(i + 0x10)
                        rax_23[2] = *(i + 0x20)
                        rax_23[3] = *(i + 0x30)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                        *(i + 0x30) = zmm5_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_4 = &r10_1[sx.q((temp1_1 - temp0_3) s>> 1) * 4]
            
            if (rcx_4 != r10_1)
                zmm2 = *rcx_4
                zmm3 = *(rcx_4 + 0x10)
                zmm4_1 = *(rcx_4 + 0x20)
                zmm5_1 = *(rcx_4 + 0x30)
                *rcx_4 = *r10_1
                *(rcx_4 + 0x10) = r10_1[1]
                *(rcx_4 + 0x20) = r10_1[2]
                *(rcx_4 + 0x30) = r10_1[3]
                *r10_1 = zmm2
                r10_1[1] = zmm3
                r10_1[2] = zmm4_1
                r10_1[3] = zmm5_1
            
            uint128_t* r8 = i + 0x40
            uint128_t* rdx_1 = r10_1
            
            while (true)
                rdx_1 = &rdx_1[4]
                
                if (rdx_1 u<= i && r10_1[1].d.d f<= rdx_1[1].d)
                    continue
                
                do
                    r8 = &r8[-4]
                    
                    if (r8 u<= r10_1)
                        break
                while (r8[1].d.d f<= r10_1[1].d)
                
                if (rdx_1 u> r8)
                    break
                
                if (rdx_1 != r8)
                    zmm2 = *rdx_1
                    zmm3 = rdx_1[1]
                    zmm4_1 = rdx_1[2]
                    zmm5_1 = rdx_1[3]
                    *rdx_1 = *r8
                    rdx_1[1] = r8[1]
                    rdx_1[2] = r8[2]
                    rdx_1[3] = r8[3]
                    *r8 = zmm2
                    r8[1] = zmm3
                    r8[2] = zmm4_1
                    r8[3] = zmm5_1
            
            if (r10_1 != r8)
                zmm2 = *r10_1
                zmm3 = r10_1[1]
                zmm4_1 = r10_1[2]
                zmm5_1 = r10_1[3]
                *r10_1 = *r8
                r10_1[1] = r8[1]
                r10_1[2] = r8[2]
                r10_1[3] = r8[3]
                *r8 = zmm2
                r8[1] = zmm3
                r8[2] = zmm4_1
                r8[3] = zmm5_1
            
            r11_1 -= 1
            
            if (((r8 - r10_1 - 0x40) & 0xffffffffffffffc0) s< ((i - rdx_1) & 0xffffffffffffffc0))
                if (i u> rdx_1)
                    *rsi_1 = rdx_1
                    rsi_1[1] = i
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (&r10_1[4] u>= r8)
                    break
                
                i = &r8[-4]
            else
                if (&r10_1[4] u< r8)
                    *rsi_1 = r10_1
                    rsi_1[1] = &r8[-4]
                    rsi_1[2].d = r11_1
                    rsi_1 = &rsi_1[3]
                
                if (i u<= rdx_1)
                    break
                
                r10_1 = rdx_1
            
            rax_10 = ((i - r10_1) s>> 6).d + 1
            
            if (r11_1 == 0)
                goto label_141e37701
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
