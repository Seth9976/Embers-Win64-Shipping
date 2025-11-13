// 函数: sub_141f36d70
// 地址: 0x141f36d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = sub_141f0aa40(arg1)
char rax = *(arg1 + 0x320)
int128_t result

if (rax == 1)
    result.d = zmm0.d f* 10000f
    return result

if (rax != 2)
    result.d = zmm0.d f* 16f
    return result

result.d = zmm0.d f* 3183.09888f
return result
