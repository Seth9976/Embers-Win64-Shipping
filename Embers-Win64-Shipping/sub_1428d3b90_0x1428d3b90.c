// 函数: sub_1428d3b90
// 地址: 0x1428d3b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint32_t r11 = zx.d(*arg1)
int32_t r10_1 = r11 & 7
uint64_t rbx = zx.q(0xe - r10_1)

if (arg3 u< rbx)
    return 0xffffffff

if (r10_1 u< 3)
    *(arg1 + 8) = 0
else
    arg1[8] = (arg4 u>> 0x38).b
    arg1[9] = (arg4 u>> 0x30).b
    arg1[0xa] = (arg4 u>> 0x28).b
    arg1[0xb] = (arg4 u>> 0x20).b

r11.b &= 0xbf
arg1[0xf] = arg4.b
*arg1 = r11.b
arg1[0xc] = (arg4 u>> 0x18).b
arg1[0xd] = (arg4 u>> 0x10).b
arg1[0xe] = (arg4 u>> 8).b
memcpy(&arg1[1], arg2, rbx.d)
return 0
