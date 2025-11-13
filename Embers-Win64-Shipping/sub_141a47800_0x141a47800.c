// 函数: sub_141a47800
// 地址: 0x141a47800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 8))
float zmm3[0x4] = arg2
arg2[0] = arg2[0] + zmm3[0]
zmm3[0] = zmm3[0] - 0.5f
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] - 0.5f
float zmm0[0x4]
float zmm2[0x4]

if (rax - 1 u<= 0x14)
    switch (rax)
        case 1
            zmm0 = 0x3f800000
            zmm0[0] = 1f - zmm3[0]
            zmm0[0] = zmm0[0] * 1.57079637f
            int128_t zmm6
            zmm6.d = 1f - sinf(zmm0[0])
            return zmm6.d
        case 2
            zmm3[0] = zmm3[0] * 1.57079637f
            return sinf(zmm3[0]) __tailcall
        case 3
            if (arg2[0] >= 1f)
                zmm3[0] = zmm3[0] * 1.57079637f
                return (sinf(zmm3[0]) + 1f) * 0.5f
            
            zmm0 = 0x3f800000
            zmm0[0] = 1f - arg2[0]
            zmm0[0] = zmm0[0] * 1.57079637f
            int128_t zmm7
            zmm7.d = 1f - sinf(zmm0[0])
            zmm7.d = zmm7.d f* 0.5f
            return zmm7.d
        case 4
            zmm3[0] = zmm3[0] * zmm3[0]
        case 5
            arg2 = 0x3f800000
            zmm0 = 0x3f800000
            zmm0[0] = 1f - zmm3[0]
            zmm0[0] = zmm0[0] * zmm0[0]
            arg2[0] = 1f - zmm0[0]
            return arg2
        case 6
            if (not(arg2[0] >= 1f))
                arg2[0] = arg2[0] * arg2[0]
                arg2[0] = arg2[0] * 0.5f
                return arg2
            
            zmm0 = 0x3f800000
            arg2 = 0x3f800000
            zmm0[0] = 1f - zmm3[0]
            zmm0[0] = zmm0[0] * zmm0[0]
            arg2[0] = 1f - zmm0[0]
            arg2[0] = arg2[0] + 1f
            arg2[0] = arg2[0] * 0.5f
            return arg2
        case 7
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm3[0] = zmm3[0] * zmm3[0]
        case 8
            zmm0 = 0x3f800000
            zmm2 = 0x3f800000
            zmm2[0] = 1f - zmm3[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm0[0] = 1f - zmm2[0]
            return zmm0
        case 9
            zmm2 = 0x3f800000
            
            if (not(arg2[0] >= 1f))
                arg2[0] = arg2[0] * arg2[0]
                arg2[0] = arg2[0] * arg2[0]
                arg2[0] = arg2[0] * 0.5f
                return arg2
            
            zmm0 = 0x3f800000
            zmm0[0] = 1f - zmm3[0]
            arg2 = zmm0
            arg2[0] = arg2[0] * zmm0[0]
        label_141a47a01:
            arg2[0] = arg2[0] * zmm0[0]
            zmm2[0] = zmm2[0] - arg2[0]
            zmm2[0] = zmm2[0] + zmm2[0]
            zmm2[0] = zmm2[0] * 0.5f
            return zmm2
        case 0xa
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm3[0] = zmm3[0] * zmm3[0]
        case 0xb
            zmm0 = 0x3f800000
            arg2 = 0x3f800000
            arg2[0] = 1f - zmm3[0]
            arg2[0] = arg2[0] * arg2[0]
            arg2[0] = arg2[0] * arg2[0]
            zmm0[0] = 1f - arg2[0]
            return zmm0
        case 0xc
            if (not(arg2[0] >= 1f))
                arg2[0] = arg2[0] * arg2[0]
                arg2[0] = arg2[0] * arg2[0]
                arg2[0] = arg2[0] * 0.5f
                return arg2
            
            arg2 = 0x3f800000
            zmm0 = 0x3f800000
            arg2[0] = 1f - zmm3[0]
            arg2[0] = arg2[0] * arg2[0]
            arg2[0] = arg2[0] * arg2[0]
            zmm0[0] = 1f - arg2[0]
            zmm0[0] = zmm0[0] + 1f
            zmm0[0] = zmm0[0] * 0.5f
            return zmm0
        case 0xd
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm3[0] = zmm3[0] * zmm3[0]
        case 0xe
            zmm0 = 0x3f800000
            zmm2 = 0x3f800000
            zmm2[0] = 1f - zmm3[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm0[0] = 1f - zmm2[0]
            return zmm0
        case 0xf
            zmm2 = 0x3f800000
            
            if (not(arg2[0] >= 1f))
                arg2[0] = arg2[0] * arg2[0]
                arg2[0] = arg2[0] * arg2[0]
                arg2[0] = arg2[0] * arg2[0]
                arg2[0] = arg2[0] * 0.5f
                return arg2
            
            zmm0 = 0x3f800000
            zmm0[0] = 1f - zmm3[0]
            arg2 = zmm0
            arg2[0] = arg2[0] * zmm0[0]
            arg2[0] = arg2[0] * arg2[0]
            goto label_141a47a01
        case 0x10
            zmm3[0] = zmm3[0] - 1f
            zmm3[0] = zmm3[0] * 10f
            return powf(0x40000000[0], zmm3[0]) __tailcall
        case 0x11
            zmm3[0] = zmm3[0] * -10f
            arg2 = 0x3f800000
            arg2[0] = 1f - powf(0x40000000[0], zmm3[0])
            return arg2[0]
        case 0x12
            zmm0 = 0x40000000
            
            if (not(arg2[0] >= 1f))
                arg2[0] = arg2[0] - 1f
                arg2[0] = arg2[0] * 10f
                float zmm0_7[0x4] = powf(zmm0[0], arg2[0])
                zmm0_7[0] = zmm0_7[0] * 0.5f
                return zmm0_7
            
            zmm3[0] = zmm3[0] * -10f
            arg2 = 0x3f800000
            arg2[0] = 1f - powf(zmm0[0], zmm3[0])
            arg2[0] = arg2[0] + 1f
            arg2[0] = arg2[0] * 0.5f
            return arg2[0]
        case 0x13
            zmm0 = 0x3f800000
            arg2 = 0x3f800000
            zmm3[0] = zmm3[0] * zmm3[0]
            arg2[0] = 1f - zmm3[0]
            zmm0[0] = 1f - _mm_sqrt_ss(0, arg2[0])[0]
            return zmm0
        case 0x14
            arg2 = 0x3f800000
            zmm0 = 0x3f800000
            zmm0[0] = 1f - zmm3[0]
            zmm0[0] = zmm0[0] * zmm0[0]
            arg2[0] = 1f - zmm0[0]
            return _mm_sqrt_ss(0, arg2[0])
        case 0x15
            zmm2 = 0x3f800000
            zmm0 = 0x3f800000
            
            if (not(arg2[0] >= 1f))
                arg2[0] = arg2[0] * arg2[0]
                zmm0[0] = 1f - arg2[0]
                zmm2[0] = 1f - _mm_sqrt_ss(0, zmm0[0])[0]
                zmm2[0] = zmm2[0] * 0.5f
                return zmm2
            
            arg2 = 0x3f800000
            arg2[0] = 1f - zmm3[0]
            arg2[0] = arg2[0] * arg2[0]
            zmm0[0] = 1f - arg2[0]
            float temp0_3[0x4] = _mm_sqrt_ss(0, zmm0[0])
            temp0_3[0] = temp0_3[0] + 1f
            temp0_3[0] = temp0_3[0] * 0.5f
            return temp0_3
return zmm3
