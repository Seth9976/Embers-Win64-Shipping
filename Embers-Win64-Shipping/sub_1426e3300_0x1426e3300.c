// 函数: sub_1426e3300
// 地址: 0x1426e3300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = data_143b58058
int32_t zmm3 = *arg1
int64_t result

if (not((zmm1 ^ 0x80000000).d f>= zmm3) && not(zmm3 f>= zmm1.d))
    zmm1 = data_143b5805c
    int32_t zmm2 = arg1[1]
    
    if (not((zmm1 ^ 0x80000000).d f>= zmm2) && not(zmm2 f>= zmm1.d))
        int128_t zmm5 = data_143b58060
        zmm1 = arg1[2]
        
        if (not((zmm5 ^ 0x80000000).d f>= zmm1.d) && not(zmm1.d f>= zmm5.d)
                && (zmm3 f!= 0f || zmm2 f!= 0f || not(zmm1.d f== 0f)))
            result.b = 1
            return result

result.b = 0
return result
