// 函数: sub_14201aba0
// 地址: 0x14201aba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        void* rdi_2 = *arg1 + 0x58
        int32_t i
        
        do
            int64_t* rbx_1 = *(rdi_2 + 0x18)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* rbx_2 = *rdi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            int64_t* rbx_3 = *(rdi_2 - 0x40)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp7_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            int64_t* rbx_4 = *(rdi_2 - 0x50)
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp8_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            rdi_2 += 0xd0
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rdi_3 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_1409ea8f0(arg1, i_2, r8_1)
        int64_t* r8_2 = *arg1
        
        if (i_2 != 0)
            void* rcx_9 = rdi_3 + 0x70
            void* rdx_1 = &r8_2[0xe]
            int32_t i_1
            
            do
                *r8_2 = *(rcx_9 - 0x70)
                void* rax_10 = *(rcx_9 - 0x68)
                *(rdx_1 - 0x68) = rax_10
                
                if (rax_10 != 0)
                    *(rax_10 + 8) += 1
                
                *(rdx_1 - 0x60) = *(rcx_9 - 0x60)
                void* rax_12 = *(rcx_9 - 0x58)
                *(rdx_1 - 0x58) = rax_12
                
                if (rax_12 != 0)
                    *(rax_12 + 8) += 1
                
                *(rdx_1 - 0x50) = *(rcx_9 - 0x50)
                *(rdx_1 - 0x48) = *(rcx_9 - 0x48)
                *(rdx_1 - 0x40) = *(rcx_9 - 0x40)
                *(rdx_1 - 0x38) = *(rcx_9 - 0x38)
                *(rdx_1 - 0x30) = *(rcx_9 - 0x30)
                *(rdx_1 - 0x28) = *(rcx_9 - 0x28)
                *(rdx_1 - 0x20) = *(rcx_9 - 0x20)
                void* rax_15 = *(rcx_9 - 0x18)
                *(rdx_1 - 0x18) = rax_15
                
                if (rax_15 != 0)
                    *(rax_15 + 8) += 1
                
                *(rdx_1 - 0x10) = *(rcx_9 - 0x10)
                *(rdx_1 - 8) = *(rcx_9 - 8)
                void* rax_18 = *rcx_9
                *rdx_1 = rax_18
                
                if (rax_18 != 0)
                    *(rax_18 + 8) += 1
                
                r8_2 = &r8_2[0x1a]
                *(rdx_1 + 8) = *(rcx_9 + 8)
                *(rdx_1 + 0x10) = *(rcx_9 + 0x10)
                *(rdx_1 + 0x18) = *(rcx_9 + 0x18)
                *(rdx_1 + 0x20) = *(rcx_9 + 0x20)
                *(rdx_1 + 0x28) = *(rcx_9 + 0x28)
                *(rdx_1 + 0x30) = *(rcx_9 + 0x30)
                *(rdx_1 + 0x38) = *(rcx_9 + 0x38)
                *(rdx_1 + 0x40) = *(rcx_9 + 0x40)
                *(rdx_1 + 0x48) = *(rcx_9 + 0x48)
                *(rdx_1 + 0x4c) = *(rcx_9 + 0x4c)
                *(rdx_1 + 0x50) = *(rcx_9 + 0x50)
                *(rdx_1 + 0x58) = *(rcx_9 + 0x58)
                *(rdx_1 + 0x59) = *(rcx_9 + 0x59)
                char rax_23 = *(rcx_9 + 0x5a)
                rcx_9 += 0xd0
                *(rdx_1 + 0x5a) = rax_23
                rdx_1 += 0xd0
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = i_2

return arg1
