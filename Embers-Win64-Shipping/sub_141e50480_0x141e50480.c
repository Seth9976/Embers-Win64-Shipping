// 函数: sub_141e50480
// 地址: 0x141e50480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        sub_140745b20(rbx + 0x30)
        int64_t* rdi_1 = *(rbx + 0x28)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t rcx_3 = *(rbx + 0x10)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rbx
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
