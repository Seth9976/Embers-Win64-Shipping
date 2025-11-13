// 函数: sub_142827844
// 地址: 0x142827844
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    if (arg1[0xf] != 0)
        int32_t* rcx = *(arg1[0xc] + (((arg1[0xd] - 1) & arg1[0xe]) << 3))
        
        if (*rcx == 0)
            break
        
        if (*rcx == 1)
            sub_1428272a0(rcx)
            int64_t temp0_1 = arg1[0xf]
            arg1[0xf] -= 1
            
            if (temp0_1 != 1)
                arg1[0xe] += 1
                continue
            else
                arg1[0xe] = 0
                continue
    
    if (*(arg1 + 0x81) != 0)
        break
    
    sub_142828058(arg1)
