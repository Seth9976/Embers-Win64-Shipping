// 函数: sub_141226f00
// 地址: 0x141226f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg7
float var_38[0x4]
int64_t zmm3

if (rsi != 0)
    int32_t arg_8
    sub_141225ed0(rsi, &arg_8, arg5)
    int64_t rax_1 = sx.q(arg_8)
    void* rax_4
    
    if (rax_1.d == 0xffffffff)
        rax_4 = nullptr
    else
        rax_4 = rax_1 * 0xc0 + *rsi
    
    uint128_t* rdi_1 = rax_4 + 0x10
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    
    if (rdi_1 == 0)
        arg7 = arg5
        sub_1412138a0(rsi, &arg_8, &arg7, nullptr)
        var_38[0].q = *arg5
        rdi_1 = *rsi + 0x10 + sx.q(arg_8) * 0xc0
        int32_t var_30_1 = *(arg5 + 8)
        sub_14122c340(&var_38, rsi, rdi_1)
    
    uint128_t zmm0_1 = rdi_1[8]
    zmm3 = (zx.o(0)).q
    *(rdi_1 + 0x94) = arg6
    *(arg2 + 0x40) = zmm0_1
    arg2[0xa].d = rdi_1[9].d
    int32_t var_30_2 = 0
    *(arg2 + 0x60) = *rdi_1
    int32_t var_30_3 = 0x3f800000
    *(arg2 + 0x90) = rdi_1[3]
    *(arg2 + 0x70) = rdi_1[1]
    *(arg2 + 0xa0) = rdi_1[4]
    *(arg2 + 0x80) = rdi_1[2]
    *(arg2 + 0xb0) = rdi_1[5]
    *(arg2 + 0xc0) = rdi_1[6]
    *(arg2 + 0xd0) = rdi_1[7]
    *arg2 = (_mm_unpacklo_ps(zx.o(0), zmm3)).q
    arg2[2] = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
    arg2[4] = (_mm_unpacklo_ps(zx.o(0), zmm3)).q
    arg2[1].d = 0
    arg2[3].d = var_30_3
    int32_t var_30_4 = 0
    zmm0_1 = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
    arg2[5].d = 0
    int32_t var_30_5 = 0x3f800000
    arg2[6] = zmm0_1.q
    arg2[7].d = 0x3f800000
else if (arg4 == 0)
    arg2[0xa].d = 0x3f800000
    int32_t var_30_6 = 0
    *arg2 = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg2[1].d = 0
    arg2[2] = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
    arg2[4] = (_mm_unpacklo_ps(zx.o(0), 0)).q
    arg2[6] = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
    *(arg2 + 0x40) = data_142d5beb0
    int32_t var_30_7 = 0x3f800000
    arg2[3].d = 0x3f800000
    int32_t var_30_8 = 0
    arg2[5].d = 0
    int32_t var_30_9 = 0x3f800000
    arg2[7].d = 0x3f800000
    __builtin_memset(&arg2[0xc], 0, 0x80)
else
    *arg2 = *arg4
    arg2[1].d = arg4[1].d
    arg2[2] = *(arg4 + 0xc)
    arg2[3].d = *(arg4 + 0x14)
    arg2[4] = arg4[3]
    arg2[5].d = arg4[4].d
    arg2[6] = *(arg4 + 0x24)
    arg2[7].d = *(arg4 + 0x2c)
    int32_t var_2c_1 = 0x3fe2dfc5
    *(arg2 + 0x40) = *(arg4 + 0x170)
    arg2[0xa].d = arg4[0x2c].d
    *(arg2 + 0x60) = *(arg4 + 0xf0)
    *(arg2 + 0x90) = *(arg4 + 0x120)
    *(arg2 + 0x70) = *(arg4 + 0x100)
    *(arg2 + 0xa0) = *(arg4 + 0x130)
    *(arg2 + 0x80) = *(arg4 + 0x110)
    *(arg2 + 0xb0) = *(arg4 + 0x140)
    *(arg2 + 0xc0) = *(arg4 + 0x150)
    uint128_t zmm0
    zmm0.d = arg4[0x20].d.d f* 1.7724539f
    zmm3.d = arg4[0x22].d.d f* 1.7724539f
    float zmm1[0x4] = var_38
    zmm1[0] = arg4[0x1e].d f* 1.7724539f
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    temp0_4[0] = zmm0.d
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
    temp0_5[0] = zmm3.d
    _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)

if (arg1 s>= 3 && arg3 != 0 && *(arg3 + 8) != 0xffffffff && data_1439c7a15 != 0)
    arg2[0x1c] = *(*(arg3 + 0x18) + 0x10)
    arg2[0x1d] = *(*(arg3 + 0x20) + 0x10)
    arg2[0x1e] = *(*(arg3 + 0x28) + 0x10)
    arg2[0x1f] = data_14395f4d0
    arg2[0x20] = data_14395f4d0
    int64_t rax_20 = data_14395f4d0
    arg2[0x21] = rax_20
    return rax_20

void* rax_26

if (arg1 s< 1)
    arg2[0x1c] = *(data_143f10e68 + 0x10)
    arg2[0x1d] = *(data_143f10e68 + 0x10)
    arg2[0x1e] = *(data_143f10e68 + 0x10)
    arg2[0x1f] = *(data_143f10e68 + 0x18)
    arg2[0x20] = *(data_143f10e68 + 0x18)
    rax_26 = data_143f10e68
else
    arg2[0x1c] = *(data_143f111a8 + 0x10)
    arg2[0x1d] = *(data_143f111a8 + 0x10)
    arg2[0x1e] = *(data_143f111a8 + 0x10)
    arg2[0x1f] = *(data_143f111a8 + 0x18)
    arg2[0x20] = *(data_143f111a8 + 0x18)
    rax_26 = data_143f111a8

arg2[0x21] = *(rax_26 + 0x18)
return rax_26
