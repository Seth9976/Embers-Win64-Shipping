// 函数: sub_1420ce130
// 地址: 0x1420ce130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const result = &data_142d40450
int16_t* const r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

if (arg1[1].d != 0)
    result = *arg1

void* r8_1 = r8 - result
uint32_t i
uint32_t rdx

do
    rdx = zx.d(*result)
    i = zx.d(*(result + r8_1))
    
    if (rdx != i)
        break
    
    result = &result[1]
while (i != 0)

result.b = rdx - i != 0
return result
