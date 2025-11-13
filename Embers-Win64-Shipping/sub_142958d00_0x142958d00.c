// 函数: sub_142958d00
// 地址: 0x142958d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x150)
int32_t var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t r10 = 0x10
int64_t var_78
__builtin_memset(&var_78, 0, 0x18)

if (arg2 s<= 0x10)
    r10 = arg2

int64_t var_60
__builtin_memset(&var_60, 0, 0x28)
int32_t var_170 = 0
int32_t rbx = 0
int32_t rdi = 0
var_178 = 0
int32_t rsi = 0
int32_t r14 = 0
int32_t var_160 = 0
int32_t r15 = 0
int32_t r12 = 0
int32_t var_15c = 0
int32_t r13 = 0
int32_t r8 = 0
int32_t var_158 = 0
int32_t var_140 = 0
int32_t var_58
int64_t var_54
int32_t var_4c
int32_t var_48
int64_t var_44
int32_t var_3c

if (r10 s> 0 && r10 u>= 0x10)
    int32_t rcx_1 = r10 & 0x8000000f
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffff0) + 1
    
    int32_t* rdx = &var_58
    int32_t* rax_4 = arg3 + 4
    
    do
        uint128_t zmm1 = zx.o(rax_4[-1])
        int64_t zmm0 = (zx.o(0)).q
        uint128_t zmm2 = zx.o(*rax_4)
        rax_4 = &rax_4[4]
        zmm1 = _mm_unpacklo_epi8(zmm1, zmm0)
        zmm2 = _mm_unpacklo_epi8(zmm2, zmm0)
        rdx = &rdx[0x10]
        zmm1 = _mm_unpacklo_epi16(zmm1, zmm0)
        r8 += 0x10
        zmm2 = _mm_unpacklo_epi16(zmm2, zmm0)
        *(rdx - 0x60) = zmm1
        zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(rax_4[-3]), zmm0), zmm0)
        *(rdx - 0x50) = zmm2
        zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(rax_4[-2]), zmm0), zmm0)
        *(rdx - 0x40) = zmm1
        *(rdx - 0x30) = zmm2
    while (-4 - arg3 + rax_4 s< sx.q(r10 - rcx_1))
    
    r13 = var_3c
    r12 = var_44:4.d
    r15 = var_44.d
    r14 = var_4c
    rdi = var_54.d
    rsi = var_54:4.d
    rbx = var_58
    var_140 = r13
    var_158 = r12
    var_15c = r15
    var_160 = var_48
    var_178 = r14
    var_170 = rdi

void* rcx_5 = sx.q(r8)
int64_t rdx_1 = sx.q(r10)

if (rcx_5 s< rdx_1)
    do
        *(&var_78 + (rcx_5 << 2)) = zx.d(*(rcx_5 + arg3))
        rcx_5 += 1
    while (rcx_5 s< rdx_1)
    
    r13 = var_3c
    r12 = var_44:4.d
    r15 = var_44.d
    r14 = var_4c
    rdi = var_54.d
    rsi = var_54:4.d
    rbx = var_58
    var_140 = r13
    var_158 = r12
    var_15c = r15
    var_160 = var_48
    var_178 = r14
    var_170 = rdi

int32_t r9
r9.b = r10 s<= 0xa
arg1[0x20] = r9
uint64_t r10_1 = zx.q(var_160)
int64_t var_70
int32_t r8_9 = (((var_78.d << 8 | var_78:4.d) << 8 | var_70.d) << 8 | var_70:4.d)
    ^ *((zx.q(r13) << 2) + 0x143548ef0) ^ *((zx.q(r12) << 2) + 0x1435496f0)
int32_t r8_12 = r8_9 ^ *((zx.q(r15) << 2) + 0x143548af0) ^ *((r10_1 << 2) + 0x1435492f0)
    ^ *((zx.q(rbx) << 2) + 0x1435492f0)
uint64_t rdx_2 = zx.q((zx.q(r8_12) u>> 0x10).b)
uint64_t r13_1 = zx.q((zx.q(r8_12) u>> 8).b)
uint64_t r12_1 = zx.q(r8_12.b)
uint64_t rcx_7 = zx.q(r8_12) u>> 0x18
int32_t rbx_10 = (((rbx << 8 | rdi) << 8 | rsi) << 8 | r14) ^ *((zx.q(rsi) << 2) + 0x1435496f0)
    ^ *((r12_1 << 2) + 0x1435496f0) ^ *((r13_1 << 2) + 0x143548ef0)
