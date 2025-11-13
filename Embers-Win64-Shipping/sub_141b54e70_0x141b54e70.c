// 函数: sub_141b54e70
// 地址: 0x141b54e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg5
void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
int64_t* rcx = *arg1
int32_t rax_3 = arg4[5].d
int32_t rax_4 = *(arg4 + 0x2c)
int32_t rax_6 = (**rcx)(rcx)
int64_t* rcx_1 = *arg1
int64_t rdx = *rcx_1
int32_t rax_7 = (*(rdx + 8))(rcx_1, rdx)
int64_t* rax_8 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_2f0
sub_1419a2ec0(rax_8, &var_2f0, &data_143f55f90, 0)
void* rdi = data_14395f4d0
void* rcx_5 = var_2f0
void* var_368 = rdi

if (rdi != 0)
    *(rdi + 8) += 1
    rdi = var_368

int64_t* rbx_2 = *arg1 + 0x20
int64_t* rax_10 = rbx_2[2]

if (rax_10 != 0)
    rbx_2 = rax_10

void* rbx_3 = *rbx_2
void* var_358 = rbx_3

if (rbx_3 != 0)
    *(rbx_3 + 8) += 1
    rdi = var_368
    rbx_3 = var_358

void* var_2e0
sub_1419a2ec0(rax_8, &var_2e0, &data_143f2d840, 0)
void* r13 = var_2e0
int64_t* r15_2 = (arg2[6] + 7) & 0xfffffffffffffff8
void* var_2d8
void* var_360 = var_2d8
int64_t rax_12 = *arg4
void* rcx_7 = &r15_2[1]

if (rcx_7 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x10)
    r15_2 = (arg2[6] + 7) & 0xfffffffffffffff8
    rcx_7 = &r15_2[1]

arg2[6] = rcx_7
*r15_2 = rax_12
void*** rcx_11 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_11[5]

if (rax_13 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x30)
    rcx_11 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_11[5]

arg2[6] = rax_13
void**** rax_14 = arg2[1]
*(arg2 + 0x14) += 1
*rax_14 = rcx_11
arg2[1] = &rcx_11[1]
rcx_11[3] = r15_2
rcx_11[1] = 0
*rcx_11 = &data_142d549c8
void* rax_16 = rbx_3
rcx_11[2].d = 1
rcx_11[4].d = 0
void** r15_7 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rcx_15 = &r15_7[1]

if (rcx_15 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x10)
    rax_16 = rbx_3
    r15_7 = (arg2[6] + 7) & 0xfffffffffffffff8
    rcx_15 = &r15_7[1]

arg2[6] = rcx_15
*r15_7 = rax_16
void*** rcx_19 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_19[5]

if (rax_17 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x30)
    rcx_19 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_19[5]

arg2[6] = rax_17
*(arg2 + 0x14) += 1
void**** rax_18 = arg2[1]
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rax_4))
*rax_18 = rcx_19
arg2[1] = &rcx_19[1]
rcx_19[1] = 0
*rcx_19 = &data_142d549c8
rcx_19[2].d = 1
rcx_19[3] = r15_7
rcx_19[4].d = 1
int128_t zmm12 = arg4[4].d
int128_t zmm13 = *(arg4 + 0x24)
int64_t rcx_23 = arg2[6]
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rax_3))
void*** rcx_25 = (rcx_23 + 7) & 0xfffffffffffffff8
int128_t zmm10
zmm10.d = 1f f/ zmm2.d
void* rax_20 = &rcx_25[5]
int128_t zmm11
zmm11.d = 1f f/ zmm3.d
int128_t zmm9
zmm9.d = zmm10.d f* *(arg4 + 0x1c)
int128_t zmm15
zmm15.d = zmm10.d f* zmm13.d
zmm13.d = zmm13.d f- *(arg4 + 0x1c)
int128_t zmm8
zmm8.d = zmm11.d f* arg4[3].d
int128_t zmm14
zmm14.d = zmm11.d f* zmm12.d
zmm12.d = zmm12.d f- arg4[3].d
zmm13.d = zmm13.d f/ zmm2.d
zmm12.d = zmm12.d f/ zmm3.d
arg5 = _mm_cvtepi32_ps(zx.o(rax_7))
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rax_6))

if (rax_20 u> arg2[7])
    arg5 = sub_140b0e3d0(&arg2[6], 0x30)
    rcx_25 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_20 = &rcx_25[5]

arg2[6] = rax_20
void**** rax_21 = arg2[1]
*(arg2 + 0x14) += 1
*rax_21 = rcx_25
arg2[1] = &rcx_25[1]
rcx_25[1] = 0
*rcx_25 = &data_142d54998
*(rcx_25 + 0x1c) = zmm7.d
rcx_25[4].d = arg5.d
rcx_25[2] = 0
rcx_25[3].d = 0
*(rcx_25 + 0x24) = 0
void*** rcx_31 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rax_23 = &rcx_31[5]

if (rax_23 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x30)
    rcx_31 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_23 = &rcx_31[5]

