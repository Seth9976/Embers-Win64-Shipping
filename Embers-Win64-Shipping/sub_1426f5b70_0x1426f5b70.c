// 函数: sub_1426f5b70
// 地址: 0x1426f5b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t* rax
float zmm6
rax, zmm6 = sub_1426fbec0(arg1)

if (rax != 0)
    float var_18_1 = zmm6
    int32_t var_c8
    sub_140acc600(&var_c8, arg2)
    uint128_t zmm4_1 = var_c8
    int32_t var_bc
    uint128_t zmm2_1 = var_bc
    int32_t var_c4
    uint128_t zmm1_1 = var_c4
    uint128_t zmm0_1
    zmm0_1.d = zmm4_1.d f+ zmm2_1.d
    int32_t var_b8
    int128_t zmm3 = var_b8
    zmm2_1.d = zmm2_1.d f- zmm4_1.d
    zmm0_1.d = zmm0_1.d f* 0.5f
    int32_t var_d8 = zmm0_1.d
    zmm0_1.d = zmm1_1.d f+ zmm3.d
    zmm3.d = zmm3.d f- zmm1_1.d
    zmm0_1.d = zmm0_1.d f* 0.5f
    zmm2_1 = _mm_max_ss(zmm2_1.d, zmm3.d)
    int32_t var_d4_1 = zmm0_1.d
    int32_t var_c0
    int32_t var_b4
    zmm0_1.d = var_c0.d f+ var_b4
    zmm0_1.d = zmm0_1.d f* 0.5f
    int32_t var_d0_1 = zmm0_1.d
    zmm0_1.d = _mm_cvtepi32_ps(zx.o(arg3)).d f* data_143b58064
    zmm2_1.d = zmm2_1.d f+ zmm0_1.d
    void var_a8
    float zmm6_1
    float zmm7_1
    zmm6_1, zmm7_1 = sub_1426f24c0(&var_a8, &var_d8, zmm2_1)
    float var_98
    float var_8c
    float zmm1_2 = (var_98 + var_8c) * zmm6_1
    float var_8c_1 = zmm1_2 + zmm7_1
    float var_98_1 = zmm1_2 - zmm7_1
    int64_t var_60
    
    if (arg2[1].d s> 0)
        float* rdx_2 = nullptr
        float var_a4
        float zmm2_2 = 1f / var_a4
        
        do
            int64_t rax_1 = *arg2
            float var_84
            int32_t r8 = int.d((*(rdx_2 + rax_1) - var_84) * zmm2_2)
            float var_80
            int32_t rcx_2 = int.d((*(rdx_2 + rax_1 + 4) - var_80) * zmm2_2)
            int32_t var_6c
            int32_t var_68
            
            if (r8 s>= 0 && r8 s< var_6c && rcx_2 s>= 0 && rcx_2 s< var_68)
                int32_t rax_4 = var_68 * r8 + rcx_2
                
                if (rax_4 != 0xffffffff)
                    *(sx.q(rax_4) + var_60) = 1
            
            i += 1
            rdx_2 = &rdx_2[3]
        while (i s< arg2[1].d)
    
    i = sub_1426f5640(rax, &var_a8, arg4)
    int64_t var_50
    
    if (var_50 != 0)
        sub_140a74f90(var_50)
    
    if (var_60 != 0)
        sub_140a74f90(var_60)

return zx.q(i)
