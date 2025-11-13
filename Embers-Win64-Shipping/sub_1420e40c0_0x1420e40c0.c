// 函数: sub_1420e40c0
// 地址: 0x1420e40c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x140)

if (rdi != 0)
    j_sub_140a74f90(rdi)

int64_t rdi_1 = *(arg1 + 0x148)
*(arg1 + 0x140) = 0

if (rdi_1 != 0)
    j_sub_140a74f90(rdi_1)

*(arg1 + 0x148) = 0
return sub_140cdba30(arg1) __tailcall
