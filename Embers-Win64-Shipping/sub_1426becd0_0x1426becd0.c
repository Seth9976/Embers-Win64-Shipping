// 函数: sub_1426becd0
// 地址: 0x1426becd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = sx.d(arg3)
uint64_t result = zx.q(result_1)

if (arg3 s< 0)
    if (result_1.b == 0xfe)
        goto label_1426bece7
else if (result.d s< *(arg1 + 0x60) || result_1.b == 0xfe)
label_1426bece7:
    void* rdx = *arg2
    result = *(zx.q(*(rdx + 0x260)) * 0x58 + *(rdx + 0x110) + 0x30)
    *(result + zx.q(*(arg1 + 0x52)) + 1) = result_1.b

return result
