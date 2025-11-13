// 函数: sub_1420bbf60
// 地址: 0x1420bbf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm3[0x4] = arg1

if (zx.d(arg2) - 1 u> 0xc)
    return 

float zmm1[0x4]

switch (arg2)
    case 1
        if (arg4 s> 1 && not(zmm3[0] <= 0f) && not(zmm3[0] >= 1f))
            uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(arg4))
            zmm1 = zmm4
            zmm1[0] = zmm1[0] * zmm3[0]
            int32_t rcx_3 = int.d(zmm1[0])
            
            if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3))[0] == zmm1[0]))
                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_3
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
            
            zmm4.d = zmm4.d f- 1f
            zmm1[0] = zmm1[0] f/ zmm4.d
    case 2
        zmm3[0] = zmm3[0] * 1.57079637f
        zmm1 = 0x3f800000
        zmm1[0] = 1f - cosf(zmm3[0])
        zmm1[0]
    case 3
        zmm3[0] = zmm3[0] * 1.57079637f
        return sinf(zmm3[0]) __tailcall
    case 4
        arg1[0] = arg1[0] + zmm3[0]
        
        if (zmm3[0] >= 0.5f)
            arg1[0] = arg1[0] - 1f
            arg1[0] = arg1[0] * 1.57079637f
            float zmm0_3[0x4] = sinf(arg1[0])
            zmm0_3[0] = zmm0_3[0] + 1f
            zmm0_3[0] = zmm0_3[0] * 0.5f
            return 
        
        arg1[0] = arg1[0] * 1.57079637f
        zmm1 = 0x3f800000
        zmm1[0] = 1f - cosf(arg1[0])
        zmm1[0] = zmm1[0] * 0.5f
        zmm1[0]
    case 5
        return powf(arg1[0], arg3[0]) __tailcall
    case 6
        zmm6 = 0x3f800000
        arg1 = 0x3f800000
        arg1[0] = 1f - zmm3[0]
        zmm6[0] = 1f - powf(arg1[0], arg3[0])
        zmm6[0]
    case 7
        bool cond:0 = zmm3[0] >= 0.5f
        zmm3[0] = zmm3[0] + zmm3[0]
        
        if (not(cond:0))
            float zmm0_5[0x4] = powf(zmm3[0], arg3[0])
            zmm0_5[0] = zmm0_5[0] * 0.5f
            return 
        
        zmm3[0] = zmm3[0] - 1f
        arg1 = 0x3f800000
        arg1[0] = 1f - zmm3[0]
        zmm1 = 0x3f800000
        zmm1[0] = 1f - powf(arg1[0], arg3[0])
        zmm1[0] = zmm1[0] + 1f
        zmm1[0] = zmm1[0] * 0.5f
        zmm1[0]
    case 8
        if (not(zmm3[0] == 0f))
            zmm3[0] = zmm3[0] - 1f
            zmm3[0] = zmm3[0] * 10f
            return powf(0x40000000[0], zmm3[0]) __tailcall
    case 9
        if (not(zmm3[0] == 1f))
            zmm3[0] = zmm3[0] * -10f
            0x3f800000[0] = 1f - powf(0x40000000[0], zmm3[0])[0]
    case 0xa
        bool cond:1 = zmm3[0] >= 0.5f
        zmm3[0] = zmm3[0] + zmm3[0]
        
        if (cond:1)
            zmm3[0] = zmm3[0] - 1f
            
            if (not(zmm3[0] != 1f))
                arg3 = 0x3f800000
                arg3[0] = 1f + 1f
                arg3[0] = arg3[0] * 0.5f
                return 
            
            zmm3[0] = zmm3[0] * -10f
            arg3 = 0x3f800000
            arg3[0] = 1f - powf(0x40000000[0], zmm3[0])[0]
            arg3[0] = arg3[0] + 1f
        else
            arg3 = zx.o(0)
            
            if (not(zmm3[0] == 0f))
                zmm3[0] = zmm3[0] - 1f
                zmm3[0] = zmm3[0] * 10f
                float zmm0_8[0x4] = powf(0x40000000[0], zmm3[0])
                zmm0_8[0] = zmm0_8[0] * 0.5f
                return 
        
        arg3[0] = arg3[0] * 0.5f
    case 0xb
        zmm1 = 0x3f800000
        zmm3[0] = zmm3[0] * zmm3[0]
        zmm1[0] = 1f - zmm3[0]
        0x3f800000[0] = 1f - _mm_sqrt_ss(0, zmm1[0])[0]
    case 0xc
        arg1 = 0x3f800000
        zmm3[0] = zmm3[0] - 1f
        zmm3[0] = zmm3[0] * zmm3[0]
        arg1[0] = 1f - zmm3[0]
        _mm_sqrt_ss(arg1[0], arg1[0])
    case 0xd
        arg3 = zmm3
        bool cond:2_1 = zmm3[0] >= 0.5f
        arg3[0] = arg3[0] + zmm3[0]
        
        if (cond:2_1)
            arg3[0] = arg3[0] - 2f
            arg1 = 0x3f800000
            arg3[0] = arg3[0] * arg3[0]
            arg1[0] = 1f - arg3[0]
            zmm3 = _mm_sqrt_ss(zx.o(0)[0], arg1[0])
            zmm3[0] = zmm3[0] + 1f
        else
            zmm3 = 0x3f800000
            arg1 = 0x3f800000
            arg3[0] = arg3[0] * arg3[0]
            arg1[0] = 1f - arg3[0]
            zmm3[0] = 1f - _mm_sqrt_ss(zx.o(0)[0], arg1[0])[0]
        
        zmm3[0] = zmm3[0] * 0.5f
