// 函数: sub_14106aa70
// 地址: 0x14106aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rdi_1 = rcx + 0x30
    int32_t i
    
    do
        if (*(rdi_1 - 0x10) != 0)
            void* rax_1 = *rdi_1
            void* rcx_1 = rdi_1 + 0x10
            
            if (rax_1 != 0)
                rcx_1 = rax_1
            
            (*(*rcx_1 + 0x10))(rcx_1)
        
        int64_t* rbx_1 = *(rdi_1 - 0x20)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
