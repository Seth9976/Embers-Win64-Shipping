// 函数: sub_141868870
// 地址: 0x141868870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x28)
int64_t* rbx = *(arg1 + 0x20)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x20)

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rbx_1 = *(arg1 + 0x18)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 8)

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t rdi = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (rdi == 1)
    (*(*rbx_2 + 8))(rbx_2, zx.q(rdi))
