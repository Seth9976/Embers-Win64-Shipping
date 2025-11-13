// 函数: sub_141e644e0
// 地址: 0x141e644e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8
char* result = sub_141e5ec20(nullptr, &arg_8)

if (arg_8 != 0)
    EnterCriticalSection(&data_143f39aa0)
    int512_t entry_zmm2
    sub_141e563a0(result, nullptr, entry_zmm2)
    LeaveCriticalSection(&data_143f39aa0)

if (result != 0 && result[0x64] != 0)
    result.b = 1
    return result

result.b = 0
return result
