// 函数: sub_1411f46e0
// 地址: 0x1411f46e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = arg1[1]
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8_1)
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q((temp3 + (temp2 & 3)) s>> 2)
int32_t result = divs.dp.d(temp4:temp5, 2) & 0x80000001

if (result s< 0)
    result = ((result - 1) | 0xfffffffe) + 1

if ((r8_1.b & 1) != 0 || (mods.dp.d(temp4:temp5, 2) != 1 && result != 1))
    return sub_1411e7d10(*arg1) __tailcall

result.b = 0
return result
