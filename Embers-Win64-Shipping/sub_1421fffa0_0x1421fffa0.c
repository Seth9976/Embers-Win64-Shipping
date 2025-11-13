// 函数: sub_1421fffa0
// 地址: 0x1421fffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8
int32_t arg_18 = r8
float zmm1[0x4] = *(arg1 + 0x78)
uint64_t var_48
float var_38[0x4]
uint128_t zmm0
float zmm2[0x4]
uint128_t zmm3
float zmm4
float zmm5
int64_t* rax_4

if (zmm1[0] == 0f || zmm1[0] == 1f)
    void* var_50_2 = arg3
    rax_4 = sub_141fe56b0(arg1 + 0x30, &var_38, *(arg2 + 0x12c), zmm1, (*(arg2 + 0x18)).d, nullptr)
    zmm1 = zx.o(*rax_4)
    zmm0 = zmm1
    var_48 = zmm1.q
    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm5 = var_48.d
    zmm4 = rax_4[1].d
else
    int32_t rax_1 = *(arg3 + 4) * 0xbb38435 + 0x3619636b
    *(arg3 + 4) = rax_1
    int128_t zmm6 = *(arg2 + 0x12c)
    int32_t _X = zmm6.d
    truncf(_X)
    zmm1 = rax_1 u>> 9 | 0x3f800000
    zmm6.d = zmm6.d f- _X
    zmm1[0] = zmm1[0] - 1f
    int64_t* rdx = &var_38
    zmm6.d = zmm6.d f* zmm1[0]
    
    if (zmm6.d f<= *(arg1 + 0x7c))
        sub_141fe3fa0(arg1 + 0x30, rdx, &var_48)
        int32_t rax_6 = *(arg3 + 4) * 0xbb38435 + 0x3619636b
        *(arg3 + 4) = rax_6
        zmm0.d = (*(arg1 + 0x78)).d f- 1f
        zmm1 = rax_6 u>> 9 | 0x3f800000
        zmm1[0] = zmm1[0] - 1f
        zmm0.d = zmm0.d f* zmm1[0]
        zmm0.d = zmm0.d f+ 0.5f
        truncf(zmm0.d)
        zmm1 = *(arg1 + 0x78)
        zmm2 = var_48:4.d
        zmm1[0] = zmm1[0] - 1f
        zmm2[0] = zmm2[0] - var_38[1]
        zmm5 = var_48.d - var_38[0]
        float var_40
        zmm4 = var_40 - var_38[2]
        zmm3.d = zmm0.d f/ zmm1[0]
        zmm2[0] = zmm2[0] f* zmm3.d
        zmm2[0] = zmm2[0] + var_38[1]
        zmm5 = zmm5 f* zmm3.d + var_38[0]
        zmm4 = zmm4 f* zmm3.d + var_38[2]
        zmm1 = zmm2
    else
        void* var_50_1 = arg3
        rax_4 = sub_141fe56b0(arg1 + 0x30, rdx, *(arg2 + 0x12c), zmm1, (*(arg2 + 0x18)).d, nullptr)
        zmm0 = zx.o(*rax_4)
        zmm1 = zmm0
        var_48 = zmm0.q
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm5 = var_48.d
        zmm4 = rax_4[1].d
int32_t var_2c = 0
zmm2 = var_38
zmm2[0] = zmm5
var_48 = 0
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
temp0_3[0] = zmm1[0]
int32_t var_40_2 = 0
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = zmm4
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xaa), *(arg2 + 0x80))
zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), *(arg2 + 0x90))
float temp0_11[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0x55), *(arg2 + 0x70))
zmm3 = _mm_add_ps(_mm_add_ps(zmm3, zmm0), 
    _mm_add_ps(temp0_11, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0), *(arg2 + 0x60))))
zmm1 = zmm3
zmm1[0] = zmm1[0] f+ *(arg4 + 0x10)
zmm0.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f+ *(arg4 + 0x14)
zmm3.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f+ *(arg4 + 0x18)
*(arg4 + 0x10) = zmm1[0]
*(arg4 + 0x14) = zmm0.d
zmm0.q = fconvert.d(zmm1[0])
*(arg4 + 0x18) = zmm3.d
int32_t result = _finite(zmm0.q)

if (result != 0)
    result = _finite(_mm_cvtps_pd((*(arg4 + 0x14)).q).q)
    
    if (result != 0)
        return _finite(_mm_cvtps_pd((*(arg4 + 0x18)).q).q)

return result
