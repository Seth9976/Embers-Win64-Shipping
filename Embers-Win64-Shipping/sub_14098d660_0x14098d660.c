// 函数: sub_14098d660
// 地址: 0x14098d660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_398
int64_t rax_2 = __security_cookie ^ &var_398
int128_t zmm6
int128_t var_48_1 = zmm6
int64_t var_358 = arg1
int64_t var_350_1 = arg1 - 0x50 + sx.q(arg2) * 0x50
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_348_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_340
memset(&var_340, 0, 0x2e8)
int64_t* r12_1 = &var_358

while (true)
    uint128_t zmm2 = *r12_1
    uint32_t r13_1 = (r12_1[2]).d
    uint128_t* r14_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r14_1) s/ 0x50).d + 1
    
    if (r13_1 == 0)
    label_14098d988:
        sub_14098d210(r14_1, rdx_3)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r14_1; i -= 0x50)
                    int32_t* rsi_2 = r14_1
                    int32_t* rbp_2 = &r14_1[5]
                    
                    if (&r14_1[5] u<= i)
                        do
                            if (sub_140b5d160(rsi_2, rbp_2) s< 0)
                                rsi_2 = rbp_2
                            
                            rbp_2 = &rbp_2[0x14]
                        while (rbp_2 u<= i)
                    
                    if (rsi_2 != i)
                        zmm2 = *rsi_2
                        zmm3 = *(rsi_2 + 0x10)
                        zmm4_1 = *(rsi_2 + 0x20)
                        zmm5_1 = *(rsi_2 + 0x30)
                        zmm6 = *(rsi_2 + 0x40)
                        *rsi_2 = *i
                        *(rsi_2 + 0x10) = *(i + 0x10)
                        *(rsi_2 + 0x20) = *(i + 0x20)
                        *(rsi_2 + 0x30) = *(i + 0x30)
                        *(rsi_2 + 0x40) = *(i + 0x40)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                        *(i + 0x30) = zmm5_1
                        *(i + 0x40) = zmm6
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_16 = &r14_1[sx.q((temp1_1 - temp0_3) s>> 1) * 5]
            
            if (rax_16 != r14_1)
                zmm2 = *rax_16
                zmm3 = *(rax_16 + 0x10)
                zmm4_1 = *(rax_16 + 0x20)
                zmm5_1 = *(rax_16 + 0x30)
                zmm6 = *(rax_16 + 0x40)
                *rax_16 = *r14_1
                *(rax_16 + 0x10) = r14_1[1]
                *(rax_16 + 0x20) = r14_1[2]
                *(rax_16 + 0x30) = r14_1[3]
                *(rax_16 + 0x40) = r14_1[4]
                *r14_1 = zmm2
                r14_1[1] = zmm3
                r14_1[2] = zmm4_1
                r14_1[3] = zmm5_1
                r14_1[4] = zmm6
            
            uint128_t* rsi_1 = r14_1
            uint128_t* rbp_1 = i + 0x50
            
            while (true)
                rsi_1 = &rsi_1[5]
                
                if (rsi_1 u<= i && sub_140b5d160(r14_1, rsi_1) s>= 0)
                    continue
                
                int32_t i_1
                
                do
                    rbp_1 = &rbp_1[-5]
                    
                    if (rbp_1 u<= r14_1)
                        break
                    
                    i_1 = sub_140b5d160(rbp_1, r14_1)
                while (i_1 s>= 0)
                
                if (rsi_1 u> rbp_1)
                    break
                
                if (rsi_1 != rbp_1)
                    zmm2 = *rsi_1
                    zmm3 = rsi_1[1]
                    zmm4_1 = rsi_1[2]
                    zmm5_1 = rsi_1[3]
                    zmm6 = rsi_1[4]
                    *rsi_1 = *rbp_1
                    rsi_1[1] = rbp_1[1]
                    rsi_1[2] = rbp_1[2]
                    rsi_1[3] = rbp_1[3]
                    rsi_1[4] = rbp_1[4]
                    *rbp_1 = zmm2
                    rbp_1[1] = zmm3
                    rbp_1[2] = zmm4_1
                    rbp_1[3] = zmm5_1
                    rbp_1[4] = zmm6
            
            if (r14_1 != rbp_1)
                zmm2 = *r14_1
                zmm3 = r14_1[1]
                zmm4_1 = r14_1[2]
                zmm5_1 = r14_1[3]
                zmm6 = r14_1[4]
                *r14_1 = *rbp_1
                r14_1[1] = rbp_1[1]
                r14_1[2] = rbp_1[2]
                r14_1[3] = rbp_1[3]
                r14_1[4] = rbp_1[4]
                *rbp_1 = zmm2
                rbp_1[1] = zmm3
                rbp_1[2] = zmm4_1
                rbp_1[3] = zmm5_1
                rbp_1[4] = zmm6
            
            r13_1 -= 1
            
            if ((rbp_1 - r14_1 - 0x50) s/ 0x50 s< (i - rsi_1) s/ 0x50)
                if (i u> rsi_1)
                    *r12_1 = rsi_1
                    r12_1[1] = i
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (&r14_1[5] u>= rbp_1)
                    break
                
                i = &rbp_1[-5]
            else
                if (&r14_1[5] u< rbp_1)
                    *r12_1 = r14_1
                    r12_1[1] = &rbp_1[-5]
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r14_1 = rsi_1
            
            rdx_3 = ((i - r14_1) s/ 0x50).d + 1
            
            if (r13_1 == 0)
                goto label_14098d988
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_358)
        break

__security_check_cookie(rax_2 ^ &var_398)
