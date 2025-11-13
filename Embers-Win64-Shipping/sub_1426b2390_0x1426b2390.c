// 函数: sub_1426b2390
// 地址: 0x1426b2390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg3[1].d
*arg4 = *arg3
arg4[1].d = result
uint128_t zmm2 = data_143b57f80.d
int32_t zmm1 = *arg4

if (not((zmm2 ^ 0x80000000).d f>= zmm1) && not(zmm1 f>= zmm2.d))
    zmm2 = data_143b57f80:4.d
    zmm1 = *(arg4 + 4)
    
    if (not((zmm2 ^ 0x80000000).d f>= zmm1) && not(zmm1 f>= zmm2.d))
        zmm2 = data_143b57f88
        zmm1 = arg4[1].d
        
        if (not((zmm2 ^ 0x80000000).d f>= zmm1) && not(zmm1 f>= zmm2.d))
            result.b = 1
            return result

result.b = 0
return result
