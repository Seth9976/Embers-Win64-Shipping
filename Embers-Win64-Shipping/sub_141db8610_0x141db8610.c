// 函数: sub_141db8610
// 地址: 0x141db8610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg2[0x11].b & 1) == 0)
    return 

char* rax

if (**arg1 == 0)
    rax = (*(*arg2 + 0x4c8))(arg2)

if (**arg1 == 0 && rax.d == 0)
    return 

int128_t zmm3 = arg2[0x20].d
int128_t zmm4 = *(arg2 + 0x104)
int128_t zmm5 = arg2[0x21].d
int32_t zmm2 = *(arg2 + 0x10c)
int64_t zmm1 = arg2[0x22].d
float zmm0[0x4] = *(arg2 + 0x114)
int32_t* rcx_1 = arg1[1]
int128_t zmm6
zmm6.d = zmm3.d f+ zmm2
zmm3.d = zmm3.d f- zmm2
int128_t zmm8
zmm8.d = zmm5.d f+ zmm0[0]
int128_t zmm7
zmm7.d = zmm4.d f+ zmm1.d
int32_t var_4c_1 = zmm6.d
zmm4.d = zmm4.d f- zmm1.d
zmm5.d = zmm5.d f- zmm0[0]
int32_t var_44_1 = zmm8.d
int32_t var_54_1 = zmm4.d
int32_t var_50_1 = zmm5.d

if (rcx_1[6].b == 0)
    *rcx_1 = zmm3.d.o
    *(rcx_1 + 0x10) = zmm7.d.q
    rcx_1[6] = 1.d
    return 

zmm1 = rcx_1[1]
float temp0_1[0x4] = _mm_min_ss((*rcx_1)[0], zmm3.d)
int64_t temp0_2 = _mm_min_ss(zmm1.d, zmm4.d)
*rcx_1 = temp0_1[0]
zmm0 = rcx_1[2]
rcx_1[1] = temp0_2.d
float temp0_3[0x4] = _mm_min_ss(zmm0[0], zmm5.d)
int64_t temp0_4 = _mm_max_ss(rcx_1[3].d, zmm6.d)
rcx_1[2] = temp0_3[0]
zmm0 = rcx_1[4]
rcx_1[3] = temp0_4.d
float temp0_5[0x4] = _mm_max_ss(zmm0[0], zmm7.d)
int64_t temp0_6 = _mm_max_ss(rcx_1[5].d, zmm8.d)
rcx_1[4] = temp0_5[0]
rcx_1[5] = temp0_6.d
