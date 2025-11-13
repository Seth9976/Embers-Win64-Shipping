// 函数: sub_140ae5b50
// 地址: 0x140ae5b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_368
int64_t rax_2 = __security_cookie ^ &var_368
int64_t var_328 = arg1
int64_t var_320_1 = (sx.q(arg2) << 5) + arg1 - 0x20
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_318_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_310
memset(&var_310, 0, 0x2e8)
int64_t* r14_1 = &var_328

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rsi_1 = (r14_1[2]).d
    uint128_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - r10_1) s>> 5).d + 1
    
    if (rsi_1 == 0)
    label_140ae5d7f:
        sub_140ae5920(r10_1, rax_10)
    else
        while (true)
            int128_t zmm3
            
            if (rax_10 s<= 8)
                for (; i u> r10_1; i -= 0x20)
                    void* rdx_3 = r10_1
                    void* rcx_14 = &r10_1[2]
                    
                    if (&r10_1[2] u<= i)
                        do
                            int64_t rax_27 = *(rcx_14 + 0x10)
                            int64_t r9_3 = *(rdx_3 + 0x10)
                            bool c_2 = rax_27 u< r9_3
                            
                            if (rax_27 == r9_3)
                                c_2 = *(rcx_14 + 0x18) u< *(rdx_3 + 0x18)
                            
                            void* rax_29 = rcx_14
                            
                            if (c_2 == 0)
                                rax_29 = rdx_3
                            
                            rcx_14 += 0x20
                            rdx_3 = rax_29
                        while (rcx_14 u<= i)
                    
                    if (rdx_3 != i)
                        zmm2 = *rdx_3
                        zmm3 = *(rdx_3 + 0x10)
                        *rdx_3 = *i
                        *(rdx_3 + 0x10) = *(i + 0x10)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_4 = &r10_1[sx.q((temp1_1 - temp0_3) s>> 1) * 2]
            
            if (rcx_4 != r10_1)
                zmm2 = *rcx_4
                zmm3 = *(rcx_4 + 0x10)
                *rcx_4 = *r10_1
                *(rcx_4 + 0x10) = r10_1[1]
                *r10_1 = zmm2
                r10_1[1] = zmm3
            
            uint128_t* r8 = i + 0x20
            uint128_t* rdx_1 = r10_1
            
            while (true)
                rdx_1 = &rdx_1[2]
                
                if (rdx_1 u<= i)
                    int64_t rax_14 = rdx_1[1].q
                    int64_t r9_1 = r10_1[1].q
                    bool c_1 = rax_14 u< r9_1
                    
                    if (rax_14 == r9_1)
                        c_1 = *(rdx_1 + 0x18) u< *(r10_1 + 0x18)
                    
                    if (c_1 == 0)
                        continue
                
                bool i_1
                
                do
                    r8 = &r8[-2]
                    
                    if (r8 u<= r10_1)
                        break
                    
                    int64_t rax_16 = r10_1[1].q
                    int64_t r9_2 = r8[1].q
                    i_1 = rax_16 u< r9_2
                    
                    if (rax_16 == r9_2)
                        i_1 = *(r10_1 + 0x18) u< *(r8 + 0x18)
                while (i_1 == 0)
                
                if (rdx_1 u> r8)
                    break
                
                if (rdx_1 != r8)
                    zmm2 = *rdx_1
                    zmm3 = rdx_1[1]
                    *rdx_1 = *r8
                    rdx_1[1] = r8[1]
                    *r8 = zmm2
                    r8[1] = zmm3
            
            if (r10_1 != r8)
                zmm2 = *r10_1
                zmm3 = r10_1[1]
                *r10_1 = *r8
                r10_1[1] = r8[1]
                *r8 = zmm2
                r8[1] = zmm3
            
            rsi_1 -= 1
            
            if (((r8 - r10_1 - 0x20) & 0xffffffffffffffe0) s< ((i - rdx_1) & 0xffffffffffffffe0))
                if (i u> rdx_1)
                    *r14_1 = rdx_1
                    r14_1[1] = i
                    r14_1[2].d = rsi_1
                    r14_1 = &r14_1[3]
                
                if (&r10_1[2] u>= r8)
                    break
                
                i = &r8[-2]
            else
                if (&r10_1[2] u< r8)
                    *r14_1 = r10_1
                    r14_1[1] = &r8[-2]
                    r14_1[2].d = rsi_1
                    r14_1 = &r14_1[3]
                
                if (i u<= rdx_1)
                    break
                
                r10_1 = rdx_1
            
            rax_10 = ((i - r10_1) s>> 5).d + 1
            
            if (rsi_1 == 0)
                goto label_140ae5d7f
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
