// 函数: ?dtor$1@?0??_Getcat@?$collate@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA
// 地址: 0x142ca319a
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0x20) & 1

if (result == 0)
    return result

*(arg2 + 0x20) &= 0xfffffffe
return sub_14281f944(arg2 + 0xd8)
