// 函数: sub_142616370
// 地址: 0x142616370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = arg1[1] - *arg1
float zmm1 = arg2[1] - *arg2

if (not(zmm0 <= zmm1))
    return 0xffffffff

int64_t result
result.b = zmm1 > zmm0
return result
