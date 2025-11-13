// 函数: sub_1409cc190
// 地址: 0x1409cc190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_8 = *(arg1 + 8)
void* r8_1 = sx.q(arg3) * 0xd0 + *(*(*rax_8 + 0x10) + sx.q(rax_8[1].d) * 0x10)

if (arg4 == 1)
    r8_1 += 0x34
else
    if (arg4 == 2)
        *arg2 = *(r8_1 + 0x6c)
        int32_t rax_5 = *(r8_1 + 0x70)
        arg2[1] = rax_5
        return rax_5
    
    if (arg4 == 3)
        *arg2 = *(r8_1 + 0xa0)
        int32_t rax_3 = *(r8_1 + 0xa4)
        arg2[1] = rax_3
        return rax_3

*arg2 = *(r8_1 + 4)
int32_t rax_7 = *(r8_1 + 8)
arg2[1] = rax_7
return rax_7
