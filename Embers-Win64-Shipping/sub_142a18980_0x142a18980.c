// 函数: sub_142a18980
// 地址: 0x142a18980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
int128_t* r13 = r11 + arg1
int64_t r10 = sx.q((r11 * 5).d)
int64_t rcx = sx.q((r11 << 2).d)
int64_t* r14_1 = arg1 - r10
int128_t* rsi = rcx + arg1
int64_t* rbp_1 = arg1 - rcx
int64_t rcx_1 = sx.q((r11 * 3).d)
uint128_t var_1a8 = *r14_1 | *rsi << 0x40
uint128_t zmm5 = *rbp_1 | *(rcx_1 + arg1) << 0x40
int128_t* rdi = rcx_1 + arg1
int64_t* r12_1 = arg1 - rcx_1
int64_t rcx_2 = sx.q((r11 * 2).d)
int64_t* rax_5 = arg1 - rcx_2
int128_t* r15 = rcx_2 + arg1
uint8_t result_4[0x10] = *r12_1 | *r15 << 0x40
int32_t zmm13[0x4] = *rax_5 | *r13 << 0x40
int64_t* rcx_4 = arg1 - r11
int32_t temp0[0x4] = __vpshufd_xmmdq_xmmdq_immb(zmm13, 0x4e)
uint128_t var_208 = zmm5
uint8_t zmm12[0x10] = *rcx_4 | *arg1 << 0x40
uint32_t rcx_5 = zx.d(*arg5)
uint128_t result_5 =
    __vpsubusb_xmmdq_xmmdq_xmmdq(zmm13, zmm12) | __vpsubusb_xmmdq_xmmdq_xmmdq(zmm12, zmm13)
int32_t temp0_3[0x4] = __vpshufd_xmmdq_xmmdq_immb(zmm12, 0x4e)
int16_t zmm4[0x8] =
    __vpsubusb_xmmdq_xmmdq_xmmdq(zmm12, temp0_3) | __vpsubusb_xmmdq_xmmdq_xmmdq(temp0_3, zmm12)
uint128_t zmm3 = __vpcmpeqb_xmmdq_xmmdq_xmmdq(
    __vpsubusb_xmmdq_xmmdq_xmmdq(
        __vpmaxub_xmmdq_xmmdq_xmmdq(result_5, __vpsrldq_xmmdq_xmmdq_immb(result_5, 8)), 
        _mm_broadcastb_epi8(rcx_5.b)), 
    zx.o(0))
uint8_t temp0_11[0x10] = __vpsubusb_xmmdq_xmmdq_xmmdq(zmm5, result_4)
int16_t result_3[0x8] = __vpsubusb_xmmdq_xmmdq_xmmdq(result_4, zmm13)
uint128_t result = __vpsubusb_xmmdq_xmmdq_xmmdq(zmm13, result_4)
uint8_t temp0_14[0x10] = __vpcmpeqb_xmmdq_xmmdq_xmmdq(result_5, result_5)
uint8_t zmm9[0x10] = zmm3 ^ temp0_14
zmm5 = __vpmaxub_xmmdq_xmmdq_xmmdq(result_3 | result, 
    temp0_11 | __vpsubusb_xmmdq_xmmdq_xmmdq(result_4, zmm5))
zmm3 = __vpsrlw_xmmdq_xmmdq_immb(
    (__vpsubusb_xmmdq_xmmdq_xmmdq(zmm13, temp0) | __vpsubusb_xmmdq_xmmdq_xmmdq(temp0, zmm13))
        & data_143600c90, 
    1)
uint8_t result_1[0x10] = result_4
result_3 = __vpaddusb_xmmdq_xmmdq_xmmdq(zmm4, zmm4)
uint32_t rax_7 = zx.d(*arg3)
zmm4 = __vpaddusb_xmmdq_xmmdq_xmmdq(zmm3, result_3)
uint32_t rax_8 = zx.d(*arg4)
uint8_t temp0_26[0x10] = __vpmaxub_xmmdq_xmmdq_xmmdq(zmm5, 
    __vpmaxub_xmmdq_xmmdq_xmmdq(result_5, 
        __vpcmpeqb_xmmdq_xmmdq_xmmdq(
            __vpsubusb_xmmdq_xmmdq_xmmdq(zmm4, _mm_broadcastb_epi8(rax_7.b)), zx.o(0)) ^ temp0_14))
