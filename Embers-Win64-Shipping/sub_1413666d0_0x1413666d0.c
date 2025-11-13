// 函数: sub_1413666d0
// 地址: 0x1413666d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
void* rax_2 = sub_14139ce70(arg1)
int64_t* rax_3 = sub_1413a8300(&arg1[0xc], arg2)
int64_t* r14 = arg1[0x20]
int128_t* rcx_1 = 0x258
int64_t rsi
rsi.b = 1
int64_t rbx = *(arg1 + 0x74)
int64_t rdi_1 = *(rax_2 + 0x14)
int128_t zmm0 = *(r14 + 0x1598)

if (arg1[0x1f].b == 0)
    rcx_1 = 0x1598

int128_t zmm6 = *(rcx_1 + r14)
int64_t r15 = ***r14

if (sub_142391c60(r14) != 0)
    char rax_6
    
    if (r14 != r15)
        rax_6 = sub_142391f10(arg1[0x20])
    
    if (r14 == r15 || rax_6 != 0)
        rsi.b = 2

int128_t zmm1 = data_142d3f5a0
rsi.b <<= 2
rsi.b |= 1
int64_t rax_8 = *rax_3
int32_t var_a0 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x19)
int64_t var_170 = 0
char var_164 = 0
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x11)
int32_t var_a4 = 0
int32_t var_9c
__builtin_memset(&var_9c, 0xff, 0x14)
int128_t var_88 = zmm1
int64_t var_178 = rax_8
int32_t var_168 = 0xffffffff
char var_163 = rsi.b
bool var_5f = *(rax_8 + 0x38) u> 1
void var_160
memset(&var_160, 0, 0xa8)
void* r15_1 = arg2[8]
int64_t rsi_3 = (*(r15_1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_9 = rsi_3 + 0x16

if (rax_9 u> *(r15_1 + 0x38))
    zmm6 = sub_140b0e3d0(r15_1 + 0x30, 0x18)
    rsi_3 = (*(r15_1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_9 = rsi_3 + 0x16

wchar16 const* const rcx_7 = u"TonemapES2"
*(r15_1 + 0x30) = rax_9
wchar16 const i

do
    i = *rcx_7
    *(rsi_3 - u"TonemapES2" + rcx_7) = i
    rcx_7 = &rcx_7[1]
while (i != 0)
void*** rcx_10 = (*(r15_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_10[0x27]

if (rax_10 u> *(r15_1 + 0x38))
    zmm6 = sub_140b0e3d0(r15_1 + 0x30, 0x140)
    rcx_10 = (*(r15_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_10[0x27]

*(r15_1 + 0x30) = rax_10
void**** rax_11 = *(r15_1 + 8)
*(r15_1 + 0x14) += 1
*rax_11 = rcx_10
*(r15_1 + 8) = &rcx_10[1]
sub_1405d11b0(rcx_10, &var_178, rsi_3)
*(r15_1 + 0x1c4) = 1
sub_1405d19b0(r15_1, &var_178)
int64_t var_68
*(r15_1 + 0x178) = var_68:7.b
*(r15_1 + 0x179) = 0
*(r15_1 + 0x1c4) = 1
int128_t var_2a8 = zmm6
sub_1410b7780(arg2, &var_2a8, zx.o(0), 0x3f800000)
void* r14_1

if (sub_14128e090((*U"1111")[sx.q(arg2[0xb].d)]) == 0 || data_143ebe680 != arg1)
    r14_1.b = 0
else
    r14_1.b = 1

char rsi_6 = *(arg1 + 0x10a)
char var_2b8
int32_t r9_1 = sub_141350040(&var_2b8, arg1[0x20], r14_1.b, *(arg1 + 0x10b))
void* var_238
int32_t rcx_19
int32_t rdx_9
rcx_19, rdx_9 = sub_1419a2ec0(arg2[0xc], &var_238, &data_143ebdc10, 
    (sbb.d(r9_1, r9_1, rsi_6 != 0) & 2) + zx.d(r14_1.b))
void* r15_2 = var_238
char var_2ac
int32_t rcx_21 = sbb.d(rcx_19, rcx_19, var_2ac != 0) & 0x100
char var_2b5
int32_t rax_19
rax_19.b = var_2b5 != 0
char var_2b4
int32_t rcx_23 = sbb.d(rcx_21, rcx_21, var_2b4 != 0) & 2
char var_2ad
int32_t rcx_25 = sbb.d(rcx_23, rcx_23, var_2ad != 0) & 0x80
char var_2b3
int32_t rcx_27 = sbb.d(rcx_25, rcx_25, var_2b3 != 0) & 4
char var_2b2
int32_t rcx_29 = sbb.d(rcx_27, rcx_27, var_2b2 != 0) & 8
char var_2b1
int32_t rcx_31 = sbb.d(rcx_29, rcx_29, var_2b1 != 0) & 0x10
char var_2af
int32_t rcx_33 = sbb.d(rcx_31, rcx_31, var_2af != 0) & 0x20
char var_2ae
int32_t rcx_35 = sbb.d(rcx_33, rcx_33, var_2ae != 0) & 0x40
int32_t rax_27
rax_27.b = var_2b8 != 0
char var_2b7
int32_t rcx_37 = sbb.d(rcx_35, rcx_35, var_2b7 != 0) & 2
char var_2b6
char var_2ab
sub_1419a2ec0(arg2[0xc], &var_2a8, &data_143ebdd10, 
    rax_27 + (((sbb.d(rdx_9, rdx_9, var_2ab != 0) & 0x200) + rcx_21 + rax_19 + rcx_23 + rcx_25
        + rcx_27 + rcx_29 + rcx_31 + rcx_33 + rcx_35) << 3) + rcx_37
        + (sbb.d(rcx_37, rcx_37, var_2b6 != 0) & 4))
void* rcx_41 = arg2[8]
int64_t var_1cc
__builtin_memset(&var_1cc, 0, 0x43)
int128_t var_228
__builtin_memset(&var_228, 0, 0x30)
int128_t var_1e0 = zx.o(0)
int16_t var_188 = 0
sub_140fdc870(rcx_41, &var_228)
int64_t var_1f8 = data_14395da00
int64_t var_1f0 = data_14395da18
int64_t var_1e8 = data_14395d9e8
*(r15_2 + 0x238) = arg1[0x21].b
int64_t rdx_23 = sx.q(*(r15_2 + 0x10c))
void* var_230
int64_t* rsi_8 = *(var_230 + 0x10)
var_228.q = data_1439c9210
int64_t rax_35 = rsi_8[3]

if (*(rax_35 + (rdx_23 << 3)) == 0)
    sub_1419ccf30(rsi_8, rdx_23.d)
    rax_35 = rsi_8[3]

void* r14_3 = var_2a8.q
var_228:8.q = *(rax_35 + (rdx_23 << 3))
int64_t rax_37 = 0

if (r14_3 != 0)
    int64_t rdx_24 = sx.q(*(r14_3 + 0x10c))
    int64_t* rsi_9 = *(var_2a8:8.q + 0x10)
    int64_t rax_39 = rsi_9[3]
    
    if (*(rax_39 + (rdx_24 << 3)) == 0)
        sub_1419ccf30(rsi_9, rdx_24.d)
        rax_39 = rsi_9[3]
    
    rax_37 = *(rax_39 + (rdx_24 << 3))

int128_t var_208
var_208.q = rax_37
int32_t var_1d0 = 0
uint32_t r9_8 = sub_1419870b0(arg2[8], &var_228, 2)
sub_1413682e0(r15_2, arg2, *(arg1 + 0x10a), r9_8)
char var_308 = *(arg1 + 0x109)
void* r9_10
int512_t zmm2_1
int512_t zmm3_1
r9_10, zmm2_1, zmm3_1 = sub_141338f10(r14_3, arg2[8], arg2, &var_2b8)
int32_t rdx_28 = zmm0:4.d
int32_t rcx_47 = zmm0.d
int32_t var_2c0 = 1
int32_t var_2c8 = 1
var_2a8:8.q = var_230
zmm2_1.o = zx.o(rdx_28)
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
var_2a8.q = r15_2
zmm3_1.o = zx.o(rbx.d)
void* rcx_48 = arg2[8]
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rcx_47))
int128_t* var_2d0 = &var_2a8
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(zmm0:8.d - rcx_47))
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rbx:4.d))
uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(zmm0:0xc.d - rdx_28))
zmm3_1.o = _mm_cvtepi32_ps(zmm3_1.o)
int32_t var_2f8 = zmm2_1.d
zmm2_1.o = zx.o(0)
var_308.d = zmm5.d
sub_1413993b0(rcx_48, zx.o(0), zmm2_1, r9_10, zmm3_1, var_308, zmm4.d, var_2f8, zmm0_1.d, zmm6_1.d, 
    rbx, rdi_1, var_2d0, var_2c8, var_2c0)
sub_141096650(arg2[8])
void* rsi_10 = arg2[8]
int64_t r15_4 = rax_3[1]
int64_t* r14_4 = *rax_3
int128_t var_280 = data_142d57d10
int128_t zmm0_2 = data_142d57920
int128_t var_270 = data_142d3f800
void*** rbx_3 = (*(rsi_10 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_47 = &rbx_3[0xa]

if (rax_47 u> *(rsi_10 + 0x38))
    sub_140b0e3d0(rsi_10 + 0x30, 0x58)
    rbx_3 = (*(rsi_10 + 0x30) + 7) & 0xfffffffffffffff8
    rax_47 = &rbx_3[0xa]

*(rsi_10 + 0x30) = rax_47
*(rsi_10 + 0x14) += 1
**(rsi_10 + 8) = rbx_3
*(rsi_10 + 8) = &rbx_3[1]
rbx_3[1] = 0
*rbx_3 = &data_142d56628
rbx_3[2].d = var_280.d
__builtin_memset(rbx_3 + 0x14, 0xff, 0x20)
*(rbx_3 + 0x34) = zmm0_2:4.d
rbx_3[7].d = zmm0_2:8.d
*(rbx_3 + 0x3c) = zmm0_2:0xc.d
rbx_3[8] = r14_4
rbx_3[9] = r15_4

if ((*(*r14_4 + 8))(r14_4) == 0)
    int64_t* rcx_52 = rbx_3[8]
    
    if ((*(*rcx_52 + 0x18))(rcx_52) == 0)
        int64_t* rcx_53 = rbx_3[8]
        
        if ((*(*rcx_53 + 0x20))(rcx_53) == 0)
            int64_t* rcx_54 = rbx_3[8]
            (*(*rcx_54 + 0x10))(rcx_54)

int64_t* rcx_55 = rbx_3[9]

if ((*(*rcx_55 + 8))(rcx_55) == 0)
    int64_t* rcx_56 = rbx_3[9]
    
    if ((*(*rcx_56 + 0x18))(rcx_56) == 0)
        int64_t* rcx_57 = rbx_3[9]
        
        if ((*(*rcx_57 + 0x20))(rcx_57) == 0)
            int64_t* rcx_58 = rbx_3[9]
            (*(*rcx_58 + 0x10))(rcx_58)

int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_328)
return result
