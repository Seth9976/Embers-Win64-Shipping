// 函数: sub_141dbb6b0
// 地址: 0x141dbb6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*(arg2 + 0xc) = data_143dbb1f8.q
int32_t rax_2 = data_143dbb200
*(arg2 + 0x14) = rax_2
*arg2 = *(arg2 + 0xc)
arg2[1].d = rax_2
arg2[3].b = 0
void* rcx = *(arg1 + 0x130)
int128_t* rcx_1

if (rcx == 0)
    rcx_1 = &data_143dbb0c0
else
    rcx_1 = rcx + 0x1c0

float zmm2[0x4] = rcx_1[2]
uint32_t zmm9[0x4] = data_143f38d00
uint128_t zmm3 = data_143f38cf0
float var_98[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_and_ps(zmm2, zmm9), 1)) == 0)
    float zmm1[0x4] = data_143dbb0d0
    var_98 = data_143dbb0c0
    uint128_t var_78_1 = data_143dbb0e0
    float var_88_1[0x4] = zmm1
else
    data_143f38c20
    float zmm5[0x4] = rcx_1[1]
    float temp0_3[0x4] = __mulps_xmmps_memps(*rcx_1, data_143f38ce0)
    uint128_t zmm0
    zmm0.q = zmm2 u>> 0x40
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm0, 0xc4)
    float temp0_5[0x4] = _mm_rcp_ps(temp0_4)
    uint32_t temp0_6[0x4] = _mm_and_ps(zmm9, temp0_4)
    var_98 = temp0_3
    zmm0 = _mm_mul_ps(temp0_5, temp0_5)
    float temp0_8[0x4] = _mm_add_ps(temp0_5, temp0_5)
    zmm9 = _mm_cmpeq_ps(temp0_6, zmm3, 2)
    zmm0 = _mm_mul_ps(zmm0, temp0_4)
    zmm3 = _mm_shuffle_ps(temp0_3, temp0_3, 0xd2)
    float temp0_12[0x4] = _mm_sub_ps(temp0_8, zmm0)
    zmm0 = _mm_mul_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_12)
    zmm0 = _mm_mul_ps(zmm0, temp0_4)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xff)
    float temp0_18[0x4] = _mm_sub_ps(temp0_14, zmm0)
    uint32_t temp0_20[0x4] =
        __andps_xmmxud_memxud(_mm_and_ps(zmm9, zx.o(0) ^ temp0_18) ^ temp0_18, data_143f38c30)
    float temp0_21[0x4] = _mm_mul_ps(zmm5, temp0_20)
    uint32_t var_78[0x4] = temp0_20
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), zmm3)
    float temp0_26[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xd2), temp0_16), zmm0)
    float temp0_27[0x4] = _mm_add_ps(temp0_26, temp0_26)
    float temp0_28[0x4] = _mm_mul_ps(temp0_17, temp0_27)
    float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), temp0_16)
    float temp0_31[0x4] = _mm_add_ps(temp0_28, temp0_21)
    float var_88[0x4] = __andps_xmmxud_memxud(
        _mm_sub_ps(zx.o(0), 
            _mm_add_ps(
                _mm_sub_ps(temp0_30, _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xc9), zmm3)), 
                temp0_31)), 
        data_143f38c30)

char* var_b8 = &arg_18
float (* var_b0)[0x4] = &var_98
void* rax_4 = sub_142577430()
void* r14

if (rax_4 == 0)
    r14 = nullptr
else
    void* rax_5 = sub_142459c10()
    
    if (rax_5 == 0)
        r14 = nullptr
    else
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rax_4 + 0x38) || *(*(rax_4 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            r14 = nullptr
        else
            r14 = rax_4

int128_t var_d8
int128_t* r8 = &var_d8
bool cond:0 = r14 != sub_142459c10()
var_d8 = var_b8.o
int64_t var_c8 = arg2

if (cond:0)
    if (arg4 == 0)
        sub_141db5620(arg1, rax_4, r8)
    else
        sub_141db4d40(arg1, rax_4, r8)
else if (arg4 == 0)
    sub_141db43c0(arg1, rax_4, r8)
else
    sub_141db3c50(arg1, rax_4, r8)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
