// 函数: sub_14265ceb0
// 地址: 0x14265ceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x108) = 0

if (*(arg1 + 0x10c) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x100, 0)

int32_t rax = *(arg1 + 0x11c)
*(arg1 + 0x118) = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(arg1 + 0x110, 0)

int32_t rax_1 = *(arg1 + 0x12c)
*(arg1 + 0x128) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405dadb0(arg1 + 0x120, 0)

int32_t result = *(arg1 + 0x13c)
*(arg1 + 0x138) = 0

if (result s< 0 && result != 0)
    result = sub_1405a51b0(arg1 + 0x130, 0)

*(arg1 + 0x140) &= 0xfffffff8
return result
