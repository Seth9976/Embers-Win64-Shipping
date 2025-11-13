// 函数: sub_1403bc57a
// 地址: 0x1403bc57a
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
int64_t var_8 = rbp
int32_t zmm6[0x4]
int32_t var_a8[0x4] = zmm6
int32_t zmm7[0x4]
int32_t var_98[0x4] = zmm7
int32_t zmm8[0x4]
int32_t var_88[0x4] = zmm8
int32_t zmm9[0x4]
int32_t var_78[0x4] = zmm9
int32_t zmm10[0x4]
int32_t var_68[0x4] = zmm10
int32_t zmm11[0x4]
int32_t var_58[0x4] = zmm11
int32_t zmm12[0x4]
int32_t var_48[0x4] = zmm12
int32_t zmm13[0x4]
int32_t var_38[0x4] = zmm13
int32_t zmm14[0x4]
int32_t var_28[0x4] = zmm14
int32_t zmm15[0x4]
int32_t var_18[0x4] = zmm15
int64_t r12
int64_t var_b0 = r12
int64_t r13
int64_t var_b8 = r13
int64_t* var_d0 = &var_b8
int32_t (* result)[0x4] = arg1 + arg2
int64_t r11 = arg2 * 3
int64_t r12_1 = r11 + (arg2 << 1)
int64_t r13_1 = r11 + (arg2 << 2)
int32_t zmm0[0x4] = *(arg1 + (arg2 << 3))
int32_t temp0[0x4] = __punpcklbw_xmmdq_memdq(zmm0, *(result + (arg2 << 3)))
int32_t temp0_1[0x4] = __punpckhbw_xmmdq_memdq(zmm0, *(result + (arg2 << 3)))
int32_t zmm2[0x4] = *(arg1 + (r12_1 << 1))
int32_t temp0_2[0x4] = __punpcklbw_xmmdq_memdq(zmm2, *(result + (r12_1 << 1)))
int32_t temp0_3[0x4] = __punpckhbw_xmmdq_memdq(zmm2, *(result + (r12_1 << 1)))
int32_t temp0_4[0x4] = _mm_unpacklo_epi16(temp0, temp0_2[0].q)
int32_t temp0_5[0x4] = _mm_unpackhi_epi16(temp0, temp0_2[0].q)
int32_t temp0_6[0x4] = _mm_unpacklo_epi16(temp0_1, temp0_3[0].q)
int32_t temp0_7[0x4] = _mm_unpackhi_epi16(temp0_1, temp0_3[0].q)
int32_t zmm3[0x4] = *(arg1 + (r11 << 2))
int32_t temp0_8[0x4] = __punpcklbw_xmmdq_memdq(zmm3, *(result + (r11 << 2)))
int32_t temp0_9[0x4] = __punpckhbw_xmmdq_memdq(zmm3, *(result + (r11 << 2)))
zmm6 = *(arg1 + (r13_1 << 1))
int32_t temp0_10[0x4] = __punpcklbw_xmmdq_memdq(zmm6, *(result + (r13_1 << 1)))
int32_t temp0_11[0x4] = __punpckhbw_xmmdq_memdq(zmm6, *(result + (r13_1 << 1)))
int32_t temp0_12[0x4] = _mm_unpacklo_epi16(temp0_8, temp0_10[0].q)
int32_t temp0_13[0x4] = _mm_unpackhi_epi16(temp0_8, temp0_10[0].q)
int32_t temp0_14[0x4] = _mm_unpacklo_epi16(temp0_9, temp0_11[0].q)
int32_t temp0_15[0x4] = _mm_unpackhi_epi16(temp0_9, temp0_11[0].q)
int32_t temp0_16[0x4] = _mm_unpacklo_epi32(temp0_4, temp0_12[0].q)
int32_t temp0_17[0x4] = _mm_unpackhi_epi32(temp0_4, temp0_12[0].q)
int32_t temp0_18[0x4] = _mm_unpacklo_epi32(temp0_5, temp0_13[0].q)
int32_t temp0_19[0x4] = _mm_unpackhi_epi32(temp0_5, temp0_13[0].q)
int32_t temp0_20[0x4] = _mm_unpacklo_epi32(temp0_6, temp0_14[0].q)
int32_t temp0_21[0x4] = _mm_unpackhi_epi32(temp0_6, temp0_14[0].q)
int32_t temp0_22[0x4] = _mm_unpacklo_epi32(temp0_7, temp0_15[0].q)
int32_t temp0_23[0x4] = _mm_unpackhi_epi32(temp0_7, temp0_15[0].q)
zmm0 = *arg1
int32_t temp0_24[0x4] = __punpcklbw_xmmdq_memdq(zmm0, *result)
int32_t temp0_25[0x4] = __punpckhbw_xmmdq_memdq(zmm0, *result)
zmm2 = *(arg1 + (arg2 << 1))
int32_t temp0_26[0x4] = __punpcklbw_xmmdq_memdq(zmm2, *(result + (arg2 << 1)))
int32_t temp0_27[0x4] = __punpckhbw_xmmdq_memdq(zmm2, *(result + (arg2 << 1)))
int32_t temp0_28[0x4] = _mm_unpacklo_epi16(temp0_24, temp0_26[0].q)
int32_t temp0_29[0x4] = _mm_unpackhi_epi16(temp0_24, temp0_26[0].q)
int32_t temp0_30[0x4] = _mm_unpacklo_epi16(temp0_25, temp0_27[0].q)
int32_t temp0_31[0x4] = _mm_unpackhi_epi16(temp0_25, temp0_27[0].q)
zmm3 = *(arg1 + (arg2 << 2))
int32_t temp0_32[0x4] = __punpcklbw_xmmdq_memdq(zmm3, *(result + (arg2 << 2)))
int32_t temp0_33[0x4] = __punpckhbw_xmmdq_memdq(zmm3, *(result + (arg2 << 2)))
zmm6 = *(arg1 + (r11 << 1))
int32_t temp0_34[0x4] = __punpcklbw_xmmdq_memdq(zmm6, *(result + (r11 << 1)))
int32_t temp0_35[0x4] = __punpckhbw_xmmdq_memdq(zmm6, *(result + (r11 << 1)))
int32_t temp0_36[0x4] = _mm_unpacklo_epi16(temp0_32, temp0_34[0].q)
int32_t temp0_37[0x4] = _mm_unpackhi_epi16(temp0_32, temp0_34[0].q)
int32_t temp0_38[0x4] = _mm_unpacklo_epi16(temp0_33, temp0_35[0].q)
int32_t temp0_39[0x4] = _mm_unpackhi_epi16(temp0_33, temp0_35[0].q)
int32_t temp0_40[0x4] = _mm_unpacklo_epi32(temp0_28, temp0_36[0].q)
int32_t temp0_41[0x4] = _mm_unpackhi_epi32(temp0_28, temp0_36[0].q)
int32_t temp0_42[0x4] = _mm_unpacklo_epi32(temp0_29, temp0_37[0].q)
int32_t temp0_43[0x4] = _mm_unpackhi_epi32(temp0_29, temp0_37[0].q)
int32_t temp0_44[0x4] = _mm_unpacklo_epi32(temp0_30, temp0_38[0].q)
int32_t temp0_45[0x4] = _mm_unpackhi_epi32(temp0_30, temp0_38[0].q)
int32_t temp0_46[0x4] = _mm_unpacklo_epi32(temp0_31, temp0_39[0].q)
int32_t temp0_47[0x4] = _mm_unpackhi_epi32(temp0_31, temp0_39[0].q)
int32_t temp0_48[0x4] = __punpcklqdq_xmmdq_memdq(temp0_40, temp0_16)
int32_t temp0_49[0x4] = __punpckhqdq_xmmdq_memdq(temp0_40, temp0_16)
int32_t temp0_50[0x4] = __punpcklqdq_xmmdq_memdq(temp0_41, temp0_17)
int32_t temp0_51[0x4] = __punpckhqdq_xmmdq_memdq(temp0_41, temp0_17)
int32_t temp0_52[0x4] = __punpcklqdq_xmmdq_memdq(temp0_42, temp0_18)
int32_t temp0_53[0x4] = __punpckhqdq_xmmdq_memdq(temp0_42, temp0_18)
int32_t temp0_54[0x4] = __punpcklqdq_xmmdq_memdq(temp0_43, temp0_19)
int32_t temp0_55[0x4] = __punpckhqdq_xmmdq_memdq(temp0_43, temp0_19)
int32_t temp0_56[0x4] = __punpcklqdq_xmmdq_memdq(temp0_44, temp0_20)
int32_t temp0_57[0x4] = __punpckhqdq_xmmdq_memdq(temp0_44, temp0_20)
int32_t temp0_58[0x4] = __punpcklqdq_xmmdq_memdq(temp0_45, temp0_21)
int32_t temp0_59[0x4] = __punpckhqdq_xmmdq_memdq(temp0_45, temp0_21)
int32_t temp0_60[0x4] = __punpcklqdq_xmmdq_memdq(temp0_46, temp0_22)
int32_t temp0_61[0x4] = __punpckhqdq_xmmdq_memdq(temp0_46, temp0_22)
int32_t temp0_62[0x4] = __punpcklqdq_xmmdq_memdq(temp0_47, temp0_23)
int32_t temp0_63[0x4] = __punpckhqdq_xmmdq_memdq(temp0_47, temp0_23)
int32_t temp0_64[0x4] = _mm_subs_epu8(temp0_49, temp0_48)
zmm0 = _mm_subs_epu8(temp0_48, temp0_49) | temp0_64
int32_t temp0_66[0x4] = _mm_subs_epu8(temp0_50, temp0_49)
int32_t temp0_68[0x4] = _mm_max_epu8(zmm0, _mm_subs_epu8(temp0_49, temp0_50) | temp0_66)
int32_t temp0_69[0x4] = _mm_subs_epu8(temp0_51, temp0_50)
zmm6 = _mm_subs_epu8(temp0_50, temp0_51) | temp0_69
int32_t temp0_71[0x4] = _mm_subs_epu8(temp0_52, temp0_51)
zmm9 = _mm_subs_epu8(temp0_51, temp0_52) | temp0_71
int32_t temp0_73[0x4] = _mm_subs_epu8(temp0_53, temp0_52)
int32_t temp0_75[0x4] = _mm_max_epu8(_mm_subs_epu8(temp0_52, temp0_53) | temp0_73, zmm6)
int32_t temp0_76[0x4] = _mm_max_epu8(temp0_68, temp0_75)
int32_t temp0_77[0x4] = _mm_subs_epu8(temp0_53, temp0_50)
zmm13 = _mm_subs_epu8(temp0_50, temp0_53) | temp0_77
int32_t temp0_79[0x4] = _mm_subs_epu8(temp0_54, temp0_53)
int32_t temp0_81[0x4] = _mm_max_epu8(temp0_76, _mm_subs_epu8(temp0_53, temp0_54) | temp0_79)
int32_t temp0_82[0x4] = _mm_subs_epu8(temp0_55, temp0_54)
zmm3 = _mm_subs_epu8(temp0_54, temp0_55) | temp0_82
int32_t temp0_84[0x4] = _mm_max_epu8(temp0_81, zmm3)
int32_t temp0_87[0x4] =
    _mm_adds_epu8(_mm_adds_epu8(zmm9, zmm9), _mm_srli_epi16(zmm13 & data_14427f090, 1))
