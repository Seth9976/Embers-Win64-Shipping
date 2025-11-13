// 函数: sub_140916700
// 地址: 0x140916700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x18
    int32_t i
    
    do
        char* rcx = r14
        r14 = &r14[0x28]
        *rcx = rbx_1[-3].b
        *(rcx + 4) = *(rbx_1 - 0x14)
        
        if (&rcx[0x18] != rbx_1)
            int32_t rsi_1 = rbx_1[1].d
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(rcx + 0x24)
            *(rcx + 0x20) = rsi_1
            
            if (rsi_1 != 0 || r8 != 0)
                sub_1405a4c70(&rcx[0x18], rsi_1, r8)
                memcpy(*(rcx + 0x18), r15_1, rsi_1 * 2)
            else
                *(rcx + 0x24) = 0
        
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
