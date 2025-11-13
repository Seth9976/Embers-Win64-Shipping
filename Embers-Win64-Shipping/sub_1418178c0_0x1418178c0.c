// 函数: sub_1418178c0
// 地址: 0x1418178c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6

if (sub_140acede0(arg2, arg3) != 0 && arg2 != 0x35 && arg3 != 0x35)
    switch (sub_140ad90e0(arg2))
        case 0
            zmm6.q = sub_140ad3350(arg2).q f* _mm_cvtepi32_pd(zx.q(arg1)).q
            zmm6.q = zmm6.q f/ sub_140ad3350(arg3)
            return zx.q(int.d(zmm6.q))
        case 1
            zmm6.q = sub_140acedc0(arg2).q f* _mm_cvtepi32_pd(zx.q(arg1))
            zmm6.q = zmm6.q f/ sub_140acedc0(arg3)
            return zx.q(int.d(zmm6.q))
        case 2
            zmm6.q = sub_140ae1270(arg2).q f* _mm_cvtepi32_pd(zx.q(arg1))
            zmm6.q = zmm6.q f/ sub_140ae1270(arg3)
            return zx.q(int.d(zmm6.q))
        case 3
            double zmm1 = 273.14999389648438
            uint32_t rcx_22 = zx.d(arg2)
            uint64_t zmm0 = _mm_cvtepi32_pd(zx.q(arg1))
            
            if (rcx_22 == 0xf)
                zmm0 = zmm0 f+ zmm1
            else if (rcx_22 == 0x10)
                zmm0 = zmm0 f* 0.55555555555555558 f+ 255.37222968207465
            
            uint32_t rcx_24 = zx.d(arg3)
            
            if (rcx_24 == 0xf)
                zmm0 = zmm0 f- zmm1
            else if (rcx_24 == 0x10)
                return zx.q(int.d(zmm0 f* 1.8 f- 459.67001342773438))
            
            return zx.q(int.d(zmm0))
        case 4
            zmm6.q = sub_140adc7b0(arg2).q f* _mm_cvtepi32_pd(zx.q(arg1))
            zmm6.q = zmm6.q f/ sub_140adc7b0(arg3)
            return zx.q(int.d(zmm6.q))
        case 5
            zmm6.q = sub_140ad6ef0(arg2).q f* _mm_cvtepi32_pd(zx.q(arg1))
            zmm6.q = zmm6.q f/ sub_140ad6ef0(arg3)
            return zx.q(int.d(zmm6.q))
        case 6
            zmm6.q = sub_140ad6f20(arg2).q f* _mm_cvtepi32_pd(zx.q(arg1))
            zmm6.q = zmm6.q f/ sub_140ad6f20(arg3)
            return zx.q(int.d(zmm6.q))
        case 7
            zmm6.q = sub_140ad31d0(arg2).q f* _mm_cvtepi32_pd(zx.q(arg1))
            zmm6.q = zmm6.q f/ sub_140ad31d0(arg3)
            return zx.q(int.d(zmm6.q))
        case 0xc
            zmm6.q = sub_140ae1650(arg2).q f* _mm_cvtepi32_pd(zx.q(arg1))
            zmm6.q = zmm6.q f/ sub_140ae1650(arg3)
            return zx.q(int.d(zmm6.q))
        case 0xe
            zmm6.q = sub_140adc850(arg2).q f* _mm_cvtepi32_pd(zx.q(arg1))
            zmm6.q = zmm6.q f/ sub_140adc850(arg3)
            return zx.q(int.d(zmm6.q))

return zx.q(arg1)
