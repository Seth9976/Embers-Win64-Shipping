// 函数: sub_142413b60
// 地址: 0x142413b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_3 = arg1[0x1b]

if (rax_3 == data_143f5bc58)
    jump(*(*arg1 + 0x2c8))

if (rax_3 != data_143f5bcb8)
    return arg1[0x16].b & 1

jump(*(*arg1 + 0x2e8))