zmm0 = _mm_cmpeq_epi8(
    __psubusb_xmmdq_memdq(temp0_84, *arg4) | __psubusb_xmmdq_memdq(temp0_87, *arg3), zx.o(0))
int32_t zmm4[0x4] = _mm_cmpeq_epi8(__psubusb_xmmdq_memdq(temp0_75, *arg5), zx.o(0))
int32_t zmm1[0x4] = temp0_50 ^ data_14427f0b0
zmm9 = temp0_53 ^ data_14427f0b0
zmm6 = zmm4 & not.o(_mm_subs_epi8(zmm1, zmm9))
zmm2 = temp0_51 ^ data_14427f0b0
zmm8 = temp0_52 ^ data_14427f0b0
int32_t temp0_94[0x4] = _mm_subs_epi8(zmm8, zmm2)
zmm0 &= _mm_adds_epi8(_mm_adds_epi8(_mm_adds_epi8(zmm6, temp0_94), temp0_94), temp0_94)
int32_t temp0_98[0x4] = __paddsb_xmmdq_memdq(zmm0, data_14427f0e0)
int32_t temp0_99[0x4] = __paddsb_xmmdq_memdq(zmm0, data_14427f0d0)
int32_t zmm5[0x4] = _mm_cmpgt_epi8(zx.o(0), temp0_98)
zmm0 = (_mm_srli_epi16(temp0_98, 3) & data_14427f0a0) | (zmm5 & data_14427f070)
zmm8 = _mm_subs_epi8(zmm8, zmm0) ^ data_14427f0b0
zmm5 = _mm_cmpgt_epi8(zx.o(0), temp0_99)
zmm2 = _mm_adds_epi8(zmm2, (_mm_srli_epi16(temp0_99, 3) & data_14427f0a0) | (zmm5 & data_14427f070))
    ^ data_14427f0b0
