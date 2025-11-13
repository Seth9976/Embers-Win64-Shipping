// 函数: sub_1418d8c60
// 地址: 0x1418d8c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)

if (rdi != 0)
    sub_1418d29d0(rdi)
    j_sub_140a74f90(rdi)

*(arg1 + 8) = 0
*(arg1 + 0x10) -= 1
int64_t* rcx_2 = *(arg1 + 0x18)

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)
