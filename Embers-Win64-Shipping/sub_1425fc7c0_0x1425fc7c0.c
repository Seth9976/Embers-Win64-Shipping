// 函数: sub_1425fc7c0
// 地址: 0x1425fc7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = *(arg1 + 0x7b0)

if (rdi != 0)
    sub_1425fd040(rdi)
    j_sub_140a74f90(rdi)
    *(arg1 + 0x7b0) = 0

if (*(arg1 + 0x7c8) != 0)
    CoUninitialize()
    *(arg1 + 0x7c8) = 0
