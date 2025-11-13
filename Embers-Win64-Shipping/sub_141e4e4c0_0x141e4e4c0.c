// 函数: sub_141e4e4c0
// 地址: 0x141e4e4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3d8
int64_t rax_2 = __security_cookie ^ &var_3d8
int128_t zmm6
int128_t var_48_1 = zmm6
int128_t zmm7
int128_t var_58_1 = zmm7
int128_t zmm8
int128_t var_68_1 = zmm8
int128_t zmm9
int128_t var_78_1 = zmm9
int128_t zmm10
int128_t var_88_1 = zmm10
int64_t var_398 = arg1
int64_t var_390_1 = arg1 - 0x88 + sx.q(arg2) * 0x88
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_388_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_380
memset(&var_380, 0, 0x2e8)
int64_t* r12_1 = &var_398

while (true)
    uint128_t zmm2 = *r12_1
    uint32_t r13_1 = (r12_1[2]).d
    uint128_t* r14_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r14_1) s/ 0x88).d + 1
    
    if (r13_1 == 0)
    label_141e4e931:
        sub_141e4d830(r14_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r14_1; i -= 0x88)
                    int32_t* rsi_2 = r14_1
                    int32_t* rbp_2 = r14_1 + 0x88
                    
                    if (r14_1 + 0x88 u<= i)
                        do
                            if (sub_140b5d160(rsi_2, rbp_2) s< 0)
                                rsi_2 = rbp_2
                            
                            rbp_2 = &rbp_2[0x22]
                        while (rbp_2 u<= i)
                    
                    if (rsi_2 != i)
                        zmm3 = *rsi_2
                        zmm4_1 = *(rsi_2 + 0x10)
                        zmm5_1 = *(rsi_2 + 0x20)
                        zmm6 = *(rsi_2 + 0x30)
                        zmm7 = *(rsi_2 + 0x40)
                        zmm8 = *(rsi_2 + 0x50)
                        zmm9 = *(rsi_2 + 0x60)
                        zmm10 = *(rsi_2 + 0x70)
                        zmm2 = zx.o(*(rsi_2 + 0x80))
                        *rsi_2 = *i
                        *(rsi_2 + 0x10) = *(i + 0x10)
                        *(rsi_2 + 0x20) = *(i + 0x20)
                        *(rsi_2 + 0x30) = *(i + 0x30)
                        *(rsi_2 + 0x40) = *(i + 0x40)
                        *(rsi_2 + 0x50) = *(i + 0x50)
                        *(rsi_2 + 0x60) = *(i + 0x60)
                        *(rsi_2 + 0x70) = *(i + 0x70)
                        *(rsi_2 + 0x80) = *(i + 0x80)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm5_1
                        *(i + 0x30) = zmm6
                        *(i + 0x40) = zmm7
                        *(i + 0x50) = zmm8
                        *(i + 0x60) = zmm9
                        *(i + 0x70) = zmm10
                        *(i + 0x80) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_15 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x88 + r14_1
            
            if (rax_15 != r14_1)
                zmm3 = *rax_15
                zmm4_1 = *(rax_15 + 0x10)
                zmm5_1 = *(rax_15 + 0x20)
                zmm6 = *(rax_15 + 0x30)
                zmm7 = *(rax_15 + 0x40)
                zmm8 = *(rax_15 + 0x50)
                zmm9 = *(rax_15 + 0x60)
                zmm10 = *(rax_15 + 0x70)
                zmm2 = zx.o(*(rax_15 + 0x80))
                *rax_15 = *r14_1
                *(rax_15 + 0x10) = r14_1[1]
                *(rax_15 + 0x20) = r14_1[2]
                *(rax_15 + 0x30) = r14_1[3]
                *(rax_15 + 0x40) = r14_1[4]
                *(rax_15 + 0x50) = r14_1[5]
                *(rax_15 + 0x60) = r14_1[6]
                *(rax_15 + 0x70) = r14_1[7]
                *(rax_15 + 0x80) = r14_1[8].q
                *r14_1 = zmm3
                r14_1[1] = zmm4_1
                r14_1[2] = zmm5_1
                r14_1[3] = zmm6
                r14_1[4] = zmm7
                r14_1[5] = zmm8
                r14_1[6] = zmm9
                r14_1[7] = zmm10
                r14_1[8].q = zmm2.q
            
            uint128_t* rbp_1 = r14_1
            uint128_t* rsi_1 = i + 0x88
            
            while (true)
                rbp_1 += 0x88
                
                if (rbp_1 u<= i && sub_140b5d160(r14_1, rbp_1) s>= 0)
                    continue
                
                int32_t i_1
                
                do
                    rsi_1 -= 0x88
                    
                    if (rsi_1 u<= r14_1)
                        break
                    
                    i_1 = sub_140b5d160(rsi_1, r14_1)
                while (i_1 s>= 0)
                
                if (rbp_1 u> rsi_1)
                    break
                
                if (rbp_1 != rsi_1)
                    zmm3 = *rbp_1
                    zmm4_1 = rbp_1[1]
                    zmm5_1 = rbp_1[2]
                    zmm6 = rbp_1[3]
                    zmm7 = rbp_1[4]
                    zmm8 = rbp_1[5]
                    zmm9 = rbp_1[6]
                    zmm10 = rbp_1[7]
                    zmm2 = zx.o(rbp_1[8].q)
                    *rbp_1 = *rsi_1
                    rbp_1[1] = rsi_1[1]
                    rbp_1[2] = rsi_1[2]
                    rbp_1[3] = rsi_1[3]
                    rbp_1[4] = rsi_1[4]
                    rbp_1[5] = rsi_1[5]
                    rbp_1[6] = rsi_1[6]
                    rbp_1[7] = rsi_1[7]
                    rbp_1[8].q = rsi_1[8].q
                    *rsi_1 = zmm3
                    rsi_1[1] = zmm4_1
                    rsi_1[2] = zmm5_1
                    rsi_1[3] = zmm6
                    rsi_1[4] = zmm7
                    rsi_1[5] = zmm8
                    rsi_1[6] = zmm9
                    rsi_1[7] = zmm10
                    rsi_1[8].q = zmm2.q
            
            if (r14_1 != rsi_1)
                zmm3 = *r14_1
                zmm4_1 = r14_1[1]
                zmm5_1 = r14_1[2]
                zmm6 = r14_1[3]
                zmm7 = r14_1[4]
                zmm8 = r14_1[5]
                zmm9 = r14_1[6]
                zmm10 = r14_1[7]
                zmm2 = zx.o(r14_1[8].q)
                *r14_1 = *rsi_1
                r14_1[1] = rsi_1[1]
                r14_1[2] = rsi_1[2]
                r14_1[3] = rsi_1[3]
                r14_1[4] = rsi_1[4]
                r14_1[5] = rsi_1[5]
                r14_1[6] = rsi_1[6]
                r14_1[7] = rsi_1[7]
                r14_1[8].q = rsi_1[8].q
                *rsi_1 = zmm3
                rsi_1[1] = zmm4_1
                rsi_1[2] = zmm5_1
                rsi_1[3] = zmm6
                rsi_1[4] = zmm7
                rsi_1[5] = zmm8
                rsi_1[6] = zmm9
                rsi_1[7] = zmm10
                rsi_1[8].q = zmm2.q
            
            r13_1 -= 1
            
            if ((rsi_1 - r14_1 - 0x88) s/ 0x88 s< (i - rbp_1) s/ 0x88)
                if (i u> rbp_1)
                    *r12_1 = rbp_1
                    r12_1[1] = i
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (r14_1 + 0x88 u>= rsi_1)
                    break
                
                i = rsi_1 - 0x88
            else
                if (r14_1 + 0x88 u< rsi_1)
                    *r12_1 = r14_1
                    r12_1[1] = rsi_1 - 0x88
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (i u<= rbp_1)
                    break
                
                r14_1 = rbp_1
            
            rdx_3 = ((i - r14_1) s/ 0x88).d + 1
            
            if (r13_1 == 0)
                goto label_141e4e931
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_398)
        break

__security_check_cookie(rax_2 ^ &var_3d8)
