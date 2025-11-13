// 函数: sub_141e5be90
// 地址: 0x141e5be90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(*(arg1 + 9))
float zmm5[0x4] = arg4

if (r9 == 0)
    uint128_t zmm2 = arg2[1]
    arg4 = *arg3
    float zmm1[0x4] = arg3[1].d
    arg4[0] = arg4[0] f- zmm2.d
    float zmm4 = *(arg3 + 4) f- _mm_shuffle_ps(zmm2, zmm2, 0x55).d
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    zmm1[0] = zmm1[0] f- zmm2.d
    zmm2 = *(arg1 + 0x24)
    arg4[0] = arg4[0] * arg4[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm4 * zmm4 + arg4[0] + zmm1[0])
    temp0_3[0] = temp0_3[0] f- *(arg1 + 0x14)
    return sub_141e55300(arg1, _mm_max_ss(temp0_3[0], 0), zmm2, zmm5[0]) __tailcall

uint64_t var_18

if (r9 == 1)
    int32_t rax_4 = arg3[1].d
    var_18 = *arg3
    int32_t var_10_2 = rax_4
    sub_141e55620(arg1, arg2, &var_18, arg4)
    return 

if (r9 == 2)
    int32_t rax_2 = arg3[1].d
    var_18 = *arg3
    int32_t var_10_1 = rax_2
    sub_141e55490(arg1, arg2, &var_18, arg4)
    return 

if (r9 != 3)
    return 

int32_t rax = arg3[1].d
var_18 = *arg3
int32_t var_10 = rax
sub_141e557e0(arg1, arg2, &var_18, arg4)
