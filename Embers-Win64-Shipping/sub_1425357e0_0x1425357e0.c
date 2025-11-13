// 函数: sub_1425357e0
// 地址: 0x1425357e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x50)
int32_t rax

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        rax = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = *(arg2 + 0x38)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        rax = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg2 + 0x20)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        rax = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = *(arg2 + 8)

if (rbx_3 == 0)
    return 

rbx_3[1].d -= 1

if (rbx_3[1].d != 1)
    return 

(**rbx_3)(rbx_3)
int32_t rdi_1 = *(rbx_3 + 0xc)
*(rbx_3 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))
