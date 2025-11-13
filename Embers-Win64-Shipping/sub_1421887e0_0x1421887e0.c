// 函数: sub_1421887e0
// 地址: 0x1421887e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x81]

if (result != 0 && (*(result + 0xb6) & 1) != 0 && sub_142188730(arg1).b != 0
        && (arg1[0x86].b & 0x10) == 0)
    *(arg1 + 0x432) |= 0x10
    sub_14218ca00(&arg1[0xa0], 0)
    sub_14218c990(&arg1[0xa2], 0)
    sub_14218c920(&arg1[0xa4], 0)
    int64_t r8
    int512_t zmm0
    r8, zmm0 = sub_14218ca00(&arg1[0xa8], 0)
    
    if (*(arg1 + 0x431) s< 0 && *(arg1[0x81] + 0x108) u< *(arg1 + 0x43e))
        r8.b = 1
        sub_142196000(arg1, 0, r8, 0, zmm0)
    
    return 1

result.b = 0
return result