int32_t temp0_106[0x4] = __paddsb_xmmdq_memdq(zmm0, data_14427f0c0)
zmm5 = _mm_cmpgt_epi8(zx.o(0), temp0_106)
zmm0 = ((_mm_srli_epi16(temp0_106, 1) & data_14427f080) | (zmm5 & data_14427f0b0)) & zmm4
zmm9 = _mm_subs_epi8(zmm9, zmm0) ^ data_14427f0b0
int32_t var_1b0_2[0x4] = _mm_adds_epi8(zmm1, zmm0) ^ data_14427f0b0
int32_t var_1a0_2[0x4] = zmm2
int32_t var_190_2[0x4] = zmm8
int32_t temp0_111[0x4] = _mm_subs_epu8(zmm9, zmm8)
zmm8 = _mm_subs_epu8(zmm8, zmm9) | temp0_111
int32_t temp0_113[0x4] = _mm_subs_epu8(temp0_54, zmm9)
int32_t temp0_115[0x4] = _mm_max_epu8(zmm8, _mm_subs_epu8(zmm9, temp0_54) | temp0_113)
int32_t temp0_116[0x4] = _mm_subs_epu8(temp0_56, temp0_55)
zmm1 = _mm_subs_epu8(temp0_55, temp0_56) | temp0_116
int32_t temp0_118[0x4] = _mm_subs_epu8(temp0_57, temp0_56)
int32_t temp0_120[0x4] = _mm_max_epu8(_mm_subs_epu8(temp0_56, temp0_57) | temp0_118, zmm3)
int32_t temp0_121[0x4] = _mm_max_epu8(temp0_115, temp0_120)
int32_t temp0_122[0x4] = _mm_subs_epu8(temp0_57, temp0_54)
zmm0 = _mm_subs_epu8(temp0_54, temp0_57) | temp0_122
int32_t temp0_124[0x4] = _mm_subs_epu8(temp0_58, temp0_57)
int32_t temp0_126[0x4] = _mm_max_epu8(temp0_121, _mm_subs_epu8(temp0_57, temp0_58) | temp0_124)
int32_t temp0_127[0x4] = _mm_subs_epu8(temp0_59, temp0_58)
zmm10 = _mm_subs_epu8(temp0_58, temp0_59) | temp0_127
int32_t temp0_129[0x4] = _mm_max_epu8(temp0_126, zmm10)
int32_t temp0_132[0x4] =
    _mm_adds_epu8(_mm_adds_epu8(zmm1, zmm1), _mm_srli_epi16(zmm0 & data_14427f090, 1))
