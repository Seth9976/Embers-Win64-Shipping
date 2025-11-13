// 函数: sub_14234e170
// 地址: 0x14234e170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3c8
int64_t rax_2 = __security_cookie ^ &var_3c8
char rdi_1 = arg3
int64_t var_378 = arg1
uint128_t zmm6
uint128_t var_48_1 = zmm6
int64_t var_370_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_368_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_360
memset(&var_360, 0, 0x2e8)
uint32_t zmm7[0x4] = 0x7fffffff
int64_t* rdx = &var_378
int128_t zmm8 = 0x38d1b717
int64_t* var_3a0_1 = &var_378

while (true)
    uint128_t zmm2 = *rdx
    uint32_t r12_1 = (rdx[2]).d
    int64_t* r13_1 = zmm2.q
    void* rcx_3 = _mm_bsrli_si128(zmm2, 8).q
    void* var_398_1 = rcx_3
    int32_t rax_8 = ((rcx_3 - r13_1) s>> 3).d + 1
    
    if (r12_1 == 0)
    label_14234e4e3:
        zmm7, zmm8 = sub_14234dd00(r13_1, rax_8, rdi_1, arg4)
    label_14234e4e8:
        rdx = var_3a0_1
    else
        while (true)
            uint128_t zmm0_2
            uint128_t zmm1
            
            if (rax_8 s<= 8)
                if (rcx_3 u<= r13_1)
                    break
                
                void* rdi_3 = var_398_1
                
                do
                    int64_t* r15_2 = r13_1
                    int64_t* r14_2 = &r13_1[1]
                    
                    if (&r13_1[1] u<= rdi_3)
                        do
                            int32_t rcx_25 = *arg4
                            void* rsi_3 = *r14_2
                            void* rbp_3 = *r15_2
                            int32_t rcx_27
                            
                            if (rcx_25 == 4)
                            label_14234e5ea:
                                uint128_t zmm0_5 = sub_141dc8460(rbp_3)
                                rcx_27, zmm0_2 = sub_141dc8460(rsi_3)
                                zmm1.d = zmm0_5.d f- zmm0_2.d
                                bool cond:2_1
                                
                                if (_mm_and_ps(zmm1, zmm7).d f<= zmm8.d)
                                    zmm0_2 = *(rbp_3 + 0x190)
                                    zmm1 = *(rsi_3 + 0x190)
                                    
                                    if (*arg4 != 6)
                                        cond:2_1 = zmm0_2.d f> zmm1.d
                                    else
                                        cond:2_1 = zmm1.d f> zmm0_2.d
                                else
                                    cond:2_1 = zmm0_2.d f> zmm0_5.d
                                
                                rcx_27.b = cond:2_1
                            else if (rcx_25 == 5)
                                zmm1 = *(rbp_3 + 0x204)
                                zmm2 = *(rsi_3 + 0x204)
                                zmm0_2.d = zmm1.d f- zmm2.d
                                
                                if (_mm_and_ps(zmm0_2, zmm7).d f> zmm8.d)
                                    rcx_27.b = zmm2.d f> zmm1.d
                                else
                                    zmm0_2 = *(rsi_3 + 0x190)
                                    float temp8_1 = *(rbp_3 + 0x190)
                                    zmm0_2.d f- temp8_1
                                    rcx_27.b = zmm0_2.d f< temp8_1
                            else
                                if (rcx_25 == 6)
                                    goto label_14234e5ea
                                
                                rcx_27.b = 1
                            
                            int64_t* rax_20 = r14_2
                            
                            if (rcx_27.b == 0)
                                rax_20 = r15_2
                            
                            r14_2 = &r14_2[1]
                            r15_2 = rax_20
                        while (r14_2 u<= rdi_3)
                    
                    int64_t rcx_30 = *r15_2
                    *r15_2 = *rdi_3
                    *rdi_3 = rcx_30
                    rdi_3 -= 8
                while (rdi_3 u> r13_1)
                
                rdi_1 = arg3
                goto label_14234e4e8
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r15_1 = r13_1
            int64_t rdx_1 = sx.q(rax_8 s>> 1)
            void** r14_1 = var_398_1 + 8
            int64_t rcx_4 = r13_1[rdx_1]
            r13_1[rdx_1] = *r13_1
            *r13_1 = rcx_4
            void** rax_10
            
            while (true)
                r15_1 = &r15_1[1]
                
                if (r15_1 u<= var_398_1)
                    int32_t rcx_5 = *arg4
                    void* rsi_1 = *r15_1
                    void* rbp_1 = *r13_1
                    bool cond:4_1
                    
                    if (rcx_5 == 4)
                    label_14234e2ce:
                        uint128_t zmm0_3 = sub_141dc8460(rbp_1)
                        rax_10, zmm0_2 = sub_141dc8460(rsi_1)
                        zmm1.d = zmm0_3.d f- zmm0_2.d
                        
                        if (_mm_and_ps(zmm1, zmm7).d f<= zmm8.d)
                            zmm0_2 = *(rbp_1 + 0x190)
                            zmm1 = *(rsi_1 + 0x190)
                            
                            if (*arg4 != 6)
                                cond:4_1 = zmm0_2.d f> zmm1.d
                            else
                                cond:4_1 = zmm1.d f> zmm0_2.d
                        else
                            cond:4_1 = zmm0_2.d f> zmm0_3.d
                        
                        goto label_14234e349
                    
                    if (rcx_5 == 5)
                        zmm1 = *(rbp_1 + 0x204)
                        zmm2 = *(rsi_1 + 0x204)
                        zmm0_2.d = zmm1.d f- zmm2.d
                        
                        if (_mm_and_ps(zmm0_2, zmm7).d f> zmm8.d)
                            cond:4_1 = zmm2.d f> zmm1.d
                        label_14234e349:
                            rax_10.b = cond:4_1
                        else
                            zmm0_2 = *(rsi_1 + 0x190)
                            float temp7_1 = *(rbp_1 + 0x190)
                            zmm0_2.d f- temp7_1
                            rax_10.b = zmm0_2.d f< temp7_1
                        
                        if (rax_10.b == 0)
                            continue
                    else if (rcx_5 == 6)
                        goto label_14234e2ce
                
                do
                    r14_1 -= 8
                    
                    if (r14_1 u<= r13_1)
                        break
                    
                    int32_t rcx_10 = *arg4
                    void* rsi_2 = *r13_1
                    void* rbp_2 = *r14_1
                    
                    if (rcx_10 == 4)
                    label_14234e38c:
                        uint128_t zmm0_4 = sub_141dc8460(rbp_2)
                        rax_10, zmm0_2 = sub_141dc8460(rsi_2)
                        zmm1.d = zmm0_4.d f- zmm0_2.d
                        bool cond:6_1
                        
                        if (_mm_and_ps(zmm1, zmm7).d f<= zmm8.d)
                            zmm0_2 = *(rbp_2 + 0x190)
                            zmm1 = *(rsi_2 + 0x190)
                            
                            if (*arg4 != 6)
                                cond:6_1 = zmm0_2.d f> zmm1.d
                            else
                                cond:6_1 = zmm1.d f> zmm0_2.d
                        else
                            cond:6_1 = zmm0_2.d f> zmm0_4.d
                        
                        rax_10.b = cond:6_1
                    else
                        if (rcx_10 != 5)
                            if (rcx_10 != 6)
                                break
                            
                            goto label_14234e38c
                        
                        zmm1 = *(rbp_2 + 0x204)
                        zmm2 = *(rsi_2 + 0x204)
                        zmm0_2.d = zmm1.d f- zmm2.d
                        
                        if (_mm_and_ps(zmm0_2, zmm7).d f> zmm8.d)
                            rax_10.b = zmm2.d f> zmm1.d
                        else
                            zmm0_2 = *(rsi_2 + 0x190)
                            float temp9_1 = *(rbp_2 + 0x190)
                            zmm0_2.d f- temp9_1
                            rax_10.b = zmm0_2.d f< temp9_1
                while (rax_10.b == 0)
                
                rax_10 = *r14_1
                
                if (r15_1 u> r14_1)
                    break
                
                void* rcx_15 = *r15_1
                *r15_1 = rax_10
                *r14_1 = rcx_15
            
            void* rcx_16 = *r13_1
            r12_1 -= 1
            rdx = var_3a0_1
            *r13_1 = rax_10
            rdi_1 = arg3
            *r14_1 = rcx_16
            
            if (((r14_1 - r13_1 - 8) & 0xfffffffffffffff8)
                    s< ((var_398_1 - r15_1) & 0xfffffffffffffff8))
                if (var_398_1 u> r15_1)
                    *rdx = r15_1
                    rdx[1] = var_398_1
                    rdx[2].d = r12_1
                    rdx = &rdx[3]
                    var_3a0_1 = rdx
                
                if (&r13_1[1] u>= r14_1)
                    break
                
                rcx_3 = &r14_1[-1]
                var_398_1 = rcx_3
            else
                if (&r13_1[1] u< r14_1)
                    *rdx = r13_1
                    rdx[1] = &r14_1[-1]
                    rdx[2].d = r12_1
                    rdx = &rdx[3]
                    var_3a0_1 = rdx
                
                rcx_3 = var_398_1
                
                if (rcx_3 u<= r15_1)
                    break
                
                r13_1 = r15_1
            
            rdx = var_3a0_1
            rax_8 = ((rcx_3 - r13_1) s>> 3).d + 1
            
            if (r12_1 == 0)
                goto label_14234e4e3
    
    rdx -= 0x18
    var_3a0_1 = rdx
    
    if (rdx u< &var_378)
        break

__security_check_cookie(rax_2 ^ &var_3c8)
