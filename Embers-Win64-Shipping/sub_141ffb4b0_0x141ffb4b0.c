// 函数: sub_141ffb4b0
// 地址: 0x141ffb4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm14 = arg2
uint64_t var_a8
int64_t* rax = sub_141f17000(arg1, &var_a8)
uint128_t zmm12 = 0x3f000000
uint128_t zmm5 = *(rax + 4)
uint128_t zmm7 = *rax
uint128_t zmm8 = rax[1].d
uint128_t zmm2
zmm2.d = zmm7.d f* zmm7.d
uint128_t zmm0
zmm0.d = zmm5.d f* zmm5.d
arg2.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ arg2.d
uint64_t var_b8
int32_t var_b0
uint128_t entry_zmm3
uint128_t zmm6
uint128_t zmm9
uint128_t zmm10

if (zmm2.d f<= 1f)
    arg2 = zx.o(*rax)
    var_b0 = rax[1].d
    zmm10 = _mm_shuffle_ps(arg2, arg2, 0x55)
    zmm6 = var_b0
    var_b8 = arg2.q
    zmm9 = var_b8.d
else
    zmm6 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
    entry_zmm3.d = zmm2.d f* 0.5f
    zmm0.d = zmm6.d f* zmm6.d
    arg2.d = entry_zmm3.d f* zmm0.d
    zmm2.d = 0.5f f- arg2.d
    zmm0.d = zmm6.d f* zmm2.d
    zmm6.d = zmm6.d f+ zmm0.d
    arg2.d = zmm6.d f* zmm6.d
    entry_zmm3.d = entry_zmm3.d f* arg2.d
    zmm0.d = zmm6.d f* (0.5f f- entry_zmm3.d)
    zmm6.d = zmm6.d f+ zmm0.d
    zmm9.d = zmm6.d f* zmm7.d
    zmm10.d = zmm6.d f* zmm5.d
    zmm6.d = zmm6.d f* zmm8.d

zmm2.d = zmm10.d f* zmm10.d
zmm0.d = zmm9.d f* zmm9.d
zmm7 = zx.o(0)
arg2.d = zmm6.d f* zmm6.d
float zmm11[0x4] = zx.o(0)
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ arg2.d

if (not(zmm2.d f<= 0f))
    zmm11 = _mm_sqrt_ss(0, zmm2.d)

(*(*arg1 + 0x3f0))(arg1)
zmm8.d = zmm0.d f* zmm11[0]
char rax_4 = (*(*arg1 + 0x418))(arg1, zmm8, zmm2, entry_zmm3, var_b8, var_b0)
uint128_t zmm4_1
float zmm5_1[0x4]

