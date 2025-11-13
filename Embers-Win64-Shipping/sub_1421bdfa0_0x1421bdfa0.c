// 函数: sub_1421bdfa0
// 地址: 0x1421bdfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = arg7.d
uint128_t zmm6 = arg3
uint128_t var_28 = arg5
uint128_t var_38 = arg6
uint128_t zmm9 = arg4
uint128_t zmm0
uint128_t zmm1
uint128_t zmm5

if ((*(*(*(arg1 + 0x28) + 0x30) + 0x59) & 1) == 0)
    arg5 = *(arg1 + 0x50)
    arg6 = *(arg1 + 0x54)
    arg4 = *(arg1 + 0x134)
    float zmm4 = *(arg1 + 0x138)
    zmm1.d = arg5.d f- arg4.d
    arg7 = *(arg1 + 0x58)
    arg3.d = arg6.d f- zmm4
    zmm5 = *(arg1 + 0x13c)
    zmm0.d = arg7.d f- zmm5.d
    zmm1.d = zmm1.d f* zmm1.d
    arg3.d = arg3.d f* arg3.d
    zmm0.d = zmm0.d f* zmm0.d
    arg3.d = arg3.d f+ zmm1.d
    arg3.d = arg3.d f+ zmm0.d
    
    if (not(arg3.d f<= 1f))
        arg4.d = arg4.d f- arg5.d
        zmm5.d = zmm5.d f- arg7.d
        arg4.d = arg4.d f* zmm6.d
        arg4.d = arg4.d f+ arg2[2].d
        zmm5.d = zmm5.d f* zmm6.d
        zmm5.d = zmm5.d f+ arg2[3].d
        arg2[2].d = arg4.d
        *(arg2 + 0x14) = (zmm4 f- arg6.d) f* zmm6.d f+ *(arg2 + 0x14)
        arg2[3].d = zmm5.d

int32_t rax_1 = arg2[3].d
*arg2 = arg2[2]
arg2[1].d = rax_1
zmm0.d = zmm9.d f* arg2[6].d
zmm1.d = (*(arg2 + 0x34)).d f* zmm9.d
zmm0.d = zmm0.d f+ arg2[2].d
arg3.d = arg2[7].d.d f* zmm9.d
zmm1.d = zmm1.d f+ *(arg2 + 0x14)
arg3.d = arg3.d f+ arg2[3].d
arg2[2].d = zmm0.d
*(arg2 + 0x14) = zmm1.d
arg2[3].d = arg3.d
*(arg2 + 0x5c) |= *(arg1 + 0x11c) & 0x1ffffff
*(arg1 + 0x11c) += 1
*(arg2 + 0x5c) |= 0x2000000
int64_t* rsi_1 = sx.q(*(arg1 + 0x1dc)) + arg2
char rcx = *(*(*(arg1 + 0x28) + 0x30) + 0x58)

if (rcx - 3 u<= 1)
    int32_t rax_7 = arg2[7].d
    uint64_t var_a8 = arg2[6]
    int32_t var_a0_1 = rax_7
    
    if (rcx == 4)
        int32_t rax_8 = arg2[3].d
        var_a8 = arg2[2]
        var_a0_1 = rax_8
    
    zmm6 = var_a8:4.d
    arg5 = var_a8.d
    arg6 = var_a0_1
    arg3.d = zmm6.d f* zmm6.d
    zmm0.d = arg5.d f* arg5.d
    zmm1.d = arg6.d f* arg6.d
    arg3.d = arg3.d f+ zmm0.d
    arg3.d = arg3.d f+ zmm1.d
    
    if (not(arg3.d f<= 9.99999994e-09f))
        zmm5 = _mm_rsqrt_ss(arg3.d, arg3.d)
        arg4.d = arg3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = arg4.d f* zmm0.d
        arg3.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* arg3.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        arg4.d = arg4.d f* zmm1.d
        zmm0.d = zmm5.d f* (0.5f f- arg4.d)
        zmm5.d = zmm5.d f+ zmm0.d
        arg5.d = arg5.d f* zmm5.d
        zmm6.d = zmm6.d f* zmm5.d
        arg6.d = arg6.d f* zmm5.d
        var_a8.d = arg5.d
        var_a8:4.d = zmm6.d
        int32_t var_a0_2 = arg6.d
    
    int64_t var_98 = 0x3f800000
    int32_t var_90_1 = 0
    void var_68
    sub_140ad6660(&var_68, &var_98, &var_a8)
    float var_88
    zmm9 = sub_140ad3d90(&var_68, &var_88)
    int32_t var_84
    zmm1.d = var_84.d f+ *(rsi_1 + 0x1c)
    rsi_1[3].d = var_88 f+ rsi_1[3].d
    float var_80
    float zmm0_1 = var_80 f+ rsi_1[4].d
    *(rsi_1 + 0x1c) = zmm1.d
    rsi_1[4].d = zmm0_1

void* rcx_3 = *(arg1 + 0x1d0)
void* var_b0 = rcx_3 + 0x38
int64_t var_78
int512_t zmm7
int512_t zmm8
int32_t zmm10
zmm7, zmm8, zmm10 = sub_141fe56b0(rcx_3 + 0x48, &var_78, zmm9, zmm1, 0, nullptr)
zmm8.o = var_38
zmm7.o = var_28
*rsi_1 = var_78
int32_t var_70
rsi_1[1].d = var_70
uint64_t result = sx.q(*(arg1 + 0x1e0))

if (result.d != 0)
    int64_t rcx_5 = sx.q(*(arg1 + 0x1dc))
    int64_t* rdx_3 = arg2 + result
    rdx_3[6].d = *(arg2 + 0x2c)
    *rdx_3 = arg2[6]
    rdx_3[1].d = arg2[7].d
    *(rdx_3 + 0xc) = arg2[0xa]
    *(rdx_3 + 0x14) = arg2[0xb].d
    rdx_3[3] = *(rcx_5 + arg2 + 0x18)
    rdx_3[4].d = *(rcx_5 + arg2 + 0x20)
    int64_t rax_15 = sx.q(*(arg1 + 0x4c))
    
    if (rax_15.d != 0)
        zmm10 = *(rax_15 + arg2 + 4)
    
    *(rdx_3 + 0x34) = zmm10
    int64_t rax_16 = sx.q(*(arg1 + 0x48))
    
    if (rax_16.d == 0)
        *(rdx_3 + 0x24) = data_143dbb1f8.q
        result = zx.q(data_143dbb200)
    else
        *(rdx_3 + 0x24) = *(rax_16 + arg2 + 0xc)
        result = zx.q(*(rax_16 + arg2 + 0x14))
    
    *(rdx_3 + 0x2c) = result.d

return result
