// 函数: sub_140e59fa0
// 地址: 0x140e59fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_88 = 1
int64_t* var_90 = &data_143dbb1f0
char var_98 = arg6
float var_78
(*(*arg1 + 0x1b8))(arg1, &var_78)
float arg_8
(*(*arg1 + 0x58))(arg1, &arg_8)
uint128_t zmm0 = var_78
float zmm2 = arg_8

if (not(zmm0.d f> zmm2))
    zmm0.d = zmm0.d f+ *arg4
    
    if (not(zmm0.d f< zmm2))
        int32_t var_74
        zmm0 = var_74
        
        if (not(zmm0.d f> arg5))
            zmm0.d = zmm0.d f+ arg4[1]
            
            if (not(zmm0.d f< arg5))
                int64_t* rcx_2 = data_143e20d18
                uint128_t zmm6 = 0x3f800000
                int32_t var_70 = int.d(zmm2)
                int32_t var_6c_1 = int.d(arg5)
                int32_t var_68_1 = int.d(zmm2 + 1f)
                int32_t var_64_1 = int.d(arg5 + 1f)
                int32_t var_60
                (*(*rcx_2 + 0xb0))(rcx_2, &var_60, &var_70)
                uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(var_60))
                int32_t var_5c
                uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(var_5c))
                
                if (arg6 != 0)
                    zmm6 = sub_140d7ade0(arg_8.d, arg5, zmm6)
                
                zmm0.d = zmm6.d f* 16f
                zmm6.d = zmm6.d f* 12f
                float zmm4_1 = *arg4
                float zmm3 = arg4[1]
                zmm2 = arg_8 f- zmm0.d - zmm4_1
                float zmm1 = arg5 f- zmm6.d - zmm3
                var_78 = zmm2
                float var_74_1 = zmm1
                
                if (not(zmm2 f>= zmm8.d))
                    zmm0.d = zmm0.d f+ zmm0.d
                    zmm0.d = zmm0.d f+ zmm4_1
                    zmm0.d = zmm0.d f+ zmm2
                    var_78 = zmm0.d
                
                if (not(zmm1 f>= zmm7.d))
                    zmm6.d = zmm6.d f+ zmm6.d
                    zmm6.d = zmm6.d f+ zmm3
                    zmm6.d = zmm6.d f+ zmm1
                    int32_t var_74_2 = zmm6.d

*arg2 = var_78.q
return arg2
