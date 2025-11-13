// 函数: sub_140a63e00
// 地址: 0x140a63e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x28)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rbx_1 = *(arg1 + 0x10)

if (rbx_1 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, rbx_1)

int64_t* rcx_3 = *(arg1 + 8)

if (rcx_3 == 0)
    return 

int32_t rdi_1 = *(rcx_3 + 0xc)
*(rcx_3 + 0xc) -= 1

if (rdi_1 == 1 && rcx_3 != 0)
    (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))
