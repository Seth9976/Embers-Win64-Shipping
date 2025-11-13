// 函数: sub_142b90d70
// 地址: 0x142b90d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0_1
int32_t temp1
temp0_1:temp1 =
    sx.q(int.d(ceil(_mm_cvtepi32_pd(zx.q(arg1 + 0x3f)) f* 0.30102999566398114).q) + 0x15b)
uint128_t zmm2 = *(&data_14367ec50 + sx.q(((temp1 + (temp0_1 & 7)) s>> 3) + 1) * 0x10)
int64_t rcx_2 = _mm_bsrli_si128(zmm2, 8).q
*arg4 = sx.d((rcx_2 u>> 0x10).w)
int32_t result = sx.d(rcx_2.w)
int32_t result_1 = result
*arg3 = zmm2.q.o
return result
