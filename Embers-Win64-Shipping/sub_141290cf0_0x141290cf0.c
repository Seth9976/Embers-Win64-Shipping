// 函数: sub_141290cf0
// 地址: 0x141290cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t* var_1e8 = &data_143ec4c60
uint128_t zmm6 = sub_141391390(&data_143ec4c60, arg2)
int32_t rdi = *(*sub_14139d690(&data_143ec4c60) + 0x38)
void* const var_1e0
int64_t var_1d8
int32_t rax_4
int32_t rbx
void* const r14

if (rdi u<= 1)
    rax_4 = 2
    r14 = nullptr
    var_1d8 = 0
    rbx = 0
else
    r14 = *sub_14139d700(&data_143ec4c60)
    var_1e0 = r14
    
    if (r14 != 0)
        *(r14 + 8) += 1
        r14 = var_1e0
    
    rbx = 1
    rax_4 = 0

if (rax_4 != 0)
    zmm6 = sub_1405d1550(&var_1d8)

if (rbx != 0)
    zmm6 = sub_1405d1550(&var_1e0)

rdi.b = rdi u> 1
rdi.b += 9
int64_t rbx_1 = *(var_1e8[8] + 8)
int64_t* rax_6 = sub_14139d690(var_1e8)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_5 = *rax_6
int64_t var_1a8 = rcx_5
int32_t var_d0 = 0
int32_t var_cc
__builtin_memset(&var_cc, 0xff, 0x14)
int128_t var_b8 = zmm1
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x19)
void* const var_1a0 = r14
int32_t var_198 = 0xffffffff
char var_194 = 0
char var_193 = rdi.b
int64_t var_e8 = rbx_1
bool var_8f = *(rcx_5 + 0x38) u> 1
int64_t var_e0 = 0
char var_d8 = 0x88
int32_t var_d4 = 0x11
void var_190
memset(&var_190, 0, 0xa8)
int64_t* rax_7 = sub_14139d690(var_1e8)
int64_t* rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_8 = *rax_7
void* rax_8 = &rdi_3[1]

if (rax_8 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x10)
    rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rdi_3[1]

*(arg2 + 0x30) = rax_8
*rdi_3 = rcx_8
void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_12[5]

