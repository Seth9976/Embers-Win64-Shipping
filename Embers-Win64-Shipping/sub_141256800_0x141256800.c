// 函数: sub_141256800
// 地址: 0x141256800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg5
uint128_t var_68 = arg6
uint128_t var_78 = arg7
uint128_t var_88 = arg8
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int64_t var_2a8 = *sub_14139d700(&data_143ec4c60)
int64_t* var_2a0

if (arg2[0x2a9].d s>= 3)
    var_2a0 = nullptr
    sub_14131f0f0(&data_143eb2670, arg1, arg2, &var_2a0)
    int64_t* rcx = var_2a0
    
    if (rcx != 0)
        var_2a8 = rcx[2]
        (*(*rcx + 0x38))()

int32_t rax_5 = sub_1422e5a30(arg2)
int64_t rdx_1

if (((rax_5 - 0x11) & 0xfffffff3) != 0 || rax_5 == 0x19)
    rdx_1 = sx.q(rax_5) * 5

int64_t r12

if ((((rax_5 - 0x11) & 0xfffffff3) != 0 || rax_5 == 0x19) && (
        *((rdx_1 << 2) + &data_143f025f0) != data_143f025c0
        || (*((rdx_1 << 2) + &data_143f025fc) & 1) == 0))
    r12.b = 1
else
    r12.b = 9

int64_t* rax_8 = (*(*arg4 + 8))(arg4)
int64_t* rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_5 = *rax_8
void* rax_9 = &rdi_2[1]

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rdi_2[1]

*(arg1 + 0x30) = rax_9
*rdi_2 = rcx_5
void*** rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_9[5]

if (rax_10 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_9[5]

*(arg1 + 0x30) = rax_10
void**** rax_11 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_11 = rcx_9
*(arg1 + 8) = &rcx_9[1]
rcx_9[1] = 0
*rcx_9 = &data_142d549c8
rcx_9[2].d = 1
rcx_9[3] = rdi_2
rcx_9[4].d = 1
int64_t* rax_14 = (*(*arg4 + 8))(arg4)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_14 = *rax_14
int64_t var_1b8 = rcx_14
int32_t var_e0 = 0
int32_t var_dc
__builtin_memset(&var_dc, 0xff, 0x14)
int128_t var_c8 = zmm1
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x19)
int64_t var_1b0 = 0
int32_t var_1a8 = 0xffffffff
char var_1a4 = 0
char var_1a3 = r12.b
int64_t var_f8
__builtin_memset(&var_f8, 0, 0x11)
int32_t var_e4 = 0
bool var_9f = *(rcx_14 + 0x38) u> 1
void var_1a0
memset(&var_1a0, 0, 0xa8)
int64_t rdi_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_15 = rdi_7 + 0x36

if (rax_15 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rdi_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_15 = rdi_7 + 0x36

wchar16 const* const rcx_17 = u"PrefilterPlanarReflections"
*(arg1 + 0x30) = rax_15
wchar16 const i

do
    i = *rcx_17
    *(rcx_17 + rdi_7 - u"PrefilterPlanarReflections") = i
    rcx_17 = &rcx_17[1]
while (i != 0)
void*** rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_16 = &rcx_20[0x27]

if (rax_16 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_20[0x27]

*(arg1 + 0x30) = rax_16
void**** rax_17 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_17 = rcx_20
*(arg1 + 8) = &rcx_20[1]
sub_1405d11b0(rcx_20, &var_1b8, rdi_7)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_1b8)
int64_t var_a8
*(arg1 + 0x178) = var_a8:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
arg6 = zx.o(arg2[0x2b4].d)
void*** rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
arg7 = zx.o(*(arg2 + 0x159c))
arg8 = zx.o(arg2[0x2b3].d)
arg5 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x15a4)))
void* rax_20 = &rcx_27[5]
arg6 = _mm_cvtepi32_ps(arg6)
arg7 = _mm_cvtepi32_ps(arg7)
arg8 = _mm_cvtepi32_ps(arg8)

if (rax_20 u> *(arg1 + 0x38))
    arg5 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_20 = &rcx_27[5]

