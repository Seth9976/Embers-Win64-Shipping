// 函数: sub_141b4fe50
// 地址: 0x141b4fe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg5
void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int128_t zmm1
zmm1.d = arg4[4].d.d f- arg4[3].d
void* rbx = *arg1
zmm1.d = zmm1.d f+ zmm1.d
int32_t rdx = *(rbx + 0x44)
zmm1.d = zmm1.d f+ 0.5f
int32_t rcx = int.d(zmm1.d)
zmm1.d = (*(arg4 + 0x24)).d f- *(arg4 + 0x1c)
int32_t rcx_1 = rcx s>> 1
int32_t var_320 = rcx_1
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t var_31c = int.d(zmm1.d) s>> 1
int64_t rax_4 = var_320.q
int64_t var_2e8 = rax_4

if (rcx_1 s> rdx)
label_141b4ff17:
    
    if (*(rbx + 0x10) == 0xffffffff)
        (*(*(rbx + 8) + 0x28))(rbx + 8, rdx)
    
    sub_141b654c0(rbx, &var_2e8)
else
    int32_t rcx_2 = *(rbx + 0x48)
    
    if ((rax_4 u>> 0x20).d s> rcx_2)
        goto label_141b4ff17
    
    if (rdx != data_143dbb180.d)
        if (*(rbx + 0x38) == 0)
            goto label_141b4ff17
    else if (rcx_2 == data_143dbb180:4.d || *(rbx + 0x38) == 0)
        goto label_141b4ff17

void* rbx_1 = data_14395fa10
void* var_328 = rbx_1

if (rbx_1 != 0)
    *(rbx_1 + 8) += 1
    rbx_1 = var_328

int64_t* rax_8 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_270
sub_1419a2ec0(rax_8, &var_270, &data_143f55f90, 0)
void* rax_9 = var_270
void* var_260
sub_1419a2ec0(rax_8, &var_260, &data_143f2d940, 0)
int64_t* rcx_8 = *arg1
void* r13 = var_260
int32_t rax_13 = (**rcx_8)(rcx_8)
int64_t* rcx_9 = *arg1
int64_t rdx_4 = *rcx_9
int32_t rax_14 = (*(rdx_4 + 8))(rcx_9, rdx_4)
void* rsi_1 = data_1439c9210
void* var_300 = rsi_1

if (rsi_1 != 0)
    *(rsi_1 + 8) += 1
    rbx_1 = var_328
    rsi_1 = var_300

int64_t var_210 = data_14395da00
void*** rcx_12 = (arg2[6] + 7) & 0xfffffffffffffff8
int64_t var_208 = data_14395da18
int64_t var_200 = data_14395d9e8
void* rax_18 = &rcx_12[5]
int64_t var_1e4
__builtin_memset(&var_1e4, 0, 0x43)
int128_t var_240
__builtin_memset(&var_240, 0, 0x30)
int128_t var_1f8 = zx.o(0)
int16_t var_1a0 = 0

if (rax_18 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x30)
    rcx_12 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_12[5]

arg2[6] = rax_18
int64_t* rax_19 = arg2[1]
*(arg2 + 0x14) += 1
arg5 = _mm_cvtepi32_ps(zx.o(rax_14))
*rax_19 = rcx_12
arg2[1] = &rcx_12[1]
rcx_12[1] = 0
*rcx_12 = &data_142f18bc8
rcx_12[2].b = 0
*(rcx_12 + 0x14) = 0
*(rcx_12 + 0x1c) = 0
void*** rcx_18 = (arg2[6] + 7) & 0xfffffffffffffff8
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rax_13))
void* rax_21 = &rcx_18[5]

if (rax_21 u> arg2[7])
    arg5 = sub_140b0e3d0(&arg2[6], 0x30)
    rcx_18 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_21 = &rcx_18[5]

arg2[6] = rax_21
void** rax_22 = arg2[1]
*(arg2 + 0x14) += 1
*rax_22 = rcx_18
arg2[1] = &rcx_18[1]
rcx_18[1] = 0
*rcx_18 = &data_142d54998
*(rcx_18 + 0x1c) = zmm7.d
rcx_18[4].d = arg5.d
rcx_18[2] = 0
rcx_18[3].d = 0
*(rcx_18 + 0x24) = 0
void* rax_24 = *arg4
var_320.q = rax_24