uint8_t temp0_31[0x10] = __vpcmpeqb_xmmdq_xmmdq_xmmdq(
    __vpsubusb_xmmdq_xmmdq_xmmdq(
        __vpmaxub_xmmdq_xmmdq_xmmdq(temp0_26, __vpsrldq_xmmdq_xmmdq_immb(temp0_26, 8)), 
        _mm_broadcastb_epi8(zx.o(rax_8)[0].b)), 
    zx.o(0))
int16_t zmm15[0x8] = data_143600c70
uint8_t zmm2[0x10] = zmm15 ^ zmm13
uint8_t var_128[0x10] = zmm2
int32_t zmm10[0x4] = var_208
uint8_t zmm6[0x10] = zmm15 ^ zmm12
zmm4 = __vpsubsb_xmmdq_xmmdq_xmmdq(zmm15 ^ temp0_3, zmm6)
zmm5 = __vpaddsb_xmmdq_xmmdq_xmmdq(
    __vpaddsb_xmmdq_xmmdq_xmmdq(
        __vpaddsb_xmmdq_xmmdq_xmmdq(__vpsubsb_xmmdq_xmmdq_xmmdq(zmm2, zmm15 ^ temp0) & zmm9, zmm4), 
        zmm4), 
    zmm4) & temp0_31
result = __vpaddsb_xmmdq_xmmdq_memdq(zmm5, data_143600c40)
result_3 = __vpaddsb_xmmdq_xmmdq_memdq(zmm5, data_143600c20)
int16_t temp0_40[0x8] =
    __vpsraw_xmmdq_xmmdq_immb(__vpunpcklbw_xmmdq_xmmdq_xmmdq(zx.o(0), result), 0xb)
result = __vpaddsb_xmmdq_xmmdq_xmmdq(
    __vpacksswb_xmmdq_xmmdq_xmmdq(
        __vpsraw_xmmdq_xmmdq_immb(__vpunpcklbw_xmmdq_xmmdq_xmmdq(zx.o(0), result_3), 0xb), 
        __vpsubsw_xmmdq_xmmdq_xmmdq(zx.o(0), temp0_40)), 
    zmm6) ^ zmm15
zmm2 = __vpaddsw_xmmdq_xmmdq_memdq(temp0_40, data_1435ffba0)
uint128_t result_2 = result
zmm5 = __vpsraw_xmmdq_xmmdq_immb(__vpunpcklbw_xmmdq_xmmdq_xmmdq(zx.o(0), zmm9), 8)
    & not.o(__vpsraw_xmmdq_xmmdq_immb(zmm2, 1))
result = result_1
zmm3 = __vpsubusb_xmmdq_xmmdq_xmmdq(result, zmm12) | __vpsubusb_xmmdq_xmmdq_xmmdq(zmm12, result)
result_3 = __vpsubusb_xmmdq_xmmdq_xmmdq(zmm12, zmm10)
zmm3 = __vpmaxub_xmmdq_xmmdq_xmmdq(result_5, 
    __vpmaxub_xmmdq_xmmdq_xmmdq(zmm3, __vpsubusb_xmmdq_xmmdq_xmmdq(zmm10, zmm12) | result_3))
int64_t rcx_6 = sx.q((r11 * 3).d * 2)
int64_t* rbx_1 = arg1 - rcx_6
result_4 = __vpcmpeqb_xmmdq_xmmdq_xmmdq(
    __vpsubusb_xmmdq_xmmdq_memdq(
        __vpmaxub_xmmdq_xmmdq_xmmdq(zmm3, __vpsrldq_xmmdq_xmmdq_immb(zmm3, 8)), data_143600c10), 
    zx.o(0)) & temp0_31
