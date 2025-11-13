// 函数: sub_141ee7910
// 地址: 0x141ee7910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg2)

if ((result.b & 1) != 0 && (result.b & 2) == 0 && not(9.99999975e-05f f> *(arg2 + 0x3c)))
    int128_t zmm6 = *(arg1 + 0x164)
    result = sub_140d3c6e0(&arg2[0x70])
    
    if (result != 0)
        result = sub_1422a2a50(result)
        uint64_t result_1 = result
        uint32_t rdx = zx.d(*result)
        
        if (rdx != 0)
            if (rdx == 1)
                result, zmm6 = sub_141edae80(result_1)
                zmm6 = _mm_min_ss((*(result_1 + 0xc)).d, zmm6.d)
            else if (rdx == 2)
                result, zmm6 = sub_141edae80(result_1)
                zmm6 = _mm_max_ss((*(result_1 + 0xc)).d, zmm6.d)
            else if (rdx == 3)
                zmm6 = 0x40000000
    
    if (not(zmm6.d f> *(arg2 + 0x3c)))
        result.b = 1
        return result

result.b = 0
return result
