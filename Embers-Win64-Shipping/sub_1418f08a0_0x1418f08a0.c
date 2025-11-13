// 函数: sub_1418f08a0
// 地址: 0x1418f08a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = 0
void* r10 = *((zx.q(arg2) << 6) + *arg1 + 0x28)

if (data_1439c7a08 s> 1)
    int64_t result = *arg3
    bool cond:1 = *(r10 + 8) != result
    *(r10 + 8) = result
    arg1.b = cond:1
    bool cond:2 = *(r10 + 0x10) != arg4
    *(r10 + 0x10) = arg4
    result.b = cond:2
    result.b |= arg1.b
    return result

void* r8_1 = arg1[6] + zx.q(arg2) * 0xc
int32_t rax_2 = arg3[2].d

if (*(r8_1 + 4) != rax_2)
    *(r8_1 + 4) = rax_2
    r11 = 1
    *(r10 + 8) = *arg3

if (*(r8_1 + 8) != arg4)
    *(r8_1 + 8) = arg4
    r11 = 1
    *(r10 + 0x10) = arg4

arg1[0xa].b |= r11
return zx.q(r11)
