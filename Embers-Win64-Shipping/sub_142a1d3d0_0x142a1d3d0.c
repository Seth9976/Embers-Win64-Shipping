// 函数: sub_142a1d3d0
// 地址: 0x142a1d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg1 + 0xcc0

do
    int64_t rdx_1 = -0xcc0 - arg1 + result
    
    if (rdx_1 s>= 0x28)
        result[-0x40] = 2
        *result = 3
    else if (rdx_1 s>= 0x14)
        result[-0x40] = 1
        *result = 2
    else if (rdx_1 s< 0xf)
        result[-0x40] = 0
        *result = 0
    else
        result[-0x40] = 1
        *result = 1
    
    result = &result[1]
while (-0xcc0 - arg1 + result s<= 0x3f)

*(arg1 + 0xd00) = 0x1010101
*(arg1 + 0xd04) = 0x1020200
*(arg1 + 0xd08) = 0x302
return result