int32_t rbx_12 = rbx_10 ^ *((rcx_7 << 2) + 0x143548af0) ^ *((rdx_2 << 2) + 0x1435492f0)
uint64_t rax_20 = zx.q((zx.q(rbx_12) u>> 0x10).b)
uint64_t rcx_9 = zx.q(rbx_12) u>> 0x18
int32_t r14_1 = *((rax_20 << 2) + 0x1435492f0)
uint64_t r11_1 = zx.q((zx.q(rbx_12) u>> 8).b)
int32_t rsi_1 = *((rcx_9 << 2) + 0x1435496f0)
uint64_t r15_1 = zx.q(rbx_12.b)
int32_t rdi_2 = *((r11_1 << 2) + 0x143548ef0)
int32_t r10_12 = (((r10_1.d << 8 | var_15c) << 8 | var_158) << 8 | var_140)
    ^ *((zx.q(var_170) << 2) + 0x143548af0) ^ *((r15_1 << 2) + 0x143548af0) ^ rsi_1 ^ rdi_2 ^ r14_1
uint64_t r8_14 = zx.q(r10_12) u>> 0x18
uint64_t rbx_13 = zx.q((zx.q(r10_12) u>> 0x10).b)
int32_t rdx_3 = *((rbx_13 << 2) + 0x143548ef0)
int32_t r9_1 = *((zx.q((zx.q(r10_12) u>> 8).b) << 2) + 0x143548af0)
uint64_t rcx_11 = zx.q(r10_12.b)
int32_t r11_2 = *((r11_1 << 2) + 0x1435496f0)
int64_t var_68
int32_t r10_24 = (((var_68.d << 8 | var_68:4.d) << 8 | var_60.d) << 8 | var_60:4.d)
    ^ *((zx.q(var_178) << 2) + 0x143548ef0) ^ *((rcx_11 << 2) + 0x1435492f0)
    ^ *((r8_14 << 2) + 0x1435496f0) ^ r9_1 ^ rdx_3
int32_t rax_32 = *((r8_14 << 2) + 0x143548af0) ^ *((r13_1 << 2) + 0x143548af0)
    ^ *((r15_1 << 2) + 0x1435492f0) ^ rdx_3
var_178 = r10_24
int32_t r8_15 = var_178
int32_t rdi_3 = *((r13_1 << 2) + 0x1435496f0)
int32_t rax_38 = *((rcx_11 << 2) + 0x143548ef0) ^ r9_1 ^ rsi_1 ^ rdi_2 ^ r14_1
uint64_t rdx_4 = zx.q(r8_15) u>> 0x18 << 2
int32_t rax_46 = *((zx.q((zx.q(r8_15) u>> 0x10).b) << 2) + 0x143548ef0)
    ^ *((rbx_13 << 2) + 0x1435492f0) ^ *((r12_1 << 2) + 0x1435492f0) ^ *(rdx_4 + 0x143548af0)
int32_t r8_20 = *((zx.q((zx.q(r8_15) u>> 8).b) << 2) + 0x143548af0)
    ^ *((zx.q(r10_24.b) << 2) + 0x143548ef0) ^ *((rcx_7 << 2) + 0x1435496f0)
    ^ *(rdx_4 + 0x1435496f0) ^ *((rdx_2 << 2) + 0x1435492f0)
int32_t r9_7 = *((r15_1 << 2) + 0x143548ef0) ^ *((rax_20 << 2) + 0x143548af0)
    ^ *((rcx_9 << 2) + 0x1435492f0) ^ *((rcx_7 << 2) + 0x1435492f0) ^ r10_12 ^ r11_2
int32_t rsi_2 = *((zx.q((r9_7 u>> 8).b) << 2) + 0x143548ef0)
uint64_t r13_2 = zx.q(r9_7 u>> 0x18) << 2
uint64_t rcx_16 = zx.q((r9_7 u>> 0x10).b) << 2
uint64_t rdx_6 = zx.q(r9_7.b) << 2
int32_t r9_14 = *(r13_2 + 0x143548af0) ^ *(rcx_16 + 0x1435492f0) ^ *(rdx_6 + 0x1435496f0) ^ r8_12
    ^ rsi_2 ^ rdi_3
