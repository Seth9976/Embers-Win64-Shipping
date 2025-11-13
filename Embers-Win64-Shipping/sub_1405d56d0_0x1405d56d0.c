// 函数: sub_1405d56d0
// 地址: 0x1405d56d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *(rdi + 0x38)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_3 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        sub_1405d1550(rdi)
        rdi += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *arg1

if (rdi == 0)
    return 

return sub_140a74f90(rdi) __tailcall
