// 函数: sub_14192b800
// 地址: 0x14192b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x78)

if (rbx == 0)
    return 

int64_t rcx = *(rbx + 0x90)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = *(rbx + 0x88)

if (rcx_1 != 0)
    int32_t rax_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_1 != 0)
        (*(*rcx_1 + 8))(rcx_1, 1)

return j_sub_140a74f90(rbx) __tailcall
