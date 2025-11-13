// 函数: sub_1409f5e60
// 地址: 0x1409f5e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rdi_1 = rcx + 0x60
    int32_t i
    
    do
        *(rdi_1 + 8) = 0
        int64_t rcx_1 = *rdi_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_14059ad90(rdi_1 - 0x40, 0)
        int64_t rcx_3 = *(rdi_1 - 0x20)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rdi_1 - 0x40)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t* rbx_1 = *(rdi_1 - 0x48)
        int32_t rax
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                rax = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rbx_2 = *(rdi_1 - 0x58)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                rax = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_1 += 0x78
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