if (rax_24 != 0)
    *(rax_24 + 8) += 1
    rbx_1 = var_328
    rsi_1 = var_300

int64_t* rdi_4 = *arg1 + 0x20
int64_t* rax_25 = rdi_4[2]

if (rax_25 != 0)
    rdi_4 = rax_25

void* rdi_5 = *rdi_4
void* var_2e0 = rdi_5

if (rdi_5 != 0)
    *(rdi_5 + 8) += 1
    rbx_1 = var_328
    rsi_1 = var_300
    rdi_5 = var_2e0

int64_t rax_26 = var_320.q
int64_t* r12_3 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rcx_22 = &r12_3[1]

if (rcx_22 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x10)
    r12_3 = (arg2[6] + 7) & 0xfffffffffffffff8
    rcx_22 = &r12_3[1]

arg2[6] = rcx_22
*r12_3 = rax_26
void*** rcx_26 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rax_27 = &rcx_26[5]

if (rax_27 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x30)
    rcx_26 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_27 = &rcx_26[5]

arg2[6] = rax_27
void**** rax_28 = arg2[1]
*(arg2 + 0x14) += 1
*rax_28 = rcx_26
arg2[1] = &rcx_26[1]
rcx_26[3] = r12_3
rcx_26[1] = 0
*rcx_26 = &data_142d549c8
rcx_26[2].d = 1
rcx_26[4].d = 0
void** r12_8 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rcx_30 = &r12_8[1]

if (rcx_30 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x10)
    r12_8 = (arg2[6] + 7) & 0xfffffffffffffff8
    rcx_30 = &r12_8[1]

arg2[6] = rcx_30
*r12_8 = rdi_5
void*** rcx_34 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rax_31 = &rcx_34[5]

if (rax_31 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x30)
    rcx_34 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_31 = &rcx_34[5]

arg2[6] = rax_31
void**** rax_32 = arg2[1]
*(arg2 + 0x14) += 1
zmm1 = data_142d3f5a0
*rax_32 = rcx_34
arg2[1] = &rcx_34[1]
rcx_34[1] = 0
*rcx_34 = &data_142d549c8
rcx_34[2].d = 1
rcx_34[3] = r12_8
rcx_34[4].d = 1
int32_t var_c0 = 0
int32_t var_bc
__builtin_memset(&var_bc, 0xff, 0x14)
int128_t var_a8 = zmm1
int64_t var_98
__builtin_memset(&var_98, 0, 0x19)
void* var_198 = rdi_5
int64_t var_190 = 0
int32_t var_188 = 0xffffffff
int16_t var_184 = 0x500
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x11)
int32_t var_c4 = 0
bool var_7f = *(rdi_5 + 0x38) u> 1
void var_180
memset(&var_180, 0, 0xa8)
int64_t rdi_8 = (arg2[6] + 1) & 0xfffffffffffffffe
int64_t rax_34 = rdi_8 + 0x20

if (rax_34 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x22)
    rdi_8 = (arg2[6] + 1) & 0xfffffffffffffffe
    rax_34 = rdi_8 + 0x20

wchar16 const* const rcx_40 = u"ColorDeficiency"
arg2[6] = rax_34
wchar16 const i

do
    i = *rcx_40
    *(rcx_40 + rdi_8 - u"ColorDeficiency") = i
    rcx_40 = &rcx_40[1]
while (i != 0)
void*** rcx_43 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rax_35 = &rcx_43[0x27]

if (rax_35 u> arg2[7])
    sub_140b0e3d0(&arg2[6], 0x140)
    rcx_43 = (arg2[6] + 7) & 0xfffffffffffffff8
    rax_35 = &rcx_43[0x27]

arg2[6] = rax_35
void**** rax_36 = arg2[1]
*(arg2 + 0x14) += 1
*rax_36 = rcx_43
arg2[1] = &rcx_43[1]
sub_1405d11b0(rcx_43, &var_198, rdi_8)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_198)
int64_t var_88
arg2[0x2f].b = var_88:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_140fdc870(arg2, &var_240)
int64_t rax_39 = 0
var_240.q = rsi_1
void* var_268

