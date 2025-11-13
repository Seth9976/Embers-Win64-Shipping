// 函数: sub_142c7e3d0
// 地址: 0x142c7e3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x78) != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x80) s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            data_143ccb8a0(*(rdi_1 + *(arg1 + 0x78)))
            rdi_1 = &rdi_1[1]
            i += 1
            *(rdi_1 + *(arg1 + 0x78) - 8) = 0
        while (i s< *(arg1 + 0x80))
    
    data_143ccb8a0(*(arg1 + 0x78))
    *(arg1 + 0x78) = 0
    *(arg1 + 0x80) = 0

data_143ccb8a0(*(arg1 + 0x88))
int64_t rcx_4 = *(arg1 + 0xd8)
*(arg1 + 0x88) = 0
int64_t result = data_143ccb8a0(rcx_4)
*(arg1 + 0xd8) = 0
return result
