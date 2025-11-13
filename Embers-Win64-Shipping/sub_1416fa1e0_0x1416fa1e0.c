// 函数: sub_1416fa1e0
// 地址: 0x1416fa1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *(arg2 + 4)
int32_t r9 = 0
float zmm3[0x4] = *(arg2 + 8)
float zmm4[0x4] = *arg2
float zmm6[0x4] = *(arg2 + 0xc)
zmm6[0] = zmm6[0] - zmm4[0]
int128_t zmm7
zmm7.d = arg2[1].d.d f- zmm2[0]
int32_t var_10c = 0x3f800000
float var_118[0x4]
var_118[0] = zmm4[0]
int128_t zmm8 = *(arg2 + 0x14)
float temp0[0x4] = _mm_shuffle_ps(var_118, var_118, 0xe1)
zmm8.d = zmm8.d f- zmm3[0]
temp0[0] = zmm2[0]
int64_t var_108 = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm3[0]
int32_t var_100 = 0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), arg3[2])
int32_t var_10c_1 = 0x3f800000
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), arg3[3])
int32_t arg_8 = 0
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *arg3)
int64_t var_108_1 = 0
int32_t var_100_1 = 0
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_4, temp0_6), 
    _mm_add_ps(temp0_8, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), arg3[1])))
float var_120 = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)[0]
float temp0_16[0x4] = _mm_unpacklo_ps(temp0_13, _mm_shuffle_ps(temp0_13, temp0_13, 0x55)[0].q)
*arg1 = temp0_16.q
*(arg1 + 0xc) = temp0_16.q
arg1[1].d = var_120
*(arg1 + 0x14) = var_120
float zmm1[0x4] = arg2[1].d
temp0_2[0] = (*(arg2 + 0xc))[0]
zmm2 = *(arg2 + 0x14)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
temp0_17[0] = zmm1[0]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
temp0_18[0] = zmm2[0]
float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
int96_t var_118_2 = temp0_19[0].12
float temp0_21[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), arg3[3])
float temp0_23[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0), *arg3)
float temp0_25[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xaa), arg3[2])
float temp0_27[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0x55), arg3[1])
float temp0_30[0x4] = _mm_add_ps(_mm_add_ps(temp0_21, temp0_25), _mm_add_ps(temp0_23, temp0_27))
int32_t var_8c = 0x3f800000
int32_t i = 0
int32_t var_fc = 0x3f800000
float temp0_31[0x4] = __minss_xmmss_memss(temp0_30[0], *arg1)
float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
float temp0_34[0x4] = __minss_xmmss_memss(temp0_32[0], *(arg1 + 4))
float temp0_35[0x4] = __minss_xmmss_memss(temp0_33[0], arg1[1].d)
*arg1 = (_mm_unpacklo_ps(temp0_31, temp0_34[0].q)).q
arg1[1].d = temp0_35[0]
float temp0_37[0x4] = __maxss_xmmss_memss(temp0_30[0], *(arg1 + 0xc))
float temp0_38[0x4] = __maxss_xmmss_memss(temp0_32[0], arg1[2].d)
float temp0_39[0x4] = __maxss_xmmss_memss(temp0_33[0], *(arg1 + 0x14))
float temp0_40[0x4] = _mm_unpacklo_ps(temp0_37, temp0_38[0].q)
float var_120_2 = temp0_39[0]
*(arg1 + 0xc) = temp0_40.q
*(arg1 + 0x14) = var_120_2