uint128_t var_138 = zmm5
zmm15 = *rbx_1 | *(r10 + arg1) << 0x40
int64_t rdx_1 = sx.q(r11.d * 7)
int128_t* r8 = rcx_6 + arg1
int64_t* r9_1 = arg1 - rdx_1
uint8_t result_7[0x10] = result_4
int16_t var_1b8[0x8] = zmm15
result_5 = *r9_1 | *r8 << 0x40
uint128_t result_6 = result_5
result_3 = __vpsubusb_xmmdq_xmmdq_xmmdq(zmm12, result_5)
zmm6 = *(arg1 - sx.q((r11 << 3).d)) | *(rdx_1 + arg1) << 0x40
zmm3 = result_3 | __vpsubusb_xmmdq_xmmdq_xmmdq(result_5, zmm12)
result_3 = __vpsubusb_xmmdq_xmmdq_xmmdq(zmm6, zmm12)
zmm5 = __vpmaxub_xmmdq_xmmdq_xmmdq(zmm3, __vpsubusb_xmmdq_xmmdq_xmmdq(zmm12, zmm6) | result_3)
zmm4 = __vpsubusb_xmmdq_xmmdq_xmmdq(var_1a8, zmm12) | __vpsubusb_xmmdq_xmmdq_xmmdq(zmm12, var_1a8)
result = __vpsubusb_xmmdq_xmmdq_xmmdq(zmm15, zmm12)
zmm3 = __vpmaxub_xmmdq_xmmdq_xmmdq(zmm5, 
    __vpmaxub_xmmdq_xmmdq_xmmdq(zmm4, __vpsubusb_xmmdq_xmmdq_xmmdq(zmm12, zmm15) | result))
result_3 = result_1
uint128_t var_168 = __vpcmpeqb_xmmdq_xmmdq_xmmdq(
    __vpsubusb_xmmdq_xmmdq_memdq(
        __vpmaxub_xmmdq_xmmdq_xmmdq(zmm3, __vpsrldq_xmmdq_xmmdq_immb(zmm3, 8)), data_143600c10), 
    zx.o(0)) & result_4
uint8_t temp0_75[0x10] = __vpunpcklbw_xmmdq_xmmdq_xmmdq(zmm12, zx.o(0))
zmm4 = __vpunpcklbw_xmmdq_xmmdq_xmmdq(zmm13, zx.o(0))
uint8_t temp0_77[0x10] = __vpunpckhbw_xmmdq_xmmdq_xmmdq(zmm13, zx.o(0))
uint128_t var_1d8 = __vpunpcklbw_xmmdq_xmmdq_xmmdq(zmm6, zx.o(0))
uint128_t var_1e8 = __vpunpcklbw_xmmdq_xmmdq_xmmdq(zmm10, zx.o(0))
result = __vpunpcklbw_xmmdq_xmmdq_xmmdq(result_3, zx.o(0))
int16_t temp0_82[0x8] =
    __vpaddw_xmmdq_xmmdq_xmmdq(__vpunpckhbw_xmmdq_xmmdq_xmmdq(result_3, zx.o(0)), temp0_77)
zmm10 = __vpunpckhbw_xmmdq_xmmdq_xmmdq(zmm12, zx.o(0))
result = __vpaddw_xmmdq_xmmdq_xmmdq(zmm4, result)
int32_t zmm8[0x4] = __vpunpcklbw_xmmdq_xmmdq_xmmdq(result_5, zx.o(0))
uint8_t temp0_86[0x10] = __vpunpcklbw_xmmdq_xmmdq_xmmdq(zmm15, zx.o(0))
uint8_t temp0_87[0x10] = __vpunpcklbw_xmmdq_xmmdq_xmmdq(var_1a8, zx.o(0))
int16_t var_198[0x8] = temp0_77
zmm3 = __vpunpckhbw_xmmdq_xmmdq_xmmdq(var_208, zx.o(0))
uint8_t temp0_89[0x10] = __vpunpckhbw_xmmdq_xmmdq_xmmdq(var_1a8, zx.o(0))
zmm13 = __vpunpckhbw_xmmdq_xmmdq_xmmdq(zmm15, zx.o(0))
zmm15 = __vpunpckhbw_xmmdq_xmmdq_xmmdq(zmm6, zx.o(0))
zmm6 = __vpaddw_xmmdq_xmmdq_xmmdq(result, temp0_75)
result = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_89, zmm3)
zmm3 = __vpaddw_xmmdq_xmmdq_memdq(temp0_87, var_1e8)
result_5 = __vpunpckhbw_xmmdq_xmmdq_xmmdq(result_5, zx.o(0))
zmm5 = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_82, zmm10)
int16_t temp0_98[0x8] =
    __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(result_5, zmm13), result)
result = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_86, zmm8)
int16_t var_188[0x8] = zmm4
int16_t temp0_100[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_98, zmm5)
zmm2 = __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(zmm3, result), zmm6)
zmm9 = __vpaddw_xmmdq_xmmdq_memdq(__vpaddw_xmmdq_xmmdq_xmmdq(zmm5, zmm6), data_143600c00)
int16_t temp0_105[0x8] = __vpaddw_xmmdq_xmmdq_memdq(temp0_75, var_1d8)
zmm8 = __vpaddw_xmmdq_xmmdq_memdq(__vpaddw_xmmdq_xmmdq_xmmdq(temp0_100, zmm2), data_143600940)
zmm3 = __vpsrlw_xmmdq_xmmdq_immb(__vpaddw_xmmdq_xmmdq_xmmdq(temp0_105, zmm8), 4)
result = __vpsrlw_xmmdq_xmmdq_immb(
    __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(zmm15, zmm10), zmm8), 4)
int16_t temp0_113[0x8] = __vpaddw_xmmdq_xmmdq_memdq(temp0_75, var_1e8)
uint128_t var_e8 = __vpackuswb_xmmdq_xmmdq_xmmdq(zmm3, result)
zmm3 = __vpsrlw_xmmdq_xmmdq_immb(__vpaddw_xmmdq_xmmdq_xmmdq(temp0_113, zmm9), 3)
zmm2 = __vpaddw_xmmdq_xmmdq_xmmdq(__vpunpckhbw_xmmdq_xmmdq_xmmdq(var_208, zx.o(0)), zmm10)
zmm10 = var_1d8
uint128_t var_f8 = __vpackuswb_xmmdq_xmmdq_xmmdq(zmm3, 
    __vpsrlw_xmmdq_xmmdq_immb(__vpaddw_xmmdq_xmmdq_xmmdq(zmm2, zmm9), 3))
result_4 = __vpsubw_xmmdq_xmmdq_xmmdq(zmm8, __vpunpcklbw_xmmdq_xmmdq_xmmdq(result_6, zx.o(0)))
zmm6 = __vpsubw_xmmdq_xmmdq_xmmdq(zmm8, result_5)
result_5 = result_1
int16_t temp0_125[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(zmm10, zmm10)
zmm3 = __vpsrlw_xmmdq_xmmdq_immb(
    __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_memdq(temp0_125, var_188), zmm6), 4)
int16_t temp0_129[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_125, zmm10)
zmm6 = __vpsubw_xmmdq_xmmdq_xmmdq(zmm6, zmm13)
zmm5 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm15, zmm15)
uint128_t var_118 = __vpackuswb_xmmdq_xmmdq_xmmdq(zmm3, 
    __vpsrlw_xmmdq_xmmdq_immb(
        __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_memdq(zmm5, var_198), result_4), 4))
result_3 = __vpunpcklbw_xmmdq_xmmdq_xmmdq(result_5, zx.o(0))
uint128_t var_148 = __vpsubw_xmmdq_xmmdq_xmmdq(zmm9, result_3)
uint8_t temp0_138[0x10] = __vpunpckhbw_xmmdq_xmmdq_xmmdq(result_5, zx.o(0))
uint128_t var_158 = __vpsubw_xmmdq_xmmdq_xmmdq(zmm9, temp0_138)
result_4 = __vpsubw_xmmdq_xmmdq_xmmdq(result_4, __vpunpcklbw_xmmdq_xmmdq_xmmdq(var_1b8, zx.o(0)))
zmm3 = __vpsrlw_xmmdq_xmmdq_immb(
    __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(temp0_129, result_3), zmm6), 4)
