// 函数: sub_1426e3380
// 地址: 0x1426e3380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = data_143b58058
int32_t zmm1 = *arg1
int64_t result

if (not((zmm2 ^ 0x80000000).d f>= zmm1) && not(zmm1 f>= zmm2.d))
    zmm2 = data_143b5805c
    zmm1 = arg1[1]
    
    if (not((zmm2 ^ 0x80000000).d f>= zmm1) && not(zmm1 f>= zmm2.d))
        zmm2 = data_143b58060
        zmm1 = arg1[2]
        
        if (not((zmm2 ^ 0x80000000).d f>= zmm1) && not(zmm1 f>= zmm2.d))
            result.b = 1
            return result

result.b = 0
return result
