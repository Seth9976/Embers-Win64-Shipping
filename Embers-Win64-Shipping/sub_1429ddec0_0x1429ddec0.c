// 函数: sub_1429ddec0
// 地址: 0x1429ddec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
uint64_t _Size = arg2 + 7 + arg1

if (_Size u> 0x10000000000)
    return 0

int64_t rax_1 = malloc(_Size)

if (rax_1 != 0)
    result = (arg1 + 7 + rax_1) & not.q(arg1 - 1)
    *(result - 8) = rax_1

return result
