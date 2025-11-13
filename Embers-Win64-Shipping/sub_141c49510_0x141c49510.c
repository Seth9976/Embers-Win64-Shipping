// 函数: sub_141c49510
// 地址: 0x141c49510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x60) != 4)
    return 

bool z_1

if (0 == *(arg1 + 0x1c8))
    *(arg1 + 0x1c8) = 0
    z_1 = true
else
    *(arg1 + 0x1c8)
    z_1 = false

if (z_1)
    return 

while (true)
    int32_t rax_1 = 0
    
    if (0 == *(arg1 + 0x138))
        *(arg1 + 0x138) = 0
    else
        rax_1 = *(arg1 + 0x138)
    
    int32_t rax = 0
    
    if (0 == *(arg1 + 0x13c))
        *(arg1 + 0x13c) = 0
    else
        rax = *(arg1 + 0x13c)
    
    if (rax_1 == rax)
        break
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *(arg1 + 0x1a0) = performanceCount.d
    int32_t rax_3 = 0
    
    if (0 == *(arg1 + 0x13c))
        *(arg1 + 0x13c) = 0
    else
        rax_3 = *(arg1 + 0x13c)
    
    sub_141c488a0(sx.q(rax_3) * 0x38 + *(arg1 + 0xa0))
    sub_141c483d0(arg1 + 0x180)
    int32_t rax_4 = 0
    
    if (0 == *(arg1 + 0x13c))
        *(arg1 + 0x13c) = 0
    else
        rax_4 = *(arg1 + 0x13c)
    
    *(arg1 + 0x140)
    *(arg1 + 0x13c) = mods.dp.d(sx.q(rax_4 + 1), *(arg1 + 0x140))