if (zmm11[0] <= 0f || rax_4 != 0)
    zmm12 = arg1[0x19].d
    entry_zmm3 = *(arg1 + 0xcc)
    zmm2 = *(arg1 + 0xc4)
    zmm2.d = zmm2.d f* zmm2.d
    zmm0.d = zmm12.d f* zmm12.d
    arg2.d = entry_zmm3.d f* entry_zmm3.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ arg2.d
    
    if (not(zmm2.d f<= 0f))
        int32_t rax_6 = *(arg1 + 0xcc)
        var_b0 = rax_6
        zmm0 = zx.o(*(arg1 + 0xc4))
        zmm4_1 = 0x322bcc77
        float temp0_6[0x4] = _mm_sqrt_ss(0, zmm2.d)
        var_b8 = zmm0.q
        zmm0.d = __andps_xmmxud_memxud(arg1[0x28].d, data_142d3f770).d f* zmm14.d
        temp0_6[0] = temp0_6[0] f- zmm0.d
        float temp0_8[0x4] = _mm_max_ss(temp0_6[0], 0)
        
        if (not(zmm2.d f!= 1f))
            zmm0 = zx.o(*(arg1 + 0xc4))
            zmm2 = rax_6
            var_a8 = zmm0.q
            entry_zmm3 = var_a8.d
            arg2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        else if (zmm2.d f>= 9.99999994e-09f)
            zmm5_1 = 0x3f000000
            zmm4_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
            entry_zmm3.d = zmm2.d f* 0.5f
            zmm0.d = zmm4_1.d f* zmm4_1.d
            arg2.d = entry_zmm3.d f* zmm0.d
            zmm2.d = 0.5f f- arg2.d
            zmm0.d = zmm4_1.d f* zmm2.d
            zmm4_1.d = zmm4_1.d f+ zmm0.d
            arg2.d = zmm4_1.d f* zmm4_1.d
            entry_zmm3.d = entry_zmm3.d f* arg2.d
            zmm5_1[0] = 0.5f f- entry_zmm3.d
            zmm2.d = zmm4_1.d f* zmm5_1[0]
            zmm2.d = zmm2.d f+ zmm4_1.d
            zmm4_1 = 0x322bcc77
            zmm0 = zmm2
            entry_zmm3.d = zmm2.d f* *(arg1 + 0xc4)
            zmm2.d = zmm2.d f* *(arg1 + 0xcc)
            zmm0.d = zmm0.d f* zmm12.d
            arg2 = zmm0
        else
            entry_zmm3 = data_143dbb1f8
            arg2 = data_143dbb1fc
            zmm2 = data_143dbb200
        
        entry_zmm3.d = entry_zmm3.d f* temp0_8[0]
        arg2.d = arg2.d f* temp0_8[0]
        zmm2.d = zmm2.d f* temp0_8[0]
        *(arg1 + 0xc4) = (_mm_unpacklo_ps(entry_zmm3, arg2.q)).q
        *(arg1 + 0xcc) = zmm2.d
        
        if (rax_4 != 0)
            zmm0 = arg1[0x19].d
            zmm2 = *(arg1 + 0xc4)
            arg2 = *(arg1 + 0xcc)
            zmm0.d = zmm0.d f* zmm0.d
            zmm2.d = zmm2.d f* zmm2.d
            arg2.d = arg2.d f* arg2.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = zmm8.d f* zmm8.d
            zmm2.d = zmm2.d f+ arg2.d
            
            if (not(zmm2.d f>= zmm0.d))
                zmm12 = var_b8:4.d
                zmm11 = var_b8.d
                zmm7 = var_b0
                zmm2.d = zmm12.d f* zmm12.d
                zmm0.d = zmm11.d f* zmm11[0]
                arg2.d = zmm7.d f* zmm7.d
                zmm2.d = zmm2.d f+ zmm0.d
                zmm2.d = zmm2.d f+ arg2.d
                
                if (not(zmm2.d f== 1f))
                    if (zmm2.d f>= zmm4_1.d)
                        float temp0_12[0x4] = _mm_rsqrt_ss(zmm2[0], zmm2.d)
                        entry_zmm3.d = zmm2.d f* 0.5f
                        zmm0.d = temp0_12.d f* temp0_12[0]
                        arg2.d = entry_zmm3.d f* zmm0.d
                        zmm2.d = 0.5f f- arg2.d
                        zmm0.d = temp0_12.d f* zmm2.d
                        temp0_12[0] = temp0_12[0] f+ zmm0.d
                        arg2.d = temp0_12.d f* temp0_12[0]
                        entry_zmm3.d = entry_zmm3.d f* arg2.d
                        zmm4_1.d = 0.5f f- entry_zmm3.d
                        zmm0.d = temp0_12.d f* zmm4_1.d
                        temp0_12[0] = temp0_12[0] f+ zmm0.d
                        zmm11[0] = zmm11[0] * temp0_12[0]
                        zmm12.d = zmm12.d f* temp0_12[0]
                        zmm7.d = zmm7.d f* temp0_12[0]
                    else
                        zmm11 = data_143dbb1f8
                        zmm12 = data_143dbb1fc
                        zmm7 = data_143dbb200
                
                zmm11[0] = zmm11[0] f* zmm8.d
                zmm12.d = zmm12.d f* zmm8.d
                zmm7.d = zmm7.d f* zmm8.d
                *(arg1 + 0xc4) = (_mm_unpacklo_ps(zmm11, zmm12.q)).q
                *(arg1 + 0xcc) = zmm7.d
    
    zmm12 = 0x3f000000
else
    zmm4_1 = arg1[0x19].d
    zmm5_1 = *(arg1 + 0xc4)
    zmm11 = *(arg1 + 0xcc)
    zmm2.d = zmm5_1.d f* zmm5_1[0]
    zmm0.d = zmm4_1.d f* zmm4_1.d
    arg2.d = zmm11.d f* zmm11[0]
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ arg2.d
    
    if (not(zmm2.d f<= 0f))
        zmm0.d = zmm14.d f* *(arg1 + 0x144)
        
        if (not(zmm0.d f< 0f))
            zmm7 = _mm_min_ss(zmm0.d, 0x3f800000)
        
        arg2 = _mm_sqrt_ss(0, zmm2.d)
        zmm0.d = zmm6.d f* arg2.d
        entry_zmm3.d = zmm9.d f* arg2.d
        zmm0.d = zmm0.d f- zmm11[0]
        zmm2.d = zmm10.d f* arg2.d
        entry_zmm3.d = entry_zmm3.d f- zmm5_1[0]
        zmm2.d = zmm2.d f- zmm4_1.d
        zmm0.d = zmm0.d f* zmm7.d
        entry_zmm3.d = entry_zmm3.d f* zmm7.d
        zmm0.d = zmm0.d f+ zmm11[0]
        zmm2.d = zmm2.d f* zmm7.d
        entry_zmm3.d = entry_zmm3.d f+ zmm5_1[0]
        zmm2.d = zmm2.d f+ zmm4_1.d
        int32_t var_a0_1 = zmm0.d
        *(arg1 + 0xc4) = (_mm_unpacklo_ps(entry_zmm3, zmm2.q)).q
        *(arg1 + 0xcc) = var_a0_1

