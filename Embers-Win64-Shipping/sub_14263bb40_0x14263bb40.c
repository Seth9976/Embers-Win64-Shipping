// 函数: sub_14263bb40
// 地址: 0x14263bb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x39) = 4
void* rax = sub_140d3c6e0(arg1 + 0x58)

if (rax != 0)
    (*(*(rax + 0xb0) + 0x40))(rax + 0xb0, arg1)

int32_t rax_2 = *(arg1 + 0xc)

if (rax_2 s>= data_143e1d9b4)
    *8 |= 0x20000000
    return 0

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_2)
uint32_t rdx_3 = zx.d(temp0)
int32_t rax_4 = temp1 + rdx_3
int64_t rdx_4 = sx.q(zx.d(rax_4.w) - rdx_3) * 3
int64_t result = data_143e1d9a0
int64_t rcx_5 = *(result + (sx.q(rax_4 s>> 0x10) << 3))
*(rcx_5 + (rdx_4 << 3) + 8) |= 0x20000000
return result
