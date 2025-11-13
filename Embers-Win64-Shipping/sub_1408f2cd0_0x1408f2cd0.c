// 函数: sub_1408f2cd0
// 地址: 0x1408f2cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
void* rcx = arg1 + 0x20

if (rax != 0)
    rcx = rax

char rax_3 = (*arg1)((*(*rcx + 8))(rcx), arg2)
int64_t* rbx_1 = *(arg2 + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_1 = *rbx_1
        (*rdx_1)(rbx_1, rdx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return zx.q(rax_3)
