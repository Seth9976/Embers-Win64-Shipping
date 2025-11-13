// 函数: sub_141b9ecd0
// 地址: 0x141b9ecd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x10) != 0)
    int64_t* rcx = *(arg3 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg3 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg3 + 8)
        
        *arg3 = (*(*rcx_1 + 0x48))(rcx_1)

uint32_t rcx_2 = zx.d(*arg3)
char rax_5

if (rcx_2 == 0)
    rax_5 = data_1439ae51c
else if (rcx_2 == 1)
    rax_5 = data_1439ae51d
else if (rcx_2 == 2)
    rax_5 = data_1439ae51e
else if (rcx_2 == 3)
    rax_5 = data_1439ae51f
else if (rcx_2 != 4)
    rax_5 = data_1439ae51c
else
    rax_5 = data_1439ae520

*arg2 = rax_5
sub_140745b20(&arg3[8])
return arg2
