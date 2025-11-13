// 函数: sub_140660b20
// 地址: 0x140660b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x1f]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[0x1e]

if (rcx_1 != 0)
    int32_t temp1_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

int64_t* rcx_2 = arg1[0x1c]

if (rcx_2 != 0)
    int32_t temp2_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* rbx = arg1[9]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

return sub_140d163b0(arg1) __tailcall
