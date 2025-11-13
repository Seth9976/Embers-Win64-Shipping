// 函数: sub_14123da00
// 地址: 0x14123da00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg1[1])
int32_t result = divs.dp.d(temp2:temp3, 2) & 0x80000001

if (result s< 0)
    result = ((result - 1) | 0xfffffffe) + 1

if (mods.dp.d(temp2:temp3, 2) == 1 || result == 1)
    return sub_1405fba70(*arg1, 3) __tailcall

result.b = 0
return result