do
    int64_t* rax_3
    int32_t r9_1
    
    if (i != 0)
        int32_t* rax_4
        int32_t r9_2
        
        if (i != 1)
            r9_2 = r9 | 4
            int64_t var_d0 = 0
            int32_t var_c8_1 = 0x3f800000
            rax_4 = &var_d0
        else
            r9_2 = r9 | 2
            int32_t var_dc = 0
            int64_t var_d8_1 = 0x3f800000
            rax_4 = &var_dc
        
        r9_1 = r9_2 | 8
        int32_t var_80_1 = rax_4[2]
        int64_t var_88
        rax_3 = &var_88
        var_88 = *rax_4
    else
        r9_1 = r9 | 1
        int64_t var_e8 = 0x3f800000
        int32_t i_1 = i
        rax_3 = &var_e8
    
    float zmm0[0x4] = zx.o(*rax_3)
    int32_t rax_6 = rax_3[1].d
    zmm1 = zmm0
    zmm6[0] = zmm6[0] * zmm0[0]
    int32_t rcx_1 = r9_1 & 0xfffffff7
    zmm0 = rax_6
    float temp0_41[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm6[0] = zmm6[0] f+ *arg2
    
    if ((r9_1.b & 8) == 0)
        rcx_1 = r9_1
    
    temp0_41[0] = temp0_41[0] f* zmm7.d
    zmm0[0] = zmm0[0] f* zmm8.d
    int32_t rdx_1 = rcx_1 & 0xfffffffb
    int64_t var_f8_1 = 0
    temp0_41[0] = temp0_41[0] f+ *(arg2 + 4)
    float var_98[0x4]
    var_98[0] = zmm6[0]
    int32_t var_f0_1 = 0
    zmm0[0] = zmm0[0] f+ *(arg2 + 8)
    float temp0_42[0x4] = _mm_shuffle_ps(var_98, var_98, 0xe1)
    
    if ((rcx_1.b & 4) == 0)
        rdx_1 = rcx_1
    
    temp0_42[0] = temp0_41[0]
    int32_t rcx_3 = rdx_1 & 0xfffffffd
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xc6)
    temp0_43[0] = zmm0[0]
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xc9)
    
    if ((rdx_1.b & 2) == 0)
        rcx_3 = rdx_1
    
    var_98 = temp0_44
    float temp0_46[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_44, temp0_44, 0xaa), arg3[2])
    int32_t rdx_3 = rcx_3 & 0xfffffffe
    float temp0_48[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_44, temp0_44, 0xff), arg3[3])
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0)
    
    if ((rcx_3.b & 1) == 0)
        rdx_3 = rcx_3
    
    float temp0_50[0x4] = __mulps_xmmps_memps(temp0_49, *arg3)
    float temp0_55[0x4] = _mm_add_ps(_mm_add_ps(temp0_46, temp0_48), 
        _mm_add_ps(temp0_50, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_44, temp0_44, 0x55), arg3[1])))
    float temp0_56[0x4] = __minss_xmmss_memss(temp0_55[0], *arg1)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xaa)
    float temp0_59[0x4] = __minss_xmmss_memss(temp0_57[0], *(arg1 + 4))
    float temp0_60[0x4] = __minss_xmmss_memss(temp0_58[0], arg1[1].d)
    *arg1 = (_mm_unpacklo_ps(temp0_56, temp0_59[0].q)).q
    arg1[1].d = temp0_60[0]
    float temp0_62[0x4] = __maxss_xmmss_memss(temp0_55[0], *(arg1 + 0xc))
    float temp0_63[0x4] = __maxss_xmmss_memss(temp0_57[0], arg1[2].d)
    float temp0_64[0x4] = __maxss_xmmss_memss(temp0_58[0], *(arg1 + 0x14))
    float temp0_65[0x4] = _mm_unpacklo_ps(temp0_62, temp0_63[0].q)
    float var_50_1 = temp0_64[0]
    *(arg1 + 0xc) = temp0_65.q
    *(arg1 + 0x14) = var_50_1
    int64_t* rax_13
    int32_t rdx_4
    
    if (i != 0)
        int32_t* rax_14
        int32_t rcx_4
        
        if (i != 1)
            int64_t var_ac = 0
            rax_14 = &var_ac
            int32_t var_a4_1 = 0x3f800000
            rcx_4 = 0xc0
        else
            int32_t var_b8 = 0
            rax_14 = &var_b8
            int64_t var_b4_1 = 0x3f800000
            rcx_4 = 0xa0
        
        rdx_4 = rdx_3 | rcx_4
        int32_t var_68_1 = rax_14[2]
        int64_t var_70
        rax_13 = &var_70
        var_70 = *rax_14
    else
        rdx_4 = rdx_3 | 0x10
        int64_t var_c4 = 0x3f800000
        int32_t i_2 = i
        rax_13 = &var_c4
    
    zmm2 = zx.o(*rax_13)
    int32_t rax_16 = rax_13[1].d
    int32_t rcx_6 = rdx_4 & 0xffffff7f
    zmm3 = *(arg2 + 0xc)
    zmm0 = zmm2
    zmm4 = var_108_1.o
    zmm1 = zmm2
    zmm2 = arg2[1].d
    zmm0[0] = zmm0[0] * zmm6[0]
    float temp0_66[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    temp0_66[0] = temp0_66[0] f* zmm7.d
    int64_t var_f8_2 = 0
    
    if ((rdx_4.b & 0x80) == 0)
        rcx_6 = rdx_4
    
    zmm3[0] = zmm3[0] - zmm0[0]
    int32_t var_f0_2 = 0
    zmm0 = rax_16
    zmm2[0] = zmm2[0] - temp0_66[0]
    zmm0[0] = zmm0[0] f* zmm8.d
    zmm1 = *(arg2 + 0x14)
    int32_t rdx_6 = rcx_6 & 0xffffffbf
    zmm4[0] = zmm3[0]
    zmm1[0] = zmm1[0] - zmm0[0]
    float temp0_67[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
    temp0_67[0] = zmm2[0]
    
    if ((rcx_6.b & 0x40) == 0)
        rdx_6 = rcx_6
    
    float temp0_68[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xc6)
    int32_t rcx_8 = rdx_6 & 0xffffffdf
    temp0_68[0] = zmm1[0]
    float temp0_69[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xc9)
    var_108_1.o = temp0_69
    float temp0_71[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_69, temp0_69, 0), *arg3)
    
    if ((rdx_6.b & 0x20) == 0)
        rcx_8 = rdx_6
    
    i += 1
    float temp0_73[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_69, temp0_69, 0x55), arg3[1])
    float temp0_75[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_69, temp0_69, 0xff), arg3[3])
    float temp0_80[0x4] = _mm_add_ps(_mm_add_ps(temp0_71, temp0_73), 
        _mm_add_ps(temp0_75, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), arg3[2])))
    float temp0_81[0x4] = __minss_xmmss_memss(temp0_80[0], *arg1)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0x55)
    float temp0_83[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xaa)
    float temp0_84[0x4] = __minss_xmmss_memss(temp0_82[0], *(arg1 + 4))
    float temp0_85[0x4] = __minss_xmmss_memss(temp0_83[0], arg1[1].d)
    *arg1 = (_mm_unpacklo_ps(temp0_81, temp0_84[0].q)).q
    arg1[1].d = temp0_85[0]
    float temp0_87[0x4] = __maxss_xmmss_memss(temp0_80[0], *(arg1 + 0xc))
    float temp0_88[0x4] = __maxss_xmmss_memss(temp0_82[0], arg1[2].d)
    float temp0_89[0x4] = __maxss_xmmss_memss(temp0_83[0], *(arg1 + 0x14))
    float temp0_90[0x4] = _mm_unpacklo_ps(temp0_87, temp0_88[0].q)
    var_118_2:8.d = temp0_89[0]
    *(arg1 + 0xc) = temp0_90.q
    *(arg1 + 0x14) = var_118_2:8.d
    r9 = rcx_8 & 0xffffffef
    
    if ((rcx_8.b & 0x10) == 0)
        r9 = rcx_8
while (i s< 3)

return arg1
