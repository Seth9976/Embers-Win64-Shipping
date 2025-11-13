// 函数: sub_142c7e640
// 地址: 0x142c7e640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0x49

if (arg2 != 0)
    rdi = 0x41

if (arg1[0xe8].b == rdi)
    arg1[0xea].d = arg3.d
    return sub_142c807b0(arg1, 0xc8, arg3, arg4)

int32_t result = gzprintf(&arg1[0xd3], "TYPE %c", zx.q(rdi), arg4)

if (result == 0)
    arg1[0xea].d = arg3.d
    arg1[0xe8].b = rdi

return result
