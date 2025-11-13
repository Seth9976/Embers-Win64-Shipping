// 函数: sub_14202bbc0
// 地址: 0x14202bbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0x3f800000
void* const rcx

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    rcx = *(arg1 + 0x20)
else
    rcx = nullptr

int32_t result = sub_1423dde50(rcx, arg1)

if (result != 1)
    arg3[1] = 0x3f000000
    return result

__builtin_strncpy(&arg3[1], "fff?", 4)
return result
