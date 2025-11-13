// 函数: sub_141efa9f0
// 地址: 0x141efa9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = *(arg1 + 0x4b8)
uint64_t rax

if (rsi == 0)
    rax = (*(*(arg1 + 0x140) + 0x28))(arg1 + 0x140)
    rsi = rax
    *(arg1 + 0x4b8) = rax

int64_t* rbx = *(*(arg1 + 0x148) + 0x280)

if (rsi == 0 || rbx == 0)
    return 

int64_t arg_8 = 0

if ((*(*rbx + 0x3e8))(rbx, 0).b != 0)
    return 

rax = zx.q(*(arg1 + 0x16a))
float zmm6[0x4]
float var_38_1[0x4] = zmm6
float zmm7[0x4]
float var_48_1[0x4] = zmm7
float zmm8[0x4]
float var_58_1[0x4] = zmm8
uint64_t var_e8
int64_t var_c8
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm4_1
float zmm5_1[0x4]
float zmm9[0x4]
uint128_t zmm10

if (rax.b == 1)
    zmm1 = zx.o(*(rsi + 0xb0))
    int32_t rax_3 = *(rsi + 0xb8)
    zmm8 = zmm1
    void* rcx_3 = *(arg1 + 0xb0)
    var_e8 = zmm1.q
    zmm6 = var_e8.d
    zmm7 = zmm6
    float var_68_1[0x4] = zmm9
    zmm4_1 = *(rsi + 0xdc)
    uint128_t var_78_1 = zmm10
    float zmm11[0x4] = *(rsi + 0xd4) ^ 0x80000000
    uint128_t zmm12 = *(rsi + 0xd8) ^ 0x80000000
    uint128_t zmm13 = *(rsi + 0xd0) ^ 0x80000000
    zmm7[0] = zmm7[0] f* zmm12.d
    zmm10 = rax_3
    void* rax_4 = *(arg1 + 0x148)
    zmm9 = zmm10
    zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
    zmm9[0] = zmm9[0] * zmm11[0]
    zmm0.d = zmm8.d f* zmm12.d
    zmm8[0] = zmm8[0] f* zmm13.d
    zmm9[0] = zmm9[0] f- zmm0.d
    uint128_t zmm14 = zx.o(*(rax_4 + 0x2fc))
    int32_t rax_5 = *(rax_4 + 0x304)
    zmm0.d = zmm10.d f* zmm13.d
    zmm9[0] = zmm9[0] + zmm9[0]
    uint64_t var_d8 = zmm14.q
    zmm7[0] = zmm7[0] f- zmm0.d
    zmm0.d = zmm6.d f* zmm11[0]
    zmm1.d = zmm4_1.d f* zmm9[0]
    zmm8[0] = zmm8[0] f- zmm0.d
    zmm11[0] = zmm11[0] * zmm9[0]
    zmm0 = zmm12
    zmm7[0] = zmm7[0] + zmm7[0]
    zmm6[0] = zmm6[0] f+ zmm1.d
    zmm12.d = zmm12.d f* zmm9[0]
    zmm8[0] = zmm8[0] + zmm8[0]
    zmm1 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
    zmm0.d = zmm0.d f* zmm7[0]
    zmm2.d = zmm4_1.d f* zmm7[0]
    zmm11[0] = zmm11[0] * zmm8[0]
    zmm4_1.d = zmm4_1.d f* zmm8[0]
    zmm8[0] = zmm8[0] f+ zmm2.d
    zmm11[0] = zmm11[0] f- zmm0.d
    zmm0.d = zmm13.d f* zmm8[0]
    zmm13.d = zmm13.d f* zmm7[0]
    zmm10.d = zmm10.d f+ zmm4_1.d
    zmm12.d = zmm12.d f- zmm0.d
    zmm11[0] = zmm11[0] + zmm6[0]
    zmm13.d = zmm13.d f- zmm11[0]
    zmm12.d = zmm12.d f+ zmm8[0]
    zmm0.d = zmm14.d f+ zmm11[0]
    zmm13.d = zmm13.d f+ zmm10.d
    zmm1.d = zmm1.d f+ zmm12.d
    var_e8.d = zmm0.d
    zmm0.d = rax_5.d f+ zmm13.d
    var_e8:4.d = zmm1.d
    int32_t var_e0_2 = zmm0.d
    zmm4_1 = *(rcx_3 + 0x1c0)
    zmm2 = *(rsi + 0xd0)
    zmm9 = data_143f3a9d0
    zmm1 = _mm_and_ps(_mm_sub_ps(zmm4_1, zmm2), zmm9)
    arg_8.d = 0x358637bd
    float temp0_5[0x4] = _mm_shuffle_ps(0x358637bd, 0x358637bd, 0)
    uint32_t temp0_7 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_5, zmm1, 1))
    uint32_t temp0_11
    
    if (temp0_7 != 0)
        temp0_11 =
            _mm_movemask_ps(_mm_cmpeq_ps(temp0_5, _mm_and_ps(_mm_add_ps(zmm2, zmm4_1), zmm9), 1))
    
    void* rdi
    
    if (temp0_7 == 0 || temp0_11 == 0)
        if ((*(arg1 + 0x387) & 0x20) != 0 || (*(arg1 + 0x1f2) & 1) != 0)
            rdi.b = 1
        else
            rdi.b = 0
        
        var_c8 = var_e8
        zmm0 = zx.o(rbx[0x25])
        bool cond:2_1 = zmm0.d f!= rbx[0x36].d
        int32_t var_c0_4 = var_e0_2
        int32_t rax_14 = rbx[0x26].d
        var_d8 = zmm0.q
        
        if (cond:2_1 || var_d8:4.d.d f!= *(rbx + 0x1b4) || not(rax_14.d f== rbx[0x37].d))
            zmm7 = data_143f3abe0
            zmm4_1 = zx.o(rbx[0x25])
            zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            float temp0_40[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, rax_14.q), 
                _mm_unpacklo_ps(zmm0, zx.o(0)[0].q).q)
            zmm5_1 = _mm_and_ps(zmm7, zmm9)
            zmm2 = data_143f3abf0
            float temp0_42[0x4] = _mm_div_ps(temp0_40, zmm7)
            var_e8 = zmm4_1.q
            zmm4_1 = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_42))
            float temp0_49[0x4] = _mm_sub_ps(temp0_40, 
                _mm_mul_ps(
                    _mm_and_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(temp0_42, zmm9), 2), zmm4_1 ^ temp0_42)
                        ^ zmm4_1, 
                    zmm7))
            zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), _mm_min_ps(temp0_49, zmm5_1))
            float temp0_53[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2, 2)
            zmm1 = _mm_add_ps(zmm2, zmm7)
            zmm8 = _mm_and_ps(temp0_53, zmm1 ^ zmm2) ^ zmm1
            zmm0 = _mm_cmpeq_ps(data_143f3abd0, zmm8, 1)
            zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
            int32_t var_e0_7 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
            rbx[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
            rbx[0x37].d = var_e0_7
            float (* rax_16)[0x4]
            rax_16, zmm7, zmm8 = sub_140ade170(&rbx[0x36], &var_e8)
            *(rbx + 0x1a0) = *rax_16
        
        var_d8.o = *(rbx + 0x1a0)
        sub_141f48240(rbx, &var_c8, &var_d8, 0, zmm7, zmm8, zmm9, var_78_1, 0, rdi.b)
    else
        int32_t rax_8 = *(rcx_3 + 0x130)
        *(rcx_3 + 0x128)
        *(rbx + 0x11c)
        int32_t r15_1 = *(rbx + 0x124)
        var_c8 = var_e8
        int32_t var_c0_1 = var_e0_2
        sub_141f48c60(rbx, &var_c8)
        float zmm9_1[0x4]
        float zmm10_1[0x4]
        zmm6, zmm7, zmm8, zmm9_1, zmm10_1 = sub_141f4a330(*(arg1 + 0xb0), rsi + 0xd0, 0, 0, 0)
        void* rax_9 = *(arg1 + 0xb0)
        var_d8 = zmm6.q
        uint64_t zmm0_1 = *(rax_9 + 0x128)
        bool cond:0_1 = zmm0_1.d f!= zmm6[0]
        int32_t var_e0_3 = *(rax_9 + 0x130)
        var_e8 = zmm0_1
        
        if (not(cond:0_1) && not(var_e8:4.d.d f!= var_d8:4.d) && not(var_e0_3.d f!= rax_8))
            var_c8 = zmm8.q
            int32_t var_c0_2 = r15_1
            sub_141f48c60(rbx, &var_c8)
            
            if ((*(arg1 + 0x387) & 0x20) != 0 || (*(arg1 + 0x1f2) & 1) != 0)
                rdi.b = 1
            else
                rdi.b = 0
            
            uint128_t zmm0_2 = zx.o(rbx[0x25])
            bool cond:3_1 = zmm0_2.d f!= rbx[0x36].d
            int32_t rax_10 = rbx[0x26].d
            int32_t var_c0_3 = var_e0_2
            var_c8 = zmm7.q
            var_d8 = zmm0_2.q
            
            if (cond:3_1 || var_d8:4.d.d f!= *(rbx + 0x1b4) || not(rax_10.d f== rbx[0x37].d))
                zmm8 = data_143f3abe0
                uint128_t zmm4_2 = zx.o(rbx[0x25])
                zmm0_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                float zmm5_2[0x4] = __andps_xmmxud_memxud(zmm8, data_143f3a9d0)
                uint32_t zmm2_1[0x4] = _mm_unpacklo_ps(zmm0_2, 0)
                float temp0_16[0x4] =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_2, rax_10[0].q), zmm2_1[0].q)
                zmm2_1 = data_143f3abf0
                float temp0_17[0x4] = _mm_div_ps(temp0_16, zmm8)
                var_e8 = zmm4_2.q
                zmm4_2 = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_17))
                zmm2_1 = _mm_and_ps(
                    _mm_cmpeq_ps(zmm2_1, __andps_xmmxud_memxud(temp0_17, data_143f3a9d0), 2), 
                    zmm4_2 ^ temp0_17) ^ zmm4_2
                float temp0_27[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_2), 
                    _mm_min_ps(_mm_sub_ps(temp0_16, _mm_mul_ps(zmm2_1, zmm8)), zmm5_2))
                zmm0_2 = _mm_add_ps(temp0_27, zmm8)
                zmm2_1 = _mm_and_ps(zmm0_2 ^ temp0_27, _mm_cmpeq_ps(zx.o(0), temp0_27, 2)) ^ zmm0_2
                zmm0_2 = _mm_cmpeq_ps(data_143f3abd0, zmm2_1, 1)
                float zmm3_1[0x4] = _mm_and_ps(_mm_sub_ps(zmm2_1, zmm8) ^ zmm2_1, zmm0_2) ^ zmm2_1
                int32_t var_e0_5 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa).d
                rbx[0x36] = (_mm_unpacklo_ps(zmm3_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)[0].q)).q
                rbx[0x37].d = var_e0_5
                float (* rax_12)[0x4]
                rax_12, zmm7, zmm8 = sub_140ade170(&rbx[0x36], &var_e8)
                *(rbx + 0x1a0) = *rax_12
            
            var_d8.o = *(rbx + 0x1a0)
            sub_141f48240(rbx, &var_c8, &var_d8, 0, zmm7, zmm8, zmm9_1, zmm10_1, 0, rdi.b)
