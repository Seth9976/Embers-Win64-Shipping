// 函数: sub_142709c00
// 地址: 0x142709c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

int64_t* rax_1 = sub_1426fbe40(rax)

if (rax_1 == 0)
    *(arg1 + 0x274) &= 0xef
    return rax_1

int32_t* rax_4 = sub_1427097f0(rax_1, sub_140d21950(arg1, sub_142736f50()))
*(arg1 + 0x274) |= 0x10
return rax_4
