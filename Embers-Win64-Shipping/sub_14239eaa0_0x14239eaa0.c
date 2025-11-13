// 函数: sub_14239eaa0
// 地址: 0x14239eaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
int64_t var_348 = arg1
int64_t var_340_1 = arg1 - 0x30 + sx.q(arg2) * 0x30
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
    int32_t rdx_3 = ((i - r14_1) s/ 0x30).d + 1
    
    if (r13_1 == 0)
    label_14239ed64:
        sub_14239e220(r14_1, rdx_3, zx.q(arg3), arg4)
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            
            if (rdx_3 s<= 8)
                for (; i u> r14_1; i -= 0x30)
                    void* rbp_2 = r14_1
                    void* rsi_2 = &r14_1[3]
                    
                    if (&r14_1[3] u<= i)
                        do
                            void* rcx_17 = rsi_2
                            
                            if (sub_1423a6810(arg4, rbp_2, rsi_2) == 0)
                                rcx_17 = rbp_2
                            
                            rsi_2 += 0x30
                            rbp_2 = rcx_17
                        while (rsi_2 u<= i)
                    
                    if (rbp_2 != i)
                        zmm2 = *rbp_2
                        zmm3 = *(rbp_2 + 0x10)
                        zmm4_1 = *(rbp_2 + 0x20)
                        *rbp_2 = *i
                        *(rbp_2 + 0x10) = *(i + 0x10)
                        *(rbp_2 + 0x20) = *(i + 0x20)
                        *i = zmm2
                        *(i + 0x10) = zmm3
                        *(i + 0x20) = zmm4_1
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_16 = &r14_1[sx.q((temp1_1 - temp0_3) s>> 1) * 3]
            
            if (rax_16 != r14_1)
                zmm2 = *rax_16
                zmm3 = *(rax_16 + 0x10)
                zmm4_1 = *(rax_16 + 0x20)
                *rax_16 = *r14_1
                *(rax_16 + 0x10) = r14_1[1]
                *(rax_16 + 0x20) = r14_1[2]
                *r14_1 = zmm2
                r14_1[1] = zmm3
                r14_1[2] = zmm4_1
            
            uint128_t* rsi_1 = r14_1
            uint128_t* rbp_1 = i + 0x30
            
            while (true)
                rsi_1 = &rsi_1[3]
                
                if (rsi_1 u<= i && sub_1423a6810(arg4, r14_1, rsi_1) == 0)
                    continue
                
                char i_1
                
                do
                    rbp_1 = &rbp_1[-3]
                    
                    if (rbp_1 u<= r14_1)
                        break
                    
                    i_1 = sub_1423a6810(arg4, rbp_1, r14_1)
                while (i_1 == 0)
                
                if (rsi_1 u> rbp_1)
                    break
                
                if (rsi_1 != rbp_1)
                    zmm2 = *rsi_1
                    zmm3 = rsi_1[1]
                    zmm4_1 = rsi_1[2]
                    *rsi_1 = *rbp_1
                    rsi_1[1] = rbp_1[1]
                    rsi_1[2] = rbp_1[2]
                    *rbp_1 = zmm2
                    rbp_1[1] = zmm3
                    rbp_1[2] = zmm4_1
            
            if (r14_1 != rbp_1)
                zmm2 = *r14_1
                zmm3 = r14_1[1]
                zmm4_1 = r14_1[2]
                *r14_1 = *rbp_1
                r14_1[1] = rbp_1[1]
                r14_1[2] = rbp_1[2]
                *rbp_1 = zmm2
                rbp_1[1] = zmm3
                rbp_1[2] = zmm4_1
            
            r13_1 -= 1
            
            if ((rbp_1 - r14_1 - 0x30) s/ 0x30 s< (i - rsi_1) s/ 0x30)
                if (i u> rsi_1)
                    *r12_1 = rsi_1
                    r12_1[1] = i
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (&r14_1[3] u>= rbp_1)
                    break
                
                i = &rbp_1[-3]
            else
                if (&r14_1[3] u< rbp_1)
                    *r12_1 = r14_1
                    r12_1[1] = &rbp_1[-3]
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r14_1 = rsi_1
            
            rdx_3 = ((i - r14_1) s/ 0x30).d + 1
            
            if (r13_1 == 0)
                goto label_14239ed64
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
