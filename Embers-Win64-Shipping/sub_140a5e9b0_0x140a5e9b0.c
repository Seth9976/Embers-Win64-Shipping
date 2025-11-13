// 函数: sub_140a5e9b0
// 地址: 0x140a5e9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = (sx.q(arg2) << 6) + arg1 - 0x40
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r12_1 = &var_348

while (true)
    uint128_t zmm2 = *r12_1
    uint32_t r13_1 = (r12_1[2]).d
    uint128_t* r14_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_10 = ((i - r14_1) s>> 6).d + 1
    
    if (r13_1 == 0)
    label_140a5ec4e:
        sub_140a5dfa0(r14_1, rax_10, zx.q(arg3), arg4)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rax_10 s<= 8)
                for (; i u> r14_1; i -= 0x40)
                    void* rsi_2 = r14_1
                    void* rbp_2 = &r14_1[4]
                    
                    if (&r14_1[4] u<= i)
                        do
                            if (sub_140a660b0(arg4, rsi_2, rbp_2) != 0)
                                rsi_2 = rbp_2
                            
                            rbp_2 += 0x40
                        while (rbp_2 u<= i)
                    
                    if (rsi_2 != i)
                        zmm2 = *rsi_2
                        zmm3 = *(rsi_2 + 0x10)
                        zmm4_1 = *(rsi_2 + 0x20)
                        zmm5_1 = *(rsi_2 + 0x30)
                        *rsi_2 = *i
                        *(rsi_2 + 0x10) = *(i + 0x10)
                        *(rsi_2 + 0x20) = *(i + 0x20)
                        *(rsi_2 + 0x30) = *(i + 0x30)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                        *(i + 0x30) = zmm5_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_4 = &r14_1[sx.q((temp1_1 - temp0_3) s>> 1) * 4]
            
            if (rcx_4 != r14_1)
                zmm2 = *rcx_4
                zmm3 = *(rcx_4 + 0x10)
                zmm4_1 = *(rcx_4 + 0x20)
                zmm5_1 = *(rcx_4 + 0x30)
                *rcx_4 = *r14_1
                *(rcx_4 + 0x10) = r14_1[1]
                *(rcx_4 + 0x20) = r14_1[2]
                *(rcx_4 + 0x30) = r14_1[3]
                *r14_1 = zmm2
                r14_1[1] = zmm3
                r14_1[2] = zmm4_1
                r14_1[3] = zmm5_1
            
            uint128_t* rsi_1 = r14_1
            uint128_t* rbp_1 = i + 0x40
            
            while (true)
                rsi_1 = &rsi_1[4]
                
                if (rsi_1 u<= i && sub_140a660b0(arg4, r14_1, rsi_1) == 0)
                    continue
                
                char i_1
                
                do
                    rbp_1 = &rbp_1[-4]
                    
                    if (rbp_1 u<= r14_1)
                        break
                    
                    i_1 = sub_140a660b0(arg4, rbp_1, r14_1)
                while (i_1 == 0)
                
                if (rsi_1 u> rbp_1)
                    break
                
                if (rsi_1 != rbp_1)
                    zmm2 = *rsi_1
                    zmm3 = rsi_1[1]
                    zmm4_1 = rsi_1[2]
                    zmm5_1 = rsi_1[3]
                    *rsi_1 = *rbp_1
                    rsi_1[1] = rbp_1[1]
                    rsi_1[2] = rbp_1[2]
                    rsi_1[3] = rbp_1[3]
                    *rbp_1 = zmm2
                    rbp_1[1] = zmm3
                    rbp_1[2] = zmm4_1
                    rbp_1[3] = zmm5_1
            
            if (r14_1 != rbp_1)
                zmm2 = *r14_1
                zmm3 = r14_1[1]
                zmm4_1 = r14_1[2]
                zmm5_1 = r14_1[3]
                *r14_1 = *rbp_1
                r14_1[1] = rbp_1[1]
                r14_1[2] = rbp_1[2]
                r14_1[3] = rbp_1[3]
                *rbp_1 = zmm2
                rbp_1[1] = zmm3
                rbp_1[2] = zmm4_1
                rbp_1[3] = zmm5_1
            
            r13_1 -= 1
            
            if (((rbp_1 - r14_1 - 0x40) & 0xffffffffffffffc0) s< ((i - rsi_1) & 0xffffffffffffffc0))
                if (i u> rsi_1)
                    *r12_1 = rsi_1
                    r12_1[1] = i
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (&r14_1[4] u>= rbp_1)
                    break
                
                i = &rbp_1[-4]
            else
                if (&r14_1[4] u< rbp_1)
                    *r12_1 = r14_1
                    r12_1[1] = &rbp_1[-4]
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r14_1 = rsi_1
            
            rax_10 = ((i - r14_1) s>> 6).d + 1
            
            if (r13_1 == 0)
                goto label_140a5ec4e
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
