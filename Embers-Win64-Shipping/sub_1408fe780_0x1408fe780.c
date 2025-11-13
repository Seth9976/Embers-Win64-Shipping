// 函数: sub_1408fe780
// 地址: 0x1408fe780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[4]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

*arg1 = &IModuleInterface::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
