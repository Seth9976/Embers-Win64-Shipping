// 函数: sub_1428646e0
// 地址: 0x1428646e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* rax = sub_1428a38c0(arg2)

if (rax != 0)
    if (sub_1406938b0(rax) != 0x198)
        return 1
    
    if (sub_142864fb0(arg1, rax) != 0)
        uint16_t rax_3 = sub_142865230(rax)
        int64_t rbx_1 = 0
        int32_t r8
        r8.b = *(arg1 + 0x38) == 0
        
        if (sub_142864e30(arg1, rax_3, r8) != 0)
            if (arg3 == 0)
                return 1
            
            void* rcx_5 = *(arg1 + 0x488)
            
            if ((*(rcx_5 + 0x1c) & 0x30000) == 0)
                return 1
            
            int32_t r8_1
            
            if (rax_3 == 0x17)
                r8_1 = 0x31a
            label_142864791:
                int64_t rdx_2 = *(rcx_5 + 0x1c0)
                
                if (rdx_2 != 0)
                    int64_t* rcx_6 = *(rcx_5 + 0x1b8)
                    
                    while (true)
                        if (r8_1 == *(*rcx_6 + 0x1c))
                            return 1
                        
                        rbx_1 += 1
                        rcx_6 = &rcx_6[1]
                        
                        if (rbx_1 u>= rdx_2)
                            return 0
            else if (rax_3 == 0x18)
                r8_1 = 0x31b
                goto label_142864791

return 0
