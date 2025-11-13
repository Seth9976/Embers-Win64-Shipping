// 函数: sub_141de0290
// 地址: 0x141de0290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x18)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rcx_2 = *(arg1 + 8)

if (rcx_2 != 0)
    int32_t rsi_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rsi_1 == 1 && rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2, zx.q(rsi_1))

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
