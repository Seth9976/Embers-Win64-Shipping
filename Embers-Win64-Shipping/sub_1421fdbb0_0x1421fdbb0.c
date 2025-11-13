// 函数: sub_1421fdbb0
// 地址: 0x1421fdbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = 0
int64_t* rsi_1 = zx.q(arg3) + arg5
void var_28
int64_t* rax
int128_t zmm1
rax, zmm1 = sub_141fe56b0(arg1 + 0x30, &var_28, *(arg2 + 0x12c), arg4, (*(arg2 + 0x18)).d, nullptr)
int64_t var_30_1 = 0
*rsi_1 = *rax
rsi_1[1].d = rax[1].d
int64_t* rax_2
int512_t zmm1_1
rax_2, zmm1_1 =
    sub_141fe56b0(arg1 + 0x78, &var_28, *(arg2 + 0x12c), zmm1, (*(arg2 + 0x18)).d, nullptr)
*(rsi_1 + 0xc) = *rax_2
*(rsi_1 + 0x14) = rax_2[1].d
zmm1_1.o = *(arg2 + 0x12c)
float zmm0_2
int512_t zmm1_2
zmm0_2, zmm1_2 = sub_141fe5610(arg1 + 0xc0, zmm1_1, *(arg2 + 0x18), nullptr)
rsi_1[3].d = int.d(zmm0_2 * 2f + 0.5f) s>> 1
zmm1_2.o = *(arg2 + 0x12c)
int32_t result
float zmm0_3
float zmm6_1
zmm0_3, result, zmm6_1 = sub_141fe5610(arg1 + 0x158, zmm1_2, *(arg2 + 0x18), nullptr)
*(rsi_1 + 0x1c) = zmm0_3

if (not(zmm0_3 <= zmm6_1))
    result = (*(arg5 + 0x5c) & 0x3fffffff) | 0x40000000
    *(arg5 + 0x5c) = result

return result
