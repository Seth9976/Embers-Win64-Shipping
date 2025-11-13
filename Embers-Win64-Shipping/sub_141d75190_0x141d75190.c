// 函数: sub_141d75190
// 地址: 0x141d75190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rdi_1 = rcx + 0x18
    int32_t i
    
    do
        int64_t* rcx_1 = *rdi_1
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0)
            sub_140a4fc50(*rdi_1)
            *rdi_1 = 0
        
        sub_1405d16e0(&rdi_1[1], nullptr)
        sub_1405d1550(&rdi_1[1])
        int64_t* rbx_1 = rdi_1[-2]
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[9]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
