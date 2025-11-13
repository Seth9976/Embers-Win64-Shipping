// 函数: sub_141416410
// 地址: 0x141416410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 1
uint64_t var_58
float var_50
float var_48
float var_40
uint128_t zmm0
float zmm1

if (arg4 != 1)
    int32_t arg_20
    
    if (arg4 == 2)
        zmm0.d = (*(arg1 + 0xd30)).d f* 1.73205078f
        zmm1 = *(arg1 + 0x610) f+ *(arg2 + 0x58)
        arg_20 = zmm0.d
        zmm0.d = (*(arg1 + 0x60c)).d f+ *(arg2 + 0x54)
        var_58:4.d = zmm1
        var_58.d = zmm0.d
        zmm0.d = (*(arg1 + 0x614)).d f+ *(arg2 + 0x5c)
        var_50 = zmm0.d
        rsi.b = sub_141f8daa0(arg2 + 0x290, &var_58, &arg_20) == 0
        goto label_14141652d
    
label_141416536:
    uint64_t rax_5 = *(arg2 + 0x600)
    void* r9 = *(arg1 + 8)
    
    if (rax_5 != 0)
        rax_5 = zx.q(*(rax_5 + 0x10))
    
    int32_t var_38 = rax_5.d
    void* r8_1 = r9 + 0x30
    int64_t var_30_1 = *(*(*(arg2 + 0x5c0) + 0x20) + 0x10)
    int32_t var_28_1 = *(arg2 + 0x534)
    uint8_t var_24_1 = (*(arg2 + 0x570) u>> 8).b & 1
    void* rcx_3 = *(r8_1 + 0xf0)
    int64_t rax_13 = sx.q(mods.dp.d(sx.q(*(r9 + 0x19c)), arg3))
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    int64_t* rcx_4 = *(r9 + 0x130)
    (*(*rcx_4 + 8))(rcx_4, &var_58)
    *arg5 = var_58
    var_48.q = &var_38
    var_40.q = &var_58
    sub_14140f420(rax_13 * 0x50 + r8_1, &arg_20, &var_48, nullptr)
    int64_t* rcx_6 = var_50.q
    
    if (rcx_6 != 0 && var_58 != 0)
        (*(*rcx_6 + 0x10))(rcx_6, &var_58)
        var_50.q = 0
    
    sub_14081c9d0(&var_58)
else
    int64_t* rcx = *(*(arg2 + 0x5c0) + 0x20)
    (*(*rcx + 0x10))(rcx, &var_48)
    zmm0 = zx.o(*(arg1 + 0x60c))
    float rax_3 = *(arg1 + 0x614)
    zmm1 = *(arg1 + 0xd30)
    float zmm3 = zmm0.d - var_48
    int32_t var_44
    uint128_t zmm4_1
    zmm4_1.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f- var_44
    var_58 = zmm0.q
    int32_t var_3c
    zmm0.d = var_3c.d f* 1.04999995f
    var_50 = rax_3
    float zmm2 = var_50 - var_40
    zmm4_1.d = zmm4_1.d f* zmm4_1.d
    zmm1 = zmm1 + zmm1 f+ zmm0.d
    zmm4_1.d = zmm4_1.d f+ zmm3 * zmm3
    zmm4_1.d = zmm4_1.d f+ zmm2 * zmm2
    rsi.b = zmm1 * zmm1 f<= zmm4_1.d
label_14141652d:
    
    if (rsi.b != 0)
        goto label_141416536
return zx.q(rsi.b)