if (rax_9 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_12[5]

*(arg2 + 0x30) = rax_9
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_12
*(arg2 + 8) = &rcx_12[1]
rcx_12[1] = 0
*rcx_12 = &data_142d549c8
rcx_12[3] = rdi_3
rcx_12[2].d = 1
rcx_12[4].d = 1
int64_t* rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_16 = *(var_1e8[8] + 8)
void* rax_14 = &rdi_8[1]

if (rax_14 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x10)
    rdi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rdi_8[1]

*(arg2 + 0x30) = rax_14
*rdi_8 = rcx_16
void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_20[5]

if (rax_15 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_20[5]

*(arg2 + 0x30) = rax_15
void**** rax_16 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_16 = rcx_20
*(arg2 + 8) = &rcx_20[1]
rcx_20[1] = 0
*rcx_20 = &data_142d549c8
rcx_20[2].d = 1
rcx_20[3] = rdi_8
rcx_20[4].d = 1

if (r14 != 0)
    void** rdi_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_18 = &rdi_13[1]
    
    if (rax_18 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x10)
        rdi_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_18 = &rdi_13[1]
    
    *(arg2 + 0x30) = rax_18
    *rdi_13 = r14
    void*** rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_27[5]
    
    if (rax_19 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_27[5]
    
    *(arg2 + 0x30) = rax_19
    void** rax_20 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_20 = rcx_27
    *(arg2 + 8) = &rcx_27[1]
    rcx_27[1] = 0
    *rcx_27 = &data_142d549c8
    rcx_27[2].d = 1
    rcx_27[3] = rdi_13
    rcx_27[4].d = 1

uint128_t zmm7
uint128_t zmm8
uint128_t zmm9

if (sub_141405870(*(arg1 + 8) + 0x20, arg3, 1) != 0)
    sub_1412e8960(arg1, arg2, arg3)
    zmm6, zmm7, zmm8, zmm9 = sub_1412e5450(arg1, arg2, arg3)

int64_t rdi_18 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_23 = rdi_18 + 0x2a

if (rax_23 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x2c)
    rdi_18 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_23 = rdi_18 + 0x2a

wchar16 const* const rcx_36 = u"RenderInverseOpacity"
*(arg2 + 0x30) = rax_23
wchar16 const i

do
    i = *rcx_36
    *(rcx_36 + rdi_18 - u"RenderInverseOpacity") = i
    rcx_36 = &rcx_36[1]
while (i != 0)
void*** rcx_39 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = &rcx_39[0x27]

if (rax_24 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_39 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = &rcx_39[0x27]

*(arg2 + 0x30) = rax_24
void**** rax_25 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_25 = rcx_39
*(arg2 + 8) = &rcx_39[1]
sub_1405d11b0(rcx_39, &var_1a8, rdi_18)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_1a8)
int64_t var_98
*(arg2 + 0x178) = var_98:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1

if (sub_1414e0780(arg1, 3) == 0)
    r14.b = 0
else
    uint128_t var_48_1 = zmm6
    uint128_t var_58_1 = zmm7
    uint128_t var_68_1 = zmm8
    uint128_t var_78_1 = zmm9
    int64_t* rax_29
    
    if (*(arg3 + 0xd7c) == 0)
        rax_29 = arg3
    else
        rax_29 = *(arg1 + 0xa0)
    
    zmm7 = zx.o(rax_29[0x2b4].d)
    zmm8 = zx.o(*(rax_29 + 0x159c))
    zmm9 = zx.o(rax_29[0x2b3].d)
    void*** rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    zmm6 = _mm_cvtepi32_ps(zx.o(*(rax_29 + 0x15a4)))
    void* rax_30 = &rcx_47[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    zmm8 = _mm_cvtepi32_ps(zmm8)
    zmm9 = _mm_cvtepi32_ps(zmm9)
    
    if (rax_30 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_30 = &rcx_47[5]
    
    *(arg2 + 0x30) = rax_30
    void**** rax_31 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_31 = rcx_47
    *(arg2 + 8) = &rcx_47[1]
    rcx_47[1] = 0
    *rcx_47 = &data_142d54998
    rcx_47[2].d = zmm9.d
    *(rcx_47 + 0x14) = zmm8.d
    *(rcx_47 + 0x1c) = zmm7.d
    rcx_47[4].d = zmm6.d
    rcx_47[3].d = 0
    *(rcx_47 + 0x24) = 0x3f800000
    sub_141267530(&arg3[0x888], nullptr, arg2)
    r14.b = *(arg3 + 0x460c) s> 0
    int512_t zmm6_1
    zmm6_1.o = var_48_1

sub_141096650(arg2)
int64_t* rax_33 = sub_14139d700(var_1e8)
int64_t* rdi_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_54 = *rax_33
void* rax_34 = &rdi_23[1]

if (rax_34 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rdi_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_34 = &rdi_23[1]

*(arg2 + 0x30) = rax_34
*rdi_23 = rcx_54
void*** rax_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_56 = &rax_37[5]

if (rcx_56 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rax_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_56 = &rax_37[5]

*(arg2 + 0x30) = rcx_56
void**** rcx_58 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rcx_58 = rax_37
*(arg2 + 8) = &rax_37[1]
rax_37[1] = 0
*rax_37 = &data_142d549c8
rax_37[2].d = 1
rax_37[3] = rdi_23
rax_37[4].d = 0
int64_t var_a0
sub_1405d1550(&var_a0)
__security_check_cookie(rax_1 ^ &var_208)
return zx.q(r14.b)