if ((*(*arg1 + 0x418))(arg1, zmm8, zmm2, entry_zmm3, var_b8, var_b0) != 0)
    zmm0 = arg1[0x19].d
    zmm2 = *(arg1 + 0xc4)
    arg2 = *(arg1 + 0xcc)
    zmm2.d = zmm2.d f* zmm2.d
    zmm0.d = zmm0.d f* zmm0.d
    arg2.d = arg2.d f* arg2.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ arg2.d
    zmm8 = _mm_sqrt_ss(zx.o(0).d, zmm2.d)

zmm0 = __andps_xmmxud_memxud(*(arg1 + 0x13c), data_142d3f770)
zmm9.d = zmm9.d f* zmm0.d
zmm10.d = zmm10.d f* zmm0.d
zmm6.d = zmm6.d f* zmm0.d
zmm9.d = zmm9.d f* zmm14.d
zmm10.d = zmm10.d f* zmm14.d
zmm9.d = zmm9.d f+ *(arg1 + 0xc4)
zmm6.d = zmm6.d f* zmm14.d
zmm10.d = zmm10.d f+ arg1[0x19].d
zmm6.d = zmm6.d f+ *(arg1 + 0xcc)
*(arg1 + 0xc4) = zmm9.d
arg1[0x19].d = zmm10.d
*(arg1 + 0xcc) = zmm6.d
int32_t rax_11

if (zmm8.d f>= 9.99999975e-05f)
    zmm0.d = zmm9.d f* zmm9.d
    zmm2.d = zmm10.d f* zmm10.d
    arg2.d = zmm6.d f* zmm6.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm0.d = zmm8.d f* zmm8.d
    zmm2.d = zmm2.d f+ arg2.d
    
    if (zmm2.d f<= zmm0.d)
        arg2 = zx.o(*(arg1 + 0xc4))
        rax_11 = *(arg1 + 0xcc)
    else
        entry_zmm3.d = zmm2.d
        uint128_t zmm5_2 = _mm_rsqrt_ss(entry_zmm3.d, entry_zmm3.d)
        entry_zmm3.d = entry_zmm3.d f* zmm12.d
        zmm0.d = zmm5_2.d f* zmm5_2.d
        arg2.d = entry_zmm3.d f* zmm0.d
        zmm2.d = zmm12.d f- arg2.d
        zmm0.d = zmm5_2.d f* zmm2.d
        zmm5_2.d = zmm5_2.d f+ zmm0.d
        arg2.d = zmm5_2.d f* zmm5_2.d
        entry_zmm3.d = entry_zmm3.d f* arg2.d
        uint128_t zmm4_2
        zmm4_2.d = zmm12.d f- entry_zmm3.d
        zmm0.d = zmm5_2.d f* zmm4_2.d
        zmm5_2.d = zmm5_2.d f+ zmm0.d
        zmm5_2.d = zmm5_2.d f* zmm8.d
        zmm9.d = zmm9.d f* zmm5_2.d
        zmm10.d = zmm10.d f* zmm5_2.d
        arg2.d = zmm9.d
        zmm6.d = zmm6.d f* zmm5_2.d
        _mm_shuffle_ps(arg2, arg2, 0xe1)
        arg2.d = zmm10.d
        rax_11 = zmm6.d
        arg2 = _mm_shuffle_ps(arg2, arg2, 0xe1)
else
    zmm2 = data_143dbb1f8
    entry_zmm3 = data_143dbb1fc
    arg2.d = zmm2.d
    rax_11 = data_143dbb200.d
    _mm_shuffle_ps(arg2, arg2, 0xe1)
    zmm0.d = entry_zmm3.d
    arg2 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)

*(arg1 + 0xc4) = arg2.q
*(arg1 + 0xcc) = rax_11
return (*(*arg1 + 0x570))(arg1, &var_a8, zmm2, entry_zmm3)
