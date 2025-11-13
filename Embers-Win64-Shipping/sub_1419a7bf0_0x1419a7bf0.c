// 函数: sub_1419a7bf0
// 地址: 0x1419a7bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 4))
int32_t rdx_1 = temp0 & 7
int32_t rax_2 = temp1 + rdx_1
sub_140889380(arg2 + 0x2a8, u"NUM_OUTPUTS", zx.q((rax_2 & 7) - rdx_1 + 1))
int32_t rbx_2 = rax_2 s>> 3 & 0x80000001

if (rbx_2 s< 0)
    rbx_2 = ((rbx_2 - 1) | 0xfffffffe) + 1

int64_t r8_1
r8_1.b = rbx_2 == 1
sub_1405d3490(arg2 + 0x2a8, u"b128BITRENDERTARGET", r8_1)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 4))
int32_t result = (temp3 + (temp2 & 7)) s>> 3 & 0x80000001

if (result s< 0)
    result = ((result - 1) | 0xfffffffe) + 1

if (result != 1)
    return result

return sub_1419ae3c0(arg2, 0, result.b)
