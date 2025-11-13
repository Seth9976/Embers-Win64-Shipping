// 函数: sub_141f367f0
// 地址: 0x141f367f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x8d8)

if (rcx == 0)
    return 

int64_t rdi_1 = 0
*(arg1 + 0x8d8) = 0

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

if (*(arg1 + 0x8b0) == 0)
    return 

if (sub_140d3e110(arg1 + 0x438) != 0)
    rdi_1 = sub_140d3c6e0(arg1 + 0x438)
    
    if (*(arg1 + 0x4b8) == 0)
        return sub_141f460c0(arg1 + 0x8e0) __tailcall

int64_t* rcx_5 = *(arg1 + 0x8b0)
(*(*rcx_5 + 0x58))(rcx_5, arg1 + 0x8e0, arg1, rdi_1)
