// 函数: sub_14209fe00
// 地址: 0x14209fe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
    return 

int64_t* rax = (*(*rcx + 0x260))(rcx)

if (rax == 0)
    return 

int128_t* rcx_1 = *(arg1 + 0x50)

if (rcx_1 != 0)
    *rcx_1 = *(arg1 + 0x58)
    jump(*(*rax + 0x4d8))
