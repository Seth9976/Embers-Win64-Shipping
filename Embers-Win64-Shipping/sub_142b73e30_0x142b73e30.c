// 函数: sub_142b73e30
// 地址: 0x142b73e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10_1 = sx.q(arg1[6].d)
int32_t i = 0
arg1[5].d &= arg2
*(arg1 + 0x2c) &= arg2
int64_t result = 0
*(arg1 + 0x34) &= arg2
int64_t r10 = r10_1 s>> 4

if (r10 s> 0)
    do
        if (*(arg1 + result + 0x40) == 0)
            int64_t rcx = *arg1
            *(rcx + (result << 2)) &= arg2
        
        result += 1
    while (result s< r10)

if (*(arg1 + 0x1c) s> 0)
    int64_t rcx_1 = 0
    
    do
        result = arg1[2]
        rcx_1 += 4
        i += 1
        *(rcx_1 + result - 4) &= arg2
    while (i s< *(arg1 + 0x1c))

return result
