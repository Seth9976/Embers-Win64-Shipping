// 函数: sub_14091a610
// 地址: 0x14091a610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)

if (rcx != 0)
    int32_t rax = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rax == 1 && rcx != 0)
        (*(*rcx + 8))(rcx, 1)

int64_t* rbx = *(arg1 + 0x38)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rcx_3 = *(arg1 + 0x18)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rcx_4 = *(arg1 + 0x10)

if (rcx_4 == 0)
    return 

int32_t temp3_1 = *(rcx_4 + 0xc)
*(rcx_4 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rcx_4 + 8))(rcx_4, 1)
