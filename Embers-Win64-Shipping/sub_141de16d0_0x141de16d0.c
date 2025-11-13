// 函数: sub_141de16d0
// 地址: 0x141de16d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg1
float zmm7[0x4]
float var_28[0x4] = zmm7
int128_t zmm8
int128_t var_38 = zmm8

if (zx.d(arg2) - 1 u> 0xd)
label_141de1b37:
    
    if (not(zmm6[0] < 0f))
        return __minss_xmmss_memss(zmm6[0], 0x3f800000)
    
    return zx.o(0)

float zmm1[0x4]
float zmm2[0x4]
int32_t zmm3

switch (arg2)
    case 1
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * 3f
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] + zmm6[0]
        zmm6[0] = zmm6[0] - zmm6[0]
        
        if (not(zmm6[0] < 0f))
            return __minss_xmmss_memss(zmm6[0], 0x3f800000)
        
        return zx.o(0)
    case 2
        if (not(zmm6[0] >= 0f))
            return _mm_min_ss(0, 0x3f800000)
        
        if (not(zmm6[0] < 1f))
            return _mm_min_ss(0x3f800000, 0x3f800000)
        
        zmm1 = 0x40400000
        arg1[0] = arg1[0] + zmm6[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm1[0] = 3f - arg1[0]
        zmm1[0] = zmm1[0] * zmm6[0]
        
        if (zmm1[0] < 0f)
            return zx.o(0)
        
        return _mm_min_ss(zmm1[0], 0x3f800000)
    case 3
        zmm6[0] = zmm6[0] * 3.14159274f
        zmm6[0] = zmm6[0] - 1.57079637f
        arg1 = sinf(zmm6[0])
        arg1[0] = arg1[0] + 1f
        arg1[0] = arg1[0] * 0.5f
        
        if (arg1[0] < 0f)
            return zx.o(0)
        
        return _mm_min_ss(arg1[0], 0x3f800000)
    case 4
        zmm3 = 0x3f000000
        zmm1 = zmm6
        bool cond:0_1 = zmm6[0] >= 0.5f
        zmm2 = 0x3f800000
        zmm1[0] = zmm1[0] + zmm6[0]
        
        if (cond:0_1)
            zmm1[0] = zmm1[0] - 1f
            arg1 = 0x3f800000
            arg1[0] = 1f - zmm1[0]
        label_141de17b9:
            arg1[0] = arg1[0] * arg1[0]
            goto label_141de17bd
        
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm1[0] = zmm1[0] f* zmm3
    case 5
        zmm3 = 0x3f000000
        arg1[0] = arg1[0] + zmm6[0]
        zmm2 = 0x3f800000
        
        if (zmm6[0] >= 0.5f)
            arg1[0] = arg1[0] - 1f
            zmm1 = 0x3f800000
            zmm1[0] = 1f - arg1[0]
            arg1 = zmm1
            arg1[0] = arg1[0] * zmm1[0]
            arg1[0] = arg1[0] * zmm1[0]
        label_141de17bd:
            zmm1 = zmm2
            zmm1[0] = zmm1[0] - arg1[0]
            zmm1[0] = zmm1[0] + zmm2[0]
            zmm1[0] = zmm1[0] f* zmm3
        else
            zmm1 = arg1
            zmm1[0] = zmm1[0] * arg1[0]
            zmm1[0] = zmm1[0] * arg1[0]
            zmm1[0] = zmm1[0] f* zmm3
    case 6
        zmm3 = 0x3f000000
        zmm1 = zmm6
        bool cond:2_1 = zmm6[0] >= 0.5f
        zmm2 = 0x3f800000
        zmm1[0] = zmm1[0] + zmm6[0]
        
        if (cond:2_1)
            zmm1[0] = zmm1[0] - 1f
            arg1 = 0x3f800000
            arg1[0] = 1f - zmm1[0]
            arg1[0] = arg1[0] * arg1[0]
            goto label_141de17b9
        
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm1[0] = zmm1[0] f* zmm3
    case 7
        zmm3 = 0x3f000000
        arg1[0] = arg1[0] + zmm6[0]
        zmm2 = 0x3f800000
        
        if (zmm6[0] >= 0.5f)
            arg1[0] = arg1[0] - 1f
            zmm1 = 0x3f800000
            zmm1[0] = 1f - arg1[0]
            arg1 = zmm1
            arg1[0] = arg1[0] * zmm1[0]
            arg1[0] = arg1[0] * arg1[0]
            arg1[0] = arg1[0] * zmm1[0]
            goto label_141de17bd
        
        zmm1 = arg1
        zmm1[0] = zmm1[0] * arg1[0]
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm1[0] = zmm1[0] * arg1[0]
        zmm1[0] = zmm1[0] f* zmm3
    case 8
        zmm3 = 0x3f800000
        zmm6[0] = zmm6[0] * zmm6[0]
        arg1 = 0x3f800000
        zmm2 = 0x3f800000
        arg1[0] = 1f - zmm6[0]
        zmm2[0] = 1f - _mm_sqrt_ss(0, arg1[0])[0]
    label_141de1931:
        
        if (not(zmm2[0] < 0f))
            return _mm_min_ss(zmm2[0], zmm3)
        
        return zx.o(0)
    case 9
        zmm2 = 0x3f800000
        zmm6[0] = zmm6[0] - 1f
        arg1 = 0x3f800000
        zmm6[0] = zmm6[0] * zmm6[0]
        arg1[0] = 1f - zmm6[0]
        zmm1 = _mm_sqrt_ss(0, arg1[0])
    case 0xa
        bool cond:4_1 = zmm6[0] >= 0.5f
        zmm3 = 0x3f800000
        zmm6[0] = zmm6[0] + zmm6[0]
        arg1 = 0x3f800000
        
        if (cond:4_1)
            zmm6[0] = zmm6[0] - 2f
            zmm6[0] = zmm6[0] * zmm6[0]
            arg1[0] = 1f - zmm6[0]
            zmm2 = _mm_sqrt_ss(0, arg1[0])
            zmm2[0] = zmm2[0] + 1f
            zmm2[0] = zmm2[0] * 0.5f
        else
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm2 = 0x3f800000
            arg1[0] = 1f - zmm6[0]
            zmm2[0] = 1f - _mm_sqrt_ss(0, arg1[0])[0]
            zmm2[0] = zmm2[0] * 0.5f
        
        goto label_141de1931
    case 0xb
        if (zmm6[0] != 0f)
            zmm6[0] = zmm6[0] - 1f
            zmm6[0] = zmm6[0] * 10f
            arg1 = powf(0x40000000[0], zmm6[0])
        else
            arg1 = zx.o(0)
        
        if (arg1[0] < 0f)
            return zx.o(0)
        
        return _mm_min_ss(arg1[0], 0x3f800000)
    case 0xc
        if (zmm6[0] != 1f)
            zmm6[0] = zmm6[0] * -10f
            zmm1 = 0x3f800000
            zmm1[0] = 1f - powf(0x40000000[0], zmm6[0])[0]
        else
            zmm1 = 0x3f800000
        
        arg1 = zx.o(0)
        
        if (not(zmm1[0] < arg1[0]))
            return _mm_min_ss(zmm1[0], 0x3f800000)
        
        return arg1
    case 0xd
        zmm6[0] = zmm6[0] + zmm6[0]
        
        if (zmm6[0] >= 0.5f)
            zmm6[0] = zmm6[0] - 1f
            
            if (zmm6[0] != 1f)
                zmm6[0] = zmm6[0] * -10f
                zmm1 = 0x3f800000
                zmm1[0] = 1f - powf(0x40000000[0], zmm6[0])[0]
            else
                zmm1 = 0x3f800000
            
            zmm1[0] = zmm1[0] + 1f
        else if (zmm6[0] != 0f)
            zmm6[0] = zmm6[0] - 1f
            zmm6[0] = zmm6[0] * 10f
            zmm1 = powf(0x40000000[0], zmm6[0])
        else
            zmm1 = zx.o(0)
        
        zmm1[0] = zmm1[0] * 0.5f
        
        if (zmm1[0] < 0f)
            return zx.o(0)
        
        return _mm_min_ss(zmm1[0], 0x3f800000)
    case 0xe
        if (arg3 == 0)
            goto label_141de1b37
        
        int32_t arg_10
        int32_t arg_20
        sub_141f8bae0(arg3, &arg_20, &arg_10)
        uint128_t zmm1_1
        zmm1_1.d = arg_10.d f- arg_20
        zmm1_1.d = zmm1_1.d f* zmm6[0]
        zmm1_1.d = zmm1_1.d f+ arg_20
        arg1 = sub_141f89240(arg3, zmm1_1)
        
        if (arg1[0] < 0f)
            return zx.o(0)
        
        return __minss_xmmss_memss(arg1[0], 0x3f800000)

if (not(zmm1[0] < 0f))
    return _mm_min_ss(zmm1[0], zmm2[0])

return zx.o(0)
