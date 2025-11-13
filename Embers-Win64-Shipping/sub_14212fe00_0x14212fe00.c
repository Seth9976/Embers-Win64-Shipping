// 函数: sub_14212fe00
// 地址: 0x14212fe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18c) |= 4
int64_t result = sub_14198bce0(arg1)

if ((*(arg1 + 0x18c) & 8) != 0)
    int64_t* rax = sub_142006940()
    int64_t r8_1 = *rax
    result = (*(r8_1 + 0x158))(rax, arg1, r8_1)
    *(arg1 + 0x18c) &= 0xf7

return result
