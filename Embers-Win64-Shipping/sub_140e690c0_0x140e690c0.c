// 函数: sub_140e690c0
// 地址: 0x140e690c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_4

if (*(arg1 + 0x461) == 0)
    rax_4 = data_1439ae51e
else
    int64_t* rcx = *(data_143e20d18 + 8)
    
    if (rcx == 0)
        rax_4 = data_1439ae51e
    else
        bool cond:1_1 = (*(*rcx + 0x30))(rcx) != 0
        rax_4 = data_1439ae51f
        
        if (not(cond:1_1))
            rax_4 = data_1439ae51e

*arg2 = rax_4
return arg2
