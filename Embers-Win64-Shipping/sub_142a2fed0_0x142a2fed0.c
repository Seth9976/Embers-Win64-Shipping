// 函数: sub_142a2fed0
// 地址: 0x142a2fed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int32_t var_48[0x4] = zmm6
int32_t zmm7[0x4]
int32_t var_58[0x4] = zmm7
int32_t zmm8[0x4]
int32_t var_68[0x4] = zmm8
int32_t zmm9[0x4]
int32_t var_78[0x4] = zmm9
int32_t zmm10[0x4]
int32_t var_88[0x4] = zmm10
int32_t zmm11[0x4]
int32_t var_98[0x4] = zmm11
int32_t zmm12[0x4]
int32_t var_a8[0x4] = zmm12
int32_t zmm13[0x4]
int32_t var_b8[0x4] = zmm13
int32_t zmm14[0x4]
int32_t var_c8[0x4] = zmm14
int32_t zmm15[0x4]
int32_t var_d8[0x4] = zmm15
void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int32_t zmm1[0x4] = arg1[2]
int32_t var_2e8[0x4] = *arg1
int32_t var_2d8[0x4] = zmm1
int32_t var_2c8[0x4] = arg1[4]
int32_t var_2b8[0x4] = arg1[6]
int32_t var_2a8[0x4] = arg1[8]
int32_t var_298[0x4] = arg1[0xa]
int32_t var_288[0x4] = arg1[0xc]
int32_t var_278[0x4] = arg1[0xe]
int32_t var_268[0x4] = arg1[0x10]
int32_t var_258[0x4] = arg1[0x12]
int32_t var_248[0x4] = arg1[0x14]
int32_t var_238[0x4] = arg1[0x16]
int32_t var_228[0x4] = arg1[0x18]
int32_t var_218[0x4] = arg1[0x1a]
int32_t var_208[0x4] = arg1[0x1c]
int32_t var_1f8[0x4] = arg1[0x1e]
zmm1 = arg1[3]
int32_t var_1e8[0x4] = arg1[1]
int32_t var_1d8[0x4] = zmm1
int32_t var_1c8[0x4] = arg1[5]
int32_t var_1b8[0x4] = arg1[7]
int32_t var_1a8[0x4] = arg1[9]
int32_t var_198[0x4] = arg1[0xb]
int32_t var_188[0x4] = arg1[0xd]
int32_t var_178[0x4] = arg1[0xf]
int32_t var_168[0x4] = arg1[0x11]
int32_t var_158[0x4] = arg1[0x13]
int32_t var_148[0x4] = arg1[0x15]
int32_t var_138[0x4] = arg1[0x17]
int32_t var_128[0x4] = arg1[0x19]
int32_t var_118[0x4] = arg1[0x1b]
int32_t var_108[0x4] = arg1[0x1d]
int32_t var_f8[0x4] = arg1[0x1f]

if (arg4 == 0)
    sub_142a0a520(&var_2e8, &var_1e8)
    sub_142a0a520(&var_2e8, &var_1e8)
else if (arg4 == 1)
    sub_142a0a520(&var_2e8, &var_1e8)
    sub_142a08e10(&var_2e8, &var_1e8)
else if (arg4 == 2)
    sub_142a08e10(&var_2e8, &var_1e8)
    sub_142a0a520(&var_2e8, &var_1e8)
else if (arg4 == 3)
    sub_142a08e10(&var_2e8, &var_1e8)
    sub_142a08e10(&var_2e8, &var_1e8)

