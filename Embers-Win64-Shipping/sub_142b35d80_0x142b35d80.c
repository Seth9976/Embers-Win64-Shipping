// 函数: sub_142b35d80
// 地址: 0x142b35d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg2

if (*(arg1 + 0x98) != 0)
    return sub_142b35e80(arg1, arg2) __tailcall

int64_t* result

if (boost::math::detail::isnan_impl<long double>(zmm6.q) == 0)
    if (0.0 f<= zmm6.q)
        goto label_142b35df8
    
    result = *(arg1 + 0x50)
    
    if (result == 0)
        zmm6 ^= data_142d8e3c0
    label_142b35df8:
        
        if (_finite(zmm6.q) == 0)
            uint128_t zmm0_2 = sub_142a4b9b0(zmm6.q)
            zmm6.q f- zmm0_2.q
            
            if (is_unordered.q(zmm6.q, zmm0_2.q) || not(zmm6.q f== zmm0_2.q))
                if (not(0x3ff0000000000000 f<= zmm6.q))
                    result = *(arg1 + 0x60)
                
                if (0x3ff0000000000000 f<= zmm6.q || result == 0)
                    result = *(arg1 + 0x58)
                    
                    if (result == 0)
                        goto label_142b35e50
            else
            label_142b35e50:
                result = *(arg1 + 0x68)
                
                if (result == 0)
                    zmm6.q = zmm6.q f+ 0.5
                    return sub_142b36150(arg1, sub_142b36c50(zmm6))
        else
            result = *(arg1 + 0x70)
            
            if (result == 0)
                return sub_1417d9cf0(*(arg1 + 0x80)) __tailcall
else
    result = *(arg1 + 0x78)
    
    if (result == 0)
        return sub_141ea3eb0(*(arg1 + 0x80)) __tailcall

return result
