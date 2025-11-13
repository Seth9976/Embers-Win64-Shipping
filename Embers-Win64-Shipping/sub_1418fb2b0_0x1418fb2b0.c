// 函数: sub_1418fb2b0
// 地址: 0x1418fb2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 != arg1 + 0x18)
    int32_t r8_1 = *(arg2 + 0x84)
    int64_t rdi_1 = sx.q(*(arg1 + 0x98))
    *(arg2 + 0x80) = rdi_1.d
    
    if (rdi_1.d == 0 && r8_1 == 0)
        result.b = 1
        *(arg2 + 0x84) = 0x10
        return result
    
    sub_14119a530(arg2, rdi_1.d, r8_1)
    memcpy(arg2, arg1 + 0x18, (rdi_1 << 3).d)

result.b = 1
return result
