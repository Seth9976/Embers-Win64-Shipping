// 函数: sub_142822ccc
// 地址: 0x142822ccc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1

if (rdi == 0)
    return 

int64_t* rbx_1 = *(rdi + 8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_3 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx_1 + 8))(rbx_1)

j_sub_140a74f90(rdi)
