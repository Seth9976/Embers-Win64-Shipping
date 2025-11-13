// 函数: sub_1405ddf40
// 地址: 0x1405ddf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r13_1 = &var_348

while (true)
    uint128_t zmm2 = *r13_1
    int32_t rbp_1 = (r13_1[2]).d
    int64_t* r15_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r15_1) s>> 3).d + 1
    
    if (rbp_1 == 0)
    label_1405de1ab:
        sub_1405ddcc0(r15_1, rax_8)
    else
        while (true)
            if (rax_8 s<= 8)
                for (; i u> r15_1; i -= 8)
                    int64_t* r14_2 = r15_1
                    int64_t* rsi_2 = &r15_1[1]
                    
                    if (&r15_1[1] u<= i)
                        do
                            int64_t r8_5 = -1
                            wchar16* _String1_2 = *(*r14_2 + 0x18)
                            
                            do
                                r8_5 += 1
                            while (_String1_2[r8_5] != 0)
                            
                            wchar16* _String2_2 = *(*rsi_2 + 0x18)
                            int64_t rax_29 = -1
                            
                            do
                                rax_29 += 1
                            while (_String2_2[rax_29] != 0)
                            
                            bool cond:0_1 = r8_5.d s> rax_29.d
                            
                            if (r8_5.d == rax_29.d)
                                int32_t rax_30
                                rax_30, _String1_2 = wcsncmp(_String1_2, _String2_2, sx.q(r8_5.d))
                                cond:0_1 = rax_30 s> 0
                            
                            _String1_2.b = cond:0_1
                            int64_t* rax_31 = rsi_2
                            
                            if (_String1_2.b == 0)
                                rax_31 = r14_2
                            
                            rsi_2 = &rsi_2[1]
                            r14_2 = rax_31
                        while (rsi_2 u<= i)
                    
                    int64_t rcx_12 = *r14_2
                    *r14_2 = *i
                    *i = rcx_12
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r14_1 = i + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* rsi_1 = r15_1
            int64_t rcx_3 = r15_1[rdx]
            r15_1[rdx] = *r15_1
            *r15_1 = rcx_3
            void* r9_1
            
            while (true)
                rsi_1 = &rsi_1[1]
                
                if (rsi_1 u<= i)
                    int64_t r8 = -1
                    wchar16* _String1 = *(*r15_1 + 0x18)
                    
                    do
                        r8 += 1
                    while (_String1[r8] != 0)
                    
                    wchar16* _String2 = *(*rsi_1 + 0x18)
                    int64_t rax_13 = -1
                    
                    do
                        rax_13 += 1
                    while (_String2[rax_13] != 0)
                    
                    bool cond:1_1 = r8.d s> rax_13.d
                    
                    if (r8.d == rax_13.d)
                        cond:1_1 = wcsncmp(_String1, _String2, sx.q(r8.d)).d s> 0
                    
                    rax_13.b = cond:1_1
                    
                    if (rax_13.b == 0)
                        continue
                
                int64_t rax_15
                
                do
                    r9_1 = r14_1[-1]
                    r14_1 = &r14_1[-1]
                    
                    if (r14_1 u<= r15_1)
                        break
                    
                    wchar16* _String1_1 = *(r9_1 + 0x18)
                    int64_t r8_2 = -1
                    
                    do
                        r8_2 += 1
                    while (_String1_1[r8_2] != 0)
                    
                    wchar16* _String2_1 = *(*r15_1 + 0x18)
                    rax_15 = -1
                    
                    do
                        rax_15 += 1
                    while (_String2_1[rax_15] != 0)
                    
                    bool cond:2_1 = r8_2.d s> rax_15.d
                    
                    if (r8_2.d == rax_15.d)
                        rax_15 = wcsncmp(_String1_1, _String2_1, sx.q(r8_2.d))
                        r9_1 = *r14_1
                        cond:2_1 = rax_15.d s> 0
                    
                    rax_15.b = cond:2_1
                while (rax_15.b == 0)
                
                if (rsi_1 u> r14_1)
                    break
                
                int64_t rcx_4 = *rsi_1
                *rsi_1 = *r14_1
                *r14_1 = rcx_4
            
            int64_t rax_17 = *r15_1
            *r15_1 = r9_1
            *r14_1 = rax_17
            rbp_1 -= 1
            
            if (((r14_1 - r15_1 - 8) & 0xfffffffffffffff8) s< ((i - rsi_1) & 0xfffffffffffffff8))
                if (i u> rsi_1)
                    *r13_1 = rsi_1
                    r13_1[1] = i
                    r13_1[2].d = rbp_1
                    r13_1 = &r13_1[3]
                
                if (&r15_1[1] u>= r14_1)
                    break
                
                i = &r14_1[-1]
            else
                if (&r15_1[1] u< r14_1)
                    *r13_1 = r15_1
                    r13_1[1] = &r14_1[-1]
                    r13_1[2].d = rbp_1
                    r13_1 = &r13_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r15_1 = rsi_1
            
            rax_8 = ((i - r15_1) s>> 3).d + 1
            
            if (rbp_1 == 0)
                goto label_1405de1ab
    
    r13_1 -= 0x18
    
    if (r13_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
