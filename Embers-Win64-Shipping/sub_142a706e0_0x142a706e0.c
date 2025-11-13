// 函数: sub_142a706e0
// 地址: 0x142a706e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = arg4
bool cond:0 = 0.0 f> arg2[0].q
int32_t rsi = arg3
uint32_t temp0[0x4] = __andps_xmmxud_memxud(arg2, data_142d57d00)
int64_t zmm0 = temp0[0].q
*(arg1 + 0x10) = temp0.q
*(arg1 + 0x39) = cond:0
char rax_1 = boost::math::detail::isnan_impl<long double>(zmm0)
zmm0 = *(arg1 + 0x10)
*(arg1 + 0x3a) = rax_1
int64_t rax_2 = _finite(zmm0)
*(arg1 + 0x3b) = rax_2.b

if (*(arg1 + 0x3a) != 0 || rax_2.b != 0)
    rsi = 0
    i = 0
else
    arg2 = zx.o(*(arg1 + 0x10))
    rax_2 = int.q(arg2[0].q)
    *(arg1 + 0x30) = rax_2
    zmm0 = float.d(rax_2)
    arg2[0].q f- zmm0
    
    if (is_unordered.q(arg2[0].q, zmm0) || arg2[0].q f!= zmm0)
        rax_2 = 0
        *(arg1 + 0x38) = 0
    else
        rax_2.b = 1
        *(arg1 + 0x38) = 1

*(arg1 + 0x18) = rsi
__builtin_memset(arg1 + 0x20, 0, 0x19)

if (i == 0)
    *(arg1 + 0x28) = 0
    return rax_2

int64_t rax_3
int64_t rdx
rdx:rax_3 = muls.dp.q(0x6666666666666667, i)
uint64_t rax_5 = rdx s>> 2 u>> 0x3f
int64_t i_1 = i s/ 0xa

while (i == i_1 * 0xa)
    i = i_1
    int64_t rax_6
    int64_t rdx_2
    rdx_2:rax_6 = muls.dp.q(0x6666666666666667, i_1)
    rax_5 = rdx_2 s>> 2 u>> 0x3f
    i_1 s/= 0xa

return rax_5