uint64_t rax_60 = zx.q(r9_14.b) << 2
int32_t r14_2 = *(rax_60 + 0x143548af0)
int32_t rdi_4 = *((zx.q((r9_14 u>> 8).b) << 2) + 0x143548ef0)
uint64_t r12_3 = zx.q((r9_14 u>> 0x10).b) << 2
uint64_t r15_2 = zx.q(r9_14 u>> 0x18) << 2
int32_t r8_28 = *((rdx_2 << 2) + 0x143548af0) ^ *(r15_2 + 0x1435496f0) ^ *(r12_3 + 0x1435492f0)
    ^ rdi_4 ^ r14_2 ^ rbx_12
uint64_t r9_17 = zx.q(r8_28.b) << 2
uint64_t rdx_9 = zx.q((r8_28 u>> 8).b) << 2
uint64_t rcx_19 = zx.q((r8_28 u>> 0x10).b) << 2
uint64_t r10_27 = zx.q(r8_28 u>> 0x18) << 2
int32_t r11_8 = *((r12_1 << 2) + 0x143548ef0) ^ *(r9_17 + 0x1435492f0) ^ *(rcx_19 + 0x143548ef0)
    ^ *(rdx_9 + 0x143548af0) ^ *(r10_27 + 0x1435496f0) ^ var_178
int32_t rbx_14 = *((zx.q(r11_8 u>> 0x18) << 2) + 0x1435492f0)
uint64_t r11_9 = zx.q((r11_8 u>> 0x10).b) << 2
uint64_t rdx_12 = zx.q(r11_8.b) << 2
uint64_t rcx_21 = zx.q((r11_8 u>> 8).b) << 2
int32_t rax_75 =
    *(rdx_6 + 0x143548af0) ^ *(r10_27 + 0x143548af0) ^ *(r11_9 + 0x1435496f0) ^ rsi_2 ^ rbx_14
int32_t rax_77 = *(r10_27 + 0x1435492f0)
int32_t r8_35 = *(r13_2 + 0x143548ef0) ^ *(rcx_16 + 0x143548af0) ^ *(r11_9 + 0x143548ef0)
    ^ *(rcx_21 + 0x1435492f0) ^ *(rdx_12 + 0x1435496f0)
int32_t r9_23 = *(rdx_6 + 0x1435492f0) ^ *(rcx_19 + 0x1435496f0) ^ rdi_4 ^ r14_2 ^ rax_77
int32_t r10_32 = *(r15_2 + 0x143548ef0) ^ *(r12_3 + 0x143548af0) ^ *(rax_60 + 0x1435496f0)
    ^ *(r9_17 + 0x1435496f0) ^ *(rdx_9 + 0x1435492f0)
int32_t r10_38 = *(r11_9 + 0x143548af0) ^ *(rcx_21 + 0x1435496f0) ^ *(rdx_12 + 0x143548ef0) ^ r9_7
    ^ rax_77 ^ rbx_14
var_178 = r10_38
uint64_t rcx_23 = zx.q((r10_38 u>> 0x10).b) << 2
uint64_t r10_39 = zx.q(r10_38 u>> 0x18) << 2
uint64_t rax_84 = zx.q((r10_38 u>> 8).b) << 2
int32_t r15_3 = *(rax_84 + 0x143548ef0)
uint64_t rax_85 = zx.q(r10_38.b) << 2
int32_t r11_15 = *(rcx_23 + 0x1435492f0) ^ *(r10_39 + 0x143548af0) ^ *(rax_85 + 0x1435496f0)
    ^ *(rdx_9 + 0x1435496f0) ^ r8_28 ^ r15_3
uint64_t r13_3 = zx.q((r11_15 u>> 8).b) << 2
int32_t r14_3 = *(r13_3 + 0x143548ef0)
uint64_t r12_4 = zx.q((r11_15 u>> 0x10).b) << 2
uint64_t r10_40 = zx.q(r11_15 u>> 0x18) << 2
uint64_t rax_92 = zx.q(r11_15.b) << 2
int32_t rsi_3 = *(rax_92 + 0x143548af0)
int32_t r9_30 = *(r12_4 + 0x1435492f0) ^ *(r10_40 + 0x1435496f0) ^ *(rcx_19 + 0x143548af0) ^ r11_8
    ^ rsi_3 ^ r14_3
