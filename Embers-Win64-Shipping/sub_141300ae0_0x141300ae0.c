// 函数: sub_141300ae0
// 地址: 0x141300ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg2[2] != 0)
    void* r8 = *arg3
    int64_t var_a0_1 = 0
    int128_t zmm1 = *(r8 + 0x40)
    uint128_t var_88 = *(r8 + 0x30)
    int128_t var_78_1 = zmm1
    int64_t var_68_1 = (*(r8 + 0x50)).q
    uint128_t var_48_1 = *(r8 + 0x70)
    int64_t var_58_1
    
    if (arg2[4].b != 0)
        var_58_1:4.d = (*(r8 + 0x60)).q:4.d | 1
    void*** rax = sub_141188e50(*arg1, &var_88, *(r8 + 8), 0)
    void* r8_2 = arg3[1]
    void*** var_a8 = rax
    
    if (r8_2 != 0)
        void*** var_a0_2 = sub_141188e50(*arg1, r8_2 + 0x30, *(r8_2 + 8), 0)
    
    void* rdx_2 = *arg1
    int32_t var_c8 = *arg2
    int32_t var_c4_1 = arg2[2]
    int64_t* rdx_3 = *(rdx_2 + 8)
    uint64_t var_b8_1 = var_c8.q
    char r14_1 = 1
    
    if ((var_c8.q u>> 0x20).d != 2)
        r14_1 = 0
    
    int32_t* rax_8 = arg1[2]
    uint128_t zmm7
    zmm7.d = _mm_cvtepi32_ps(zx.o(*arg1[1])).d f* 3f
    zmm7.d = zmm7.d f/ _mm_cvtepi32_ps(zx.o(*rax_8)).d
    int64_t* rax_9 = sub_14081d830(0x70, rdx_3, 1, 0)
    int64_t* rbx_1 = rax_9
    
    if (rax_9 == 0)
        rbx_1 = nullptr
    else
        *rax_9 = 0
        rax_9[1] = 0
        rax_9[4] = 0
        __builtin_memset(&rax_9[8], 0, 0x30)
        rax_9[6] = 0
        rax_9[7].d = 0
        *(rax_9 + 0x3c) = 0x3f800000
    
    memset(rbx_1, 0, 0x70)
    int32_t* rax_10 = arg1[2]
    zmm7.d = zmm7.d f- 1f
    int32_t rax_11 = *rax_10
    *(rbx_1 + 0xc) = rax_10[1]
    rbx_1[1].d = rax_11
    int32_t* rcx_4 = arg1[3]
    int32_t* rax_12 = arg1[2]
    uint128_t zmm3 = zx.o(*rax_12)
    uint128_t zmm2 = zx.o(rax_12[1])
    uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(*rcx_4))
    zmm3.d = _mm_cvtepi32_ps(zmm3).d f- 0.5f
    zmm2.d = _mm_cvtepi32_ps(zmm2).d f- 0.5f
    zmm3.d = zmm3.d f/ zmm0_2.d
    zmm0_2 = _mm_cvtepi32_ps(zx.o(rcx_4[1]))
    rbx_1[2].d = zmm3.d
    zmm2.d = zmm2.d f/ zmm0_2.d
    rbx_1[3].d = zmm7.d
    *(rbx_1 + 0x14) = zmm2.d
    float zmm6_1 = sub_1405d16e0(&rbx_1[4], *arg1[4])
    int32_t* rax_13 = arg1[3]
    uint128_t zmm0_3 = zx.o(rax_13[1])
    zmm2 = _mm_cvtepi32_ps(zx.o(*rax_13))
    zmm0_3 = _mm_cvtepi32_ps(zmm0_3)
    float zmm1_1 = zmm6_1 f/ zmm2.d
    _mm_shuffle_ps(zmm2, zmm2, 0xe1)
    zmm2.d = zmm0_3.d
    _mm_shuffle_ps(zmm2, zmm2, 0xc6)
    zmm2.d = zmm1_1
    _mm_shuffle_ps(zmm2, zmm2, 0x27)
    zmm2.d = zmm6_1 f/ zmm0_3.d
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
    *(rbx_1 + 0x30) = zmm2
    *(rbx_1 + 0x40) = *arg3
    var_c8.o = zmm2
    *(rbx_1 + 0x50) = *arg1[5]
    int128_t var_98
    int64_t* rax_15
    int32_t r9_1
    int512_t zmm6_2
    rax_15, r9_1, zmm6_2 = sub_1413113d0(&var_98, *arg1, &var_a8)
    uint64_t r9_4 = zx.q((sbb.d(r9_1, r9_1, r14_1 != 0) & 3) + var_b8_1:4.d)
    *(rbx_1 + 0x60) = *rax_15
    sub_1419a2ec0(*(arg1[6] + 0x5150), &var_c8, &data_143eb2fd0, 
        r9_4.d + var_b8_1.d + (r9_4 << 2).d)
    int32_t* rcx_10 = arg1[2]
    zmm7 = var_c8.o
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(*rcx_10 + 7)
    var_b8_1.d = (temp2_1 + (temp1_1 & 7)) s>> 3
    zmm6_2.o = zx.o(0)
    void* r14_2 = *arg1
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rcx_10[1] + 7)
    var_b8_1:4.d = (temp4_1 + (temp3_1 & 7)) s>> 3
    var_98 = sub_141317260(rcx_10.b)
    sub_141998c50(zmm7.q, &data_143eb5c30, rbx_1)
    int64_t* rdx_12 = *(r14_2 + 8)
    var_88.q = rbx_1
    var_88 = zmm7
    var_68_1.d = 1
    var_78_1:8.q = var_b8_1
    void*** rax_27
    char rcx_12
    rax_27, rcx_12 = sub_14081d830(0x60, rdx_12, 1, 0)
    void*** rdi_1 = rax_27
    
    if (rax_27 == 0)
        rdi_1 = nullptr
    else
        sub_141317260(rcx_12)
        char var_b0_1 = 0x60
        var_98 = rbx_1.o
        void arg_10
        sub_141992bd0(rdi_1, &arg_10, &var_98, 2)
        uint128_t zmm0_7 = var_88
        *rdi_1 = &data_142f5cb80
        *(rdi_1 + 0x38) = zmm0_7
        *(rdi_1 + 0x48) = var_78_1
        rdi_1[0xb] = var_68_1
    
    result = sub_1419968d0(r14_2, rdi_1)
    *arg3 = var_a8.o

return result
