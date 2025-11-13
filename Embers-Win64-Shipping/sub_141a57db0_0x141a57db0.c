// 函数: sub_141a57db0
// 地址: 0x141a57db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = *arg1

if (rdx != 2)
    char rax = arg1[8]
    
    if (rax != 2)
        int32_t r8_1 = *(arg1 + 4)
        int32_t temp0_1 = *(arg1 + 0xc)
        
        if (r8_1 s> temp0_1)
            return 1
        
        if (r8_1 == temp0_1 && (rdx == 0 || rax == 0))
            return 1

return 0