uint64_t rbx_15 = zx.q(r9_30.b) << 2
uint64_t rdi_5 = zx.q((r9_30 u>> 8).b) << 2
uint64_t r11_16 = zx.q((r9_30 u>> 0x10).b) << 2
uint64_t r10_41 = zx.q(r9_30 u>> 0x18) << 2
int32_t r9_36 = *(rbx_15 + 0x1435492f0) ^ *(rdi_5 + 0x143548af0) ^ *(r10_41 + 0x1435496f0)
    ^ *(r11_16 + 0x143548ef0) ^ *(r9_17 + 0x143548ef0) ^ r9_14
uint64_t r9_37 = zx.q(r9_36 u>> 0x18) << 2
int32_t rcx_30 = *((zx.q((r9_36 u>> 0x10).b) << 2) + 0x1435496f0) ^ *(rax_85 + 0x143548af0)
    ^ *(r11_16 + 0x143548af0) ^ *(r9_37 + 0x1435492f0)
int32_t r15_4 = *(rcx_23 + 0x143548af0)
int32_t rcx_36 = *((zx.q((r9_36 u>> 8).b) << 2) + 0x1435492f0)
    ^ *((zx.q(r9_36.b) << 2) + 0x1435496f0) ^ *(r10_39 + 0x143548ef0) ^ *(r9_37 + 0x143548ef0)
int32_t rax_115 =
    *(r10_41 + 0x1435492f0) ^ *(rax_84 + 0x1435492f0) ^ *(r11_16 + 0x1435496f0) ^ rsi_3 ^ r14_3
int32_t rcx_38 = *(r12_4 + 0x143548af0)
int32_t rax_116 = *(r13_3 + 0x1435496f0)
uint64_t var_d0
var_d0.d =
    *(rbx_15 + 0x1435496f0) ^ *(rdi_5 + 0x1435492f0) ^ *(r10_40 + 0x143548ef0) ^ rax_116 ^ rcx_38
int32_t r9_43 = *(rax_92 + 0x143548ef0) ^ *(r10_40 + 0x1435492f0) ^ *(r10_39 + 0x1435492f0) ^ r9_30
    ^ rax_116 ^ rcx_38
uint64_t r8_46 = zx.q(r9_43.b) << 2
uint64_t rdx_25 = zx.q((r9_43 u>> 8).b) << 2
int32_t rcx_40 = *((zx.q((r9_43 u>> 0x10).b) << 2) + 0x1435492f0)
uint64_t rax_121 = zx.q(r9_43 u>> 0x18) << 2
int32_t r9_50 = *(rax_121 + 0x143548af0) ^ *(rdx_25 + 0x143548ef0) ^ *(r8_46 + 0x1435496f0)
    ^ *(rax_84 + 0x1435496f0) ^ var_178 ^ rcx_40
uint64_t r13_5 = zx.q(r9_50.b) << 2
uint64_t r14_4 = zx.q((r9_50 u>> 8).b) << 2
int32_t r12_5 = *((zx.q((r9_50 u>> 0x10).b) << 2) + 0x1435492f0)
int32_t r15_5 = *((zx.q(r9_50 u>> 0x18) << 2) + 0x1435496f0)
int32_t r9_57 = *(r14_4 + 0x143548ef0) ^ *(r13_5 + 0x143548af0) ^ r15_5 ^ r12_5 ^ r15_4 ^ r11_15
uint64_t r11_17 = zx.q(r9_57.b) << 2
uint64_t rax_130 = zx.q((r9_57 u>> 8).b) << 2
int32_t r10_43 = *(rax_130 + 0x143548af0)
uint64_t rax_131 = zx.q((r9_57 u>> 0x10).b) << 2
int32_t r8_49 = *(rax_131 + 0x143548ef0)
uint64_t rdi_6 = zx.q(r9_57 u>> 0x18) << 2
int32_t rdx_33 = *(rax_85 + 0x143548ef0) ^ *(r11_17 + 0x1435492f0) ^ *(rdi_6 + 0x1435496f0) ^ r9_36
    ^ r8_49 ^ r10_43
var_178 = rdx_33
int32_t r11_18 = *(r11_17 + 0x143548ef0)
uint64_t var_108
var_108.d = *(r14_4 + 0x1435496f0) ^ *(r13_5 + 0x1435492f0) ^ *(r8_46 + 0x143548af0)
    ^ *(rdi_6 + 0x143548af0) ^ r8_49
