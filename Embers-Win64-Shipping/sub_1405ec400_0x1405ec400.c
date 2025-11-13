// 函数: sub_1405ec400
// 地址: 0x1405ec400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x38
    int32_t i
    
    do
        int64_t rcx_1 = *(rbx_1 + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t* rcx_3 = *(rbx_1 - 8)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
        
        sub_1405ec300(rbx_1 - 0x18)
        int64_t* rdi_1 = *(rbx_1 - 0x28)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* rcx_7 = *(rbx_1 - 0x38)
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x10))(rcx_7)
        
        rbx_1 += 0x68
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx != 0)
    sub_140a74f90(rcx)
