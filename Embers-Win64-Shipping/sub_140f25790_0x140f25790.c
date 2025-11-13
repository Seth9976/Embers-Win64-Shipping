// 函数: sub_140f25790
// 地址: 0x140f25790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rcx = *arg1
    int32_t i_1 = arg1[1].d
    
    if (i_1 != 0)
        int64_t* rdi_1 = rcx + 0x20
        int32_t i
        
        do
            sub_140745b20(&rdi_1[2])
            int64_t* rbx_1 = *rdi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_3 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_3 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* rbx_2 = rdi_1[-3]
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_7 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_7 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_1 = &rdi_1[9]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

return arg1
