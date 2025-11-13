// 函数: _input_s_l
// 地址: 0x140e43560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int16_t* rbx = *(arg1 + 0x2538)
void* r15 = arg1
int32_t i = 0
uint32_t* rdi_1 = sx.q((*(arg1 + 0x2510) * arg2) << 6) + *(arg1 + 0x2568)
uint32_t* var_298 = rdi_1

if (*(arg1 + 0x2518) s> 0)
    void* r14_1 = arg1 + 0x2540
    
    do
        sub_140e3df00(rbx, rdi_1, zx.q(*r14_1))
        rbx -= -0x80
        r14_1 += 4
        rdi_1 = &rdi_1[0x10]
        i += 1
    while (i s< *(r15 + 0x2518))
    
    var_298 = rdi_1

int32_t i_2 = 0
int64_t i_3 = sx.q(i)
int64_t result
int32_t i_1

do
    int32_t var_248
    int32_t var_244
    int32_t var_240
    int32_t var_23c
    int32_t var_238
    int32_t var_234
    int32_t var_230
    int32_t var_22c
    int32_t var_228
    int32_t var_218
    int32_t var_214
    int32_t var_210
    int32_t var_20c
    int32_t var_208
    int32_t var_204
    int32_t var_200
    int32_t var_1fc
    int32_t var_1f8
    int32_t var_1f4
    int32_t var_1f0
    int32_t var_1ec
    int32_t var_1e8
    int32_t var_1e4
    int32_t var_1e0
    int32_t var_1dc
    int32_t var_1d8
    int32_t var_1c8
    int32_t var_1c4
    int32_t var_1c0
    int32_t var_1bc
    int32_t var_1b8
    int32_t var_1b4
    int32_t var_1b0
    int32_t var_1ac
    int32_t var_198
    int32_t var_194
    int32_t var_190
    int32_t var_18c
    int32_t var_188
    int32_t var_184
    int32_t var_180
    int32_t var_17c
    int32_t var_178
    int32_t var_174
    int32_t var_170
    int32_t var_16c
    int32_t var_168
    int32_t var_164
    int32_t var_160
    int32_t var_15c
    int32_t var_158
    int32_t rax_83
    int128_t zmm0
    
    switch (zx.d(*(sx.q(*(r15 + (i_3 << 2) + 0x2540)) + 0x142ed672f)) - 0x11)
        case 0
            var_248 = sx.d(*rbx)
            __builtin_memset(&var_244, 0, 0xfc)
        case 1
            int32_t rcx_5 = sx.d(rbx[1])
            var_248 = sx.d(*rbx)
            var_244.q = 0
            var_23c = 0
            __builtin_memset(&var_234, 0, 0x1c)
            var_238 = (rcx_5 * 0x1aa + 0x200) s>> 0xa
            var_214.q = 0
            var_20c = 0
            var_218 = (rcx_5 * 0x17 + 0x200) s>> 0xa
            int32_t rcx_6 = sx.d(rbx[1])
            __builtin_memset(&var_204, 0, 0x1c)
            __builtin_memset(&var_1e4, 0, 0x9c)
            var_208 = (rcx_6 * 0x3a0 + 0x200) s>> 0xa
            var_1e8 = (0x200 - rcx_6 * 0x4b) s>> 0xa
        case 0x11
            int32_t rdx_2 = sx.d(rbx[8])
            zmm0 = zx.o(0)
            int32_t rax_20 = sx.d(rbx[9])
            int32_t rcx_9 = sx.d(rbx[1])
            var_248 = sx.d(*rbx)
            var_240 = 0
            int32_t r8_4 = (rax_20 * 0x1aa + 0x200) s>> 0xa
            int32_t r9_3 = (rax_20 * 0x17 + 0x200) s>> 0xa
            var_230 = 0
            var_228.o = zmm0
            var_244 = (rdx_2 * 0x1aa + 0x200) s>> 0xa
            var_210 = 0
            var_1c4 = 0
            var_1bc = 0
            var_1b4 = 0
            __builtin_memset(&var_1ac, 0, 0x14)
            var_23c = (rdx_2 * 0x17 + 0x200) s>> 0xa
            var_194 = 0
            var_238 = (rcx_9 * 0x1aa + 0x200) s>> 0xa
            var_234 = (r8_4 * 0x1aa + 0x200) s>> 0xa
            var_22c = (r8_4 * 0x17 + 0x200) s>> 0xa
            var_218 = (rcx_9 * 0x17 + 0x200) s>> 0xa
            var_214 = (r9_3 * 0x1aa + 0x200) s>> 0xa
            var_20c = (r9_3 * 0x17 + 0x200) s>> 0xa
            var_1c8 = (rdx_2 * 0x3a0 + 0x200) s>> 0xa
            var_1c0 = (0x200 - rdx_2 * 0x4b) s>> 0xa
            var_1b8 = (r8_4 * 0x3a0 + 0x200) s>> 0xa
            var_1b0 = (0x200 - r8_4 * 0x4b) s>> 0xa
            var_198 = (r9_3 * 0x3a0 + 0x200) s>> 0xa
            var_190 = (0x200 - r9_3 * 0x4b) s>> 0xa
            int32_t rcx_16 = sx.d(rbx[1])
            int32_t rax_58 = sx.d(rbx[9])
            var_18c = 0
            var_200 = 0
            var_1f8.o = zmm0
            var_184 = 0
            int32_t rdx_5 = (rax_58 * 0x3a0 + 0x200) s>> 0xa
            int32_t r8_6 = (0x200 - rax_58 * 0x4b) s>> 0xa
            var_164 = 0
            var_208 = (rcx_16 * 0x3a0 + 0x200) s>> 0xa
            var_204 = (rdx_5 * 0x1aa + 0x200) s>> 0xa
            var_1fc = (rdx_5 * 0x17 + 0x200) s>> 0xa
            var_1e8 = (0x200 - rcx_16 * 0x4b) s>> 0xa
            var_1e4 = (r8_6 * 0x1aa + 0x200) s>> 0xa
            var_1dc = (r8_6 * 0x17 + 0x200) s>> 0xa
            var_188 = (rdx_5 * 0x3a0 + 0x200) s>> 0xa
            var_180 = (0x200 - rdx_5 * 0x4b) s>> 0xa
            var_168 = (r8_6 * 0x3a0 + 0x200) s>> 0xa
            rax_83 = r8_6 * 0x4b
        label_140e43989:
            var_1e0 = 0
            var_1d8.o = zmm0
            goto label_140e4399c
        case 0x21
            int32_t r8_7 = sx.d(rbx[8])
            zmm0 = zx.o(0)
            int32_t rax_84 = sx.d(rbx[9])
            int32_t rcx_23 = sx.d(rbx[1])
            int32_t r10_1 = sx.d(rbx[0x11])
            int32_t rdx_6 = sx.d(rbx[0x10])
            var_248 = sx.d(*rbx)
            var_240 = 0
            int32_t r9_6 = (rax_84 * 0x1aa + 0x200) s>> 0xa
            int32_t r11_3 = (rax_84 * 0x17 + 0x200) s>> 0xa
            var_230 = 0
            var_228.o = zmm0
            var_244 = (r8_7 * 0x1aa + 0x200) s>> 0xa
            var_210 = 0
            var_1c4 = rdx_6
            var_1bc = 0
            __builtin_memset(&var_1ac, 0, 0x14)
            var_23c = (r8_7 * 0x17 + 0x200) s>> 0xa
            var_238 = (rcx_23 * 0x1aa + 0x200) s>> 0xa
            var_234 = (r9_6 * 0x1aa + 0x200) s>> 0xa
            var_22c = (r9_6 * 0x17 + 0x200) s>> 0xa
            var_218 = (rcx_23 * 0x17 + 0x200) s>> 0xa
            var_214 = (r11_3 * 0x1aa + 0x200) s>> 0xa
            var_20c = (r11_3 * 0x17 + 0x200) s>> 0xa
            var_1c8 = (r8_7 * 0x3a0 + 0x200) s>> 0xa
            var_1c0 = (0x200 - r8_7 * 0x4b) s>> 0xa
            var_1b8 = (r9_6 * 0x3a0 + 0x200) s>> 0xa
            var_1b4 = (r10_1 * 0x1aa + 0x200) s>> 0xa
            var_1b0 = (0x200 - r9_6 * 0x4b) s>> 0xa
            var_198 = (r11_3 * 0x3a0 + 0x200) s>> 0xa
            int32_t r8_8 = sx.d(rbx[0x11])
            var_194 = (r10_1 * 0x17 + 0x200) s>> 0xa
            var_18c = 0
            int32_t rax_128 = sx.d(rbx[9])
            var_190 = (0x200 - r11_3 * 0x4b) s>> 0xa
            int32_t rcx_30 = sx.d(rbx[1])
            var_200 = 0
            int32_t rdx_9 = (rax_128 * 0x3a0 + 0x200) s>> 0xa
            int32_t r9_8 = (0x200 - rax_128 * 0x4b) s>> 0xa
            var_1f8.o = zmm0
            var_208 = (rcx_30 * 0x3a0 + 0x200) s>> 0xa
            var_204 = (rdx_9 * 0x1aa + 0x200) s>> 0xa
            var_1fc = (rdx_9 * 0x17 + 0x200) s>> 0xa
            var_1e8 = (0x200 - rcx_30 * 0x4b) s>> 0xa
            var_1e4 = (r9_8 * 0x1aa + 0x200) s>> 0xa
            var_1dc = (r9_8 * 0x17 + 0x200) s>> 0xa
            var_188 = (rdx_9 * 0x3a0 + 0x200) s>> 0xa
            var_184 = (r8_8 * 0x3a0 + 0x200) s>> 0xa
            var_180 = (0x200 - rdx_9 * 0x4b) s>> 0xa
            var_168 = (r9_8 * 0x3a0 + 0x200) s>> 0xa
            var_164 = (0x200 - r8_8 * 0x4b) s>> 0xa
            rax_83 = r9_8 * 0x4b
            goto label_140e43989
        case 0x22
            int32_t r8_9 = sx.d(rbx[8])
            zmm0 = zx.o(0)
            int32_t rax_157 = sx.d(rbx[9])
            int32_t rcx_37 = sx.d(rbx[1])
            int32_t r10_2 = sx.d(rbx[0x11])
            int32_t rdx_10 = sx.d(rbx[0x10])
            var_248 = sx.d(*rbx)
            var_240 = 0
            int32_t r9_11 = (rax_157 * 0x1aa + 0x200) s>> 0xa
            int32_t r11_6 = (rax_157 * 0x17 + 0x200) s>> 0xa
            var_230 = 0
            var_228.o = zmm0
            var_244 = (r8_9 * 0x1aa + 0x200) s>> 0xa
            var_210 = 0
            var_1c4 = rdx_10
            var_1bc = 0
            __builtin_memset(&var_1ac, 0, 0x14)
            var_23c = (r8_9 * 0x17 + 0x200) s>> 0xa
            var_238 = (rcx_37 * 0x1aa + 0x200) s>> 0xa
            var_234 = (r9_11 * 0x1aa + 0x200) s>> 0xa
            var_22c = (r9_11 * 0x17 + 0x200) s>> 0xa
            var_218 = (rcx_37 * 0x17 + 0x200) s>> 0xa
            var_214 = (r11_6 * 0x1aa + 0x200) s>> 0xa
            var_20c = (r11_6 * 0x17 + 0x200) s>> 0xa
            var_1c8 = (r8_9 * 0x3a0 + 0x200) s>> 0xa
            var_1c0 = (0x200 - r8_9 * 0x4b) s>> 0xa
            var_1b8 = (r9_11 * 0x3a0 + 0x200) s>> 0xa
            var_1b4 = (r10_2 * 0x1aa + 0x200) s>> 0xa
            var_1b0 = (0x200 - r9_11 * 0x4b) s>> 0xa
            var_198 = (r11_6 * 0x3a0 + 0x200) s>> 0xa
            int32_t r10_3 = sx.d(rbx[0xa])
            int32_t rdx_11 = sx.d(rbx[1])
            int32_t rdi_2 = sx.d(rbx[0x11])
            var_194 = (r10_2 * 0x17 + 0x200) s>> 0xa
            var_18c = 0
            var_174 = sx.d(rbx[0x12])
            int32_t rax_201 = sx.d(rbx[9])
            var_190 = (0x200 - r11_6 * 0x4b) s>> 0xa
            var_1f8 = sx.d(rbx[2])
            int32_t r8_12 = (rax_201 * 0x3a0 + 0x200) s>> 0xa
            int32_t r11_8 = (0x200 - rax_201 * 0x4b) s>> 0xa
            var_200 = 0
            var_1f0 = 0
            var_1e0 = 0
            var_1d8.o = zmm0
            var_208 = (rdx_11 * 0x3a0 + 0x200) s>> 0xa
            var_204 = (r8_12 * 0x1aa + 0x200) s>> 0xa
            var_1fc = (r8_12 * 0x17 + 0x200) s>> 0xa
            var_1f4 = (r10_3 * 0x1aa + 0x200) s>> 0xa
            var_1ec = (r10_3 * 0x17 + 0x200) s>> 0xa
            var_1e8 = (0x200 - rdx_11 * 0x4b) s>> 0xa
            var_1e4 = (r11_8 * 0x1aa + 0x200) s>> 0xa
            var_1dc = (r11_8 * 0x17 + 0x200) s>> 0xa
            var_188 = (r8_12 * 0x3a0 + 0x200) s>> 0xa
            var_184 = (rdi_2 * 0x3a0 + 0x200) s>> 0xa
            var_180 = (0x200 - r8_12 * 0x4b) s>> 0xa
            var_178 = (r10_3 * 0x3a0 + 0x200) s>> 0xa
            var_170 = (0x200 - r10_3 * 0x4b) s>> 0xa
            var_16c = 0
            var_168 = (r11_8 * 0x3a0 + 0x200) s>> 0xa
            var_164 = (0x200 - rdi_2 * 0x4b) s>> 0xa
            rax_83 = r11_8 * 0x4b
        label_140e4399c:
            __builtin_memset(&var_17c, 0, 0x14)
            var_15c = 0
            var_160 = (0x200 - rax_83) s>> 0xa
            var_158.o = zmm0
        case 0x23
            sub_140e34ac0(&var_248, &var_1c8, rbx)
            sub_140e37420(&var_208, &var_188, rbx)
        case 0x33
            sub_140e34ca0(&var_248, &var_1c8, rbx)
            sub_140e37600(&var_208, &var_188, rbx)
        case 0x43
            sub_140e34f50(&var_248, &var_1c8, rbx)
            sub_140e378b0(&var_208, &var_188, rbx)
        case 0x44
            sub_140e35250(&var_248, &var_1c8, rbx)
            sub_140e378b0(&var_208, &var_188, rbx)
        case 0x45
            sub_140e35610(&var_248, &var_1c8, rbx)
            sub_140e37bb0(&var_208, &var_188, rbx)
        case 0x55
            sub_140e35a60(&var_248, &var_1c8, rbx)
            sub_140e37f50(&var_208, &var_188, rbx)
        case 0x65
            sub_140e35fc0(&var_248, &var_1c8, rbx)
            sub_140e383e0(&var_208, &var_188, rbx)
        case 0x66
            sub_140e35fc0(&var_248, &var_1c8, rbx)
            sub_140e388e0(&var_208, &var_188, rbx)
        case 0x67
            sub_140e36590(&var_248, &var_1c8, rbx)
            sub_140e38ec0(&var_208, &var_188, rbx)
        case 0x77
            sub_140e36c40(&var_248, &var_1c8, rbx)
            sub_140e395d0(&var_208, &var_188, rbx)
    
    int16_t rax_241 = var_248.w + var_1c8.w
    int16_t rdx_33 = var_244.w + var_1c4.w
    int16_t rax_243 = var_23c.w + var_1bc.w
    int16_t rax_245 = var_238.w + var_1b8.w
    int16_t rax_247 = var_230.w + var_1b0.w
    int32_t var_1a8
    int16_t rax_248 = var_1a8.w + var_228.w
    int32_t var_224
    int32_t var_1a4
    int16_t rax_249 = var_1a4.w + var_224.w
    int32_t var_220
    int32_t var_1a0
    int16_t rax_250 = var_1a0.w + var_220.w
    int32_t var_21c
    int32_t var_19c
    int16_t rax_251 = var_19c.w + var_21c.w
    int16_t rax_253 = var_218.w + var_198.w
    int16_t rdx_35 = var_1c0.w + var_240.w
    int16_t rax_255 = var_214.w + var_194.w
    int16_t rdx_37 = var_1b4.w + var_234.w
    int16_t rdx_39 = var_1ac.w + var_22c.w
    int16_t rax_257 = var_210.w + var_190.w
    int16_t rax_259 = var_20c.w + var_18c.w
    var_228 -= var_1a8
    var_248 -= var_1c8
    var_244 -= var_1c4
    var_240 -= var_1c0
    var_23c -= var_1bc
    var_238 -= var_1b8
    var_234 -= var_1b4
    var_230 -= var_1b0
    var_22c -= var_1ac
    var_224 -= var_1a4
    var_210 -= var_190
    var_20c -= var_18c
    int16_t rax_269 = var_204.w + var_184.w
    var_218 -= var_198
    var_214 -= var_194
    int16_t rdx_42 = var_188.w + var_208.w
    int16_t rcx_75 = var_1e8.w + var_168.w
    int16_t rax_271 = var_200.w + var_180.w
    int16_t rax_273 = var_1f4.w + var_174.w
    int16_t rax_275 = var_1ec.w + var_16c.w
    int16_t rax_277 = var_1e0.w + var_160.w
    int16_t rax_278 = var_158.w + var_1d8.w
    int16_t rdx_44 = var_17c.w + var_1fc.w
    int16_t rdx_46 = var_178.w + var_1f8.w
    int16_t rcx_77 = var_1e4.w + var_164.w
    int16_t rdx_48 = var_170.w + var_1f0.w
    var_21c -= var_19c
    var_220 -= var_1a0
    int16_t rcx_79 = var_1dc.w + var_15c.w
    int32_t var_1d4
    int32_t var_154
    int16_t rax_279 = var_154.w + var_1d4.w
    int32_t var_1d0
    int32_t var_150
    int16_t rax_280 = var_150.w + var_1d0.w
    int32_t var_1cc
    int32_t var_14c
    int16_t rax_281 = var_1cc.w + var_14c.w
    var_208 -= var_188
    var_204 -= var_184
    var_200 -= var_180
    var_1fc -= var_17c
    var_1f8 -= var_178
    var_1f4 -= var_174
    var_1f0 -= var_170
    var_1ec -= var_16c
    var_1e8 -= var_168
    var_1e0 -= var_160
    var_1e4 -= var_164
    var_1dc -= var_15c
    int16_t var_c8 = rdx_42 + rax_241
    int16_t var_b8_1 = rdx_33 + rax_269
    int16_t var_a8_1 = rdx_35 + rax_271
    int16_t var_98_1 = rdx_44 + rax_243
    int16_t var_c6_1 = rdx_46 + rax_245
    int16_t var_b6_1 = rdx_37 + rax_273
    int16_t var_a6_1 = rdx_48 + rax_247
    int16_t var_96_1 = rdx_39 + rax_275
    int16_t var_c4_1 = rcx_75 + rax_248
    int16_t var_b4_1 = rcx_77 + rax_249
    int16_t var_a4_1 = rax_250 + rax_277
    int16_t var_94_1 = rcx_79 + rax_251
    int16_t var_c2_1 = rax_278 + rax_253
    int16_t var_b2_1 = rax_279 + rax_255
    var_1d8 -= var_158
    var_1d4 -= var_154
    var_1d0 -= var_150
    var_1cc -= var_14c
    int16_t var_a2_1 = rax_280 + rax_257
    int16_t var_92_1 = rax_281 + rax_259
    sub_140e3e670(&var_c8, var_298)
    void* var_298_1 = &var_298[0x10]
    var_c8 = rax_241 - rdx_42
    int16_t var_b8_2 = rdx_33 - rax_269
    int16_t var_a8_2 = rdx_35 - rax_271
    int16_t var_98_2 = rax_243 - rdx_44
    int16_t var_c6_2 = rax_245 - rdx_46
    int16_t var_b6_2 = rdx_37 - rax_273
    int16_t var_a6_2 = rax_247 - rdx_48
    int16_t var_96_2 = rdx_39 - rax_275
    int16_t var_c4_2 = rax_248 - rcx_75
    int16_t var_b4_2 = rax_249 - rcx_77
    int16_t var_a4_2 = rax_250 - rax_277
    int16_t var_94_2 = rax_251 - rcx_79
    int16_t var_c2_2 = rax_253 - rax_278
    int16_t var_b2_2 = rax_255 - rax_279
    int16_t var_a2_2 = rax_257 - rax_280
    int16_t var_92_2 = rax_259 - rax_281
    sub_140e3e670(&var_c8, var_298_1)
    var_c8 = var_248.w + var_208.w
    int16_t var_b8_3 = var_244.w + var_204.w
    int16_t var_a8_3 = var_240.w + var_200.w
    int16_t var_98_3 = var_23c.w + var_1fc.w
    int16_t var_c6_3 = var_238.w + var_1f8.w
    int16_t var_b6_3 = var_234.w + var_1f4.w
    int16_t var_a6_3 = var_230.w + var_1f0.w
    int16_t var_96_3 = var_22c.w + var_1ec.w
    int16_t var_c4_3 = var_228.w + var_1e8.w
    int16_t var_b4_3 = var_224.w + var_1e4.w
    int16_t var_a4_3 = var_220.w + var_1e0.w
    int16_t var_94_3 = var_21c.w + var_1dc.w
    int16_t var_c2_3 = var_218.w + var_1d8.w
    int16_t var_b2_3 = var_214.w + var_1d4.w
    int16_t var_a2_3 = var_210.w + var_1d0.w
    int16_t var_92_3 = var_20c.w + var_1cc.w
    sub_140e3e670(&var_c8, var_298_1 + 0x40)
    var_c8 = var_248.w - var_208.w
    int16_t var_b8_4 = var_244.w - var_204.w
    int16_t var_a8_4 = var_240.w - var_200.w
    int16_t var_98_4 = var_23c.w - var_1fc.w
    int16_t var_c6_4 = var_238.w - var_1f8.w
    int16_t var_b6_4 = var_234.w - var_1f4.w
    int16_t var_a6_4 = var_230.w - var_1f0.w
    int16_t var_96_4 = var_22c.w - var_1ec.w
    int16_t var_c4_4 = var_228.w - var_1e8.w
    int16_t var_b4_4 = var_224.w - var_1e4.w
    int16_t var_a4_4 = var_220.w - var_1e0.w
    int16_t var_94_4 = var_21c.w - var_1dc.w
    int16_t var_c2_4 = var_218.w - var_1d8.w
    int16_t var_b2_4 = var_214.w - var_1d4.w
    int16_t var_a2_4 = var_210.w - var_1d0.w
    int16_t var_92_4 = var_20c.w - var_1cc.w
    result = sub_140e3e670(&var_c8, var_298_1 + 0x80)
    r15 = arg1
    i_1 = i_2 + 1
    i_3 += 1
    rbx -= -0x80
    i_2 = i_1
    var_298 = var_298_1 + 0xc0
while (i_1 s< 2)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
