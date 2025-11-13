// 函数: sub_140838de0
// 地址: 0x140838de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405a51b0(arg1 + 0x10, 0)

*(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) s<= 0xffffffff)
    sub_1405c5510(arg1 + 0x20, 0)

int32_t rax = *(arg1 + 0x3c)
*(arg1 + 0x38) = 0

if (rax s< 0 && rax != 0)
    sub_1405c5570(arg1 + 0x30, 0)

int32_t result = *(arg1 + 0x4c)
*(arg1 + 0x48) = 0

if (result s< 0 && result != 0)
    result = sub_1405c5570(arg1 + 0x40, 0)

if (arg2 == 0)
    return result

sub_1408400b0(arg1)
return sub_140838ca0(arg1 + 0x50)