int32_t zmm0[0x4] = *u"       "
int64_t rdx_7 = sx.q(arg3)
int32_t zmm2[0x4] = _mm_adds_epi16(var_2d8, zmm0)
int32_t zmm3[0x4] = _mm_adds_epi16(var_2c8, zmm0)
int32_t zmm4[0x4] = _mm_adds_epi16(var_2b8, zmm0)
int32_t zmm5[0x4] = _mm_adds_epi16(var_2a8, zmm0)
zmm6 = _mm_adds_epi16(var_298, zmm0)
zmm7 = _mm_adds_epi16(var_288, zmm0)
zmm8 = _mm_adds_epi16(var_278, zmm0)
zmm9 = _mm_adds_epi16(var_268, zmm0)
zmm10 = _mm_adds_epi16(var_258, zmm0)
zmm11 = _mm_adds_epi16(var_248, zmm0)
zmm12 = _mm_adds_epi16(var_238, zmm0)
zmm13 = _mm_adds_epi16(var_228, zmm0)
zmm14 = _mm_adds_epi16(var_218, zmm0)
int32_t var_2f8[0x4] = zx.o(0)
int64_t rax_3 = sx.q((rdx_7 * 2).d)
zmm1 = __paddsw_xmmdq_memdq(zmm0, var_2e8)
zmm15 = _mm_adds_epi16(var_208, zmm0)
int32_t var_308[0x4] = _mm_srai_epi16(__paddsw_xmmdq_memdq(var_1f8, *u"       "), 6)
zmm0 = _mm_add_epi16(__punpcklbw_xmmdq_memdq(zx.o(*arg2), var_2f8), _mm_srai_epi16(zmm1, 6))
zmm2 = _mm_srai_epi16(zmm2, 6)
*arg2 = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rdx_7 + arg2)), 0), zmm2)
zmm3 = _mm_srai_epi16(zmm3, 6)
*(rdx_7 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rax_3 + arg2)), 0), zmm3)
*(rax_3 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
int64_t r13 = sx.q((rdx_7 * 3).d)
zmm4 = _mm_srai_epi16(zmm4, 6)
zmm5 = _mm_srai_epi16(zmm5, 6)
zmm6 = _mm_srai_epi16(zmm6, 6)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(arg2 + r13)), 0), zmm4)
zmm7 = _mm_srai_epi16(zmm7, 6)
*(arg2 + r13) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm8 = _mm_srai_epi16(zmm8, 6)
zmm9 = _mm_srai_epi16(zmm9, 6)
zmm10 = _mm_srai_epi16(zmm10, 6)
zmm11 = _mm_srai_epi16(zmm11, 6)
zmm12 = _mm_srai_epi16(zmm12, 6)
zmm13 = _mm_srai_epi16(zmm13, 6)
zmm14 = _mm_srai_epi16(zmm14, 6)
zmm15 = _mm_srai_epi16(zmm15, 6)
int64_t r12 = sx.q((rdx_7 << 2).d)
int64_t r15 = sx.q((rdx_7 * 5).d)
int64_t r14 = sx.q((rdx_7 * 3).d * 2)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r12 + arg2)), 0), zmm5)
*(r12 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r15 + arg2)), 0), zmm6)
int64_t* rsi = sx.q(rdx_7.d * 7)
*(r15 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r14 + arg2)), 0), zmm7)
int64_t* rdi = sx.q((rdx_7 << 3).d)
*(r14 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rsi + arg2)), 0), zmm8)
int64_t* rbx = sx.q((rdx_7 * 9).d)
*(rsi + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rdi + arg2)), 0), zmm9)
int64_t* r11 = sx.q((rdx_7 * 5).d * 2)
*(rdi + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rbx + arg2)), 0), zmm10)
*(rbx + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r11 + arg2)), 0), zmm11)
int64_t* r10 = sx.q(rdx_7.d * 0xb)
*(r11 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r10 + arg2)), 0), zmm12)
int64_t* r9_2 = sx.q((rdx_7 * 3).d << 2)
*(r10 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r9_2 + arg2)), 0), zmm13)
*(r9_2 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
int64_t* r8 = sx.q(rdx_7.d * 0xd)
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r8 + arg2)), 0), zmm14)
int64_t rdx_8 = sx.q(rdx_7.d * 0xe)
*(r8 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rdx_8 + arg2)), 0), zmm15)
*(rdx_8 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
int64_t* r12_1 = sx.q(arg3)
int64_t* rcx_8 = sx.q(arg3 * 0xf)
zmm0 = __paddw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*(rcx_8 + arg2)), 0), var_308)
zmm1 = var_1e8
*(rcx_8 + arg2) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = *u"       "
zmm1 = _mm_adds_epi16(zmm1, zmm0)
zmm2 = _mm_adds_epi16(var_1d8, zmm0)
zmm1 = _mm_srai_epi16(zmm1, 6)
zmm3 = _mm_adds_epi16(var_1c8, zmm0)
zmm2 = _mm_srai_epi16(zmm2, 6)
zmm4 = _mm_adds_epi16(var_1b8, zmm0)
zmm3 = _mm_srai_epi16(zmm3, 6)
zmm5 = _mm_adds_epi16(var_1a8, zmm0)
zmm4 = _mm_srai_epi16(zmm4, 6)
zmm6 = _mm_adds_epi16(var_198, zmm0)
zmm5 = _mm_srai_epi16(zmm5, 6)
zmm7 = _mm_adds_epi16(var_188, zmm0)
zmm6 = _mm_srai_epi16(zmm6, 6)
zmm8 = _mm_adds_epi16(var_178, zmm0)
zmm7 = _mm_srai_epi16(zmm7, 6)
zmm9 = _mm_adds_epi16(var_168, zmm0)
zmm8 = _mm_srai_epi16(zmm8, 6)
zmm10 = _mm_adds_epi16(var_158, zmm0)
zmm9 = _mm_srai_epi16(zmm9, 6)
zmm11 = _mm_adds_epi16(var_148, zmm0)
zmm10 = _mm_srai_epi16(zmm10, 6)
zmm12 = _mm_adds_epi16(var_138, zmm0)
zmm11 = _mm_srai_epi16(zmm11, 6)
zmm13 = _mm_adds_epi16(var_128, zmm0)
zmm12 = _mm_srai_epi16(zmm12, 6)
zmm14 = _mm_adds_epi16(var_118, zmm0)
zmm13 = _mm_srai_epi16(zmm13, 6)
zmm15 = _mm_adds_epi16(var_108, zmm0)
zmm14 = _mm_srai_epi16(zmm14, 6)
int32_t var_308_1[0x4] = _mm_srai_epi16(__paddsw_xmmdq_memdq(var_f8, *u"       "), 6)
zmm0 = _mm_add_epi16(__punpcklbw_xmmdq_memdq(zx.o(arg2[1]), var_2f8), zmm1)
zmm15 = _mm_srai_epi16(zmm15, 6)
arg2[1] = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r12_1 + &arg2[1])), 0), zmm2)
*(r12_1 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rax_3 + &arg2[1])), 0), zmm3)
*(rax_3 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(&arg2[1] + r13)), 0), zmm4)
*(&arg2[1] + r13) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r12 + &arg2[1])), 0), zmm5)
*(r12 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r15 + &arg2[1])), 0), zmm6)
*(r15 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r14 + &arg2[1])), 0), zmm7)
*(r14 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rsi + &arg2[1])), 0), zmm8)
*(rsi + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rdi + &arg2[1])), 0), zmm9)
*(rdi + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rbx + &arg2[1])), 0), zmm10)
*(rbx + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r11 + &arg2[1])), 0), zmm11)
*(r11 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r10 + &arg2[1])), 0), zmm12)
*(r10 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r9_2 + &arg2[1])), 0), zmm13)
*(r9_2 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(r8 + &arg2[1])), 0), zmm14)
*(r8 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = _mm_add_epi16(_mm_unpacklo_epi8(zx.o(*(rdx_8 + &arg2[1])), 0), zmm15)
*(rdx_8 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
zmm0 = __paddw_xmmdq_memdq(_mm_unpacklo_epi8(zx.o(*(rcx_8 + &arg2[1])), 0), var_308_1)
*(rcx_8 + &arg2[1]) = _mm_packus_epi16(zmm0, zmm0)[0].q
__security_check_cookie(rax_1 ^ &var_358)
return &arg2[1]
