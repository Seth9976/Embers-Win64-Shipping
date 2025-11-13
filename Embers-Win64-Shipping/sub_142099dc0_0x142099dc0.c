// 函数: sub_142099dc0
// 地址: 0x142099dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *(arg1 + 0x28)
uint32_t result

if (rcx == 0 || data_143f5b360 == arg2[1].d)
    result.b = 1
else
    result.b = 0

if (rcx == 0 || result.b == 0)
    void* i = *arg2
    
    for (void* r8 = i + (sx.q(arg2[1].d) << 2); i != r8; i += 4)
        *(i + 3) = 0xff
    
    result.b = 0
    return result

int32_t i_1 = 0

if (arg2[1].d s> 0)
    int64_t rdx = 0
    
    do
        rdx += 4
        i_1 += 1
        *(rdx + *arg2 - 1) = *(data_143f5b358 + rdx - 2)
    while (i_1 s< arg2[1].d)

result.b = 1
return result
