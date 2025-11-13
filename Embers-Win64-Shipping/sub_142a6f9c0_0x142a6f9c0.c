// 函数: sub_142a6f9c0
// 地址: 0x142a6f9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    double zmm0 = floor(arg1[0].q)
    arg1[0].q f- zmm0
    
    if ((is_unordered.q(arg1[0].q, zmm0) || not(arg1[0].q f== zmm0))
            && boost::math::detail::isnan_impl<long double>(arg1[0].q) == 0
            && sub_142a4bc70(arg1[0].q) == 0)
        uint32_t temp0[0x4] = __andps_xmmxud_memxud(arg1, data_142d57d00)
        double zmm0_1 = floor(temp0[0].q)
        temp0[0].q = temp0[0].q f- zmm0_1
        
        if (arg2 == 1)
            temp0[0].q = temp0[0].q f* 10.0
            temp0[0].q = temp0[0].q f+ 0.5
            return int.q(temp0[0].q)
        
        if (arg2 == 2)
            temp0[0].q = temp0[0].q f* 100.0
            temp0[0].q = temp0[0].q f+ 0.5
            return int.q(temp0[0].q)
        
        if (arg2 == 3)
            temp0[0].q = temp0[0].q f* 1000.0
            temp0[0].q = temp0[0].q f+ 0.5
            return int.q(temp0[0].q)
        
        double zmm0_3 = floor(pow(10.0, _mm_cvtepi32_pd(zx.q(arg2))) f* temp0[0].q + 0.5)
        
        if (zmm0_3 <= 9.2233720368547758e+18)
            return int.q(zmm0_3)
        
        return 0x7fffffffffffffff

return 0
