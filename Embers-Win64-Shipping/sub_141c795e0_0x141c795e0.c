// 函数: sub_141c795e0
// 地址: 0x141c795e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int64_t rsi = 0
int64_t result_1

if (arg1 == 0)
    result_1 = sub_140a82f30(arg2, 0x10)
    result = result_1
    rsi = sub_140a75d70(result_1)
else if (arg2 == 0)
    sub_140a74f90(arg1)
else if (arg4 != 0)
    result_1 = sub_140a84c80(arg1, arg2, 0x10)
    result = result_1
    rsi = sub_140a75d70(result_1)

if (arg3 != 0)
    *arg3 = rsi

return result
