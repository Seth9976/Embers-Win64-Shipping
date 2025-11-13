// 函数: sub_141845210
// 地址: 0x141845210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14181bc60(*arg1, arg1[1].d, 0, arg2)
void* i = *arg1
int64_t result = sx.q(arg1[1].d)

for (void* r11_2 = result * 0x60 + i; i != r11_2; i += 0x60)
    result = *(i + 0x48)
    int64_t r8_1 = 0
    int64_t r10_1 = result + sx.q(*(i + 0x50)) * 0x18
    
    while (result != r10_1)
        uint64_t rcx_2 = zx.q(*(result + 0x14))
        result += 0x18
        r8_1 += rcx_2
    
    *(i + 0x58) = r8_1

return result