zmm8 = _mm_cmpeq_epi8(
    __psubusb_xmmdq_memdq(temp0_129, *arg4) | __psubusb_xmmdq_memdq(temp0_132, *arg3), zx.o(0))
zmm2 = _mm_cmpeq_epi8(__psubusb_xmmdq_memdq(temp0_120, *arg5), zx.o(0))
zmm0 = temp0_54 ^ data_14427f0b0
zmm4 = temp0_57 ^ data_14427f0b0
zmm6 = zmm2 & not.o(_mm_subs_epi8(zmm0, zmm4))
zmm1 = temp0_55 ^ data_14427f0b0
zmm3 = temp0_56 ^ data_14427f0b0
int32_t temp0_139[0x4] = _mm_subs_epi8(zmm3, zmm1)
zmm8 &= _mm_adds_epi8(_mm_adds_epi8(_mm_adds_epi8(zmm6, temp0_139), temp0_139), temp0_139)
int32_t temp0_143[0x4] = __paddsb_xmmdq_memdq(zmm8, data_14427f0e0)
int32_t temp0_144[0x4] = __paddsb_xmmdq_memdq(zmm8, data_14427f0d0)
zmm5 = _mm_cmpgt_epi8(zx.o(0), temp0_143)
zmm8 = (_mm_srli_epi16(temp0_143, 3) & data_14427f0a0) | (zmm5 & data_14427f070)
zmm3 = _mm_subs_epi8(zmm3, zmm8) ^ data_14427f0b0
zmm5 = _mm_cmpgt_epi8(zx.o(0), temp0_144)
zmm1 =
    _mm_adds_epi8(zmm1, (_mm_srli_epi16(temp0_144, 3) & data_14427f0a0) | (zmm5 & data_14427f070))
    ^ data_14427f0b0
