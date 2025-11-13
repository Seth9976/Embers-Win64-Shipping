// 函数: sub_14238d590
// 地址: 0x14238d590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x170)
uint128_t zmm0

if (rax == 0)
    int32_t rax_20 = data_143dbb200
    zmm0 = zx.o(data_143dbb1f8.q)
    int32_t var_24 = rax_20
    int32_t var_18 = rax_20
    uint64_t var_20 = zmm0.q
    zmm0.q = zmm0.q
    *arg2 = zmm0
    arg2[1].q = var_20
    *(arg2 + 0x18) = 0.d
    *arg3 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    *arg4 = -1
    arg4[2] = 0xffffffff
    *arg5 = 0
    arg5[2] = 0
    *arg6 = 0
    *arg7 = 0
    *arg8 = 0
    *arg10 = 0
    return arg10

*arg2 = *(rax + 0x24)
arg2[1].q = *(rax + 0x34)
*(arg2 + 0x18) = *(rax + 0x3c)
*arg3 = *(*(arg1 + 0x170) + 0x40)
void* rax_3 = *(arg1 + 0x170)
zmm0 = zx.o(*(rax_3 + 0x58))
arg4[2] = *(rax_3 + 0x60)
uint64_t var_38 = zmm0.q
*arg4 = var_38.d
arg4[1] = (var_38 u>> 0x20).d
void* rax_7 = *(arg1 + 0x170)
zmm0 = zx.o(*(rax_7 + 0x64))
arg5[2] = *(rax_7 + 0x6c)
uint64_t var_38_1 = zmm0.q
*arg5 = var_38_1.d
arg5[1] = (var_38_1 u>> 0x20).d
*arg6 = *(*(arg1 + 0x170) + 0x49)
*arg7 = *(*(arg1 + 0x170) + 0x4a)
int64_t rsi = sx.q(arg9[1].d)
int32_t rax_15 = (rsi + 1).d
arg9[1].d = rax_15

if (rax_15 s> *(arg9 + 0xc))
    sub_1405c4fe0(arg9)

int64_t rax_16 = *arg9
int64_t rcx_6 = rsi << 6
*(rcx_6 + rax_16) = *(arg1 + 0x80)
*(rcx_6 + rax_16 + 0x10) = *(arg1 + 0x90)
*(rcx_6 + rax_16 + 0x20) = *(arg1 + 0xa0)
*(rcx_6 + rax_16 + 0x30) = *(arg1 + 0xb0)
*arg8 = *(arg1 + 0x4c)
*arg10 = *(*(arg1 + 0x170) + 0x70) u>> 1 & 1
return arg10
