// 函数: sub_141c57500
// 地址: 0x141c57500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)

if (rbx == 0)
    return 

int64_t* rcx = *(rbx + 0x88)

if (rcx != 0 && (*(*rcx + 0x18))(rcx, rbx) != 0)
    *(rbx + 0x78) -= 1
    int64_t* rcx_1 = *(rbx + 0x80)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
    
    *(rbx + 0x88) = 0
    return 

sub_141c5c040(*(arg1 + 8), 1)
