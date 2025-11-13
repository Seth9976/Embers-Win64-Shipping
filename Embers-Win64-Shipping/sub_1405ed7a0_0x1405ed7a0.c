// 函数: sub_1405ed7a0
// 地址: 0x1405ed7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* rbx = arg1[0xb]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

if (arg1[2] != 0)
    void* rax_4 = arg1[4]
    void* rcx_2 = &arg1[6]
    
    if (rax_4 != 0)
        rcx_2 = rax_4
    
    (*(*rcx_2 + 0x10))(rcx_2)

*arg1 = &data_142d5c278

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
