// 函数: sub_14285dd50
// 地址: 0x14285dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg3 != 0 && arg4 != 0)
    int64_t rbx_1 = 0
    
    if (arg4 != 0)
        do
            uint16_t rdx = *(arg3 + (rbx_1 << 1))
            
            if (arg2 == rdx)
                if (arg5 == 0)
                    return 1
                
                if (sub_142866c60(arg1, rdx, 0x20006) != 0)
                    return 1
            
            rbx_1 += 1
        while (rbx_1 u< arg4)

return 0
