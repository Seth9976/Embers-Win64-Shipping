// 函数: sub_141b311d0
// 地址: 0x141b311d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
arg2.b = 1
sub_141eae3e0(rbx, arg2.b)
int32_t rax = *(rbx + 0xc)

if (rax s>= data_143e1d9b4)
    *8 &= 0xbfffffff
    return 0

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int64_t rdx_2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
int64_t result = data_143e1d9a0
int64_t rcx_4 = *(result + (sx.q(rax_2 s>> 0x10) << 3))
*(rcx_4 + (rdx_2 << 3) + 8) &= 0xbfffffff
return result
