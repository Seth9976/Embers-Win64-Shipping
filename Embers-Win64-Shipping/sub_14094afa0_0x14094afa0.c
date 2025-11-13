// 函数: sub_14094afa0
// 地址: 0x14094afa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rdi_1 = rcx + 0x18
    int32_t i
    
    do
        sub_14094b070(rdi_1 + 0x28)
        sub_14094b070(rdi_1 + 0x18)
        *(rdi_1 - 0x10) = &data_142e259e0
        int64_t rcx_3 = *(rdi_1 + 8)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