uint64_t r8_50 = zx.q(rdx_33 u>> 0x18) << 2
uint64_t r9_59 = zx.q((rdx_33 u>> 0x10).b) << 2
int32_t r10_44 = *(rdi_6 + 0x1435492f0)
uint64_t var_118_1
var_118_1.d = *(r13_5 + 0x143548ef0) ^ r10_43 ^ r15_5 ^ r12_5 ^ r11_18
uint64_t rcx_44 = zx.q((rdx_33 u>> 8).b) << 2
int32_t rdx_35 = *((zx.q(rdx_33.b) << 2) + 0x143548ef0)
uint64_t var_138_2
var_138_2.d = *(rdx_25 + 0x1435496f0) ^ *(r8_46 + 0x1435492f0) ^ *(r8_50 + 0x143548af0)
    ^ *(r9_59 + 0x143548ef0) ^ r10_44
int32_t r8_56 = *(r8_50 + 0x1435492f0) ^ *(r9_59 + 0x143548af0) ^ *(rcx_44 + 0x1435496f0) ^ r9_43
    ^ r10_44 ^ rdx_35
uint64_t r13_6 = zx.q(r8_56.b)
uint64_t var_130_2
var_130_2.d =
    *(rax_121 + 0x1435496f0) ^ *(r9_59 + 0x1435496f0) ^ *(rcx_44 + 0x143548af0) ^ rcx_40 ^ rdx_35
uint64_t r9_60 = zx.q((zx.q(r8_56) u>> 0x10).b)
uint64_t rcx_45 = zx.q((zx.q(r8_56) u>> 8).b)
uint64_t rdx_37 = zx.q(r8_56) u>> 0x18
int32_t r8_62 = *((r13_6 << 2) + 0x1435496f0) ^ *((rcx_45 << 2) + 0x143548ef0)
    ^ *((rdx_37 << 2) + 0x143548af0) ^ *(rax_130 + 0x1435496f0) ^ r9_57
    ^ *((r9_60 << 2) + 0x1435492f0)
uint64_t rcx_47 = zx.q(r8_62) u>> 0x18
uint64_t rdi_7 = zx.q((r8_62 u>> 8).b)
int32_t r15_6 = *((rcx_47 << 2) + 0x1435496f0)
int32_t r14_6 = *((rdi_7 << 2) + 0x143548ef0)
uint64_t rax_168 = zx.q((zx.q(r8_62) u>> 0x10).b)
int32_t r12_6 = *((rax_168 << 2) + 0x1435492f0)
uint64_t rax_169 = zx.q(r8_62.b)
int32_t rcx_53 =
    *((rax_169 << 2) + 0x143548af0) ^ *(rax_131 + 0x143548af0) ^ var_178 ^ r15_6 ^ r14_6 ^ r12_6
uint64_t r10_45 = zx.q(rcx_53.b)
uint64_t rsi_5 = zx.q((zx.q(rcx_53) u>> 0x10).b)
int32_t rdx_38 = *((rsi_5 << 2) + 0x143548ef0)
uint64_t r9_62 = zx.q(rcx_53) u>> 0x18
int32_t r8_63 = *((zx.q((zx.q(rcx_53) u>> 8).b) << 2) + 0x143548af0)
int32_t rdi_8 = *((rdi_7 << 2) + 0x1435496f0)
int32_t rax_180 =
    *((r10_45 << 2) + 0x1435492f0) ^ *((r9_62 << 2) + 0x1435496f0) ^ r9_50 ^ r8_63 ^ rdx_38 ^ r11_18
var_178 = rax_180
int32_t rax_187 = *((rax_169 << 2) + 0x1435492f0) ^ *((rcx_45 << 2) + 0x143548af0)
    ^ *((r9_62 << 2) + 0x143548af0) ^ rdx_38 ^ rdi_8
int32_t r10_46 = *((rcx_45 << 2) + 0x1435496f0)
uint64_t r8_64 = r13_6 << 2
int32_t rax_192 = *((r10_45 << 2) + 0x143548ef0) ^ r8_63 ^ r15_6 ^ r14_6 ^ r12_6
uint64_t rax_193 = zx.q(var_178)
uint64_t rdx_40 = zx.q(rax_193.d) u>> 0x18
int32_t rax_198 = *((zx.q((rax_193 u>> 0x10).b) << 2) + 0x143548ef0) ^ *((rsi_5 << 2) + 0x1435492f0)
    ^ *((rdx_40 << 2) + 0x143548af0) ^ *(r8_64 + 0x1435492f0)