zmm5 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm5, zmm15)
zmm13 = __vpackuswb_xmmdq_xmmdq_xmmdq(zmm3, 
    __vpsrlw_xmmdq_xmmdq_immb(
        __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(zmm5, temp0_138), result_4), 4))
int16_t temp0_150[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_129, zmm10)
result = __vpaddw_xmmdq_xmmdq_memdq(temp0_150, var_1e8)
zmm6 = __vpsubw_xmmdq_xmmdq_xmmdq(zmm6, temp0_89)
zmm3 = __vpsrlw_xmmdq_xmmdq_immb(__vpaddw_xmmdq_xmmdq_xmmdq(result, zmm6), 4)
zmm8 = __vpunpckhbw_xmmdq_xmmdq_xmmdq(var_208, zx.o(0))
result_4 = __vpsubw_xmmdq_xmmdq_xmmdq(result_4, temp0_87)
int16_t temp0_157[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(temp0_150, zmm10)
zmm6 = __vpsubw_xmmdq_xmmdq_xmmdq(zmm6, zmm8)
zmm5 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm5, zmm15)
zmm2 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm5, zmm8)
zmm8 = __vpaddw_xmmdq_xmmdq_memdq(temp0_157, var_1d8)
result = __vpaddw_xmmdq_xmmdq_xmmdq(zmm2, result_4)
result_4 = __vpsubw_xmmdq_xmmdq_memdq(result_4, var_1e8)
result_5 = __vpackuswb_xmmdq_xmmdq_xmmdq(zmm3, __vpsrlw_xmmdq_xmmdq_immb(result, 4))
zmm3 = __vpsrlw_xmmdq_xmmdq_immb(
    __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(temp0_157, temp0_87), zmm6), 4)
zmm5 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm5, zmm15)
zmm2 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm5, temp0_89)
zmm12 = __vpshufd_xmmdq_memdq_immb(var_168, 0x44)
result_3 = __vpsrlw_xmmdq_xmmdq_immb(__vpaddw_xmmdq_xmmdq_xmmdq(zmm2, result_4), 4)
result = __vpaddw_xmmdq_xmmdq_memdq(zmm8, var_1d8)
zmm10 = __vpackuswb_xmmdq_xmmdq_xmmdq(zmm3, result_3)
uint8_t temp0_176[0x10] = __vpunpckhbw_xmmdq_xmmdq_xmmdq(result_1, zx.o(0))
result_3 = __vpunpcklbw_xmmdq_xmmdq_xmmdq(result_1, zx.o(0))
zmm9 = __vpaddw_xmmdq_xmmdq_xmmdq(zmm5, zmm15)
zmm5 = __vpsubw_xmmdq_xmmdq_xmmdq(zmm6, temp0_176)
zmm6 = __vpsubw_xmmdq_xmmdq_xmmdq(result_4, result_3)
result_4 = __vpshufd_xmmdq_memdq_immb(result_7, 0x44)
zmm4 = __vpsrlw_xmmdq_xmmdq_immb(
    __vpaddw_xmmdq_xmmdq_xmmdq(
        __vpaddw_xmmdq_xmmdq_xmmdq(result, __vpunpcklbw_xmmdq_xmmdq_xmmdq(result_6, zx.o(0))), 
        __vpsubw_xmmdq_xmmdq_memdq(zmm5, var_198)), 
    4)
result_3 = __vpunpckhbw_xmmdq_xmmdq_xmmdq(result_6, zx.o(0))
result = (__vpackuswb_xmmdq_xmmdq_xmmdq(zmm4, 
    __vpsrlw_xmmdq_xmmdq_immb(
        __vpaddw_xmmdq_xmmdq_xmmdq(
            __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(zmm9, zmm15), result_3), 
            __vpsubw_xmmdq_xmmdq_xmmdq(zmm6, var_188)), 
        4)) & zmm12) | (zmm12 & not.o(result_6))
