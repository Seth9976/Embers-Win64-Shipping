// 函数: sub_141d0e8d0
// 地址: 0x141d0e8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0x148))
    *(arg1 + 0x148) = 0
    z = true
else
    *(arg1 + 0x148)
    z = false

if (z)
    bool z_1
    
    do
        int64_t* rcx = *(arg1 + 0x130)
        
        if ((*(*rcx + 0x20))(rcx, 0xffffffff, 0) != 0)
            sub_141d0b7d0(arg1)
        
        if (0 == *(arg1 + 0x148))
            *(arg1 + 0x148) = 0
            z_1 = true
        else
            *(arg1 + 0x148)
            z_1 = false
    while (z_1)

return 0
