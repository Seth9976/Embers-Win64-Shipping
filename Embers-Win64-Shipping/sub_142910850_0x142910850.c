// 函数: sub_142910850
// 地址: 0x142910850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* rsi = *(arg1 + 0x28)

if (arg2 == 0)
    *arg3 = 0x10
    return zx.q((arg2 + 1).d)

if (rsi == 0 || *arg3 u< 0x10)
    return 0

uint32_t count = sub_1406938b0(rsi)
memcpy(arg2, sub_14060aa50(rsi), count)
*arg3 = 0x10
return 1
