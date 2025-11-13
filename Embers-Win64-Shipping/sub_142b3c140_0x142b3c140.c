// 函数: sub_142b3c140
// 地址: 0x142b3c140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result = *arg1

if (result == 0xfffe || arg1[1] == 0xfffc)
    int16_t rsi_1 = *(arg2 + 0x4a)
    int16_t rdi_1 = *(arg2 + 0x48)
    
    if (rsi_1 == 0xffff)
        rdi_1 = -1
        
        if (result == 0xfffc)
            rdi_1 = 3
    
    result = arg1[2]
    
    if (*(arg2 + 0x4c) == 0xffff)
        rsi_1 = rdi_1
    
    if (result == 0xfffe)
        result = sub_142b3c030(arg3)
        arg1[2] = result
    else if (result == 0xfffd)
        result = sub_142a92b60(2, sx.d(sub_142b3c030(arg3)))
        arg1[2] = result
    
    *arg1 = rdi_1
    arg1[1] = rsi_1

return result
