// 函数: sub_142b9ad50
// 地址: 0x142b9ad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result
int512_t zmm1
result, zmm1 = sub_142b97900(arg1, arg2, arg3, arg4, arg5)

if (result == 2)
    result, zmm1 = sub_142b97ac0(arg1, arg2, 0, arg3, zmm1, arg4)

uint32_t result_1 = zx.d(result)

if ((result_1 == 2 || result_1 == 0x55) && (*arg6 & 4) != 0)
    return sub_142b9aaa0(arg1, arg2, arg3, arg4, zmm1, arg6)

return result