int32_t r8_69 = *((zx.q((rax_180 u>> 8).b) << 2) + 0x143548af0)
    ^ *((zx.q(rax_180.b) << 2) + 0x143548ef0) ^ *((rdx_40 << 2) + 0x1435496f0)
    ^ *((rdx_37 << 2) + 0x1435496f0) ^ *((r9_60 << 2) + 0x1435492f0)
int32_t r9_68 = *((rax_169 << 2) + 0x143548ef0) ^ *((rax_168 << 2) + 0x143548af0)
    ^ *((rcx_47 << 2) + 0x1435492f0) ^ *((rdx_37 << 2) + 0x1435492f0) ^ rcx_53 ^ rdi_8
int32_t rsi_6 = *((zx.q((r9_68 u>> 8).b) << 2) + 0x143548ef0)
uint64_t rdx_42 = zx.q(r9_68.b) << 2
uint64_t rcx_59 = zx.q((r9_68 u>> 0x10).b) << 2
uint64_t r13_8 = zx.q(r9_68 u>> 0x18) << 2
int32_t r9_75 = *(r13_8 + 0x143548af0) ^ *(rcx_59 + 0x1435492f0) ^ *(rdx_42 + 0x1435496f0) ^ r8_56
    ^ rsi_6 ^ r10_46
uint64_t rax_212 = zx.q(r9_75.b) << 2
int32_t r14_7 = *(rax_212 + 0x143548af0)
int32_t rdi_9 = *((zx.q((r9_75 u>> 8).b) << 2) + 0x143548ef0)
uint64_t r12_7 = zx.q((r9_75 u>> 0x10).b) << 2
uint64_t r15_7 = zx.q(r9_75 u>> 0x18) << 2
int32_t r8_77 = *((r9_60 << 2) + 0x143548af0) ^ *(r15_7 + 0x1435496f0) ^ *(r12_7 + 0x1435492f0)
    ^ rdi_9 ^ r14_7 ^ r8_62
uint64_t r9_78 = zx.q(r8_77.b) << 2
uint64_t rdx_45 = zx.q((r8_77 u>> 8).b) << 2
uint64_t rcx_62 = zx.q((r8_77 u>> 0x10).b) << 2
int32_t var_140_2
var_140_2.q = rdx_45
uint64_t r10_47 = zx.q(r8_77 u>> 0x18) << 2
int32_t r11_26 = *(r8_64 + 0x143548ef0) ^ *(r9_78 + 0x1435492f0) ^ *(rcx_62 + 0x143548ef0)
    ^ *(rdx_45 + 0x143548af0) ^ *(r10_47 + 0x1435496f0) ^ var_178
int32_t rbx_18 = *((zx.q(r11_26 u>> 0x18) << 2) + 0x1435492f0)
var_178 = r11_26
uint64_t r11_27 = zx.q((r11_26 u>> 0x10).b) << 2
uint64_t rdx_48 = zx.q(r11_26.b) << 2
uint64_t rcx_64 = zx.q((r11_26 u>> 8).b) << 2
int32_t rax_227 =
    *(rdx_42 + 0x143548af0) ^ *(r10_47 + 0x143548af0) ^ *(r11_27 + 0x1435496f0) ^ rsi_6 ^ rbx_18
int32_t rax_229 = *(r10_47 + 0x1435492f0)
uint64_t var_b0
var_b0.d = *(r13_8 + 0x143548ef0) ^ *(rcx_59 + 0x143548af0) ^ *(r11_27 + 0x143548ef0)
    ^ *(rcx_64 + 0x1435492f0) ^ *(rdx_48 + 0x1435496f0)
uint64_t var_f8
var_f8.d = *(rdx_42 + 0x1435492f0) ^ *(rcx_62 + 0x1435496f0) ^ rdi_9 ^ r14_7 ^ rax_229
int64_t r9_85 = var_140_2.q
uint64_t var_110_1
var_110_1.d = *(r15_7 + 0x143548ef0) ^ *(r12_7 + 0x143548af0) ^ *(rax_212 + 0x1435496f0)
    ^ *(r9_78 + 0x1435496f0) ^ *(r9_85 + 0x1435492f0)