int32_t temp0_151[0x4] = __paddsb_xmmdq_memdq(zmm8, data_14427f0c0)
zmm5 = _mm_cmpgt_epi8(zx.o(0), temp0_151)
zmm8 = ((_mm_srli_epi16(temp0_151, 1) & data_14427f080) | (zmm5 & data_14427f0b0)) & zmm2
zmm4 = _mm_subs_epi8(zmm4, zmm8) ^ data_14427f0b0
int32_t var_170_2[0x4] = _mm_adds_epi8(zmm0, zmm8) ^ data_14427f0b0
int32_t var_160_2[0x4] = zmm1
int32_t var_150_1[0x4] = zmm3
int32_t var_140_1[0x4] = zmm4
int32_t temp0_156[0x4] = _mm_subs_epu8(zmm4, zmm3)
zmm3 = _mm_subs_epu8(zmm3, zmm4) | temp0_156
int32_t temp0_158[0x4] = _mm_subs_epu8(temp0_58, zmm4)
int32_t temp0_160[0x4] = _mm_max_epu8(zmm3, _mm_subs_epu8(zmm4, temp0_58) | temp0_158)
int32_t temp0_161[0x4] = _mm_subs_epu8(temp0_60, temp0_59)
zmm1 = _mm_subs_epu8(temp0_59, temp0_60) | temp0_161
int32_t temp0_163[0x4] = _mm_subs_epu8(temp0_61, temp0_60)
int32_t temp0_165[0x4] = _mm_max_epu8(_mm_subs_epu8(temp0_60, temp0_61) | temp0_163, zmm10)
int32_t temp0_166[0x4] = _mm_max_epu8(temp0_160, temp0_165)
int32_t temp0_167[0x4] = _mm_subs_epu8(temp0_61, temp0_58)
zmm0 = _mm_subs_epu8(temp0_58, temp0_61) | temp0_167
int32_t temp0_169[0x4] = _mm_subs_epu8(temp0_62, temp0_61)
int32_t temp0_171[0x4] = _mm_max_epu8(temp0_166, _mm_subs_epu8(temp0_61, temp0_62) | temp0_169)
int32_t temp0_172[0x4] = _mm_subs_epu8(temp0_63, temp0_62)
int32_t temp0_174[0x4] = _mm_max_epu8(temp0_171, _mm_subs_epu8(temp0_62, temp0_63) | temp0_172)
int32_t temp0_177[0x4] =
    _mm_adds_epu8(_mm_adds_epu8(zmm1, zmm1), _mm_srli_epi16(zmm0 & data_14427f090, 1))
