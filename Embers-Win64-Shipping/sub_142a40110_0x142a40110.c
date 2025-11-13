// 函数: sub_142a40110
// 地址: 0x142a40110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg2 == 0)
    result = *(arg1 + 0x28)

if (arg2 != 0 || (result & 0xfffffffffffffffc) != 0)
    int64_t* i_4
    int64_t result_1
    
    do
        result_1 = *(arg1 + 0x28)
        i_4 = result_1 & 0xfffffffffffffffc
        result = result_1
        
        if (result == *(arg1 + 0x28))
            *(arg1 + 0x28) = zx.q(result_1.d) & 3
        else
            result = *(arg1 + 0x28)
    while (result_1 != result)
    
    if (i_4 != 0)
        int64_t* i = *i_4
        int64_t rcx_2 = 1
        int64_t* i_3 = i_4
        
        for (; i != 0; i = *i)
            i_3 = i
            rcx_2 += 1
        
        *i_3 = *(arg1 + 0x18)
        *(arg1 + 0x18) = i_4
        result = *(arg1 + 0x20)
        *(arg1 + 0x20) += neg.q(rcx_2)
        *(arg1 + 0x10) -= rcx_2

int64_t* i_2 = *(arg1 + 0x18)

if (i_2 != 0)
    int64_t rdx = *(arg1 + 8)
    
    if (rdx == 0)
        *(arg1 + 8) = i_2
        *(arg1 + 7) = rdx.b
        *(arg1 + 0x18) = rdx
        return result
    
    if (arg2 != 0)
        for (int64_t* i_1 = *i_2; i_1 != 0; i_1 = *i_1)
            i_2 = i_1
        
        *i_2 = rdx
        result = *(arg1 + 0x18)
        *(arg1 + 8) = result
        *(arg1 + 7) = 0
        *(arg1 + 0x18) = 0

return result
