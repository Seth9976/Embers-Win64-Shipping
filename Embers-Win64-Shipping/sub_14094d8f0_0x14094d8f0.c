// 函数: sub_14094d8f0
// 地址: 0x14094d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_1 = arg1[1].d
    void* rdi_1 = *arg1
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx = *(rdi_1 + 0x38)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = *(rdi_1 + 0x28)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            *rdi_1 = &data_142e259e0
            int64_t rcx_2 = *(rdi_1 + 0x18)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t* rbx_1 = *(rdi_1 + 0x10)
            
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
    
    sub_140946050(arg1, *arg2, arg2[1].d, *(arg1 + 0xc), 0)

return arg1
