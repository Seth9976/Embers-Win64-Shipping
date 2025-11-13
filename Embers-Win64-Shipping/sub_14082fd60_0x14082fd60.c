// 函数: sub_14082fd60
// 地址: 0x14082fd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x210)
int32_t result = 0
void* r8_2 = (sx.q(*(arg1 + 0x218)) << 4) + rdx

while (rdx != r8_2)
    int32_t result_1 = *(rdx + 8)
    
    if (result s>= result_1)
        result_1 = result
    
    rdx += 0x10
    result = result_1

return result
