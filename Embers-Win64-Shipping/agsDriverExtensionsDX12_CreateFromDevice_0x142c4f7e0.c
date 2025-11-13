// 函数: agsDriverExtensionsDX12_CreateFromDevice
// 地址: 0x142c4f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg4 == 0 || arg2 == 0)
    return 2

*arg4 = arg2
arg4[1].d = 0
*(arg1 + 0x1b0) = arg2
int32_t result = sub_142c4f010(arg1, nullptr)

if (result != 0)
    return result

sub_142c4eda0(arg1, *(arg3 + 0x18), arg4)
return 0
