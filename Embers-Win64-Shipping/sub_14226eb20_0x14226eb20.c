// 函数: sub_14226eb20
// 地址: 0x14226eb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
char result = *(arg1 + 8)
int32_t rdi = 0
arg2[1] = result
*(arg2 + 4) = 0

if (*(arg2 + 8) != &data_142d40450)
    *(arg2 + 0x10) = 0
    int32_t rdx = 0
    
    if (*(arg2 + 0x14) != 0)
        result = sub_1405947f0(&arg2[8], 0)
        rdx = *(arg2 + 0x10)
    
    *(arg2 + 0x10) = rdx
    
    if (rdx s> *(arg2 + 0x14))
        result = sub_140594770(&arg2[8])

if (*(arg2 + 0x18) != &data_142d40450)
    int32_t rdx_1 = 0
    *(arg2 + 0x20) = 0
    
    if (*(arg2 + 0x24) != 0)
        result = sub_1405947f0(&arg2[0x18], 0)
        rdx_1 = *(arg2 + 0x20)
    
    *(arg2 + 0x20) = rdx_1
    
    if (rdx_1 s> *(arg2 + 0x24))
        result = sub_140594770(&arg2[0x18])

if (*(arg2 + 0x28) != &data_142d40450)
    *(arg2 + 0x30) = 0
    
    if (*(arg2 + 0x34) != 0)
        result = sub_1405947f0(&arg2[0x28], 0)
        rdi = *(arg2 + 0x30)
    
    *(arg2 + 0x30) = rdi
    
    if (rdi s> *(arg2 + 0x34))
        return sub_140594770(&arg2[0x28])

return result
