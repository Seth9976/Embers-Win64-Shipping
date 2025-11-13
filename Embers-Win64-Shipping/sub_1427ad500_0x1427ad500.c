// 函数: sub_1427ad500
// 地址: 0x1427ad500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 8)
int32_t rax = *(r8 + 0xc)
uint64_t result

if (rax s>= data_143e1d9b4)
    result = 0
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_2
    result = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18

if ((*(result + 8) & 0x30000000) == 0 && sub_140d23de0(r8).b != 0)
    result.b = 1
    return result

result.b = 0
return result
