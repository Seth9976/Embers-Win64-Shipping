// 函数: sub_142620a40
// 地址: 0x142620a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg1 + 0x58))

if (r11.d s>= *(arg1 + 0x4c))
    return 

int32_t* r10_2 = r11 * 0x1c + *(arg1 + 0x50)
*(arg1 + 0x58) = (r11 + 1).d
*r10_2 = *arg2
r10_2[1] = arg2[1]
r10_2[2] = arg2[2]
r10_2[3] = *arg3
r10_2[4] = arg3[1]
r10_2[5] = arg3[2]
r10_2[6].b &= 0xfd
r10_2[6].b |= (arg4 & 1) * 2
