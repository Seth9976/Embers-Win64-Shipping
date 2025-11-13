// 函数: sub_141056600
// 地址: 0x141056600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
*arg2 = data_143e2c530
int64_t r8 = -1
arg2[1] = data_143e2c538
arg2[2] = data_143e2c540
int64_t rax_5 = data_143e2c548

if (rax_5 != 0)
    r8 = rax_5

arg2[3] = r8
int64_t rcx_1 = sx.q(data_143f0f1f8) << 0xa
arg2[4] = rcx_1
arg2[5] = rcx_1
arg2[6] = data_143f0f200
arg2[7].d = 0

if (data_143e2c558 != 0)
    int64_t var_38
    sub_141022e30(**(arg1 + 0x20), &var_38)
    int64_t r8_1 = var_38
    uint128_t zmm0_1
    zmm0_1.d = float.s(r8_1)
    
    if (r8_1 s< 0)
        zmm0_1.d = zmm0_1.d f+ 1.84467441e+19f
    
    zmm0_1.d = zmm0_1.d f* 0.899999976f
    int64_t rdx_1 = int.q(zmm0_1.d)
    arg2[3] = rdx_1
    int64_t rcx_4 = *(arg1 + 0x18)
    uint128_t zmm1_1
    zmm1_1.d = float.s(rdx_1)
    int64_t var_30
    int64_t rdx_2 = rdx_1 - var_30
    zmm0_1.d = zmm1_1.d f* 0.0500000007f
    int64_t r10_1 = int.q(zmm0_1.d)
    
    if (rdx_1 - var_30 s>= 0)
        if (rdx_2 s> r10_1)
            int32_t rax_10 = data_143f0f208
            int64_t rdi_1 = rcx_4 - r10_1 + rdx_2
            int64_t rdx_4 = rdi_1
            
            if (rax_10 s> 0)
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_10)).d f* 9.53674295e-09f
                zmm0_1.d = zmm0_1.d f* zmm1_1.d
                truncf(zmm0_1.d)
                rdx_4 = int.q(zmm0_1.d) << 0x14
            
            int64_t rax_11 = data_143f0f200
            rcx_4 = 0x7fffffffffffffff
            
            if (rax_11 s> 0)
                rcx_4 = rax_11
            
            if (rdi_1 s<= rcx_4)
                rcx_4 = rdi_1
            
            if (rdx_4 s<= rcx_4)
                rcx_4 = rdx_4
        
        arg2[6] = rcx_4
    else
        int64_t rax_9 = rcx_4 - r10_1 + rdx_2
        int64_t rdx_3 = 0x6400000
        
        if (rax_9 s>= 0x6400000)
            rdx_3 = rax_9
        
        arg2[6] = rdx_3
        
        if (var_30 u> r8_1 && rdx_3 s>= rcx_4 && rdx_3 s> 0x6400000)
            sub_140af98a0("Unknown", 0x238, 
                Video memory usage is overbudget by %llu MB and the texture pool size didn't shrink.", 
                (var_30 - r8_1) u>> 0x14)
            sub_140afbb40()

int64_t result = arg2[6]
*(arg1 + 0x18) = result
__security_check_cookie(rax_1 ^ &var_58)
return result
