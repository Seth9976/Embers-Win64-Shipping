// 函数: sub_142027310
// 地址: 0x142027310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xc0)

if (rcx != 0)
    (**rcx)(rcx, 1)
    *(arg1 + 0xc0) = 0

int64_t* rdi = *(arg1 + 0xc8)

if (rdi != 0)
    sub_1420d9130(rdi)
    j_sub_140a74f90(rdi)
    *(arg1 + 0xc8) = 0

return sub_140cdba30(arg1) __tailcall
