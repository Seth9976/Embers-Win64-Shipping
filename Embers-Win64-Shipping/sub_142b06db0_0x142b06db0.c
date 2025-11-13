// 函数: sub_142b06db0
// 地址: 0x142b06db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r8 = *(arg1 + 0x10)
int16_t result

if (arg2 s<= 1)
    *(arg1 + 0x48) = 0xffff
    r8[4] = r8[2]
    *(r8 + 0x10) = *(r8 + 0x14)
    result = -2
    *r8 = 0xfffe
    *(r8 + 0x2c) = 0

if (arg2 s> 1 || arg2 != 1)
    *(arg1 + 0x54) = 0
    *(r8 + 0xc) = *(r8 + 0x14)
    result = r8[2]
    r8[3] = result
    r8[1] = 0
    r8[0xc] = 1

return result
