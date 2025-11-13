// 函数: sub_141c46fb0
// 地址: 0x141c46fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rbx = arg1
float zmm0 = *arg1

if (arg1[5].b == 1)
    zmm0 = powf(10f, zmm0 * 0.0500000007f)
    *rbx = zmm0

int32_t result = rbx[2]
rbx[4] = result
rbx[1] = zmm0
rbx[5].b = 0
rbx[3] = 0xbf800000
return result
