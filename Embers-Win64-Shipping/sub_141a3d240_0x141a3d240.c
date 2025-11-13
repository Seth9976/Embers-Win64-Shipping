// 函数: sub_141a3d240
// 地址: 0x141a3d240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t* rbx = arg2
uint128_t* rdi = arg1

if (sub_141a386d0(arg1, arg2).b != 0)
    int32_t i_1 = rdi[5].d
    void* rdx = rdi + 0x18
    void* r8_1 = rbx + 0x18
    
    if (i_1 == rbx[5].d)
        void* rax = *(r8_1 + 0x30)
        void* rcx = *(rdx + 0x30)
        
        if (rax != 0)
            r8_1 = rax
        
        if (rcx != 0)
            rdx = rcx
        
        if (i_1 != 0)
            int32_t i
            
            do
                uint64_t var_28_1 = *r8_1
                uint64_t var_18_1 = *rdx
                
                if (var_18_1.d != var_28_1.d)
                    goto label_141a3d3f5
                
                if ((var_18_1 u>> 0x20).d != (var_28_1 u>> 0x20).d)
                    goto label_141a3d3f5
                
                if ((*(rdx + 8)).b != (*(r8_1 + 8)).b)
                    goto label_141a3d3f5
                
                r8_1 += 0xc
                rdx += 0xc
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (*(rdi + 0x14) == *(rbx + 0x14))
            char rdx_1 = *rbx
            
            if (rdx_1 != 2)
                char rax_4 = *(rbx + 8)
                
                if (rax_4 != 2)
                    int32_t r8_2 = *(rbx + 0xc)
                    int32_t temp0_1 = *(rbx + 4)
                    
                    if (temp0_1 s> r8_2)
                        *rdi = *rdi
                        return 1
                    
                    if (temp0_1 == r8_2 && (rdx_1 == 0 || rax_4 == 0))
                        *rdi = *rdi
                        return 1
            
            char r8_3 = *rdi
            
            if (r8_3 != 2)
                char rax_5 = *(rdi + 8)
                
                if (rax_5 != 2)
                    int32_t rcx_3 = *(rdi + 4)
                    int32_t temp1_1 = *(rdi + 0xc)
                    
                    if (rcx_3 s> temp1_1)
                        *rdi = *rbx
                        return 1
                    
                    if (rcx_3 == temp1_1 && (r8_3 == 0 || rax_5 == 0))
                        *rdi = *rbx
                        return 1
            
            char r11 = *(rbx + 8)
            void* rcx_4 = rbx + 8
            void* rax_6 = rdi + 8
            
            if (r11 != 2)
                if (*rax_6 == 2)
                    rcx_4 = rax_6
                else
                    int32_t r9_1 = *(rcx_4 + 4)
                    int32_t temp3_1 = *(rax_6 + 4)
                    
                    if (r9_1 s<= temp3_1)
                        if (r9_1 s>= temp3_1 && r11 == 1)
                            rax_6 = rcx_4
                        
                        rcx_4 = rax_6
            
            if (rdx_1 != 2)
                if (r8_3 != 2)
                    int32_t rax_7 = *(rbx + 4)
                    int32_t temp4_1 = *(rdi + 4)
                    
                    if (rax_7 s>= temp4_1)
                        if (rax_7 s> temp4_1)
                            rbx = rdi
                        else
                            uint128_t* rax_8 = rdi
                            
                            if (rdx_1 == 1)
                                rax_8 = rbx
                            
                            rbx = rax_8
                else
                    rbx = rdi
            
            char var_10 = (*rcx_4).b
            *rdi = (*rbx).o
            return 1

label_141a3d3f5:
uint32_t result
result.b = 0
return result
