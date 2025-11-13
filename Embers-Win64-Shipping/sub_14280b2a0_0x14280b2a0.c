// 函数: sub_14280b2a0
// 地址: 0x14280b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0 = sub_14280ae40(arg1, arg2, arg3)
(*(*arg2 + 0xf8))(arg2)
*(arg1 + 0xd0) = zmm0.d
(*(*arg2 + 0x100))(arg2)
*(arg1 + 0xd4) = zmm0.d
(*(*arg2 + 0x108))(arg2)
*(arg1 + 0xd8) = zmm0.d
(*(*arg2 + 0x118))(arg2, arg1 + 0xdc)
(*(*arg2 + 0x128))(arg2, arg1 + 0xf4)
(*(*arg2 + 0x138))(arg2, arg1 + 0x110)
int64_t i_3 = 6
void* rax_6 = arg1 + 0x12c
int32_t i_2 = 0
int64_t i

do
    *rax_6 = 0
    *(rax_6 + 8) = 0x7f7fffff
    rax_6 += 0x10
    i = i_3
    i_3 -= 1
while (i != 1)
(*(*arg2 + 0x158))(arg2, arg1 + 0x18c)
(*(*arg2 + 0x178))(arg2)
*(arg1 + 0x1c0) = zmm0.d
(*(*arg2 + 0x188))(arg2)
*(arg1 + 0x1c4) = zmm0.d
*(arg1 + 0x1c8) = (*(*arg2 + 8))(arg2)
int32_t i_1 = 0
void* r14 = arg1 + 0xb8

do
    int32_t rax_13 = (*(*arg2 + 0xf0))(arg2, zx.q(i_1))
    i_1 += 1
    *r14 = rax_13
    r14 += 4
while (i_1 u< 6)

void* rsi = arg1 + 0x138

do
    int64_t var_18
    (*(*arg2 + 0x148))(arg2, &var_18, zx.q(i_2))
    zmm0 = var_18
    i_2 += 1
    int32_t var_10
    *(rsi - 4) = var_10
    *(rsi - 0xc) = zmm0
    int32_t var_c
    *rsi = var_c
    rsi += 0x10
while (i_2 u< 6)

(*(*arg2 + 0x168))(arg2, arg1 + 0x1a8, arg1 + 0x1b4)
return arg1