else
    float zmm3[0x4]
    
    if (rax.b == 2)
        int64_t* rcx_11 = *(arg1 + 0x148)
        int32_t rax_17 = *(rcx_11 + 0x304)
        zmm8 = zx.o(*(rcx_11 + 0x2fc))
        float temp0_64[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(rsi + 0xb0), (*(rsi + 0xb8)).q), 
            _mm_unpacklo_ps(*(rsi + 0xb4), 0).q)
        void* rax_18 = *(arg1 + 0xb0)
        zmm0 = _mm_shuffle_ps(temp0_64, temp0_64, 0xc9)
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xd2)
        var_c8 = zmm8.q
        float temp0_67[0x4] = __mulps_xmmps_memps(*(rax_18 + 0x1c0), data_143f3ac00)
        int64_t rax_19 = *rcx_11
        zmm2 = _mm_shuffle_ps(temp0_67, temp0_67, 0xd2)
        zmm0 = _mm_mul_ps(zmm0, zmm2)
        zmm1 = _mm_shuffle_ps(temp0_67, temp0_67, 0xc9)
        float temp0_71[0x4] = _mm_mul_ps(temp0_66, zmm1)
        float temp0_72[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
        float temp0_73[0x4] = _mm_sub_ps(temp0_71, zmm0)
        float temp0_74[0x4] = _mm_add_ps(temp0_73, temp0_73)
        float temp0_75[0x4] = _mm_mul_ps(temp0_72, temp0_74)
        zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xd2), zmm1)
        float temp0_78[0x4] = _mm_add_ps(temp0_75, temp0_64)
        zmm4_1 = _mm_sub_ps(zmm4_1, _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xc9), zmm2))
        zmm0 = zmm8
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm4_1 = _mm_add_ps(zmm4_1, temp0_78)
        zmm7 = zmm4_1
        float temp0_84[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        zmm7[0] = zmm7[0] + zmm8[0]
        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
        temp0_84[0] = temp0_84[0] f+ zmm0.d
        zmm4_1.d = zmm4_1.d f+ rax_17
        int32_t var_d0_5 = zmm4_1.d
        uint128_t* rax_20 = (*(rax_19 + 0x778))(rcx_11, &var_c8)
        zmm3 = *(rsi + 0xd0)
        float temp0_86[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm2 = *rax_20
        float temp0_88[0x4] = _mm_mul_ps(temp0_86, _mm_shuffle_ps(zmm2, zmm2, 0x1b))
        int32_t var_c0_6 = var_d0_5
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm2)
        float temp0_91[0x4] = __mulps_xmmps_memps(temp0_88, data_143f3ab50)
        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_93[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        float temp0_94[0x4] = _mm_add_ps(temp0_91, zmm0)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        float temp0_98[0x4] = _mm_mul_ps(temp0_93, _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f3ab40)
        zmm0 = _mm_unpacklo_ps(zmm7, temp0_84[0].q)
        float temp0_101[0x4] = __mulps_xmmps_memps(temp0_98, data_143f3ab30)
        float temp0_102[0x4] = _mm_add_ps(temp0_94, zmm1)
        var_c8 = zmm0.q
        var_e8.o = _mm_add_ps(temp0_102, temp0_101)
        int32_t rax_21
        
        if ((*(arg1 + 0x387) & 0x20) != 0 || (*(arg1 + 0x1f2) & 1) != 0)
            rax_21.b = 1
        else
            rax_21 = 0
        
        sub_141f48240(rbx, &var_c8, &var_e8, 0, zmm7, zmm8, zmm9, zmm10, 0, rax_21.b)
    else if (rax.b == 3)
        int64_t* rcx_13 = *(arg1 + 0xb0)
        zmm3 = *(rsi + 0xd0)
        zmm5_1 = data_143f3a9d0
        arg_8.d = 0x322bcc77
        zmm4_1 = *(rcx_13 + 0x1c0)
        zmm1 = _mm_sub_ps(zmm4_1, zmm3)
        zmm2 = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
        
        if (zx.d(_mm_movemask_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(zmm1, zmm5_1), 1))) == 0)
        label_141efb2b8:
            zmm0 = *(rcx_13 + 0x1d0)
            var_c8.o = zmm0
            zmm0.d = zmm0.d f- *(rsi + 0xb0)
            
            if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
                goto label_141efb311
            
            zmm0.d = var_c8:4.d.d f- *(rsi + 0xb4)
            
            if (_mm_and_ps(zmm0, 0x7fffffff).d f> 9.99999975e-05f)
                goto label_141efb311
            
            int32_t var_c0
            zmm0.d = var_c0.d f- *(rsi + 0xb8)
            
            if (not(_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999975e-05f))
                goto label_141efb311
        else
            if (zx.d(_mm_movemask_ps(_mm_cmpeq_ps(zmm2, 
                    _mm_and_ps(_mm_add_ps(zmm3, zmm4_1), zmm5_1), 1))) == 0)
                goto label_141efb2b8
            
        label_141efb311:
            bool cond:1_1 = (*(arg1 + 0x387) & 0x20) != 0
            int32_t rax_22 = *(rsi + 0xb8)
            var_c8 = *(rsi + 0xb0)
            int32_t var_c0_7 = rax_22
            
            if (cond:1_1 || (*(arg1 + 0x1f2) & 1) != 0)
                rax_22.b = 1
            else
                rax_22 = 0
            
            sub_141f49fa0(rcx_13, &var_c8, rsi + 0xd0, 0, 0, rax_22.b)
