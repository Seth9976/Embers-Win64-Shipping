// 函数: sub_14279d310
// 地址: 0x14279d310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x70) != 0)
    void* rax_1 = *(arg1 + 0x80)
    void* rcx = arg1 + 0x90
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

int64_t* rbx = *(arg1 + 0x68)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = *(arg1 + 0x40)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x28)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

int64_t rcx_7 = *(arg1 + 0x10)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)
