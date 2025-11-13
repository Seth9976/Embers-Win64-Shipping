// 函数: sub_140f47c40
// 地址: 0x140f47c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *(arg1 + 0x3a8)

if (not(zmm0 f!= *(arg1 + 0x3ac)))
    return 1f

if (*(arg1 + 0x378) != 0)
    int64_t* rcx = *(arg1 + 0x370)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x378) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x370)
        
        (*(*rcx_1 + 0x48))(rcx_1)
        *(arg1 + 0x368) = zmm0

float zmm2 = *(arg1 + 0x3a8)
return (*(arg1 + 0x368) - zmm2) / (*(arg1 + 0x3ac) - zmm2)
