// 函数: sub_141e55300
// 地址: 0x141e55300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg1 + 8))
int128_t zmm7 = zx.o(0)
int32_t zmm0 = (zx.o(0)).d
int128_t zmm8 = 0x3f800000
uint128_t zmm6
zmm6.d = arg2.d f* arg4
arg3 = _mm_max_ss(arg3.d, 0x3f800000)

if (rax.d u<= 5)
    switch (rax)
        case 0
            zmm6.d = zmm6.d f/ arg3.d
            zmm0 = 1f f- zmm6.d
        label_141e55453:
            
            if (not(zmm0 f>= zmm7.d))
                return (zx.o(0)).d
        case 1
            if (not(zmm6.d f>= 9.99999975e-05f))
                zmm6 = 0x38d1b717
            
            zmm6.d = zmm6.d f/ arg3.d
            zmm0 = logf(zmm6.d) f* -0.5f
            goto label_141e55453
        case 2
            if (not(zmm6.d f>= 9.99999975e-05f))
                zmm6 = 0x38d1b717
            
            zmm6.d = zmm6.d f/ arg3.d
            zmm0 = 0.0199999996f f/ zmm6.d
            goto label_141e55453
        case 3
            if (not(zmm6.d f> arg3.d))
                zmm6.d = zmm6.d f/ arg3.d
                zmm0 = logf(__maxss_xmmss_memss(1f f- zmm6.d, 0x38d1b717)) f* 0.5f f+ 1f
                goto label_141e55453
        case 4
            char rax_1 = *(arg1 + 0x10)
            zmm6.d = zmm6.d f/ arg3.d
            
            if (rax_1 == 2)
                if (not(zmm6.d f>= 0f))
                    zmm6 = zx.o(0)
                else if (not(zmm6.d f< 1f))
                    zmm6 = 0x3f800000
                
                goto label_141e55419
            
            if (rax_1 != 1)
                goto label_141e55419
            
            if (not(zmm6.d f>= 0f))
                zmm6 = zx.o(0)
            label_141e55419:
                zmm6.d = zmm6.d f* *(arg1 + 0xc)
                zmm6.d = zmm6.d f* 0.0500000007f
                zmm0 = powf(0x41200000, zmm6.d)
                goto label_141e55453
            
            if (not(zmm6.d f>= 1f))
                goto label_141e55419
        case 5
            zmm6.d = zmm6.d f/ arg3.d
            zmm0, zmm7, zmm8 = sub_141f86ef0(sub_141f8b8d0(arg1 + 0x28), zmm6, zx.o(0))
            goto label_141e55453

return _mm_min_ss(zmm0, zmm8.d)
