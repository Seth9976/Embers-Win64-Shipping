// 函数: sub_1426c4800
// 地址: 0x1426c4800
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
    int32_t r12_1 = r13_1[2].d
    int64_t* r14_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((i - r14_1) s>> 3).d + 1
    
    if (r12_1 == 0)
    label_1426c49f6:
        sub_1426c4680(r14_1, rax_8)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_8 s<= 8)
                for (; i u> r14_1; i -= 8)
                    uint64_t* rbp_2 = r14_1
                    uint64_t* rsi_2 = &r14_1[1]
                    
                    if (&r14_1[1] u<= i)
                        do
                            uint64_t* rcx_14 = rsi_2
                            
                            if (sub_1426cafd0(rsi_2, rbp_2) == 0)
                                rcx_14 = rbp_2
                            
                            rsi_2 = &rsi_2[1]
                            rbp_2 = rcx_14
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
                
                if (rsi_1 u<= i && sub_1426cafd0(rsi_1, r14_1) == 0)
                    continue
                
                char i_1
                
                do
                    rbp_1 = &rbp_1[-1]
                    
                    if (rbp_1 u<= r14_1)
                        break
                    
                    i_1 = sub_1426cafd0(r14_1, rbp_1)
                while (i_1 == 0)
                
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
            
            r12_1 -= 1
            
            if (((rbp_1 - r14_1 - 8) & 0xfffffffffffffff8) s< ((i - rsi_1) & 0xfffffffffffffff8))
                if (i u> rsi_1)
                    *r13_1 = rsi_1
                    r13_1[1] = i
                    r13_1[2].d = r12_1
                    r13_1 = &r13_1[3]
                
                if (&r14_1[1] u>= rbp_1)
                    break
                
                i = &rbp_1[-1]
            else
                if (&r14_1[1] u< rbp_1)
                    *r13_1 = r14_1
                    r13_1[1] = &rbp_1[-1]
                    r13_1[2].d = r12_1
                    r13_1 = &r13_1[3]
                
                if (i u<= rsi_1)
                    break
                
                r14_1 = rsi_1
            
            rax_8 = ((i - r14_1) s>> 3).d + 1
            
            if (r12_1 == 0)
                goto label_1426c49f6
    
    r13_1 -= 0x18
    
    if (r13_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
