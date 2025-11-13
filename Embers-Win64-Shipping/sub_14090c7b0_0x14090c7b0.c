// 函数: sub_14090c7b0
// 地址: 0x14090c7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

if (arg1 u> 0x3fffffffffffffff)
    j_sub_140a82f30(-1)

int64_t _Size = arg1 << 2
int64_t result = malloc(_Size)

if (result == 0 && _Size != 0)
    j_sub_140a82f30(result - 1)

return result