int32_t r10_58 = *(r11_27 + 0x143548af0) ^ *(rcx_64 + 0x1435496f0) ^ *(rdx_48 + 0x143548ef0) ^ r9_68
    ^ rax_229 ^ rbx_18
uint64_t rcx_66 = zx.q((r10_58 u>> 0x10).b) << 2
uint64_t r10_59 = zx.q(r10_58 u>> 0x18) << 2
uint64_t rax_236 = zx.q((r10_58 u>> 8).b) << 2
int32_t r15_8 = *(rax_236 + 0x143548ef0)
uint64_t rax_237 = zx.q(r10_58.b) << 2
int32_t r11_33 = *(rcx_66 + 0x1435492f0) ^ *(r10_59 + 0x143548af0) ^ *(rax_237 + 0x1435496f0)
    ^ *(r9_85 + 0x1435496f0) ^ r8_77 ^ r15_8
uint64_t r13_9 = zx.q((r11_33 u>> 8).b) << 2
int32_t r14_8 = *(r13_9 + 0x143548ef0)
uint64_t r12_8 = zx.q((r11_33 u>> 0x10).b) << 2
uint64_t r10_60 = zx.q(r11_33 u>> 0x18) << 2
uint64_t rax_244 = zx.q(r11_33.b) << 2
int32_t rsi_7 = *(rax_244 + 0x143548af0)
int32_t r9_91 = *(r12_8 + 0x1435492f0) ^ *(r10_60 + 0x1435496f0) ^ *(rcx_62 + 0x143548af0) ^ var_178
    ^ rsi_7 ^ r14_8
uint64_t rbx_19 = zx.q(r9_91.b) << 2
uint64_t rdi_10 = zx.q((r9_91 u>> 8).b) << 2
uint64_t r11_34 = zx.q((r9_91 u>> 0x10).b) << 2
uint64_t r10_61 = zx.q(r9_91 u>> 0x18) << 2
int32_t r9_97 = *(rbx_19 + 0x1435492f0) ^ *(rdi_10 + 0x143548af0) ^ *(r10_61 + 0x1435496f0)
    ^ *(r11_34 + 0x143548ef0) ^ *(r9_78 + 0x143548ef0) ^ r9_75
var_178 = r9_97
uint64_t r9_98 = zx.q(r9_97 u>> 0x18) << 2
int32_t rcx_73 = *((zx.q((r9_97 u>> 0x10).b) << 2) + 0x1435496f0) ^ *(rax_237 + 0x143548af0)
    ^ *(r11_34 + 0x143548af0) ^ *(r9_98 + 0x1435492f0)
int32_t r15_9 = *(rcx_66 + 0x143548af0)
uint64_t var_120_1
var_120_1.d = *((zx.q((r9_97 u>> 8).b) << 2) + 0x1435492f0) ^ *((zx.q(r9_97.b) << 2) + 0x1435496f0)
    ^ *(r10_59 + 0x143548ef0) ^ *(r9_98 + 0x143548ef0) ^ r15_9
int32_t rcx_81 = *(r12_8 + 0x143548af0)
uint64_t var_128_2
var_128_2.d =
    *(r10_61 + 0x1435492f0) ^ *(rax_236 + 0x1435492f0) ^ *(r11_34 + 0x1435496f0) ^ rsi_7 ^ r14_8
int32_t rax_268 = *(r13_9 + 0x1435496f0)
uint64_t var_150_5
var_150_5.d =
    *(rbx_19 + 0x1435496f0) ^ *(rdi_10 + 0x1435492f0) ^ *(r10_60 + 0x143548ef0) ^ rax_268 ^ rcx_81
int32_t r9_104 = *(rax_244 + 0x143548ef0) ^ *(r10_60 + 0x1435492f0) ^ *(r10_59 + 0x1435492f0)
    ^ r9_91 ^ rax_268 ^ rcx_81
uint64_t r8_95 = zx.q(r9_104.b) << 2
uint64_t rdx_61 = zx.q((r9_104 u>> 8).b) << 2
uint64_t rax_273 = zx.q(r9_104 u>> 0x18) << 2
int32_t rcx_83 = *((zx.q((r9_104 u>> 0x10).b) << 2) + 0x1435492f0)
int32_t r9_111 = *(rax_273 + 0x143548af0) ^ *(rdx_61 + 0x143548ef0) ^ *(r8_95 + 0x1435496f0)
    ^ *(rax_236 + 0x1435496f0) ^ r10_58 ^ rcx_83
