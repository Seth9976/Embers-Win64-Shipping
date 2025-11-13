// 函数: sub_140efb460
// 地址: 0x140efb460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

*(rbx + 0x58) = 0
int64_t rcx = *(rbx + 0x50)

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140ee3d10(rbx + 0x10)
int64_t* rcx_2 = *(rbx + 8)

if (rcx_2 != 0)
    int32_t temp0_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

return j_sub_140a74f90(rbx) __tailcall
