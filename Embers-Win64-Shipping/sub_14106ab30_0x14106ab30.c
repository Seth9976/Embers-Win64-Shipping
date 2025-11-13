// 函数: sub_14106ab30
// 地址: 0x14106ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0xe]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

if (arg1[4] != 0)
    void* rax_3 = arg1[6]
    void* rcx_2 = &arg1[8]
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    (*(*rcx_2 + 0x10))(rcx_2)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return 

return sub_140a74f90(rcx_3) __tailcall
