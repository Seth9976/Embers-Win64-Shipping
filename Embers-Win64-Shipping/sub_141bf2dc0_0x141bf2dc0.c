// 函数: sub_141bf2dc0
// 地址: 0x141bf2dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
int32_t rsi = 0
uint128_t zmm7
uint128_t var_58 = zmm7
int32_t arg_8 = 0
int64_t* rbp = arg3

if (sub_140d3e110(arg1 + 0x18) == 0)
label_141bf3178:
    *arg2 = 0
    arg2[1] = 0
else
    if (sub_14243ade0(sub_140d3c6e0(arg1 + 0x18)) == 0)
        goto label_141bf3178
    
    int64_t rax_3 = sub_140d3c6e0(arg1 + 0x18)
    void* rax_4
    uint128_t zmm8_1
    rax_4, zmm8_1 = sub_1423dd9f0(data_143f5b298, rax_3, 0)
    
    if (rax_4 == 0 || *(rax_4 + 0x30) == 0)
        goto label_141bf3178
    
    uint128_t zmm4_1 = *(arg4 + 0x24)
    uint128_t zmm5_1 = *(arg4 + 0x1c)
    float zmm3_1 = *(arg4 + 0x20)
    uint128_t zmm1_1
    zmm1_1.d = zmm5_1.d f* *(arg4 + 0x28)
    int64_t* r14_1 = *(arg1 + 8)
    uint128_t var_68_1 = zmm8_1
    void* rax_6 = &r14_1[sx.q(*(arg1 + 0x10))]
    uint128_t zmm9 = zx.o(*arg5)
    zmm1_1.d = zmm1_1.d f- zmm3_1 f* zmm4_1.d
    zmm6 = *(arg4 + 0x2c) ^ 0x80000000
    arg_8.q = zmm9.q
    void* var_a8 = rax_6
    uint128_t zmm10
    zmm10.d = 1f f/ zmm1_1.d
    zmm1_1 = *(arg4 + 0x30) ^ 0x80000000
    zmm8_1.d = zmm10.d f* zmm3_1
    uint128_t zmm2_1
    zmm2_1.d = zmm10.d f* zmm4_1.d
    zmm7.d = zmm10.d f* *(arg4 + 0x28)
    zmm8_1 ^= 0x80000000
    zmm10.d = zmm10.d f* zmm5_1.d
    zmm2_1 ^= 0x80000000
    zmm5_1 = zmm6
    float zmm0_1 = zmm1_1.d f* zmm2_1.d
    zmm1_1.d = zmm1_1.d f* zmm10.d
    zmm4_1 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
    zmm6.d = zmm6.d f* zmm8_1.d
    zmm5_1.d = zmm5_1.d f* zmm7.d
    zmm6.d = zmm6.d f+ zmm1_1.d
    zmm1_1.d = zmm4_1.d f* zmm2_1.d
    zmm2_1 = arg_8
    zmm5_1.d = zmm5_1.d f+ zmm0_1
    zmm4_1.d = zmm4_1.d f* zmm10.d
    zmm0_1 = zmm2_1.d
    zmm2_1.d = zmm2_1.d f* zmm8_1.d
    zmm4_1.d = zmm4_1.d f+ zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ zmm0_1 f* zmm7.d
    zmm4_1.d = zmm4_1.d f+ zmm6.d
    zmm1_1.d = zmm1_1.d f+ zmm5_1.d
    zmm4_1.d = zmm4_1.d f* *(arg4 + 8)
    zmm1_1.d = zmm1_1.d f* *(arg4 + 8)
    int32_t arg_c = zmm4_1.d
    arg_8 = zmm1_1.d
    
    if (r14_1 == rax_6)
        goto label_141bf3178
    
    zmm7 = zx.o(arg_8.q)
    int64_t* rbx_1 = arg_8.q
    
    while (true)
        int64_t var_b8 = *r14_1
        int64_t* rax_8 = sub_140d3c6e0(&var_b8)
        int64_t rax_9
        
        if (rax_8 != 0)
            rbx_1 = rax_8[0xa6]
            rsi |= 1
            rax_9 = rax_8[0xa5]
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
        
        if (rax_8 == 0 || rax_9 == 0 || rax_9 != *rbp)
            rbp.b = 0
        else
            rbp.b = 1
        
        if ((rsi.b & 1) != 0)
            rsi &= 0xfffffffe
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rbp.b != 0)
            int64_t rax_12
            rax_12, zmm6, zmm7 = sub_141badbe0(arg1, *(rax_4 + 0x30), zmm7.q)
            
            if (rax_12 != 0 && *(rax_8 + 0x46c) != 0
                    && not(_mm_cvtepi32_ps(zx.o(rax_8[0x8b].d)).d f== zmm6.d)
                    && not(_mm_cvtepi32_ps(zx.o((rax_8[0x8b] u>> 0x20).d)).d f== zmm6.d)
                    && rax_8 == rax_12)
                void** rax_13 = j_sub_140a82f30(0x10)
                void** rbx_2 = rax_13
                
                if (rax_13 == 0)
                    rbx_2 = nullptr
                else
                    *rax_13 = data_143dbb1f0.d
                    *(rax_13 + 4) = data_143dbb1f0:4.d.d
                    rax_13[1].d = data_143dbb1f0.d
                    *(rax_13 + 0xc) = data_143dbb1f0:4.d.d
                
                void*** rax_14 = j_sub_140a82f30(0x18)
                
                if (rax_14 != 0)
                    rax_14[1].d = 1
                    *rax_14 = &data_142ec7b18
                    *(rax_14 + 0xc) = 1
                    rax_14[2] = rbx_2
                
                int32_t var_a0_1 = *(arg1 + 0x48)
                int64_t rax_16 = *rax_8
                var_a8 = *(arg1 + 0x40)
                (*(rax_16 + 0x8c0))(rax_8, &var_a8, &arg_8)
                *rbx_2 = arg_8.q
                rbx_2[1] = arg_8.q
                *arg2 = rbx_2
                arg2[1] = rax_14
                break
        
        r14_1 = &r14_1[1]
        
        if (r14_1 == var_a8)
            goto label_141bf3178
        
        rbp = arg3

return arg2
