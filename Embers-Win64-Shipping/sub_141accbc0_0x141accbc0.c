// 函数: sub_141accbc0
// 地址: 0x141accbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7 = arg1
uint128_t result_1 = 0x3f800000
uint128_t result = arg1
uint128_t zmm10 = arg1

if (arg4 != 0)
    arg1.d = 1f f- zmm7.d
    zmm7 = arg1

uint64_t rax = zx.q(arg3)
uint128_t zmm1
uint128_t zmm2

if (rax.d u<= 0xe)
    switch (rax)
        case 0
            result = zx.o(0)
            
            if (not(zmm7.d f< result.d))
                result = _mm_min_ss(zmm7.d, 0x3f800000)
        case 1
            zmm7.d = zmm7.d f* 3.14159274f
            zmm7.d = zmm7.d f- 1.57079637f
            arg1.d = sinf(zmm7.d).d f+ 1f
            result = zx.o(0)
            arg1.d = arg1.d f* 0.5f
        label_141accc6b:
            
            if (not(arg1.d f< result.d))
                result = _mm_min_ss(arg1.d, 0x3f800000)
        case 2
            zmm1.d = zmm7.d f* zmm7.d
            arg1 = zmm1
            zmm1.d = zmm1.d f* 3f
            arg1.d = arg1.d f* zmm7.d
            arg1.d = arg1.d f+ arg1.d
            zmm1.d = zmm1.d f- arg1.d
        label_141accc9f:
            result = zx.o(0)
        label_141accca2:
            
            if (not(zmm1.d f< result.d))
                result = _mm_min_ss(zmm1.d, 0x3f800000)
        case 3
            zmm1.d = zmm7.d f+ zmm7.d
            
            if (zmm7.d f>= 0.5f)
                zmm1.d = zmm1.d f- 1f
                arg1.d = 1f f- zmm1.d
                arg1.d = arg1.d f* arg1.d
                zmm1.d = 1f f- arg1.d
                zmm1.d = zmm1.d f+ 1f
            else
                zmm1.d = zmm1.d f* zmm1.d
            
            zmm1.d = zmm1.d f* 0.5f
            result = zx.o(0)
            
            if (not(zmm1.d f< 0f))
                result = _mm_min_ss(zmm1.d, 0x3f800000)
        case 4
            arg1.d = zmm7.d f+ zmm7.d
            
            if (zmm7.d f>= 0.5f)
                arg1.d = arg1.d f- 1f
                zmm1.d = 1f f- arg1.d
                arg1.d = zmm1.d f* zmm1.d
                arg1.d = arg1.d f* zmm1.d
                zmm1.d = 1f f- arg1.d
                zmm1.d = zmm1.d f+ 1f
            else
                zmm1.d = arg1.d f* arg1.d
                zmm1.d = zmm1.d f* arg1.d
            
            zmm1.d = zmm1.d f* 0.5f
            result = zx.o(0)
            
            if (not(zmm1.d f< 0f))
                result = _mm_min_ss(zmm1.d, 0x3f800000)
        case 5
            result = zx.o(0)
            
            if (zmm7.d f>= result.d)
                if (zmm7.d f< 1f)
                    arg1.d = zmm7.d f+ zmm7.d
                    zmm7.d = zmm7.d f* zmm7.d
                    zmm1.d = 3f f- arg1.d
                    zmm1.d = zmm1.d f* zmm7.d
                    goto label_141accca2
                
                result = _mm_min_ss(0x3f800000, 0x3f800000)
            else
                result = _mm_min_ss(zx.o(0).d, 0x3f800000)
        case 6
            zmm2 = 0x3f000000
            zmm1.d = zmm7.d f+ zmm7.d
            
            if (not(zmm7.d f>= 0.5f))
                zmm1.d = zmm1.d f* zmm1.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm1.d = zmm1.d f* 0.5f
                goto label_141accc9f
            
            zmm1.d = zmm1.d f- 1f
            arg1.d = 1f f- zmm1.d
            arg1.d = arg1.d f* arg1.d
            arg1.d = arg1.d f* arg1.d
        label_141accdfd:
            zmm1.d = 1f f- arg1.d
            zmm1.d = zmm1.d f+ 1f
            zmm1.d = zmm1.d f* zmm2.d
            goto label_141accc9f
        case 7
            zmm2 = 0x3f000000
            arg1.d = zmm7.d f+ zmm7.d
            
            if (not(zmm7.d f>= 0.5f))
                zmm1.d = arg1.d f* arg1.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm1.d = zmm1.d f* arg1.d
                zmm1.d = zmm1.d f* 0.5f
                goto label_141accc9f
            
            arg1.d = arg1.d f- 1f
            zmm1.d = 1f f- arg1.d
            arg1.d = zmm1.d f* zmm1.d
            arg1.d = arg1.d f* arg1.d
            arg1.d = arg1.d f* zmm1.d
            goto label_141accdfd
        case 8
            zmm7.d = zmm7.d f* zmm7.d
            result = zx.o(0)
            arg1.d = 1f f- zmm7.d
            zmm2.d = 1f f- _mm_sqrt_ss(0, arg1.d).d
            
            if (not(zmm2.d f< result.d))
                result = _mm_min_ss(zmm2.d, 0x3f800000)
        case 9
            zmm7.d = zmm7.d f- 1f
            zmm7.d = zmm7.d f* zmm7.d
            arg1.d = 1f f- zmm7.d
            zmm1 = _mm_sqrt_ss(0, arg1.d)
            goto label_141accc9f
        case 0xa
            zmm1.d = zmm7.d f+ zmm7.d
            
            if (zmm7.d f>= 0.5f)
                zmm1.d = zmm1.d f- 2f
                zmm1.d = zmm1.d f* zmm1.d
                arg1.d = 1f f- zmm1.d
                zmm2.d = _mm_sqrt_ss(0, arg1.d).d f+ 1f
            else
                zmm1.d = zmm1.d f* zmm1.d
                arg1.d = 1f f- zmm1.d
                zmm2.d = 1f f- _mm_sqrt_ss(0, arg1.d).d
            
            zmm2.d = zmm2.d f* 0.5f
            result = zx.o(0)
            
            if (not(zmm2.d f< result.d))
                result = _mm_min_ss(zmm2.d, 0x3f800000)
        case 0xb
            result = zx.o(0)
            
            if (zmm7.d f!= result.d)
                zmm7.d = zmm7.d f- 1f
                zmm7.d = zmm7.d f* 10f
                arg1 = powf(0x40000000.d, zmm7.d)
            else
                arg1 = zx.o(0)
            
            goto label_141accc6b
        case 0xc
            if (zmm7.d f!= 1f)
                zmm7.d = zmm7.d f* -10f
                zmm1.d = 1f f- powf(0x40000000.d, zmm7.d).d
            else
                zmm1 = 0x3f800000
            
            result = zx.o(0)
            
            if (not(zmm1.d f< 0f))
                result = _mm_min_ss(zmm1.d, 0x3f800000)
        case 0xd
            result = zx.o(0)
            zmm1.d = zmm7.d f+ zmm7.d
            
            if (zmm7.d f>= 0.5f)
                zmm1.d = zmm1.d f- 1f
                
                if (zmm1.d f!= 1f)
                    zmm1.d = zmm1.d f* -10f
                    zmm2.d = 1f f- powf(0x40000000.d, zmm1.d).d
                else
                    zmm2 = 0x3f800000
                
                zmm2.d = zmm2.d f+ 1f
            else if (zmm1.d f!= result.d)
                zmm1.d = zmm1.d f- 1f
                zmm1.d = zmm1.d f* 10f
                zmm2 = powf(0x40000000.d, zmm1.d)
            else
                zmm2 = zx.o(0)
            
            zmm2.d = zmm2.d f* 0.5f
            
            if (not(zmm2.d f< result.d))
                result = _mm_min_ss(zmm2.d, 0x3f800000)
        case 0xe
            if (sub_141f8b8d0(arg2) != 0)
                arg1, result_1 = sub_141f86ef0(sub_141f8b8d0(arg2), zmm7, zmm7)
                result = arg1

if (arg4 != 0)
    result_1.d = result_1.d f- result.d
    result = result_1

result.d = result.d f- zmm10.d
result.d = result.d f* arg5
result.d = result.d f+ zmm10.d
return result
