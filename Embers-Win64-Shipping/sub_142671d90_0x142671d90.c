// 函数: sub_142671d90
// 地址: 0x142671d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    void* rcx = *arg1
    int32_t i_1 = arg1[1].d
    
    if (i_1 != 0)
        int64_t* rdi_1 = rcx + 0x30
        int32_t i
        
        do
            void* rcx_1 = *rdi_1
            
            if (rcx_1 != 0)
                if (0 == *(rcx_1 + 8))
                    *(rcx_1 + 8) = 0
                else
                    *(rcx_1 + 8)
                
                int64_t* rbx_1 = *rdi_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_4 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_4 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_1 = &rdi_1[7]
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
