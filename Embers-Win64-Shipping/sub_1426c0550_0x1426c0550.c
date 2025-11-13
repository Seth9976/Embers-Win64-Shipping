// 函数: sub_1426c0550
// 地址: 0x1426c0550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = data_143b57f80.d
int32_t result = arg3[1].d
uint64_t var_18 = *arg3
int32_t zmm3 = var_18.d
uint128_t zmm0 = zmm2 ^ 0x80000000

if (arg4 == 0)
    if (zmm0.d f>= zmm3 || zmm3 f>= zmm2.d)
        result.b = 0
        return result
    
    zmm2 = data_143b57f80:4.d
    zmm3 = var_18:4.d
    
    if ((zmm2 ^ 0x80000000).d f>= zmm3 || zmm3 f>= zmm2.d)
        result.b = 0
        return result
    
    zmm2 = data_143b57f88
    
    if ((zmm2 ^ 0x80000000).d f>= result || result f>= zmm2.d)
        result.b = 0
        return result
else if (not(zmm0.d f>= zmm3) && not(zmm3 f>= zmm2.d))
    zmm2 = data_143b57f80:4.d
    zmm3 = var_18:4.d
    
    if (not((zmm2 ^ 0x80000000).d f>= zmm3) && not(zmm3 f>= zmm2.d))
        zmm2 = data_143b57f88
        
        if (not((zmm2 ^ 0x80000000).d f>= result) && not(result f>= zmm2.d))
            result.b = 0
            return result

result.b = 1
return result
