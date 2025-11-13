// 函数: sub_141813180
// 地址: 0x141813180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3[1]
int64_t* rcx = *arg3

if (rbx != 0)
    rbx[1].d += 1

char rax_1 = (*(*rcx + 0x150))(rcx, arg2, 0x12)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_1 = *rbx
        (*rdx_1)(rbx, rdx_1)
        int32_t rax_2 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_2 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return zx.q(rax_1)