arg2[6] = rax_23
int64_t* rax_24 = arg2[1]
*(arg2 + 0x14) += 1
int128_t zmm1 = data_142d3f5a0
*rax_24 = rcx_31
arg2[1] = &rcx_31[1]
rcx_31[1] = 0
*rcx_31 = &data_142f18bc8
rcx_31[2].b = 0
*(rcx_31 + 0x14) = 0
*(rcx_31 + 0x1c) = 0
int32_t var_140 = 0
int32_t var_13c
__builtin_memset(&var_13c, 0xff, 0x14)
int128_t var_128 = zmm1
int64_t var_118
__builtin_memset(&var_118, 0, 0x19)
void* var_218 = rbx_3
int64_t var_210 = 0
int32_t var_208 = 0xffffffff
int16_t var_204 = 0x500
int64_t var_158
__builtin_memset(&var_158, 0, 0x11)
int32_t var_144 = 0
bool var_ff = *(rbx_3 + 0x38) u> 1
void var_200
memset(&var_200, 0, 0xa8)
int64_t rbx_6 = (arg2[6] + 1) & 0xfffffffffffffffe
int64_t rax_26 = rbx_6 + 0x1e

if (rax_26 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x20)
    rbx_6 = (arg2[6] + 1) & 0xfffffffffffffffe
    rax_26 = rbx_6 + 0x1e

wchar16 const* const rcx_37 = u"DownsampleRect"
arg2[6] = rax_26
wchar16 const i

do
    i = *rcx_37
    *(rbx_6 - u"DownsampleRect" + rcx_37) = i
    rcx_37 = &rcx_37[1]
while (i != 0)
void*** rcx_40 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rax_27 = &rcx_40[0x27]

if (rax_27 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x140)
    rcx_40 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_27 = &rcx_40[0x27]

arg2[6] = rax_27
void**** rax_28 = arg2[1]
*(arg2 + 0x14) += 1
*rax_28 = rcx_40
arg2[1] = &rcx_40[1]
sub_1405d11b0(rcx_40, &var_218, rbx_6)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_218)
int64_t var_108
arg2[0x2f].b = var_108:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
int128_t var_2c0
__builtin_memset(&var_2c0, 0, 0x30)
int64_t var_264
__builtin_memset(&var_264, 0, 0x43)
int128_t var_278 = zx.o(0)
int16_t var_220 = 0
sub_140fdc870(arg2, &var_2c0)
int64_t var_290 = data_14395da00
int64_t var_288 = data_14395da18
int64_t var_280 = data_14395d9e8
var_2c0.q = data_1439c9210
int64_t rax_35 = 0
void* var_2e8

if (rcx_5 != 0)
    int64_t rdx_8 = sx.q(*(rcx_5 + 0x10c))
    int64_t* rbx_10 = *(var_2e8 + 0x10)
    int64_t rax_36 = rbx_10[3]
    
    if (*(rax_36 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_10, rdx_8.d)
        rax_36 = rbx_10[3]
    
    rax_35 = *(rax_36 + (rdx_8 << 3))

var_2c0:8.q = rax_35
int64_t rax_37 = 0

if (r13 != 0)
    int64_t rdx_9 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_12 = *(var_360 + 0x10)
    int64_t rax_38 = rbx_12[3]
    
    if (*(rax_38 + (rdx_9 << 3)) == 0)
        sub_1419ccf30(rbx_12, rdx_9.d)
        rax_38 = rbx_12[3]
    
    rax_37 = *(rax_38 + (rdx_9 << 3))

int128_t var_2a0
var_2a0.q = rax_37
int32_t var_268 = 0
sub_1419870b0(arg2, &var_2c0, 2)
var_360 = arg2[0x34]
int32_t var_348 = zmm11.d
int32_t var_344 = zmm10.d
int64_t var_340 = 0
sub_1405d0e10(arg2, &var_360, r13 + 0x120, &var_348, 0)
int64_t var_310 = arg2[0x34]
int32_t var_338 = zmm8.d
int32_t var_334 = zmm9.d
int32_t var_330 = zmm14.d
int32_t var_32c = zmm15.d
sub_1405d0e10(arg2, &var_310, r13 + 0x130, &var_338, 0)
void* var_308 = rdi

if (rdi != 0)
    *(rdi + 8) += 1

sub_141b667f0(r13, arg2, *arg4, &var_308)
int32_t var_390 = 0
void* var_2c8 = var_2e8
int64_t r8_4 = *arg3
int32_t var_374 = rax_7
void* var_380
var_380.d = 1
var_380:4.d = 1
void* var_2d0 = rcx_5
uint128_t zmm1_1 = zx.o(*arg6)
void** var_398 = &var_2d0
int32_t var_3b0 = zmm13.d
int32_t var_3b8 = zmm12.d
int32_t var_3c0 = zmm9.d
int32_t var_3c8 = zmm8.d
int32_t var_3d0 = _mm_cvtepi32_ps(zx.o(arg6[1])).d
(*(r8_4 + 0xd0))(arg3, arg2, r8_4, zx.o(0), _mm_cvtepi32_ps(zmm1_1).d, var_3d0, var_3c8, var_3c0, 
    var_3b8, var_3b0, rax_6.q, var_380, var_398, var_390, rax_6, var_380, rax_6, rax_3)
sub_141096650(arg2)
int64_t var_110
sub_1405d1550(&var_110)
sub_1405d1550(&var_358)
int64_t result
int512_t zmm6
result, zmm6 = sub_1405d1550(&var_368)
__security_check_cookie(rax_1 ^ &var_3f8)
zmm6.o = var_58
return result
