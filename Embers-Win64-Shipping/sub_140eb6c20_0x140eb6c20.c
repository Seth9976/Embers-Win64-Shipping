// 函数: sub_140eb6c20
// 地址: 0x140eb6c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

sub_140596d80(rbx + 0x20)
int64_t* rcx_1 = *(rbx + 0x18)

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

int64_t* rcx_2 = *(rbx + 8)

if (rcx_2 != 0)
    int32_t temp1_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

return j_sub_140a74f90(rbx) __tailcall
