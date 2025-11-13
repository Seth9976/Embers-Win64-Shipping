// 函数: sub_141e6f240
// 地址: 0x141e6f240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3a8
int64_t rax_2 = __security_cookie ^ &var_3a8
int64_t var_358 = arg1
int64_t var_350_1 = arg1 + (sx.q(arg2) << 3) - 8
int128_t zmm6
int128_t var_48_1 = zmm6
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_348_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_340
memset(&var_340, 0, 0x2e8)
int64_t* r13_1 = &var_358
int64_t* var_380_1 = &var_358

while (true)
    uint128_t zmm2 = *r13_1
    int32_t i = (r13_1[2]).d
    int64_t* rbp_1 = zmm2.q
    void* r12_1 = _mm_bsrli_si128(zmm2, 8).q
    int32_t i_1 = i
    int32_t rax_8 = ((r12_1 - rbp_1) s>> 3).d + 1
    
    if (i == 0)
    label_141e6f452:
        sub_141e6e920(rbp_1, rax_8)
    else
        while (true)
            if (rax_8 s<= 8)
                if (r12_1 u> rbp_1)
                    do
                        int64_t* r14_2 = rbp_1
                        int64_t* r15_2 = &rbp_1[1]
                        
                        if (&rbp_1[1] u<= r12_1)
                            do
                                int64_t* rsi_3 = *r15_2
                                int128_t zmm0_4 = sub_141e63220(*r14_2)
                                
                                if (sub_141e63220(rsi_3) f> zmm0_4.d)
                                    r14_2 = r15_2
                                
                                r15_2 = &r15_2[1]
                            while (r15_2 u<= r12_1)
                        
                        int64_t rcx_20 = *r14_2
                        *r14_2 = *r12_1
                        *r12_1 = rcx_20
                        r12_1 -= 8
                    while (r12_1 u> rbp_1)
                    
                    r13_1 = var_380_1
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r15_1 = r12_1 + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* r14_1 = rbp_1
            int64_t rcx_4 = rbp_1[rdx]
            rbp_1[rdx] = *rbp_1
            *rbp_1 = rcx_4
            int64_t rax_11
            
            while (true)
                r14_1 = &r14_1[1]
                
                if (r14_1 u<= r12_1 && sub_141e63220(*rbp_1).d f>= sub_141e63220(*r14_1))
                    continue
                
                int128_t zmm0_3
                
                do
                    r15_1 = &r15_1[-1]
                    
                    if (r15_1 u<= rbp_1)
                        break
                    
                    int64_t* rsi_2 = *rbp_1
                    zmm0_3 = sub_141e63220(*r15_1)
                    i = sub_141e63220(rsi_2)
                while (zmm0_3.d f>= i)
                rax_11 = *r15_1
                
                if (r14_1 u> r15_1)
                    break
                
                int64_t rcx_9 = *r14_1
                *r14_1 = rax_11
                *r15_1 = rcx_9
            
            int64_t rcx_10 = *rbp_1
            *rbp_1 = rax_11
            int32_t i_2 = i_1 - 1
            *r15_1 = rcx_10
            i_1 = i_2
            
            if (((r15_1 - rbp_1 - 8) & 0xfffffffffffffff8)
                    s< ((r12_1 - r14_1) & 0xfffffffffffffff8))
                if (r12_1 u> r14_1)
                    *r13_1 = r14_1
                    r13_1[1] = r12_1
                    r13_1[2].d = i_2
                    r13_1 = &r13_1[3]
                    var_380_1 = r13_1
                
                if (&rbp_1[1] u>= r15_1)
                    break
                
                r12_1 = &r15_1[-1]
            else
                if (&rbp_1[1] u< r15_1)
                    *r13_1 = rbp_1
                    r13_1[1] = &r15_1[-1]
                    r13_1[2].d = i_2
                    r13_1 = &r13_1[3]
                    var_380_1 = r13_1
                
                if (r12_1 u<= r14_1)
                    break
                
                rbp_1 = r14_1
            
            rax_8 = ((r12_1 - rbp_1) s>> 3).d + 1
            
            if (i_2 == 0)
                goto label_141e6f452
    
    r13_1 -= 0x18
    var_380_1 = r13_1
    
    if (r13_1 u< &var_358)
        break

__security_check_cookie(rax_2 ^ &var_3a8)
