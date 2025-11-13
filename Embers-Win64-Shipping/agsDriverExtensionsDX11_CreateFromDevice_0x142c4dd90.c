// 函数: agsDriverExtensionsDX11_CreateFromDevice
// 地址: 0x142c4dd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg4 == 0 || arg2 == 0)
    return 2

arg4[3] = 0x9100
arg4[1] = 0
arg4[2] = 0
arg4[5] = 0
arg4[4].d = 1
*arg4 = arg2
int32_t result
int32_t r9
result, r9 = sub_142c4d8e0(arg1)

if (result != 0)
    return result

sub_142c4d380(arg1, arg3, arg4, r9)
return 0
