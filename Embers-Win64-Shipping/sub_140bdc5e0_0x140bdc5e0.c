// 函数: sub_140bdc5e0
// 地址: 0x140bdc5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x108) = 0

if (*(arg1 + 0x10c) != 0)
    sub_1405c5570(arg1 + 0x100, 0)

*(arg1 + 0xf8) = 0

if (*(arg1 + 0xfc) != 0)
    sub_1405a5410(arg1 + 0xf0, 0)

int64_t rcx_2 = *(arg1 + 0xa8)
*(arg1 + 0x118) = 0
j_sub_140a74f90(rcx_2)
*(arg1 + 0xa8) = 0
*(arg1 + 0x68) = 0

if (*(arg1 + 0x6c) != 0)
    sub_1405c5510(arg1 + 0x60, 0)

return sub_140cdba30(arg1) __tailcall
