// 函数: sub_1427fcd00
// 地址: 0x1427fcd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = *arg1
void* rdx = nullptr

if (result == 0)
    result = nullptr
else
    *(result + 0xa) = 2
    *result = &data_1434d1760
    result[3] = &data_1434d18e0

*arg1 += 0x70

if (result[0xd] != 0)
    int64_t rcx_2 = (arg2[1] + 0xf) & 0xfffffffffffffff0
    arg2[1] = rcx_2 + 0x90
    result[0xd] = rcx_2

int32_t* rax_2 = arg2[1]
uint64_t rcx_3 = zx.q(*rax_2)
arg2[1] = &rax_2[1]

if (rcx_3.d != 0)
    rdx = &rax_2[1]

result[4] = rdx
arg2[1] += rcx_3
result[0xc] = sub_142811020(arg2, result[0xc], &result[3], &data_143b7c0f0)
return result
