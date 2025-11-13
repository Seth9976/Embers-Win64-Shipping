// 函数: sub_14086d3d0
// 地址: 0x14086d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x30)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

int64_t rcx_2 = *(arg2 + 0x18)

if (rcx_2 == 0)
    return 

return sub_140a74f90(rcx_2) __tailcall
