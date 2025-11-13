// 函数: sub_142874850
// 地址: 0x142874850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (*(arg1 + 0x38) == 0 && *(arg1 + 0x680) != 0 && *(arg1 + 0x678) u> 0)
    void* r8_1 = *(arg1 + 0x508)
    char* rdx_1 = *(r8_1 + 0x168)
    
    if (rdx_1 != 0)
        int64_t r8_2 = *(r8_1 + 0x160)
        
        if (r8_2 != 0)
            void* rcx = *(*(arg1 + 0xa8) + 0x238)
            
            if ((*(rcx + 0x1c) & 4) != 0 || (*(rcx + 0x20) & 8) != 0)
                int64_t rcx_1 = 0
                
                if (r8_2 != 0)
                    do
                        char rax_2 = *rdx_1
                        rdx_1 = &rdx_1[1]
                        
                        if (rax_2 == 0)
                            break
                        
                        rcx_1 += 1
                    while (rcx_1 u< r8_2)
                
                if (rcx_1 == r8_2)
                    sub_142856580(arg1, 0x2f, 0x1e5, 0x9d, "ssl\statem\extensions.c", 0x41a)
                    return 0

return 1
