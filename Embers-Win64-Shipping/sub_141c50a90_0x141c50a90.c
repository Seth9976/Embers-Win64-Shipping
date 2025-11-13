// 函数: sub_141c50a90
// 地址: 0x141c50a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t* rcx_1 = *(arg1 + 0x18)

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = *(arg1 + 0x10)

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = *(arg1 + 8)

if (rcx_3 == 0)
    return 

int32_t rax = *(rcx_3 + 0xc)
*(rcx_3 + 0xc) -= 1

if (rax == 1 && rcx_3 != 0)
    jump(*(*rcx_3 + 8))
