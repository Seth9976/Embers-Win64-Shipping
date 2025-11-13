// 函数: sub_140587290
// 地址: 0x140587290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)

if (rcx == 0)
    return 

int64_t* rax = (*(*rcx + 0x10))(rcx)

if (rax != 0)
    jump(**rax)
