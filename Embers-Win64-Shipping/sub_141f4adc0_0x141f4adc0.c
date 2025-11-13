// 函数: sub_141f4adc0
// 地址: 0x141f4adc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x71c))
int64_t rdi

if ((result.b & 0x10) != 0 || ((result.b & 8) == 0 && data_143de5458 != zx.q(arg1[0x10d].d)))
    rdi.b = 1
else
    rdi.b = 0

if (*(arg1 + 0x5a4) u>= 3 && (*(arg1 + 0x5a7) & 0x20) == 0)
    result = (*(*arg1 + 0x968))()

if ((*(arg1 + 0x5a4) u< 3 || (*(arg1 + 0x5a7) & 0x20) != 0 || result.b != 0) && rdi.b != 0
        && (arg1[0x11].b & 1) != 0 && (arg1[0xca] != 0 || arg1[0xcb] != 0)
        && *(arg1 + 0x71b) s>= 0)
    void* rax_1 = arg1[0x15]
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
    
    if (sub_14242d3a0(rax_1).b != 0 && (*(arg1 + 0x71b) & 0x40) == 0)
        result.b = 1
        return result

result.b = 0
return result
