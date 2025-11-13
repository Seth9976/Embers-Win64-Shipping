// 函数: sub_140611240
// 地址: 0x140611240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_3 = *(arg1 + 0xc)
int32_t temp0 = *(arg2 + 0xc)
bool cond:0 = r8_3 s< temp0

if (r8_3 == temp0)
    int32_t r8 = **(arg1 + 0x10)
    int32_t temp1_1 = **(arg2 + 0x10)
    
    if (r8 != temp1_1)
        int32_t rcx = -1
        
        if (r8 s< temp1_1)
            rcx = 1
        
        return zx.q(rcx)
    
    if (*(arg2 + 8) != 0x59)
        return 1
    
    int32_t r8_1 = *(arg1 + 0x20)
    int32_t temp2_1 = *(arg2 + 0x20)
    cond:0 = r8_1 s< temp2_1
    
    if (r8_1 == temp2_1)
        int32_t r8_2 = *(arg1 + 0x24)
        int32_t temp3_1 = *(arg2 + 0x24)
        cond:0 = r8_2 s< temp3_1
        
        if (r8_2 == temp3_1)
            return 0

if (cond:0)
    return 0xffffffff

return 1
