// 函数: sub_142046340
// 地址: 0x142046340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_368
int64_t rax_2 = __security_cookie ^ &var_368
int64_t var_328 = arg1
int64_t var_320_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_318_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_310
memset(&var_310, 0, 0x2e8)
int64_t* rsi_1 = &var_328

while (true)
    uint128_t zmm2 = *rsi_1
    int32_t r11_1 = rsi_1[2].d
    int64_t* r10_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r10_1) s>> 3).d + 1
    
    if (r11_1 == 0)
    label_142046520:
        sub_1420458c0(r10_1, rax_8)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_8 s<= 8)
                for (; i u> r10_1; i -= 8)
                    int32_t* rax_20 = r10_1
                    int32_t* rcx_11 = &r10_1[1]
                    
                    if (&r10_1[1] u<= i)
                        do
                            if ((*rax_20).d f< *rcx_11)
                                rax_20 = rcx_11
                            
                            rcx_11 = &rcx_11[2]
                        while (rcx_11 u<= i)
                    
                    if (rax_20 != i)
                        zmm1 = zx.o(*rax_20)
                        *rax_20 = *i
                        *i = zmm1.q
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* rcx_3 = &r10_1[sx.q(rax_8 s>> 1)]
            
            if (rcx_3 != r10_1)
                zmm1 = zx.o(*rcx_3)
                *rcx_3 = *r10_1
                *r10_1 = zmm1.q
            
            uint64_t* r8 = i + 8
            int64_t* rdx = r10_1
            
            while (true)
                rdx = &rdx[1]
                
                if (rdx u<= i && (*rdx).d f<= *r10_1)
                    continue
                
                do
                    r8 = &r8[-1]
                    
                    if (r8 u<= r10_1)
                        break
                while ((*r10_1).d f<= *r8)
                
                if (rdx u> r8)
                    break
                
                if (rdx != r8)
                    zmm1 = zx.o(*rdx)
                    *rdx = *r8
                    *r8 = zmm1.q
            
            if (r10_1 != r8)
                zmm1 = zx.o(*r10_1)
                *r10_1 = *r8
                *r8 = zmm1.q
            
            r11_1 -= 1
            
            if (((r8 - r10_1 - 8) & 0xfffffffffffffff8) s< ((i - rdx) & 0xfffffffffffffff8))
                if (i u> rdx)
                    *rsi_1 = rdx
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
                
                if (i u<= rdx)
                    break
                
                r10_1 = rdx
            
            rax_8 = ((i - r10_1) s>> 3).d + 1
            
            if (r11_1 == 0)
                goto label_142046520
    
    rsi_1 -= 0x18
    
    if (rsi_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
