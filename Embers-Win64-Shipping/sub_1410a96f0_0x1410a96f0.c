// 函数: sub_1410a96f0
// 地址: 0x1410a96f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
void* rsi = *arg2
void* rax_2 = sub_14139ce70(arg1)
arg2[8]
int64_t r15 = 0
int128_t zmm1 = data_142d3f5a0
uint128_t zmm6 = *(rsi + 0x1598)
int64_t rdi = data_143ec4fdc
void* rax_3 = data_143ec4d20
int32_t rbx_1 = (*(rax_2 + 0x14)).d
int32_t var_a0 = 0
int32_t var_9c
__builtin_memset(&var_9c, 0xff, 0x14)
int64_t rcx_1 = *(rax_3 + 8)
int64_t var_178 = rcx_1
int128_t var_88 = zmm1
int64_t var_78
__builtin_memset(&var_78, 0, 0x19)
int64_t var_170 = 0
int32_t var_168 = 0xffffffff
int16_t var_164 = 0x500
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x11)
int32_t var_a4 = 0
uint128_t var_238 = zmm6
bool var_5f = *(rcx_1 + 0x38) u> 1
void var_160
memset(&var_160, 0, 0xa8)
void* r13 = arg2[8]
int64_t rsi_3 = (*(r13 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_4 = rsi_3 + 0x1a

if (rax_4 u> *(r13 + 0x38))
    zmm6 = sub_140b0e3d0(r13 + 0x30, 0x1c)
    rsi_3 = (*(r13 + 0x30) + 1) & 0xfffffffffffffffe
    rax_4 = rsi_3 + 0x1a

wchar16 const* const rcx_4 = u"GTAOUpsample"
*(r13 + 0x30) = rax_4
wchar16 const i

do
    i = *rcx_4
    *(rcx_4 + rsi_3 - u"GTAOUpsample") = i
    rcx_4 = &rcx_4[1]
while (i != 0)
void*** rcx_7 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_7[0x27]

if (rax_5 u> *(r13 + 0x38))
    zmm6 = sub_140b0e3d0(r13 + 0x30, 0x140)
    rcx_7 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_7[0x27]

*(r13 + 0x30) = rax_5
void**** rax_6 = *(r13 + 8)
*(r13 + 0x14) += 1
*rax_6 = rcx_7
*(r13 + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_178, rsi_3)
*(r13 + 0x1c4) = 1
sub_1405d19b0(r13, &var_178)
int64_t var_68
*(r13 + 0x178) = var_68:7.b
*(r13 + 0x179) = 0
*(r13 + 0x1c4) = 1
uint128_t var_248 = zmm6
sub_1410b7780(arg2, &var_248, zx.o(0), 0x3f800000)
sub_1419a2ec0(arg2[0xc], &var_248, &data_143e41a30, 0)
void* var_258
sub_1419a2ec0(arg2[0xc], &var_258, &data_143ed5e80, 0)
void* rcx_15 = arg2[8]
int64_t var_1cc
__builtin_memset(&var_1cc, 0, 0x43)
int128_t var_228
__builtin_memset(&var_228, 0, 0x30)
int128_t var_1e0 = zx.o(0)
int16_t var_188 = 0
sub_140fdc870(rcx_15, &var_228)
void* rcx_16 = var_258
int64_t var_1f8 = data_14395da00
int64_t var_1f0 = data_14395da18
int64_t var_1e8 = data_14395d9e8
var_228.q = data_1439c9210
int64_t rax_13 = 0
int32_t var_1d0 = 0
int16_t var_18c
var_18c.b = 0

if (rcx_16 != 0)
    int64_t rdx_9 = sx.q(*(rcx_16 + 0x10c))
    void* var_250
    int64_t* rsi_6 = *(var_250 + 0x10)
    int64_t rax_15 = rsi_6[3]
    
    if (*(rax_15 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rsi_6, rdx_9.d)
        rax_15 = rsi_6[3]
    
    rax_13 = *(rax_15 + (rdx_9 << 3))

void* r14_2 = var_248.q
var_228:8.q = rax_13

if (r14_2 != 0)
    int64_t rdx_10 = sx.q(*(r14_2 + 0x10c))
    int64_t* rsi_7 = *(var_248:8.q + 0x10)
    int64_t r15_1 = rsi_7[3]
    
    if (*(r15_1 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rsi_7, rdx_10.d)
        r15_1 = rsi_7[3]
    
    r15 = *(r15_1 + (rdx_10 << 3))

int128_t var_208
var_208.q = r15
sub_1419870b0(arg2[8], &var_228, 2)
void* r9
int512_t zmm2_1
int512_t zmm3_1
r9, zmm2_1, zmm3_1 = sub_1410b7400(r14_2, arg2, rbx_1)
int32_t rcx_21 = var_238:4.d
int32_t r8_2 = var_238.d
int32_t rax_18 = var_238:0xc.d - rcx_21
int32_t var_260 = 1
int32_t rdx_14 = var_238:8.d - r8_2
int32_t var_268 = 1
var_248 = var_258.o
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rax_18))
var_258:4.d = rax_18
int128_t* var_270 = &var_248
var_258.d = rdx_14
void* rax_19 = var_258
int32_t var_288 = zmm4.d
void* rcx_22 = arg2[8]
zmm3_1.o = zx.o(rdx_14)
zmm3_1.o = _mm_cvtepi32_ps(zmm3_1.o)
zmm2_1.o = zx.o(r8_2)
int32_t var_290 = zmm3_1.d
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
int32_t var_2a0 = zmm2_1.d
zmm2_1.o = zx.o(0)
sub_1413993b0(rcx_22, zx.o(0), zmm2_1, r9, zmm3_1, zmm4.d, var_2a0, 
    _mm_cvtepi32_ps(zx.o(rcx_21)).d, var_290, var_288, rax_19, rdi, var_270, var_268, var_260)
sub_141096650(arg2[8])
int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_2c8)
return result
