// 函数: sub_140e538b0
// 地址: 0x140e538b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x28)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

int64_t* rcx_2 = *(arg1 + 8)

if (rcx_2 == 0)
    return 

int32_t temp1_1 = *(rcx_2 + 0xc)
*(rcx_2 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rcx_2 + 8))
