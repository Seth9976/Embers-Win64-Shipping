// 函数: sub_14242be60
// 地址: 0x14242be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141ed55e0(arg1, arg2)

if ((arg1[0x11].b & 2) == 0)
    return result

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

jump(*(**(rax + 0x1b0) + 0x1d8))
