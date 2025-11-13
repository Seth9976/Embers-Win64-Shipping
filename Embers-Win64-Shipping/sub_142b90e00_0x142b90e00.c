// 函数: sub_142b90e00
// 地址: 0x142b90e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1 + 0x15c)
uint128_t zmm1 = *(&data_14367ec50 + sx.q((temp1 + (temp0 & 7)) s>> 3) * 0x10)
int64_t rcx_2 = _mm_bsrli_si128(zmm1, 8).q
int32_t var_10 = sx.d(rcx_2.w)
int32_t result = sx.d((rcx_2 u>> 0x10).w)
*arg2 = zmm1.q.o
*arg3 = result
return result
