// 函数: sub_14264c010
// 地址: 0x14264c010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = 0

if (*(arg1 + 0x3c) s<= 0xffffffff)
    sub_140638cc0(arg1 + 0x30, 0)

int32_t rax = *(arg1 + 0x4c)
*(arg1 + 0x48) = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(arg1 + 0x40, 0)

int32_t rax_1 = *(arg1 + 0x5c)
*(arg1 + 0x58) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_140638cc0(arg1 + 0x50, 0)

int32_t rax_2 = *(arg1 + 0x6c)
*(arg1 + 0x68) = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(arg1 + 0x60, 0)

int32_t result = *(arg1 + 0x7c)
*(arg1 + 0x78) = 0

if (result s< 0 && result != 0)
    result = sub_1405dadb0(arg1 + 0x70, 0)

*(arg1 + 0x28) &= 0xfffffffd
return result
