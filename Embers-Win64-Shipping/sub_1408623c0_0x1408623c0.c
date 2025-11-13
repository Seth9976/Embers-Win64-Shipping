// 函数: sub_1408623c0
// 地址: 0x1408623c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140862460(arg1)
int32_t i_1 = 0

if (*(arg1 + 0xcb8) s> 0)
    int64_t r8_1 = *(arg1 + 0xcb0)
    uint64_t result_1 = 0
    int32_t i
    
    do
        void* rbx_1 = *(r8_1 + (result_1 << 3))
        *(arg1 + 0xd68)
        
        if (*(rbx_1 + 0x6bc) != 0)
            sub_1408622c0(rbx_1)
            sub_14084fd50(rbx_1)
        
        r8_1 = *(arg1 + 0xcb0)
        i = i_1 + 1
        result = result_1 + 1
        int64_t temp0_1 = *(r8_1 + (result_1 << 3))
        
        if (temp0_1 != rbx_1)
            i = i_1
        
        if (temp0_1 != rbx_1)
            result = result_1
        
        i_1 = i
        result_1 = result
    while (i s< *(arg1 + 0xcb8))

return result
