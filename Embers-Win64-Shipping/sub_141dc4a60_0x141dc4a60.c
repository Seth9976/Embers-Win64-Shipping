// 函数: sub_141dc4a60
// 地址: 0x141dc4a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1e].b == 3)
    int64_t* rax_3 = sub_141dca020((*(*arg1 + 0x150))(), arg1[0x1d])
    
    if (rax_3 != 0 && sub_142168a40(rax_3) s< 3)
        int64_t r8_1 = *rax_3
        (*(r8_1 + 0x330))(rax_3, arg1, r8_1)
        
        if (*(arg1 + 0xf1) u> 1)
            int32_t rcx_3
            rcx_3.b = *(arg1 + 0xec) == 0
            
            if ((rcx_3.b & sub_140b5b8a0(arg1[0x1d].d, 0)) == 0)
                int32_t rbx_3 = *(arg1 + 0xec)
                sub_140b5b8a0(arg1[0x1d].d, 0x11a)
                int32_t rcx_4
                rcx_4.b = rbx_3 == 0
            
            if (sub_141dcdc50(arg1) != 3)
                char rbx_4 = *(arg1 + 0xf1)
                
                if (rbx_4 u> 1 && sub_141dce620(arg1) == 0)
                    int64_t rbp
                    rbp.b = 0
                    
                    if (rbx_4 == 4)
                        *(arg1 + 0xf1) = 2
                        rbp.b = 1
                    
                    if ((*(arg1 + 0x5b) & 1) != 0)
                        void* rax_9 = (*(*arg1 + 0x150))(arg1)
                        
                        if (rax_9 != 0)
                            sub_14242c0c0(rax_9, arg1)
                            void* rax_10 = sub_141dc9ff0(arg1)
                            
                            if (rax_10 != 0)
                                sub_142167b90(rax_10, arg1)
                                void* rcx_11 = *(rax_9 + 0xf0)
                                
                                if (rcx_11 != 0 && rcx_11 != rax_10)
                                    sub_142167b90(rcx_11, arg1)

void* result = (*(*arg1 + 0x150))(arg1)

if (result != 0)
    int64_t* rcx_13 = *(result + 0xf0)
    
    if (rcx_13 != 0)
        jump(*(*rcx_13 + 0x330))

return result