*(arg1 + 0x30) = rax_20
void** rax_21 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_21 = rcx_27
*(arg1 + 8) = &rcx_27[1]
rcx_27[1] = 0
*rcx_27 = &data_142d54998
rcx_27[2].d = arg8.d
*(rcx_27 + 0x14) = arg7.d
*(rcx_27 + 0x1c) = arg6.d
rcx_27[4].d = arg5.d
rcx_27[3].d = 0
*(rcx_27 + 0x24) = 0x3f800000
int128_t var_260
__builtin_memset(&var_260, 0, 0x30)
int64_t var_204
__builtin_memset(&var_204, 0, 0x43)
int128_t var_218 = zx.o(0)
int16_t var_1c0 = 0
sub_140fdc870(arg1, &var_260)
int64_t var_230 = data_14395da00
int64_t var_228 = data_14395da18
int64_t var_220 = data_14395d9e8
void* var_270
sub_1419a2ec0(arg2[0xa2a], &var_270, &data_143e87870, 0)
void* r13 = var_270
void* var_290
sub_1419a2ec0(arg2[0xa2a], &var_290, &data_143eaac50, 0)
var_260.q = data_1439c9210
int64_t rax_27 = 0
void* var_268

if (r13 != 0)
    int64_t rdx_9 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_2 = *(var_268 + 0x10)
    int64_t rax_28 = rbx_2[3]
    
    if (*(rax_28 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_9.d)
        rax_28 = rbx_2[3]
    
    rax_27 = *(rax_28 + (rdx_9 << 3))

void* rdi_11 = var_290
var_260:8.q = rax_27
int64_t rax_29 = 0

if (rdi_11 != 0)
    int64_t rdx_10 = sx.q(*(rdi_11 + 0x10c))
    void* var_288
    int64_t* rbx_3 = *(var_288 + 0x10)
    int64_t rax_31 = rbx_3[3]
    
    if (*(rax_31 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rbx_3, rdx_10.d)
        rax_31 = rbx_3[3]
    
    rax_29 = *(rax_31 + (rdx_10 << 3))

int128_t var_240
var_240.q = rax_29
int32_t var_208 = 0
sub_1419870b0(arg1, &var_260, 2)
int512_t zmm3
int512_t zmm7
int512_t zmm8
int512_t zmm9
zmm3, zmm7, zmm8, zmm9 =
    sub_141296c90(rdi_11, arg1, arg2, arg3, var_2a8, arg2[0x2b4].d - arg2[0x2b3].d)
var_290.o = zx.o(0)
sub_141299240(r13, arg1, arg2, &var_290)
int64_t r13_1 = arg2[0x2b3]
var_2a0.d = arg2[0x2b4].d - r13_1.d
uint32_t rbx_5 = (r13_1 u>> 0x20).d
int32_t r15_3 = *(arg2 + 0x15a4) - rbx_5
int32_t rdi_12 = r15_3
char rax_38
void* r9_3
rax_38, r9_3 = sub_14128e090((*U"1111")[sx.q(arg2[0x2a9].d)])

if (rax_38 != 0)
    char rax_39
    rax_39, r9_3 = sub_1422eb710()
    
    if (rax_39 == 0)
        rdi_12 = neg.d(rdi_12)
        rbx_5 += r15_3

var_290 = r13
void* var_288_1 = var_268
int32_t rcx_42 = *(arg2 + 0x15a4) - *(arg2 + 0x159c)
int32_t rdx_15 = arg2[0x2b4].d - arg2[0x2b3].d
int64_t rax_42 = data_143ec4fdc
int32_t var_2b0 = 1
int32_t var_2b8 = 1
var_2a8:4.d = rcx_42
void** var_2c0 = &var_290
uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(var_2a0.d))
var_2a8.d = rdx_15
int512_t zmm2
zmm2.o = zx.o(rbx_5)
int32_t var_2d8 = _mm_cvtepi32_ps(zx.o(rdi_12)).d
int32_t var_2e0 = zmm1_2.d
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
int32_t var_2e8 = zmm2.d
zmm2.o = zx.o(0)
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(r13_1.d))
zmm3.o = zx.o(rdx_15)
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rcx_42))
int32_t var_2f0_1 = zmm4.d
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
int64_t var_2f8
var_2f8.d = zmm5.d
sub_1413993b0(arg1, zx.o(0), zmm2, r9_3, zmm3, var_2f8.d, var_2f0_1, var_2e8, var_2e0, var_2d8, 
    var_2a8, rax_42, var_2c0, var_2b8, var_2b0)
sub_141096650(arg1)
int64_t var_b0
int64_t result
int512_t zmm6
result, zmm6 = sub_1405d1550(&var_b0)
__security_check_cookie(rax_1 ^ &var_318)
zmm6.o = var_58
zmm7.o = var_68
zmm8.o = var_78
zmm9.o = var_88
return result
