// 函数: sub_142298f60
// 地址: 0x142298f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = data_143dbb1fc
int32_t zmm4 = data_143dbb200
int128_t __saved_zmm11 = arg10
arg10 = arg15
float __saved_zmm12[0x4] = arg11
arg11 = arg4
int64_t rax = *arg1
int32_t var_9c = 0x3f800000
float var_a8[0x4]
arg4 = var_a8
arg4[0] = data_143dbb1f8[0]
int64_t var_b8 = 0
float temp0[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
temp0[0] = zmm2[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm4
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
var_a8 = temp0_2
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *arg2)
var_a8[1].q = 0
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), arg2[1])
int32_t var_9c_1 = 0x3f800000
float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), arg2[2])
int32_t var_b0 = 0
int64_t var_98 = 0
int32_t var_90 = 0
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_4, temp0_6), 
    _mm_add_ps(temp0_8, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), arg2[3])))
var_b8.d = temp0_13[0]
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)
var_b8:4.d = temp0_14[0]
float var_b0_1 = temp0_15[0]
zmm2 = var_a8
zmm2[0] = arg11[0]
var_a8 = zmm2
float temp0_17[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
float temp0_19[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
float temp0_21[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
float temp0_26[0x4] = _mm_add_ps(_mm_add_ps(temp0_17, temp0_19), 
    _mm_add_ps(temp0_21, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])))
var_a8[0] = temp0_26[0]
float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0x55)
var_a8[2] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)[0]
var_a8[1] = temp0_27[0]
(*(rax + 0x30))(arg1, &var_a8, &var_b8, arg3, arg14, arg10.d, 0, 0, var_b8, var_b0_1, var_a8, 
    var_98, var_90, arg12, __saved_zmm12, __saved_zmm11, arg9, arg8, arg7, arg6, arg5)
arg8 = arg13
int64_t rax_1 = *arg1
int32_t var_9c_2 = 0x3f800000
arg4 = var_a8
arg11[0] = arg11[0] f- arg8.d
var_b8 = 0
int32_t var_ac = 0x3f800000
arg4[0] = arg11[0]
float temp0_29[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
temp0_29[0] = arg8.d
int64_t var_98_1 = 0
float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc6)
temp0_30[0] = arg8.d
int32_t var_90_1 = 0
float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc9)
var_a8 = temp0_31
float temp0_33[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0xaa), arg2[2])
int64_t var_98_2 = 0
float temp0_35[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0xff), arg2[3])
int32_t var_90_2 = 0
float temp0_37[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0), *arg2)
float temp0_42[0x4] = _mm_add_ps(_mm_add_ps(temp0_33, temp0_35), 
    _mm_add_ps(temp0_37, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_31, temp0_31, 0x55), arg2[1])))
var_a8[0] = temp0_42[0]
float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x55)
float temp0_44[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xaa)
var_a8[1] = temp0_43[0]
var_a8[2] = temp0_44[0]
zmm2 = var_b8.o
zmm2[0] = arg11[0]
var_b8.o = zmm2
float temp0_46[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
float temp0_48[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
float temp0_50[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
float temp0_55[0x4] = _mm_add_ps(_mm_add_ps(temp0_46, temp0_48), 
    _mm_add_ps(temp0_50, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])))
var_b8.d = temp0_55[0]
float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
float var_b0_2 = _mm_shuffle_ps(temp0_55, temp0_55, 0xaa)[0]
var_b8:4.d = temp0_56[0]
(*(rax_1 + 0x30))(arg1, &var_b8, &var_a8, arg3, arg14, arg10.d, 0, 0, var_b8, var_b0_2, var_a8, 
    var_98_2, var_90_2)
int32_t var_9c_3 = 0x3f800000
arg7 = arg8 ^ data_142d3f780
arg4 = var_a8
int64_t var_98_3 = 0
int32_t var_90_3 = 0
int64_t rax_2 = *arg1
arg4[0] = arg11[0]
var_b8 = 0
float temp0_58[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
temp0_58[0] = arg8.d
int32_t var_ac_1 = 0x3f800000
float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xc6)
temp0_59[0] = arg7.d
float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xc9)
var_a8 = temp0_60
float temp0_62[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_60, temp0_60, 0), *arg2)
int64_t var_98_4 = 0
float temp0_64[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), arg2[1])
int32_t var_90_4 = 0
float temp0_66[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), arg2[2])
float temp0_71[0x4] = _mm_add_ps(_mm_add_ps(temp0_62, temp0_64), 
    _mm_add_ps(temp0_66, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), arg2[3])))
