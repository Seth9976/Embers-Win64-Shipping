// 函数: sub_141ed8480
// 地址: 0x141ed8480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *(arg1 + 0x1c8)
int512_t result
result.o = zx.o(0)

if (not(zmm5[0] <= 0f))
    float zmm1 = *(arg1 + 0xc8)
    float zmm3 = *(arg1 + 0xc4)
    float zmm4 = *(arg1 + 0x1cc)
    
    if (not(zmm3 * zmm3 + zmm1 * zmm1 >= zmm4 * zmm4))
        zmm5[0] = zmm5[0] f* arg3.d
        result.o = __minss_xmmss_memss(zmm5[0], 0x3f800000)
        return result

result.o = arg3
return result
