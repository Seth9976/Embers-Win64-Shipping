// 函数: sub_141b6c050
// 地址: 0x141b6c050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void* rbx = *arg4
int64_t var_1e4
__builtin_memset(&var_1e4, 0, 0x43)
int16_t var_1a0 = 0
int64_t var_210 = data_14395da00
int64_t var_208 = data_14395da18
int64_t var_200 = data_14395d9e8
void* var_2a8 = rbx
int128_t var_240
__builtin_memset(&var_240, 0, 0x30)
int128_t var_1f8 = zx.o(0)

if (rbx != 0)
    *(rbx + 8) += 1
    rbx = var_2a8

int32_t rdx = arg5[1]
int32_t rax_6 = *arg5
int32_t r14 = arg4[5].d
int32_t r13 = *(arg4 + 0x2c)
int64_t* rdx_1 = *arg1
int64_t* rcx_1 = &rdx_1[4]
int64_t* rax_7 = rcx_1[2]

if (rax_7 != 0)
    rcx_1 = rax_7

void* r12 = *rcx_1
void* var_298 = r12

if (r12 != 0)
    *(r12 + 8) += 1
    rdx_1 = *arg1
    rbx = var_2a8
    r12 = var_298

int32_t rax_9 = (**rdx_1)(rdx_1)
int64_t* rcx_3 = *arg1
int64_t rdx_2 = *rcx_3
int32_t rax_10 = (*(rdx_2 + 8))(rcx_3, rdx_2)
int64_t* rax_11 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_270
sub_1419a2ec0(rax_11, &var_270, &data_143f55f90, 0)
void* rax_12 = var_270
void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_9[5]
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(r13))
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(r14))