var_a8[0] = temp0_71[0]
float temp0_72[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x55)
float temp0_73[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xaa)
var_a8[1] = temp0_72[0]
var_a8[2] = temp0_73[0]
zmm2 = var_b8.o
zmm2[0] = arg11[0]
var_b8.o = zmm2
float temp0_75[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
float temp0_77[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
float temp0_79[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
float temp0_84[0x4] = _mm_add_ps(_mm_add_ps(temp0_75, temp0_77), 
    _mm_add_ps(temp0_79, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])))
var_b8.d = temp0_84[0]
float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
float var_b0_3 = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)[0]
var_b8:4.d = temp0_85[0]
(*(rax_2 + 0x30))(arg1, &var_b8, &var_a8, arg3, arg14, arg10.d, 0, 0, var_b8, var_b0_3, var_a8, 
    var_98_4, var_90_4)
int32_t var_9c_4 = 0x3f800000
arg4 = var_a8
arg4[0] = arg11[0]
int64_t var_98_5 = 0
float temp0_87[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
temp0_87[0] = arg7.d
int32_t var_90_5 = 0
float temp0_88[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0xc6)
temp0_88[0] = arg8.d
float temp0_89[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xc9)
var_a8 = temp0_89
float temp0_91[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_89, temp0_89, 0), *arg2)
float temp0_93[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_89, temp0_89, 0x55), arg2[1])
int64_t rax_3 = *arg1
float temp0_94[0x4] = _mm_add_ps(temp0_91, temp0_93)
var_b8 = 0
int32_t var_ac_2 = 0x3f800000
int64_t var_98_6 = 0
int32_t var_90_6 = 0
float temp0_100[0x4] = _mm_add_ps(temp0_94, 
    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_89, temp0_89, 0xaa), arg2[2]), 
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_89, temp0_89, 0xff), arg2[3])))
var_a8[0] = temp0_100[0]
float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0x55)
float temp0_102[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0xaa)
var_a8[1] = temp0_101[0]
var_a8[2] = temp0_102[0]
zmm2 = var_b8.o
zmm2[0] = arg11[0]
var_b8.o = zmm2
float temp0_104[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
float temp0_106[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
float temp0_108[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
float temp0_113[0x4] = _mm_add_ps(_mm_add_ps(temp0_104, temp0_106), 
    _mm_add_ps(temp0_108, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])))
var_b8.d = temp0_113[0]
float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0x55)
float var_b0_4 = _mm_shuffle_ps(temp0_113, temp0_113, 0xaa)[0]
var_b8:4.d = temp0_114[0]
(*(rax_3 + 0x30))(arg1, &var_b8, &var_a8, arg3, arg14, arg10.d, 0, 0, var_b8, var_b0_4, var_a8, 
    var_98_6, var_90_6)
int32_t var_9c_5 = 0x3f800000
arg4 = var_a8
arg4[0] = arg11[0]
int64_t var_98_7 = 0
float temp0_116[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
temp0_116[0] = arg7.d
int32_t var_90_7 = 0
float temp0_117[0x4] = _mm_shuffle_ps(temp0_116, temp0_116, 0xc6)
temp0_117[0] = arg7.d
float temp0_118[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0xc9)
var_a8 = temp0_118
float temp0_120[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_118, temp0_118, 0), *arg2)
float temp0_122[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_118, temp0_118, 0x55), arg2[1])
float temp0_124[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_118, temp0_118, 0xaa), arg2[2])
float temp0_129[0x4] = _mm_add_ps(_mm_add_ps(temp0_120, temp0_122), 
    _mm_add_ps(temp0_124, __mulps_xmmps_memps(_mm_shuffle_ps(temp0_118, temp0_118, 0xff), arg2[3])))
var_a8[0] = temp0_129[0]
var_a8[1] = _mm_shuffle_ps(temp0_129, temp0_129, 0x55)[0]
float temp0_131[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0xaa)
int64_t rax_4 = *arg1
var_a8[2] = temp0_131[0]
var_b8 = 0
int32_t var_ac_3 = 0x3f800000
zmm2 = var_b8.o
zmm2[0] = arg11[0]
var_b8.o = zmm2
float temp0_133[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *arg2)
int64_t var_98_8 = 0
float temp0_135[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg2[1])
int32_t var_90_8 = 0
float temp0_137[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg2[2])
float temp0_142[0x4] = _mm_add_ps(_mm_add_ps(temp0_133, temp0_135), 
    _mm_add_ps(temp0_137, __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), arg2[3])))
var_b8.d = temp0_142[0]
float temp0_143[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0x55)
float var_b0_5 = _mm_shuffle_ps(temp0_142, temp0_142, 0xaa)[0]
var_b8:4.d = temp0_143[0]
return (*(rax_4 + 0x30))(arg1, &var_b8, &var_a8, arg3, arg14, arg10.d, 0, 0, var_b8, var_b0_5, 
    var_a8, var_98_8, var_90_8)
