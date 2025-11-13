// 函数: sub_141dbf430
// 地址: 0x141dbf430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = arg5
uint128_t zmm0 = *result
float zmm1[0x4] = result[1]
int128_t* rbx

if (arg4 == 0)
    uint128_t var_138 = zmm0
    rbx = &var_138
    float var_128_1[0x4] = zmm1
    uint128_t var_118_1 = result[2]
    float var_108_1[0x4] = result[3]
    uint128_t var_f8_1 = result[4]
    float var_e8_1[0x4] = result[5]
    uint128_t var_d8_1 = result[6]
    uint128_t var_c8_1 = result[7]
    int64_t var_b8_1 = result[8].q
    int32_t var_1f0_1 = (var_108_1[0] ^ 0x80000000).d
    var_118_1:8.q =
        (_mm_unpacklo_ps(var_118_1:8.d ^ 0x80000000, (var_118_1:0xc.d ^ 0x80000000).q)).q
    int32_t result_1 = (var_108_1[3] ^ 0x80000000).d
    float temp0_2[0x4] = _mm_unpacklo_ps(var_108_1[1] ^ 0x80000000, (var_108_1[2] ^ 0x80000000).q)
    var_108_1[0] = var_1f0_1
    result = zx.q(result_1)
    var_108_1[1].q = temp0_2.q
    var_108_1[3] = result.d
else
    uint128_t var_b0 = zmm0
    rbx = &var_b0
    float var_a0_1[0x4] = zmm1
    uint128_t var_90_1 = result[2]
    float var_80_1[0x4] = result[3]
    uint128_t var_70_1 = result[4]
    float var_60_1[0x4] = result[5]
    uint128_t var_50_1 = result[6]
    uint64_t var_30_1 = result[8].q
    float var_40_1[0x4] = result[7]

if (arg3 != 0)
    int64_t* r12_1 = arg3[0xa].q
    int128_t zmm6 = zx.o(0)
    uint64_t var_1f8
    
    if (sub_141dcded0(arg1) != 0)
        zmm0 = _mm_unpacklo_ps(zx.o(0), 0)
        int32_t var_1f0_2 = 0
        int32_t var_1d0_1 = 0
        int32_t var_1e0_1 = *(rbx + 0x3c)
        int32_t rax_4 = *(rbx + 0x24)
        uint64_t var_1d8 = zmm0.q
        int32_t var_1f0_3 = rax_4
        int64_t rax_5 = *arg1
        uint64_t var_1e8 = *(rbx + 0x34)
        var_1f8 = *(rbx + 0x1c)
        (*(rax_5 + 0x388))(arg1, arg2, r12_1, arg3, arg4, &var_1f8, &var_1e8, &var_1d8, rbx)
    
    char var_228
    uint128_t var_1c8
    
    if (sub_141dcded0(arg1) != 0)
        int32_t var_1e0_2 = 0
        zmm1 = rbx[1]
        var_1c8 = *rbx
        int32_t var_1f0_4 = 0
        float var_1b8_1[0x4] = zmm1
        var_228.q = &var_1c8
        uint128_t var_1a8_1 = rbx[2]
        float var_198_1[0x4] = rbx[3]
        uint128_t var_188_1 = rbx[4]
        float var_178_1[0x4] = rbx[5]
        zmm1 = rbx[7]
        uint128_t var_168_1 = rbx[6]
        uint64_t var_148_1 = rbx[8].q
        var_1f8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
        float var_158_1[0x4] = zmm1
        zmm6 = sub_141db2110(arg1 + 0x18d, arg1, r12_1, &var_1f8, var_228)
    
    int32_t rax_7 = *(arg2 + 0xc)
    void* const rax_14
    
    if (rax_7 s>= data_143e1d9b4)
        rax_14 = nullptr
    else
        int16_t temp0_5
        int32_t temp1_1
        temp0_5:temp1_1 = sx.q(rax_7)
        uint32_t rdx_3 = zx.d(temp0_5)
        int32_t rax_9 = temp1_1 + rdx_3
        rax_14 =
            *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(zx.d(rax_9.w) - rdx_3) * 0x18
    
    result = zx.q(*(rax_14 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        int32_t var_1e0_3 = 0
        zmm1 = rbx[1]
        var_1c8 = *rbx
        int32_t var_1f0_5 = 0
        float var_1b8_2[0x4] = zmm1
        uint128_t* var_220_2 = &var_1c8
        uint128_t var_1a8_2 = rbx[2]
        var_228.q = &var_1f8
        float var_198_2[0x4] = rbx[3]
        uint128_t var_188_2 = rbx[4]
        float var_178_2[0x4] = rbx[5]
        zmm1 = rbx[7]
        uint128_t var_168_2 = rbx[6]
        uint64_t var_148_2 = rbx[8].q
        var_1f8 = (_mm_unpacklo_ps(zx.o(0), zmm6.q)).q
        float var_158_2[0x4] = zmm1
        return sub_141db2220(arg2 + 0x3d8, arg2, r12_1, arg3)

return result