uint64_t rsi_8 = zx.q((r9_111 u>> 8).b) << 2
uint64_t r15_10 = zx.q(r9_111.b) << 2
int32_t r14_9 = *((zx.q(r9_111 u>> 0x18) << 2) + 0x1435496f0)
int32_t r12_9 = *((zx.q((r9_111 u>> 0x10).b) << 2) + 0x1435492f0)
int32_t r9_118 = *(rsi_8 + 0x143548ef0) ^ *(r15_10 + 0x143548af0) ^ r14_9 ^ r12_9 ^ r15_9 ^ r11_33
uint64_t r10_63 = zx.q(r9_118.b) << 2
int32_t r11_35 = *((zx.q((r9_118 u>> 8).b) << 2) + 0x143548af0)
int32_t rdx_64 = *((zx.q((r9_118 u>> 0x10).b) << 2) + 0x143548ef0)
uint64_t rdi_11 = zx.q(r9_118 u>> 0x18) << 2
int32_t r8_103 = *(rax_237 + 0x143548ef0) ^ *(r10_63 + 0x1435492f0) ^ *(rdi_11 + 0x1435496f0)
    ^ var_178 ^ rdx_64 ^ r11_35
int32_t r13_15 = *(rsi_8 + 0x1435496f0) ^ *(r15_10 + 0x1435492f0) ^ *(r8_95 + 0x143548af0)
    ^ *(rdi_11 + 0x143548af0) ^ rdx_64
uint64_t rdx_65 = zx.q((r8_103 u>> 0x10).b) << 2
int32_t rsi_13 = *(r15_10 + 0x143548ef0) ^ *(r10_63 + 0x143548ef0) ^ r11_35 ^ r14_9 ^ r12_9
int32_t r10_68 = *((zx.q(r8_103 u>> 0x18) << 2) + 0x143548af0) ^ *(rdx_61 + 0x1435496f0)
    ^ *(r8_95 + 0x1435492f0) ^ *(rdi_11 + 0x1435492f0) ^ *(rdx_65 + 0x143548ef0)
int32_t r8_108 = *((zx.q(r8_103.b) << 2) + 0x143548ef0)
    ^ *((zx.q((r8_103 u>> 8).b) << 2) + 0x143548af0) ^ *(rax_273 + 0x1435496f0)
    ^ *(rdx_65 + 0x1435496f0)
*arg1 = rax_32 ^ r11_2
arg1[1] = (rax_187 - 0x10) & 0x1f
arg1[2] = rax_38
arg1[3] = (rax_192 - 0x10) & 0x1f
arg1[4] = rax_46 ^ rdi_3
arg1[5] = ((rax_198 ^ r10_46) - 0x10) & 0x1f
arg1[6] = r8_20
arg1[7] = (r8_69 - 0x10) & 0x1f
arg1[8] = rax_75
arg1[9] = (rax_227 - 0x10) & 0x1f
arg1[0xa] = r8_35
arg1[0xb] = (var_b0.d - 0x10) & 0x1f
arg1[0xc] = r9_23
arg1[0xd] = (var_f8.d - 0x10) & 0x1f
arg1[0xe] = r10_32
arg1[0xf] = (var_110_1.d - 0x10) & 0x1f
arg1[0x10] = rcx_30 ^ r15_3
arg1[0x11] = ((rcx_73 ^ r15_8) - 0x10) & 0x1f
arg1[0x12] = rcx_36 ^ r15_4
arg1[0x13] = (var_120_1.d - 0x10) & 0x1f
arg1[0x14] = rax_115
arg1[0x15] = (var_128_2.d - 0x10) & 0x1f
arg1[0x16] = var_d0.d
arg1[0x17] = (var_150_5.d - 0x10) & 0x1f
arg1[0x18] = var_108.d
arg1[0x19] = (r13_15 - 0x10) & 0x1f
arg1[0x1a] = var_118_1.d
arg1[0x1b] = (rsi_13 - 0x10) & 0x1f
arg1[0x1c] = var_138_2.d
arg1[0x1d] = (r10_68 - 0x10) & 0x1f
arg1[0x1e] = var_130_2.d
int32_t result = ((r8_108 ^ rcx_83) - 0x10) & 0x1f
arg1[0x1f] = result
__security_check_cookie(rax_1 ^ &var_178)
return result
