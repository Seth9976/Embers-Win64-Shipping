// 函数: sub_140f084b0
// 地址: 0x140f084b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = arg5
uint128_t zmm7 = zx.o(0)
int32_t rax = *(arg1 + 0x2f4)
uint32_t zmm6[0x4]

if (arg4 != rax)
    zmm6 = zx.o(0)
else
    zmm6 = zmm0
    zmm6[0] = zmm6[0] f* arg1[0x21].d
    zmm6 = _mm_and_ps(zmm6, 0x7fffffff)

uint32_t zmm8[0x4] = zmm0
uint128_t zmm9 = zx.o(arg1[0x14].d)
zmm8[0] = zmm8[0] f* *(arg1 + 0x10c)
zmm9 = _mm_cvtepi32_ps(zmm9)
uint32_t temp0_3[0x4] = _mm_and_ps(zmm8, 0x7fffffff)
zmm9.d = zmm9.d f* zmm0.d
uint128_t zmm1

if (arg3 != arg1[0x5e].d)
    zmm1 = zx.o(0)
else
    zmm1 = zmm9

if (arg4 == rax)
    zmm7 = zmm9

zmm7.d = zmm7.d f+ zmm1.d

if (arg4 != arg3)
    int64_t* rax_3 = arg1[0xf]
    int32_t rdx = rax_3[1].d
    int16_t* r8
    
    if (rdx == 0)
        r8 = &data_142d40450
    else
        r8 = *rax_3
    
    zmm1 = *(arg1 + 0xb0)
    int32_t rax_4 = rdx - 1
    int32_t var_b4_1 = arg4
    int32_t var_a8_1 = zmm0.d
    zmm0 = *(arg1 + 0xa0)
    int32_t arg_8 = 0
    
    if (rdx == 0)
        rax_4 = 0
    
    int32_t var_b8 = arg3
    int32_t arg_c = rax_4
    int64_t var_b0 = arg_8.q
    int16_t var_a4_1 = *arg6
    int64_t var_a0_1 = arg1[0x12]
    int64_t var_98_1 = arg1[0x13]
    int64_t var_70_1 = arg1[0x18]
    int64_t* rax_10 = arg1[0x19]
    uint128_t var_90_1 = zmm0
    uint128_t var_80_1 = zmm1
    
    if (rax_10 != 0)
        rax_10[1].d += 1
    
    int64_t var_60_1 = arg1[0x1a]
    int32_t var_58_1 = arg1[0x1b].d
    char var_54_1 = *(arg1 + 0xdc)
    int32_t* rax_14
    float zmm6_1
    float zmm7_1
    float zmm8_1
    float zmm9_1
    rax_14, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_140f08790(&arg_8, &arg6[4], &var_b0, &var_b8, r8)
    zmm8_1 = zmm8_1 f+ rax_14[1] + zmm9_1
    *arg2 = zmm6_1 f+ *rax_14 + zmm7_1
    arg2[1] = zmm8_1
    
    if (rax_10 != 0)
        rax_10[1].d -= 1
        
        if (rax_10[1].d == 1)
            (**rax_10)(rax_10)
            int32_t temp1_1 = *(rax_10 + 0xc)
            *(rax_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rax_10 + 8))(rax_10, 1)
else
    int32_t rcx = sx.d((*(*arg1 + 0x20))())
    zmm7.d = zmm7.d f+ zmm6[0]
    zmm0 = _mm_cvtepi32_ps(zx.o(rcx))
    *arg2 = zmm7.d
    zmm0.d = zmm0.d f+ temp0_3[0]
    zmm0.d = zmm0.d f+ zmm9.d
    arg2[1] = zmm0.d

return arg2
