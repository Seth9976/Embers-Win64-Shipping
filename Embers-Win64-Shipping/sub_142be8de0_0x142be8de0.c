// 函数: sub_142be8de0
// 地址: 0x142be8de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = &arg1[7]
uint32_t i_1 = ((zx.d(*arg1) << 8 | zx.d(arg1[1])) << 8 | zx.d(arg1[2])) << 8 | zx.d(arg1[3])
int32_t result = 0

if (i_1 != 0)
    uint32_t i
    
    do
        uint32_t rdx_1 = zx.d(*rcx)
        rcx += 4
        result = result + 1 + rdx_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
