// 函数: sub_1413a07e0
// 地址: 0x1413a07e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg1 + 0x110)
void* r9_1 = *(arg1 + 0xf0) + 0xe68
void* rax = *(r9_1 + 0x10)

if (rax != 0)
    r9_1 = rax

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r8_1)
int32_t result
result.b = test_bit(*(r9_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)), r8_1 & 0x1f)
return result