zmm3 = _mm_cmpeq_epi8(
    __psubusb_xmmdq_memdq(temp0_174, *arg4) | __psubusb_xmmdq_memdq(temp0_177, *arg3), zx.o(0))
zmm2 = _mm_cmpeq_epi8(__psubusb_xmmdq_memdq(temp0_165, *arg5), zx.o(0))
zmm0 = temp0_58 ^ data_14427f0b0
zmm8 = temp0_61 ^ data_14427f0b0
zmm6 = zmm2 & not.o(_mm_subs_epi8(zmm0, zmm8))
zmm1 = temp0_59 ^ data_14427f0b0
zmm4 = temp0_60 ^ data_14427f0b0
int32_t temp0_184[0x4] = _mm_subs_epi8(zmm4, zmm1)
zmm3 &= _mm_adds_epi8(_mm_adds_epi8(_mm_adds_epi8(zmm6, temp0_184), temp0_184), temp0_184)
int32_t temp0_188[0x4] = __paddsb_xmmdq_memdq(zmm3, data_14427f0e0)
int32_t temp0_189[0x4] = __paddsb_xmmdq_memdq(zmm3, data_14427f0d0)
zmm5 = _mm_cmpgt_epi8(zx.o(0), temp0_188)
zmm3 = (_mm_srli_epi16(temp0_188, 3) & data_14427f0a0) | (zmm5 & data_14427f070)
zmm4 = _mm_subs_epi8(zmm4, zmm3) ^ data_14427f0b0
zmm5 = _mm_cmpgt_epi8(zx.o(0), temp0_189)
zmm1 =
    _mm_adds_epi8(zmm1, (_mm_srli_epi16(temp0_189, 3) & data_14427f0a0) | (zmm5 & data_14427f070))
    ^ data_14427f0b0
