// 函数: sub_141d77130
// 地址: 0x141d77130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2

if (*(arg1 + 0x1b0) == 0)
    return 

int64_t* rcx = *(arg1 + 0x110)

if (rcx == 0 || *(arg1 + 0x68) == 0 || *(arg1 + 0x70) == 0 || *(arg1 + 0x140) != 0)
    return 

uint64_t r8_1 = zx.q(*(arg1 + 0x150))
float zmm0 = arg2.d f+ *(arg1 + 0x154)
*(arg1 + 0x154) = zmm0
arg2.q = fconvert.d(zmm0)

if ((*(*rcx + 0x20))(rcx, arg2, r8_1).b == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0x110)
int32_t rax = (*(*rcx_1 + 0x28))(rcx_1, _mm_cvtps_pd((*(arg1 + 0x154)).q), zx.q(*(arg1 + 0x150)))
*(arg1 + 0x150) += rax
bool cond:1_1 = *(arg1 + 0x1b1) != 0
int32_t rcx_2 = *(arg1 + 0x150)
float var_28 = *(arg1 + 0x154)
int32_t var_24_1 = zmm6.d
int32_t var_20_1 = rcx_2
int32_t var_1c_1 = rax
int64_t* rcx_3

if (cond:1_1)
    rcx_3 = *(arg1 + 0x70)
else
    rcx_3 = *(arg1 + 0x68)

if (rcx_3[0xa].b == 2)
    *((zx.q((data_143de5458).d) & 1) + rcx_3 + 0x51) = 1
    (*(*rcx_3 + 0x288))(rcx_3, &var_28)

*(arg1 + 0x150) += 1
