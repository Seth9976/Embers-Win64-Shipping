// 函数: sub_140ad32d0
// 地址: 0x140ad32d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x10)

if (rdi == 0)
    return 

int64_t* rbx = *(rdi + 0x28)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140596d80(rdi + 0x10)
int64_t* rcx_3 = *(rdi + 8)

if (rcx_3 != 0)
    int32_t temp1_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_3 + 8))(rcx_3, 1)

return j_sub_140a74f90(rdi) __tailcall
