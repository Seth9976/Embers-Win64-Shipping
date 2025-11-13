// 函数: sub_141f385a0
// 地址: 0x141f385a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x1a0)

if (result == 0)
    return result

sub_1420f35b0(result, arg1)
int32_t zmm1 = (zx.o(0)).d
*result = &data_143274900
result[0x30].d = arg1[0x67].d
*(result + 0x184) = *(arg1 + 0x33c)
int32_t zmm0 = arg1[0x68].d

if (not(zmm0 f< 0f))
    zmm1 = __minss_xmmss_memss(zmm0, 0x42b00000)

result[0x31].d = zmm1
*(result + 0x18c) = __maxss_xmmss_memss(*(arg1 + 0x344), 0x3dcccccd)
result[0x32] = arg1[0x6a]
result[0x33] = arg1[0x69]
return result
