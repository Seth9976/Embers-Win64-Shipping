// 函数: sub_14094d6b0
// 地址: 0x14094d6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_1 = arg1[1].d
    void* rsi_1 = *arg1
    
    if (i_1 != 0)
        void* rbx_1 = rsi_1 + 0x100
        int32_t i
        
        do
            *(rbx_1 + 8) = 0
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            sub_1405e1b50(rbx_1 - 0x40, 0)
            int64_t rcx_2 = *(rbx_1 - 0x20)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = *(rbx_1 - 0x40)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = *(rbx_1 - 0x68)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t* rdi_1 = *(rbx_1 - 0x80)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rax_3 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rax_3 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            int64_t* rdi_2 = *(rbx_1 - 0xa0)
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rax_7 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rax_7 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            int64_t* rdi_3 = *(rbx_1 - 0xb8)
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t rax_11 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
            
            int64_t* rdi_4 = *(rbx_1 - 0xd0)
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t rax_15 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
            
            int64_t* rdi_5 = *(rbx_1 - 0xe8)
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t rax_19 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (rax_19 == 1)
                        (*(*rdi_5 + 8))(rdi_5, 1)
            
            int64_t rcx_15 = *rsi_1
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            rsi_1 += 0x110
            rbx_1 += 0x110
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_140945e50(arg1, *arg2, arg2[1].d, *(arg1 + 0xc), 0)

return arg1