int32_t temp0_196[0x4] = __paddsb_xmmdq_memdq(zmm3, data_14427f0c0)
zmm5 = _mm_cmpgt_epi8(zx.o(0), temp0_196)
zmm3 = ((_mm_srli_epi16(temp0_196, 1) & data_14427f080) | (zmm5 & data_14427f0b0)) & zmm2
zmm8 = _mm_subs_epi8(zmm8, zmm3) ^ data_14427f0b0
int32_t var_130_1[0x4] = _mm_adds_epi8(zmm0, zmm3) ^ data_14427f0b0
int32_t temp0_201[0x4] = __punpcklbw_xmmdq_memdq(var_150_1, var_140_1)
int32_t temp0_202[0x4] = __punpckhbw_xmmdq_memdq(var_150_1, var_140_1)
int32_t temp0_203[0x4] = __punpcklbw_xmmdq_memdq(var_130_1, zmm1)
int32_t temp0_204[0x4] = __punpckhbw_xmmdq_memdq(var_130_1, zmm1)
int32_t temp0_205[0x4] = _mm_unpacklo_epi16(temp0_201, temp0_203[0].q)
int32_t temp0_206[0x4] = _mm_unpackhi_epi16(temp0_201, temp0_203[0].q)
int32_t temp0_207[0x4] = _mm_unpacklo_epi16(temp0_202, temp0_204[0].q)
int32_t temp0_208[0x4] = _mm_unpackhi_epi16(temp0_202, temp0_204[0].q)
int32_t temp0_209[0x4] = __punpcklbw_xmmdq_memdq(zmm4, zmm8)
int32_t temp0_210[0x4] = __punpckhbw_xmmdq_memdq(zmm4, zmm8)
int32_t temp0_211[0x4] = __punpcklbw_xmmdq_memdq(temp0_62, temp0_63)
int32_t temp0_212[0x4] = __punpckhbw_xmmdq_memdq(temp0_62, temp0_63)
int32_t temp0_213[0x4] = _mm_unpacklo_epi16(temp0_209, temp0_211[0].q)
int32_t temp0_214[0x4] = _mm_unpackhi_epi16(temp0_209, temp0_211[0].q)
int32_t temp0_215[0x4] = _mm_unpacklo_epi16(temp0_210, temp0_212[0].q)
int32_t temp0_216[0x4] = _mm_unpackhi_epi16(temp0_210, temp0_212[0].q)
int32_t temp0_217[0x4] = _mm_unpacklo_epi32(temp0_205, temp0_213[0].q)
int32_t temp0_218[0x4] = _mm_unpackhi_epi32(temp0_205, temp0_213[0].q)
int32_t temp0_219[0x4] = _mm_unpacklo_epi32(temp0_206, temp0_214[0].q)
int32_t temp0_220[0x4] = _mm_unpackhi_epi32(temp0_206, temp0_214[0].q)
int32_t temp0_221[0x4] = _mm_unpacklo_epi32(temp0_207, temp0_215[0].q)
int32_t temp0_222[0x4] = _mm_unpackhi_epi32(temp0_207, temp0_215[0].q)
int32_t temp0_223[0x4] = _mm_unpacklo_epi32(temp0_208, temp0_216[0].q)
int32_t temp0_224[0x4] = _mm_unpackhi_epi32(temp0_208, temp0_216[0].q)
int32_t temp0_225[0x4] = __punpcklbw_xmmdq_memdq(temp0_48, temp0_49)
int32_t temp0_226[0x4] = __punpckhbw_xmmdq_memdq(temp0_48, temp0_49)
int32_t temp0_227[0x4] = __punpcklbw_xmmdq_memdq(var_1b0_2, var_1a0_2)
int32_t temp0_228[0x4] = __punpckhbw_xmmdq_memdq(var_1b0_2, var_1a0_2)
int32_t temp0_229[0x4] = _mm_unpacklo_epi16(temp0_225, temp0_227[0].q)
int32_t temp0_230[0x4] = _mm_unpackhi_epi16(temp0_225, temp0_227[0].q)
int32_t temp0_231[0x4] = _mm_unpacklo_epi16(temp0_226, temp0_228[0].q)
int32_t temp0_232[0x4] = _mm_unpackhi_epi16(temp0_226, temp0_228[0].q)
int32_t temp0_233[0x4] = __punpcklbw_xmmdq_memdq(var_190_2, zmm9)
int32_t temp0_234[0x4] = __punpckhbw_xmmdq_memdq(var_190_2, zmm9)
int32_t temp0_235[0x4] = __punpcklbw_xmmdq_memdq(var_170_2, var_160_2)
int32_t temp0_236[0x4] = __punpckhbw_xmmdq_memdq(var_170_2, var_160_2)
int32_t temp0_237[0x4] = _mm_unpacklo_epi16(temp0_233, temp0_235[0].q)
int32_t temp0_238[0x4] = _mm_unpackhi_epi16(temp0_233, temp0_235[0].q)
int32_t temp0_239[0x4] = _mm_unpacklo_epi16(temp0_234, temp0_236[0].q)
int32_t temp0_240[0x4] = _mm_unpackhi_epi16(temp0_234, temp0_236[0].q)
int32_t temp0_241[0x4] = _mm_unpacklo_epi32(temp0_229, temp0_237[0].q)
int32_t temp0_242[0x4] = _mm_unpackhi_epi32(temp0_229, temp0_237[0].q)
int32_t temp0_243[0x4] = _mm_unpacklo_epi32(temp0_230, temp0_238[0].q)
int32_t temp0_244[0x4] = _mm_unpackhi_epi32(temp0_230, temp0_238[0].q)
int32_t temp0_245[0x4] = _mm_unpacklo_epi32(temp0_231, temp0_239[0].q)
int32_t temp0_246[0x4] = _mm_unpackhi_epi32(temp0_231, temp0_239[0].q)
int32_t temp0_247[0x4] = _mm_unpacklo_epi32(temp0_232, temp0_240[0].q)
int32_t temp0_248[0x4] = _mm_unpackhi_epi32(temp0_232, temp0_240[0].q)
int32_t temp0_249[0x4] = __punpcklqdq_xmmdq_memdq(temp0_241, temp0_217)
int32_t temp0_250[0x4] = __punpckhqdq_xmmdq_memdq(temp0_241, temp0_217)
int32_t temp0_251[0x4] = __punpcklqdq_xmmdq_memdq(temp0_242, temp0_218)
int32_t temp0_252[0x4] = __punpckhqdq_xmmdq_memdq(temp0_242, temp0_218)
int32_t temp0_253[0x4] = __punpcklqdq_xmmdq_memdq(temp0_243, temp0_219)
int32_t temp0_254[0x4] = __punpckhqdq_xmmdq_memdq(temp0_243, temp0_219)
int32_t temp0_255[0x4] = __punpcklqdq_xmmdq_memdq(temp0_244, temp0_220)
int32_t temp0_256[0x4] = __punpckhqdq_xmmdq_memdq(temp0_244, temp0_220)
int32_t temp0_257[0x4] = __punpcklqdq_xmmdq_memdq(temp0_245, temp0_221)
int32_t temp0_258[0x4] = __punpckhqdq_xmmdq_memdq(temp0_245, temp0_221)
int32_t temp0_259[0x4] = __punpcklqdq_xmmdq_memdq(temp0_246, temp0_222)
int32_t temp0_260[0x4] = __punpckhqdq_xmmdq_memdq(temp0_246, temp0_222)
int32_t temp0_261[0x4] = __punpcklqdq_xmmdq_memdq(temp0_247, temp0_223)
int32_t temp0_262[0x4] = __punpckhqdq_xmmdq_memdq(temp0_247, temp0_223)
int32_t temp0_263[0x4] = __punpcklqdq_xmmdq_memdq(temp0_248, temp0_224)
int32_t temp0_264[0x4] = __punpckhqdq_xmmdq_memdq(temp0_248, temp0_224)
*arg1 = temp0_249
*result = temp0_250
*(arg1 + (arg2 << 1)) = temp0_251
*(result + (arg2 << 1)) = temp0_252
*(arg1 + (arg2 << 2)) = temp0_253
*(result + (arg2 << 2)) = temp0_254
*(arg1 + (r11 << 1)) = temp0_255
*(result + (r11 << 1)) = temp0_256
*(arg1 + (arg2 << 3)) = temp0_257
*(result + (arg2 << 3)) = temp0_258
*(arg1 + (r12_1 << 1)) = temp0_259
*(result + (r12_1 << 1)) = temp0_260
*(arg1 + (r11 << 2)) = temp0_261
*(result + (r11 << 2)) = temp0_262
*(arg1 + (r13_1 << 1)) = temp0_263
*(result + (r13_1 << 1)) = temp0_264
*var_d0
var_d0[1]
*(var_d0 + 0xa0)
*(var_d0 + 0x90)
*(var_d0 + 0x80)
*(var_d0 + 0x70)
*(var_d0 + 0x60)
*(var_d0 + 0x50)
*(var_d0 + 0x40)
*(var_d0 + 0x30)
*(var_d0 + 0x20)
*(var_d0 + 0x10)
var_d0[0x16]
return result
