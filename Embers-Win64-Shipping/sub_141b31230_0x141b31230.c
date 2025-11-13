// 函数: sub_141b31230
// 地址: 0x141b31230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int64_t* rbx = arg2
arg2.b = 1
(*(rax + 0x280))(rbx, arg2)
int32_t rax_1 = *(rbx + 0xc)

if (rax_1 s>= data_143e1d9b4)
    *8 &= 0xbfffffff
    return 0

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_1)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_3 = temp1 + rdx_1
int64_t rdx_2 = sx.q(zx.d(rax_3.w) - rdx_1) * 3
int64_t result = data_143e1d9a0
int64_t rcx_4 = *(result + (sx.q(rax_3 s>> 0x10) << 3))
*(rcx_4 + (rdx_2 << 3) + 8) &= 0xbfffffff
return result