*r9_1 = result.q
*r8 = *r8 | result.q << 0x40
zmm3 = __vpsrlw_xmmdq_xmmdq_immb(
    __vpaddw_xmmdq_xmmdq_xmmdq(
        __vpaddw_xmmdq_xmmdq_xmmdq(zmm8, __vpunpcklbw_xmmdq_xmmdq_xmmdq(var_1b8, zx.o(0))), zmm5), 
    4)
int16_t temp0_200[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(
    __vpaddw_xmmdq_xmmdq_xmmdq(zmm9, __vpunpckhbw_xmmdq_xmmdq_xmmdq(var_1b8, zx.o(0))), zmm6)
zmm6 = var_148
result_3 = (__vpackuswb_xmmdq_xmmdq_xmmdq(zmm3, __vpsrlw_xmmdq_xmmdq_immb(temp0_200, 4)) & zmm12)
    | (zmm12 & not.o(var_1b8))
*rbx_1 = result_3[0].q
*(r10 + arg1) = *(r10 + arg1) | result_3.q << 0x40
result = (zmm10 & zmm12) | (zmm12 & not.o(var_1a8))
*r14_1 = result.q
*rsi = *rsi | result.q << 0x40
zmm2 = result_5 & zmm12
result_5 = result_1
result = zmm2 | (zmm12 & not.o(var_208))
*rbp_1 = result.q
*rdi = *rdi | result.q << 0x40
zmm8 = __vpaddw_xmmdq_xmmdq_xmmdq(var_1e8, var_1e8)
zmm2 = __vpaddw_xmmdq_xmmdq_xmmdq(
    __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(zmm8, var_1e8), 
        __vpunpcklbw_xmmdq_xmmdq_xmmdq(result_5, zx.o(0))), 
    __vpsubw_xmmdq_xmmdq_memdq(var_158, var_198))
result = __vpunpckhbw_xmmdq_xmmdq_xmmdq(var_208, zx.o(0))
uint8_t temp0_210[0x10] = __vpaddw_xmmdq_xmmdq_xmmdq(result, result)
zmm3 = __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(temp0_210, result), temp0_176)
result = (zmm12 & not.o((__vpackuswb_xmmdq_xmmdq_xmmdq(__vpsrlw_xmmdq_xmmdq_immb(zmm2, 3), 
    __vpsrlw_xmmdq_xmmdq_immb(
        __vpaddw_xmmdq_xmmdq_xmmdq(zmm3, __vpsubw_xmmdq_xmmdq_xmmdq(zmm6, var_188)), 3)) & result_4)
    | (result_4 & not.o(result_5)))) | (zmm13 & zmm12)
*r12_1 = result.q
*r15 = *r15 | result.q << 0x40
zmm3 = __vpaddsb_xmmdq_xmmdq_memdq(
    __vpacksswb_xmmdq_xmmdq_xmmdq(var_138, __vpsubsw_xmmdq_xmmdq_xmmdq(zx.o(0), var_138)), var_128)
    ^ data_143600c70
zmm2 = __vpaddw_xmmdq_xmmdq_memdq(temp0_210, var_198)
result = __vpaddw_xmmdq_xmmdq_xmmdq(__vpaddw_xmmdq_xmmdq_xmmdq(zmm8, var_188), var_158)
int16_t temp0_224[0x8] = __vpaddw_xmmdq_xmmdq_xmmdq(zmm2, zmm6)
zmm2 = (zmm12 & not.o((result_4 & not.o(zmm3)) | (__vpackuswb_xmmdq_xmmdq_xmmdq(
    __vpsrlw_xmmdq_xmmdq_immb(result, 3), __vpsrlw_xmmdq_xmmdq_immb(temp0_224, 3)) & result_4)))
    | (var_118 & zmm12)
*rax_5 = zmm2[0].q
*r13 = *r13 | zmm2.q << 0x40
result_3 = (zmm12 & not.o((result_4 & not.o(result_2)) | (var_f8 & result_4))) | (var_e8 & zmm12)
result = result_3
*rcx_4 = result_3[0].q
*arg1 = *arg1 | result.q << 0x40
return result
