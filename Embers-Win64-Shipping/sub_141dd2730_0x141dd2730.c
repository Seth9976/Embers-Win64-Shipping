// 函数: sub_141dd2730
// 地址: 0x141dd2730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0xf3)

if (result == 0)
    return result

uint32_t result_1 = zx.d(result)
int64_t rax = sub_14202a680(arg1, result_1 - 1)
int64_t r8_1 = *arg1

if (rax == 0)
    return sub_1420eb500(*((*(r8_1 + 0x150))(arg1) + 0x30), arg1, result_1 - 1)

jump(*(r8_1 + 0x2e0))