if (rax_9 != 0)
    int64_t rdx_10 = sx.q(*(rax_9 + 0x10c))
    int64_t* rdi_11 = *(var_268 + 0x10)
    int64_t rax_40 = rdi_11[3]
    
    if (*(rax_40 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rdi_11, rdx_10.d)
        rax_40 = rdi_11[3]
    
    rax_39 = *(rax_40 + (rdx_10 << 3))

var_240:8.q = rax_39
int64_t rax_41 = 0

if (r13 != 0)
    int64_t rdx_11 = sx.q(*(r13 + 0x10c))
    void* var_258
    int64_t* rdi_13 = *(var_258 + 0x10)
    int64_t rax_42 = rdi_13[3]
    
    if (*(rax_42 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(rdi_13, rdx_11.d)
        rax_42 = rdi_13[3]
    
    rax_41 = *(rax_42 + (rdx_11 << 3))

int128_t var_220
var_220.q = rax_41
int32_t var_1e8 = 0
sub_1419870b0(arg2, &var_240, 2)
int32_t rdi_14 = data_143f2d36c
char rsi_4 = data_143f2d370
int32_t var_378 = 0
int64_t rax_44 = arg2[0x34]
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(data_143f2d368))
int64_t var_2b0 = rax_44
int32_t var_2f8 = zmm0.d
sub_1405eb490(arg2, &var_2b0, r13 + 0x130, &var_2f8, var_378)
int64_t rax_45 = arg2[0x34]
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rdi_14))
int64_t var_2a8 = rax_45
int32_t var_378_1 = 0
int32_t var_2f4 = zmm0_1.d
sub_1405eb490(arg2, &var_2a8, r13 + 0x136, &var_2f4, var_378_1)
int512_t zmm6
zmm6.o = zx.o(0)
int32_t zmm0_2

if (rsi_4 == 0)
    zmm0_2 = (zx.o(0)).d
else
    zmm0_2 = 0x3f800000

int64_t var_2a0 = arg2[0x34]
int32_t var_2f0 = zmm0_2
sub_1405eb490(arg2, &var_2a0, r13 + 0x13c, &var_2f0, 0)
int32_t zmm0_3

if (data_143f2d371 == 0)
    zmm0_3 = (zx.o(0)).d
else
    zmm0_3 = 0x3f800000

int64_t var_298 = arg2[0x34]
int32_t var_2ec = zmm0_3
sub_1405eb490(arg2, &var_298, r13 + 0x142, &var_2ec, 0)
void* var_290 = rbx_1

if (rbx_1 != 0)
    *(rbx_1 + 8) += 1

int32_t zmm6_1 = sub_141b667f0(r13, arg2, var_320.q, &var_290)
int512_t zmm3
zmm3.o = zx.o(0)
int64_t rbx_2 = var_2e8
int32_t var_330 = 0
int64_t r8_6 = *arg3
int32_t var_304 = rax_14
void* var_250
void** var_338 = &var_250
uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(var_2e8:4.d))
int64_t var_340 = 1
int32_t var_350 = 0x3f800000
int32_t var_358 = 0x3f800000
uint128_t zmm0_4 = _mm_cvtepi32_ps(zx.o(rbx_2.d))
var_250 = rax_9
void* var_248 = var_268
(*(r8_6 + 0xd0))(arg3, arg2, r8_6, zmm3, zmm0_4.d, zmm1_1.d, zmm6_1, zmm6_1, var_358, var_350, 
    rax_13.q, var_340, var_338, var_330)
sub_141096650(arg2)
int64_t var_90
sub_1405d1550(&var_90)
sub_1405d1550(&var_2e0)
sub_1405d1550(&var_320)
int32_t var_370
var_370.q = &var_328
int64_t var_280 = rbx_2
int32_t var_378_4
var_378_4.q = &var_280
sub_141b6c050(arg1, arg2, arg3, arg4, var_378_4, var_370)
sub_14081c9d0(&var_300)
int64_t result
int512_t zmm6_2
result, zmm6_2 = sub_1405d1550(&var_328)
__security_check_cookie(rax_1 ^ &var_398)
zmm6_2.o = var_58
return result
