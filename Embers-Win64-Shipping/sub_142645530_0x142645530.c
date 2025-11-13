// 函数: sub_142645530
// 地址: 0x142645530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x78)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rbx = *(arg1 + 0x50)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = *(arg1 + 0x28)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t rdi_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))
