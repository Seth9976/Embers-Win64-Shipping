// 函数: sub_142430a10
// 地址: 0x142430a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141edf050(arg1)

if (arg1[0x41] == 0)
    return result

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

jump(*(**(rax + 0x1b0) + 0x1e0))
