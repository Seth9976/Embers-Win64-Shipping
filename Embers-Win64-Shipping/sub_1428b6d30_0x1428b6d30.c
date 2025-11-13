// 函数: sub_1428b6d30
// 地址: 0x1428b6d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return 0

if (*(arg1 + 0x24) != 0)
    if (*(arg1 + 0x20) != 0)
        FILE* _Stream = *(arg1 + 0x38)
        
        if (_Stream != 0)
            fclose(_Stream)
            *(arg1 + 0x38) = 0
            *(arg1 + 0x28) = 0
    
    *(arg1 + 0x20) = 0

return 1
