// 函数: sub_141022ae0
// 地址: 0x141022ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0x130)
int32_t r8 = 0x20

if (rax_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax_1)
    r8 = temp0_1

if (arg2 == r8)
    return arg1

return nullptr
