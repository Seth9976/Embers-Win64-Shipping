// 函数: sub_1428693a0
// 地址: 0x1428693a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = (*(arg1 + 0x558)).b

if ((rdx & 1) != 0)
    int32_t* r8_1 = *(arg1 + 8)
    int32_t rax_2
    
    if ((*(*(r8_1 + 0xc0) + 0x60) & 8) == 0)
        rax_2 = *r8_1
    
    if (((*(*(r8_1 + 0xc0) + 0x60) & 8) != 0 || rax_2 s< 0x304 || rax_2 == 0x10000 || (rdx & 8) == 0
            || *(arg1 + 0x758) == 3) && (*(arg1 + 0x770) s< 1 || (rdx & 4) == 0))
        char rax_4 = (*(*(*(arg1 + 0xa8) + 0x238) + 0x20)).b
        
        if (((rax_4 & 4) == 0 || (rdx & 2) != 0) && (rax_4 & 0x50) == 0)
            return 1

return 0
