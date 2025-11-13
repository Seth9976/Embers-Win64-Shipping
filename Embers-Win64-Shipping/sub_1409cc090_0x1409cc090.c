// 函数: sub_1409cc090
// 地址: 0x1409cc090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_4 = *(arg1 + 8)
void* r8_1 = sx.q(arg3) * 0xd0 + *(*(*rax_4 + 0x10) + sx.q(rax_4[1].d) * 0x10)

if (arg4 == 1)
    r8_1 += 0x34
else if (arg4 == 2)
    r8_1 += 0x68
else if (arg4 == 3)
    r8_1 += 0x9c

*arg2 = *(r8_1 + 0x18)
arg2[1] = *(r8_1 + 0x1c)
int32_t result = *(r8_1 + 0x20)
arg2[2] = result
return result
