// 函数: sub_142acc5b0
// 地址: 0x142acc5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
zmm7.q = arg1.q f+ 5.0
arg1.q = zmm7.q f/ 7.0
zmm7.q = zmm7.q f- sub_142a4b9b0(arg1.q) * 7.0
int32_t result = int.d(zmm7.q)

if (result == 0)
    return 7

return result
