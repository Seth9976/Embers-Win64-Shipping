// 函数: sub_141f85000
// 地址: 0x141f85000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

int64_t* rcx = *(rbx + 8)

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

return j_sub_140a74f90(rbx) __tailcall
