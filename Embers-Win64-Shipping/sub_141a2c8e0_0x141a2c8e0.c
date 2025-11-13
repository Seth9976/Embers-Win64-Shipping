// 函数: sub_141a2c8e0
// 地址: 0x141a2c8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_398
int64_t rax_2 = __security_cookie ^ &var_398
int64_t var_358 = arg1
int64_t var_350_1 = arg1 - 0x28 + sx.q(arg2) * 0x28
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
    int32_t rdx_3 = ((i - r14_1) s/ 0x28).d + 1
    
    if (r13_1 == 0)
    label_141a2cb99:
        sub_141a2b950(r14_1, rdx_3, zx.q(arg3), arg4)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            
            if (rdx_3 s<= 8)
                for (; i u> r14_1; i -= 0x28)
                    uint128_t* rdi_2 = r14_1
                    void* rsi_2 = r14_1 + 0x28
                    
                    if (r14_1 + 0x28 u<= i)
                        do
                            if (arg4(rdi_2, rsi_2) != 0)
                                rdi_2 = rsi_2
                            
                            rsi_2 += 0x28
                        while (rsi_2 u<= i)
                    
                    if (rdi_2 != i)
                        zmm3 = *rdi_2
                        zmm4_1 = rdi_2[1]
                        zmm2 = zx.o(rdi_2[2].q)
                        *rdi_2 = *i
                        rdi_2[1] = *(i + 0x10)
                        rdi_2[2].q = *(i + 0x20)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm2.q
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rcx_5 = r14_1 + sx.q((temp1_1 - temp0_3) s>> 1) * 0x28
            
            if (rcx_5 != r14_1)
                zmm3 = *rcx_5
                zmm4_1 = *(rcx_5 + 0x10)
                zmm2 = zx.o(*(rcx_5 + 0x20))
                *rcx_5 = *r14_1
                *(rcx_5 + 0x10) = r14_1[1]
                *(rcx_5 + 0x20) = r14_1[2].q
                *r14_1 = zmm3
                r14_1[1] = zmm4_1
                r14_1[2].q = zmm2.q
            
            uint128_t* rdi_1 = r14_1
            uint128_t* rsi_1 = i + 0x28
            
            while (true)
                rdi_1 += 0x28
                
                if (rdi_1 u<= i && arg4(r14_1, rdi_1) == 0)
                    continue
                
                char i_1
                
                do
                    rsi_1 -= 0x28
                    
                    if (rsi_1 u<= r14_1)
                        break
                    
                    i_1 = arg4(rsi_1, r14_1)
                while (i_1 == 0)
                
                if (rdi_1 u> rsi_1)
                    break
                
                if (rdi_1 != rsi_1)
                    zmm3 = *rdi_1
                    zmm4_1 = rdi_1[1]
                    zmm2 = zx.o(rdi_1[2].q)
                    *rdi_1 = *rsi_1
                    rdi_1[1] = rsi_1[1]
                    rdi_1[2].q = rsi_1[2].q
                    *rsi_1 = zmm3
                    rsi_1[1] = zmm4_1
                    rsi_1[2].q = zmm2.q
            
            if (r14_1 != rsi_1)
                zmm3 = *r14_1
                zmm4_1 = r14_1[1]
                zmm2 = zx.o(r14_1[2].q)
                *r14_1 = *rsi_1
                r14_1[1] = rsi_1[1]
                r14_1[2].q = rsi_1[2].q
                *rsi_1 = zmm3
                rsi_1[1] = zmm4_1
                rsi_1[2].q = zmm2.q
            
            r13_1 -= 1
            
            if ((rsi_1 - r14_1 - 0x28) s/ 0x28 s< (i - rdi_1) s/ 0x28)
                if (i u> rdi_1)
                    *r12_1 = rdi_1
                    r12_1[1] = i
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (r14_1 + 0x28 u>= rsi_1)
                    break
                
                i = rsi_1 - 0x28
            else
                if (r14_1 + 0x28 u< rsi_1)
                    *r12_1 = r14_1
                    r12_1[1] = rsi_1 - 0x28
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (i u<= rdi_1)
                    break
                
                r14_1 = rdi_1
            
            rdx_3 = ((i - r14_1) s/ 0x28).d + 1
            
            if (r13_1 == 0)
                goto label_141a2cb99
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_358)
        break

__security_check_cookie(rax_2 ^ &var_398)
