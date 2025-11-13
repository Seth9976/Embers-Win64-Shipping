// 函数: sub_14264bac0
// 地址: 0x14264bac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 8)

if (rbx == 0)
    return 0

rbx[1].d -= 1

if (rbx[1].d == 1)
    (**rbx)(rbx)
    int32_t rdi_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rdi_1 == 1)
        (*(*rbx + 8))(rbx, zx.q(rdi_1))

return 0
