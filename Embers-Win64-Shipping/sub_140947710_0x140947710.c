// 函数: sub_140947710
// 地址: 0x140947710
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
int64_t* r12_1 = &var_348

while (true)
    uint128_t zmm2 = *r12_1
    int32_t r15_1 = r12_1[2].d
    int64_t* r14_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r14_1) s>> 3).d + 1
    
    if (r15_1 == 0)
    label_140947949:
        sub_140947110(r14_1, rax_8)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_8 s<= 8)
                for (; i u> r14_1; i -= 8)
                    int64_t* rbp_2 = r14_1
                    int64_t* rsi_2 = &r14_1[1]
                    
                    if (&r14_1[1] u<= i)
                        do
                            int32_t rcx_11 = *(rsi_2 + 4)
                            int32_t temp0_3 = *(rbp_2 + 4)
                            
                            if (temp0_3 != rcx_11)
                                rcx_11.b = temp0_3 s< rcx_11
                            else
                                int32_t rax_28
                                rax_28, rcx_11 = rand()
                                int32_t rax_29 = rax_28 & 0x80000001
                                
                                if (rax_29 s< 0)
                                    rax_29 = ((rax_29 - 1) | 0xfffffffe) + 1
                                
                                rcx_11.b = rax_29 != 0
                            
                            int64_t* rax_32 = rsi_2
                            
                            if (rcx_11.b == 0)
                                rax_32 = rbp_2
                            
                            rsi_2 = &rsi_2[1]
                            rbp_2 = rax_32
                        while (rsi_2 u<= i)
                    
                    if (rbp_2 != i)
                        zmm1 = zx.o(*rbp_2)
                        *rbp_2 = *i
                        *i = zmm1.q
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* rcx_3 = &r14_1[sx.q(rax_8 s>> 1)]
            
            if (rcx_3 != r14_1)
                zmm1 = zx.o(*rcx_3)
                *rcx_3 = *r14_1
                *r14_1 = zmm1.q
            
            int64_t* rsi_1 = r14_1
            uint64_t* rbp_1 = i + 8
            
            while (true)
                rsi_1 = &rsi_1[1]
                
                if (rsi_1 u<= i)
                    int32_t rax_11 = *(r14_1 + 4)
                    int32_t temp1_1 = *(rsi_1 + 4)
                    
                    if (rax_11 != temp1_1)
                        rax_11.b = rax_11 s< temp1_1
                    else
                        rax_11 = rand() & 0x80000001
                        
                        if (rax_11 s< 0)
                            rax_11 = ((rax_11 - 1) | 0xfffffffe) + 1
                        
                        rax_11.b = rax_11 != 0
                    
                    if (rax_11.b == 0)
                        continue
                
                int32_t rax_15
                
                do
                    rbp_1 = &rbp_1[-1]
                    
                    if (rbp_1 u<= r14_1)
                        break
                    
                    rax_15 = *(rbp_1 + 4)
                    int32_t temp2_1 = *(r14_1 + 4)
                    
                    if (rax_15 != temp2_1)
                        rax_15.b = rax_15 s< temp2_1
                    else
                        rax_15 = rand() & 0x80000001
                        
                        if (rax_15 s< 0)
                            rax_15 = ((rax_15 - 1) | 0xfffffffe) + 1
                        
                        rax_15.b = rax_15 != 0
                while (rax_15.b == 0)
                
                if (rsi_1 u> rbp_1)
                    break
                
                if (rsi_1 != rbp_1)
                    zmm1 = zx.o(*rsi_1)
                    *rsi_1 = *rbp_1
                    *rbp_1 = zmm1.q
            
            if (r14_1 != rbp_1)
                zmm1 = zx.o(*r14_1)
                *r14_1 = *rbp_1
                *rbp_1 = zmm1.q
            
            r15_1 -= 1
            
            if (((rbp_1 - r14_1 - 8) & 0xfffffffffffffff8) s< ((i - rsi_1) & 0xfffffffffffffff8))
                if (i u> rsi_1)
                    *r12_1 = rsi_1
                    r12_1[1] = i
                    r12_1[2].d = r15_1
                    r12_1 = &r12_1[3]
                
                if (&r14_1[1] u>= rbp_1)
                    break
                
                i = &rbp_1[-1]
            else
                if (&r14_1[1] u< rbp_1)
                    *r12_1 = r14_1
                    r12_1[1] = &rbp_1[-1]
                    r12_1[2].d = r15_1
                    r12_1 = &r12_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r14_1 = rsi_1
            
            rax_8 = ((i - r14_1) s>> 3).d + 1
            
            if (r15_1 == 0)
                goto label_140947949
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
