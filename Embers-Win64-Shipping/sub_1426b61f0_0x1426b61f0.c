// 函数: sub_1426b61f0
// 地址: 0x1426b61f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(*arg3)
uint128_t zmm2 = data_143b57f80.d
uint64_t var_18 = zmm1.q
int32_t result

if (not((zmm2 ^ 0x80000000).d f>= zmm1.d) && not(zmm1.d f>= zmm2.d))
    zmm1 = data_143b57f80:4.d
    zmm2 = var_18:4.d
    
    if (not((zmm1 ^ 0x80000000).d f>= zmm2.d) && not(zmm2.d f>= zmm1.d))
        zmm1 = data_143b57f88
        zmm2 = arg3[1].d
        
        if (not((zmm1 ^ 0x80000000).d f>= zmm2.d) && not(zmm2.d f>= zmm1.d))
            result.b = 0
            return result

result.b = 1
return result
