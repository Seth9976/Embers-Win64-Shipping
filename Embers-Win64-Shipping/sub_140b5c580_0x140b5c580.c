// 函数: sub_140b5c580
// 地址: 0x140b5c580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0xc)

if (rcx + 2 u<= 0x20000)
    int16_t* rdx_2 = zx.q(rcx) + *(arg1 + (zx.q(*(arg1 + 8)) << 3) + 0x10)
    *rdx_2 &= 0x3f

*(arg1 + 8) += 1
uint64_t result = zx.q(*(arg1 + 8))
*(arg1 + 0xc) = 0

if (*(arg1 + (result << 3) + 0x10) == 0)
    sub_140b673e0()
    result = sub_140a82f70(0x20000, zx.q(data_1439a9580.d))
    *(arg1 + (zx.q(*(arg1 + 8)) << 3) + 0x10) = result

return result
