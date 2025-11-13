// 函数: sub_141fbe4c0
// 地址: 0x141fbe4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2[0x53]
arg1[0xc3] = arg2
arg1[0xc4] = rax
int64_t var_88
uint64_t var_78
(*(*arg2 + 0x6f8))(arg2, &var_88, &var_78)
int64_t* rcx_1 = arg2[0x57]
(*(*rcx_1 + 0x6c0))(rcx_1)
int64_t arg_8
int32_t* rax_3
int512_t zmm1
int128_t zmm6_1
rax_3, zmm1, zmm6_1 = sub_140b5e500(&arg_8, 0x142)
int32_t arg_14 = 0
(*(*arg1 + 0x658))(arg1, (*rax_3).q)
(*(*arg1 + 0x670))(arg1, &var_88, &var_78)
int64_t* rcx_6 = arg1[0x57]

if (rcx_6 != 0)
    zmm1.o = zmm6_1
    (*(*rcx_6 + 0x6c8))(rcx_6, zmm1)
    int64_t* rcx_7 = arg1[0x57]
    zmm1.o = zx.o(0)
    (*(*rcx_7 + 0x680))(rcx_7, zmm1)

void* rax_9 = arg1[0xaf]

if (rax_9 != 0)
label_141fbe5ff:
    sub_141f49a80(rax_9, 1, 1)
    (*(*arg2 + 0x2f8))(arg2, 0)
    int64_t* rcx_12 = arg2[0x57]
    (*(*rcx_12 + 0x2f8))(rcx_12, 0)
    *(arg1[0xaf] + 0x40c) = zmm6_1.d
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_141f47470(arg1[0xaf], 1, 1, 0)
    int64_t* rbx_2 = arg1[0xaf]
    uint64_t var_68 = var_88
    uint128_t zmm0_1 = zx.o(rbx_2[0x25])
    bool cond:0_1 = zmm0_1.d f!= rbx_2[0x36].d
    int32_t var_80
    int32_t var_60_1 = var_80
    int32_t rax_14 = rbx_2[0x26].d
    uint64_t var_98 = zmm0_1.q
    
    if (cond:0_1 || var_98:4.d.d f!= *(rbx_2 + 0x1b4) || not(rax_14.d f== rbx_2[0x37].d))
        uint128_t zmm4_1 = zx.o(rbx_2[0x25])
        uint32_t zmm5_1[0x4] = data_143f3d270
        uint128_t zmm2_1 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), 0)
        uint128_t zmm6_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rax_14.q), zmm2_1.q)
        zmm2_1 = data_143f3d280
        float var_38_1[0x4] = zmm7_1
        zmm7_1 = data_143f3d260
        uint128_t zmm3_1 = _mm_div_ps(zmm6_2, zmm7_1)
        float var_48_1[0x4] = zmm8_1
        uint32_t temp0_6[0x4] = _mm_and_ps(zmm5_1, zmm7_1)
        zmm0_1 = _mm_cvttps_epi32(zmm3_1)
        var_98 = zmm4_1.q
        zmm4_1 = _mm_cvtepi32_ps(zmm0_1)
        zmm6_2 = _mm_sub_ps(zmm6_2, 
            _mm_mul_ps(
                _mm_and_ps(_mm_cmpeq_ps(zmm2_1, __andps_xmmxud_memxud(zmm3_1, data_143f3d270), 2), 
                    zmm4_1 ^ zmm3_1) ^ zmm4_1, 
                zmm7_1))
        zmm2_1 = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_6), _mm_min_ps(zmm6_2, temp0_6))
        float temp0_17[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2_1, 2)
        uint128_t zmm1_1 = _mm_add_ps(zmm2_1, zmm7_1)
        zmm8_1 = _mm_and_ps(temp0_17, zmm1_1 ^ zmm2_1) ^ zmm1_1
        zmm0_1 = _mm_cmpeq_ps(data_143f3d250, zmm8_1, 1)
        zmm2_1 = _mm_and_ps(_mm_sub_ps(zmm8_1, zmm7_1) ^ zmm8_1, zmm0_1) ^ zmm8_1
        int32_t var_90_3 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
        rbx_2[0x36] = (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).q)).q
        rbx_2[0x37].d = var_90_3
        zmm8_1 = var_48_1
        zmm7_1 = var_38_1
        float var_58[0x4]
        *(rbx_2 + 0x1a0) = *sub_140ade170(rbx_2 + 0x1b0, &var_58)
    
    var_98.o = *(rbx_2 + 0x1a0)
    sub_141f48240(rbx_2, &var_68, &var_98, 0, zmm7_1, zmm8_1, zmm9_1, zmm10_1, 0, 0)
    int64_t* rcx_16 = arg1[0xaf]
    var_68 = var_78
    int32_t var_70
    int32_t var_60_2 = var_70
    sub_141f48c80(rcx_16, &var_68, 0, 0, 0)
    sub_141ef1390(arg1[0xaf])
    var_68 = 0
    var_60_2.q = 0
    sub_1405947f0(&var_68, 0x11)
    int32_t var_60_3 = var_60_2 + 0x11
    int32_t var_5c
    
    if (var_60_2 + 0x11 s> var_5c)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, u"show camfrustums", 0x22)
    int64_t r9_1
    r9_1.b = 1
    (*(*arg1 + 0xc20))(arg1, &var_98, &var_68, r9_1)
    uint64_t rcx_22 = var_98
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    uint64_t rcx_23 = var_68
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
else
    void* rbx_1 = arg2[0x57]
    sub_140d19010(rbx_1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    arg_8 = 0
    rax_9, zmm6_1 = sub_140d2dfc0(sub_14249f960(), rbx_1, 0, 0, 0, 0, 0, 0, 0)
    arg1[0xaf] = rax_9
    
    if (rax_9 != 0)
        goto label_141fbe5ff

sub_14242beb0((*(*arg1 + 0x150))(arg1), arg1)
return sub_14249cfe0(arg1, arg2)
