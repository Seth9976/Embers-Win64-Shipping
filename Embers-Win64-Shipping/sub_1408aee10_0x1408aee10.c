// 函数: sub_1408aee10
// 地址: 0x1408aee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = arg6
int128_t zmm6
int128_t var_18 = zmm6
uint128_t zmm7 = arg1
uint128_t zmm8 = arg2
int128_t zmm9
int128_t var_48 = zmm9

if (arg4 == 0)
label_1408af28e:
    
    if (not(arg3.d f> zmm4.d))
        return zmm8
else
    uint128_t zmm3 = arg5
    arg2.d = zmm4.d f- zmm3.d
    
    if (arg3.d f<= arg2.d)
        return zmm8
    
    arg1.d = zmm3.d f+ zmm4.d
    
    if (not(arg3.d f>= arg1.d))
        if (zx.d(arg4) - 1 u> 0xa)
            goto label_1408af28e
        
        switch (arg4)
            case 1
                zmm7.d = zmm7.d f- zmm8.d
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                arg3.d = arg3.d f* arg3.d
                arg2.d = 1f f- arg3.d
                arg1.d = 1f f- _mm_sqrt_ss(0, arg2.d).d
                arg1.d = arg1.d f* zmm7.d
                arg1.d = arg1.d f+ zmm8.d
                return arg1
            case 2
                zmm7.d = zmm7.d f- zmm8.d
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                arg3.d = arg3.d f- 1f
                arg3.d = arg3.d f* arg3.d
                arg2.d = 1f f- arg3.d
                arg1.d = _mm_sqrt_ss(0, arg2.d).d f* zmm7.d
                arg1.d = arg1.d f+ zmm8.d
                return arg1
            case 3
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                zmm3.d = arg3.d f+ arg3.d
                
                if (arg3.d f>= 0.5f)
                    zmm3.d = zmm3.d f- 2f
                    zmm3.d = zmm3.d f* zmm3.d
                    arg1.d = 1f f- zmm3.d
                    arg3.d = _mm_sqrt_ss(0, arg1.d).d f+ 1f
                else
                    zmm3.d = zmm3.d f* zmm3.d
                    arg1.d = 1f f- zmm3.d
                    arg3.d = 1f f- _mm_sqrt_ss(zx.o(0).d, arg1.d).d
                
                zmm7.d = zmm7.d f- zmm8.d
                arg3.d = arg3.d f* 0.5f
                zmm7.d = zmm7.d f* arg3.d
                zmm7.d = zmm7.d f+ zmm8.d
            case 4
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                arg1 = zx.o(0)
                
                if (not(arg3.d f== 0f))
                    arg3.d = arg3.d f- 1f
                    arg3.d = arg3.d f* 10f
                    arg1 = powf(0x40000000.d, arg3.d)
                
                zmm7.d = zmm7.d f- zmm8.d
                zmm7.d = zmm7.d f* arg1.d
                zmm7.d = zmm7.d f+ zmm8.d
            case 5
                zmm6 = 0x3f800000
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                
                if (not(arg3.d f== 1f))
                    arg3.d = arg3.d f* -10f
                    zmm6.d = 1f f- powf(0x40000000.d, arg3.d).d
                
                zmm7.d = zmm7.d f- zmm8.d
                zmm7.d = zmm7.d f* zmm6.d
                zmm7.d = zmm7.d f+ zmm8.d
            case 6
                zmm9 = 0x3f000000
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                zmm3.d = arg3.d f+ arg3.d
                
                if (arg3.d f>= 0.5f)
                    zmm3.d = zmm3.d f- 1f
                    
                    if (zmm3.d f!= 1f)
                        zmm3.d = zmm3.d f* -10f
                        arg2.d = 1f f- powf(0x40000000.d, zmm3.d).d
                    else
                        arg2 = 0x3f800000
                    
                    arg2.d = arg2.d f+ 1f
                else
                    arg2 = zx.o(0)
                    
                    if (not(zmm3.d f== arg2.d))
                        zmm3.d = zmm3.d f- 1f
                        zmm3.d = zmm3.d f* 10f
                        arg2 = powf(0x40000000.d, zmm3.d)
                
            label_1408af078:
                zmm7.d = zmm7.d f- zmm8.d
                arg2.d = arg2.d f* zmm9.d
                zmm7.d = zmm7.d f* arg2.d
                zmm7.d = zmm7.d f+ zmm8.d
            case 7
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                arg3.d = arg3.d f* 1.57079637f
                zmm7.d = zmm7.d f- zmm8.d
                arg2.d = 1f f- cosf(arg3.d).d
                arg2.d = arg2.d f* zmm7.d
                arg2.d = arg2.d f+ zmm8.d
                return arg2
            case 8
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                arg3.d = arg3.d f* 1.57079637f
                zmm7.d = zmm7.d f- zmm8.d
                arg1.d = sinf(arg3.d).d f* zmm7.d
                arg1.d = arg1.d f+ zmm8.d
                return arg1
            case 9
                zmm9 = 0x3f000000
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                arg1.d = arg3.d f+ arg3.d
                
                if (arg3.d f>= 0.5f)
                    arg1.d = arg1.d f- 1f
                    arg1.d = arg1.d f* 1.57079637f
                    arg2.d = sinf(arg1.d).d f+ 1f
                else
                    arg1.d = arg1.d f* 1.57079637f
                    arg2.d = 1f f- cosf(arg1.d).d
                
                goto label_1408af078
            case 0xa
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                
                if (arg7 s<= 1 || arg3.d f<= 0f)
                    return zmm8
                
                if (arg3.d f>= 1f)
                    return zmm7
                
                zmm3 = _mm_cvtepi32_ps(zx.o(arg7))
                arg2.d = zmm3.d f* arg3.d
                int32_t rcx_3 = int.d(arg2.d)
                
                if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== arg2.d))
                    arg2 = _mm_cvtepi32_ps(zx.o(rcx_3
                        - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1)))
                
                zmm3.d = zmm3.d f- 1f
                arg1.d = zmm7.d f- zmm8.d
                arg2.d = arg2.d f/ zmm3.d
                zmm7.d = arg2.d f* arg1.d
                zmm7.d = zmm7.d f+ zmm8.d
            case 0xb
                zmm7.d = zmm7.d f- zmm8.d
                arg1.d = 0.5f f/ zmm3.d
                arg1.d = arg1.d f* arg2.d
                arg3.d = arg3.d f- arg1.d
                arg3.d = arg3.d f* zmm7.d
                arg3.d = arg3.d f+ zmm8.d
                return arg3

return zmm7
