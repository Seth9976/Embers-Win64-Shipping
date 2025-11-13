// 函数: sub_14283470c
// 地址: 0x14283470c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x38)

if (r8 != 0)
    int32_t r9_1 = data_143fe79e0
    
    while (true)
        void* rbx_1 = *r8
        
        if (*(rbx_1 + 0x2e) s< 0 || *(rbx_1 + 0x1c) u<= r9_1)
            int32_t rcx = *(rbx_1 + 0x1c)
            int32_t rdx_1 = *(rbx_1 + 0x18)
            
            if (rdx_1 u<= rcx - 4)
                if ((*(rbx_1 + 0x2e) & 0x10) == 0)
                    int32_t rax_2
                    
                    if (*(rbx_1 + 0x24) u<= rcx)
                        rax_2 = *(rbx_1 + 0x20)
                    
                    if (*(rbx_1 + 0x24) u> rcx || rax_2 u>= *(rbx_1 + 0x24) || rax_2 u<= rdx_1)
                        int32_t rax_6
                        
                        if (rcx - rdx_1 u< 0x14)
                            *(rbx_1 + 0x20) = rdx_1 + 1
                            rax_6 = rcx - 1
                        else
                            *(rbx_1 + 0x20) = rdx_1 + 8
                            rax_6 = rcx - 8
                        
                        *(rbx_1 + 0x24) = rax_6
                
                *(rbx_1 + 0x20) -= rdx_1
                *(rbx_1 + 0x24) -= rdx_1
                *(rbx_1 + 0x1c) = rcx - rdx_1 - 1
                r8 = r8[1]
                
                if (r8 == 0)
                    break
                
                continue
        
        sub_142833a04(2, 
            "Sample '%s' start/end file positions are invalid, disabling and will not be saved", 
            rbx_1)
        *(rbx_1 + 0x20) = 0
        *(rbx_1 + 0x18) = 0
        break

return 1
