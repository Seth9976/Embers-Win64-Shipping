// 函数: sub_14174d8c0
// 地址: 0x14174d8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x10)
int64_t r11 = sx.q(arg2)
int32_t rcx_2 = r10 - r11.d - 1

if (rcx_2 s>= 1)
    rcx_2 = 1

if (rcx_2 != 0)
    memcpy(r11 * 0x30 + *(arg1 + 8), sx.q(r10 - rcx_2) * 0x30 + *(arg1 + 8), rcx_2 * 0x30)
    r10 = *(arg1 + 0x10)

*(arg1 + 0x10) = r10 - 1
return sub_1407c4120(arg1 + 8) __tailcall
