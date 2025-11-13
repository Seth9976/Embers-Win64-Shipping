// 函数: sub_1428564a0
// 地址: 0x1428564a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0xffffffff)
    if (*(arg1 + 0x38) == 0)
        int32_t rax = *(arg1 + 0x5c)
        
        if (arg2 == 0)
            if (rax == 0x2e)
            label_1428564dd:
                *(arg1 + 0x64) = 1
                
                if (arg2 != 0)
                    goto label_1428564e8
        else if (rax - 0x2e u<= 1)
            if (*(arg1 + 0x84) == 4)
                return 
            
            goto label_1428564dd
    else if (*(arg1 + 0x84) == 0xc && *(arg1 + 0x5c) == 0x2e)
        *(arg1 + 0x64) = 1
else if (*(arg1 + 0x5c) - 0x2e u<= 1)
    *(arg1 + 0x64) = 1
label_1428564e8:
    
    if (*(arg1 + 0x84) == 3)
        *(arg1 + 0x84) = 7
