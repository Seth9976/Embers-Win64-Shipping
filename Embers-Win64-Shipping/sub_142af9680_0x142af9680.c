// 函数: sub_142af9680
// 地址: 0x142af9680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x30)
int32_t* result = (zx.q(*(r8 + 0x31)) << 0xa) + *(r8 + 0x38)
int64_t i_1 = 0x80
void* rdx = arg2 + 1
int64_t i

do
    rdx += 2
    uint8_t rcx_1 = (*result u>> 0x1f).b
    result = &result[2]
    *(rdx - 3) = rcx_1 ^ 1
    *(rdx - 2) = (result[-1] u>> 0x1f).b ^ 1
    i = i_1
    i_1 -= 1
while (i != 1)
return result
