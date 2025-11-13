// 函数: sub_142c5b480
// 地址: 0x142c5b480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x4fa0)

if (result != 0)
    int32_t i = 0
    
    if (result s> 0)
        int64_t rdi_1 = 0
        
        do
            sub_142c524d0(*(*(arg1 + 0x4fa8) + rdi_1))
            rdi_1 += 8
            i += 1
            *(rdi_1 + *(arg1 + 0x4fa8) - 8) = 0
        while (i s< *(arg1 + 0x4fa0))
    
    result = data_143ccb8a0(*(arg1 + 0x4fa8))
    *(arg1 + 0x4fa8) = 0
    *(arg1 + 0x4fa0) = 0

return result