if (rax_14 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_9[5]

*(arg2 + 0x30) = rax_14
void**** rax_15 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_15 = rcx_9
*(arg2 + 8) = &rcx_9[1]
rcx_9[1] = 0
*rcx_9 = &data_142d54998
void* rax_17 = rbx
*(rcx_9 + 0x1c) = zmm7.d
rcx_9[4].d = zmm6.d
rcx_9[2] = 0
rcx_9[3].d = 0
*(rcx_9 + 0x24) = 0
void** r14_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_13 = &r14_3[1]

if (rcx_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rax_17 = rbx
    r14_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_13 = &r14_3[1]

*(arg2 + 0x30) = rcx_13
*r14_3 = rax_17
void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_17[5]

if (rax_18 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_17[5]

*(arg2 + 0x30) = rax_18
void**** rax_19 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_19 = rcx_17
*(arg2 + 8) = &rcx_17[1]
rcx_17[3] = r14_3
rcx_17[1] = 0
*rcx_17 = &data_142d549c8
rcx_17[2].d = 1
rcx_17[4].d = 1
void** r14_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_21 = &r14_8[1]

if (rcx_21 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    r14_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_21 = &r14_8[1]

*(arg2 + 0x30) = rcx_21
*r14_8 = r12
void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_25[5]

if (rax_22 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_25[5]

*(arg2 + 0x30) = rax_22
void**** rax_23 = *(arg2 + 8)
*(arg2 + 0x14) += 1
int128_t zmm1 = data_142d3f5a0
*rax_23 = rcx_25
*(arg2 + 8) = &rcx_25[1]
rcx_25[1] = 0
*rcx_25 = &data_142d549c8
rcx_25[2].d = 1
rcx_25[3] = r14_8
rcx_25[4].d = 0
int32_t var_c0 = 0
int32_t var_bc
__builtin_memset(&var_bc, 0xff, 0x14)
int128_t var_a8 = zmm1
int64_t var_98
__builtin_memset(&var_98, 0, 0x19)
void* var_198 = rbx
int64_t var_190 = 0
int32_t var_188 = 0xffffffff
int16_t var_184 = 0x500
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x11)
int32_t var_c4 = 0
bool var_7f = *(rbx + 0x38) u> 1
void var_180
memset(&var_180, 0, 0xa8)
int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_25 = rbx_3 + 0x1a

if (rax_25 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x1c)
    rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_25 = rbx_3 + 0x1a

wchar16 const* const rcx_31 = u"UpsampleRect"
*(arg2 + 0x30) = rax_25
wchar16 const i

do
    i = *rcx_31
    *(rbx_3 - u"UpsampleRect" + rcx_31) = i
    rcx_31 = &rcx_31[1]
while (i != 0)
void*** rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_26 = &rcx_34[0x27]

if (rax_26 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_26 = &rcx_34[0x27]

*(arg2 + 0x30) = rax_26
void**** rax_27 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_27 = rcx_34
*(arg2 + 8) = &rcx_34[1]
sub_1405d11b0(rcx_34, &var_198, rbx_3)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_198)
int64_t var_88
*(arg2 + 0x178) = var_88:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_140fdc870(arg2, &var_240)

if (arg4[6] != 0)
    void* rax_30 = arg4[8]
    void* rcx_40 = &arg4[0xa]
    
    if (rax_30 != 0)
        rcx_40 = rax_30
    
    arg4[6]((*(*rcx_40 + 8))(rcx_40), arg2, &var_240)

void* var_260
sub_1419a2ec0(rax_11, &var_260, &data_143f55b50, 0)
var_240.q = data_1439c9210
int64_t rax_34 = 0
void* var_268

if (rax_12 != 0)
    int64_t rdx_11 = sx.q(*(rax_12 + 0x10c))
    int64_t* rbx_7 = *(var_268 + 0x10)
    int64_t rax_35 = rbx_7[3]
    
    if (*(rax_35 + (rdx_11 << 3)) == 0)
        sub_1419ccf30(rbx_7, rdx_11.d)
        rax_35 = rbx_7[3]
    
    rax_34 = *(rax_35 + (rdx_11 << 3))

void* rbx_8 = var_260
int64_t var_238 = rax_34
int64_t rax_36 = 0

if (rbx_8 != 0)
    int64_t rdx_12 = sx.q(*(rbx_8 + 0x10c))
    void* var_258
    int64_t* r14_12 = *(var_258 + 0x10)
    int64_t rax_38 = r14_12[3]
    
    if (*(rax_38 + (rdx_12 << 3)) == 0)
        sub_1419ccf30(r14_12, rdx_12.d)
        rax_38 = r14_12[3]
    
    rax_36 = *(rax_38 + (rdx_12 << 3))

int128_t var_220
var_220.q = rax_36
int32_t var_1e8 = 0
sub_1419870b0(arg2, &var_240, 2)

if (arg4[0xe] != 0)
    void* rax_39 = arg4[0x10]
    void* rcx_47 = &arg4[0x12]
    
    if (rax_39 != 0)
        rcx_47 = rax_39
    
    arg4[0xe]((*(*rcx_47 + 8))(rcx_47))

int64_t r13_2 = *(arg2 + 0x1a0)
int64_t* r14_14 = *arg6

if (*(rbx_8 + 0x11a) u> 0)
    void* var_2c0
    var_2c0.d = zx.d(*(rbx_8 + 0x118))
    void*** rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_43 = &rcx_51[5]
    
    if (rax_43 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_51 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_43 = &rcx_51[5]
    
    *(arg2 + 0x30) = rax_43
    void** rax_44 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_44 = rcx_51
    *(arg2 + 8) = &rcx_51[1]
    rcx_51[1] = 0
    *rcx_51 = &data_142d5a070
    rcx_51[3].d = var_2c0.d
    rcx_51[2] = r13_2
    rcx_51[4] = r12

if (*(rbx_8 + 0x11e) u> 0)
    uint32_t rbx_9 = zx.d(*(rbx_8 + 0x11c))
    
    if ((*(*r14_14 + 8))(r14_14) == 0)
        void*** rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_49 = &rcx_58[5]
        
        if (rax_49 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_58 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_49 = &rcx_58[5]
        
        *(arg2 + 0x30) = rax_49
        void**** rax_50 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_50 = rcx_58
        *(arg2 + 8) = &rcx_58[1]
        rcx_58[1] = 0
        *rcx_58 = &data_142d5a080
        rcx_58[2] = r13_2
        rcx_58[3].d = rbx_9
        rcx_58[4] = r14_14

uint128_t zmm5 = 0x3f800000
float zmm1_1
uint128_t zmm6_1

if (rax_6 != rax_9)
    zmm1_1 = 1f f/ _mm_cvtepi32_ps(zx.o(rax_9)).d
    zmm6_1.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f* zmm1_1
    zmm6_1.d = zmm6_1.d f- zmm1_1
else
    zmm6_1 = 0x3f800000

if (rdx != rax_10)
    zmm5.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_10)).d
    zmm1_1 = zmm5.d
    zmm5.d = _mm_cvtepi32_ps(zx.o(rdx)).d f* zmm1_1
    zmm5.d = zmm5.d f- zmm1_1

uint128_t zmm0_1 = zx.o(0)
float zmm4 = *(arg4 + 0x24) - *(arg4 + 0x1c)
int64_t r8_2 = *arg3
zmm1_1 = arg4[4].d f- arg4[3].d
int32_t var_2d0 = 0
void* var_250 = rax_12
void* var_248 = var_268
void** var_2d8 = &var_250
int64_t var_2e0 = 1
int64_t var_2e8 = arg4[5]
int32_t var_2f0 = zmm5.d
int32_t var_2f8 = zmm6_1.d
int32_t var_300 = zmm0_1.d
int32_t var_308 = zmm0_1.d
float var_310 = zmm4
float var_318 = zmm1_1
(*(r8_2 + 0xd0))(arg3, arg2, r8_2)
sub_141096650(arg2)
int64_t var_90
sub_1405d1550(&var_90)
sub_1405d1550(&var_298)
int64_t result = sub_1405d1550(&var_2a8)
__security_check_cookie(rax_1 ^ &var_338)
return result
