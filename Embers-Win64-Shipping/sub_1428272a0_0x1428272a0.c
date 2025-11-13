// 函数: sub_1428272a0
// 地址: 0x1428272a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x38)

if (rcx != 0)
    sub_140688f70(rcx, *(arg1 + 0x40))
    sub_14058ba50(*(arg1 + 0x38), (*(arg1 + 0x48) - *(arg1 + 0x38)) & 0xffffffffffffffe0)
    __builtin_memset(arg1 + 0x38, 0, 0x18)

int64_t rdx_5 = *(arg1 + 0x30)

if (rdx_5 u>= 0x10)
    sub_14058ba50(*(arg1 + 0x18), rdx_5 + 1)

*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0xf
*(arg1 + 0x18) = 0
