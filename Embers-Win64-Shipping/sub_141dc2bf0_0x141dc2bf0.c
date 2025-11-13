// 函数: sub_141dc2bf0
// 地址: 0x141dc2bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x28)
int128_t __saved_zmm6 = arg4

if (r9 == 0)
    return 

int32_t rax_1 = *(r9 + 0xc)
void* const rax

if (rax_1 s>= data_143e1d9b4)
    rax = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_2
    rax = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18

if ((*(rax + 8) & 0x30000000) != 0)
    return 

if (arg3 == 1)
    rax = (*(*r9 + 0x458))(r9)

if (arg3 == 1 && rax.b == 0)
    return 

int64_t* rcx_5 = *(arg1 + 0x28)
arg4.d = arg2.d f* rcx_5[0x13].d
(*(*rcx_5 + 0x3f8))(rcx_5, arg4, zx.q(arg3), arg1, __saved_zmm6)
