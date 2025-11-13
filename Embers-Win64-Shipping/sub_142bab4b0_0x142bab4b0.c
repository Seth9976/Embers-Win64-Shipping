// 函数: sub_142bab4b0
// 地址: 0x142bab4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(*(sx.q(*(arg1 + 0x210) + 1) + *(arg1 + 0x208)))
int32_t result = *(arg1 + 0x20) - *(arg1 + 0x1c) + 1

if (rbx u>= result)
    *(arg1 + 0x18) = 0x82
    return result

int16_t i = 1

if (1 u<= rbx.w)
    do
        uint32_t i_1 = zx.d(i)
        i += 1
        result = i_1 - 1
        *(arg2 + (sx.q(result) << 2)) = zx.d(*(sx.q(*(arg1 + 0x210) + 1 + i_1) + *(arg1 + 0x208)))
    while (i u<= rbx.w)

*(arg1 + 0x34) += rbx
return result
