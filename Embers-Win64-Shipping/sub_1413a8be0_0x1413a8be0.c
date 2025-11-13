// 函数: sub_1413a8be0
// 地址: 0x1413a8be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t rax_2 = *arg2
int64_t* rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx = &rbx_2[1]

if (rcx u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rbx_2[1]

*(arg1 + 0x30) = rcx
*rbx_2 = rax_2
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_4[5]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_4[5]

*(arg1 + 0x30) = rax_3
void**** rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d549c8
rcx_4[2].d = 1
rcx_4[3] = rbx_2
rcx_4[4].d = 0
void var_188
memset(&var_188, 0, 0x120)
int64_t var_c8 = *arg3
char var_b8 = 0x55
int32_t var_b4 = 0x22
sub_1410e0180(arg1, &var_188)
int64_t rbx_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_7 = rbx_7 + 0x28

if (rax_7 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x2a)
    rbx_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_7 = rbx_7 + 0x28

wchar16 const* const rcx_11 = u"ResolveDepthTexture"
*(arg1 + 0x30) = rax_7
wchar16 const i

do
    i = *rcx_11
    *(rcx_11 + rbx_7 - u"ResolveDepthTexture") = i
    rcx_11 = &rcx_11[1]
while (i != 0)
void*** rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_14[0x27]

if (rax_8 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_14[0x27]

*(arg1 + 0x30) = rax_8
void**** rax_9 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_9 = rcx_14
*(arg1 + 8) = &rcx_14[1]
sub_1405d11b0(rcx_14, &var_188, rbx_7)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_188)
char var_71
*(arg1 + 0x178) = var_71
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
int128_t var_238
__builtin_memset(&var_238, 0, 0x30)
int64_t var_1dc
__builtin_memset(&var_1dc, 0, 0x43)
int128_t var_1f0 = zx.o(0)
int16_t var_198 = 0
sub_140fdc870(arg1, &var_238)
int64_t var_208 = data_14395da00
void*** rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t var_200 = data_14395da18
int64_t var_1f8 = data_1439b4ac0
void* rax_15 = *arg2
int32_t rbx_10 = *(rax_15 + 0x60)
int32_t r15 = *(rax_15 + 0x64)
void* rax_16 = *arg3
uint64_t r9 = zx.q(*(rax_16 + 0x60))
uint64_t r10 = zx.q(*(rax_16 + 0x64))
void* rax_17 = &rcx_22[5]
int64_t var_2c0
var_2c0.d = r9.d
int32_t var_2c8 = r10.d
int128_t zmm7
zmm7.d = float.s(r9)
int32_t zmm6 = float.s(r10)

if (rax_17 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    r9 = zx.q(var_2c0.d)
    r10 = zx.q(var_2c8)
    rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_22[5]

*(arg1 + 0x30) = rax_17
void**** rax_18 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_18 = rcx_22
*(arg1 + 8) = &rcx_22[1]
rcx_22[1] = 0
*rcx_22 = &data_142d54998
*(rcx_22 + 0x1c) = zmm7.d
rcx_22[4].d = zmm6
rcx_22[2] = 0
rcx_22[3].d = 0
*(rcx_22 + 0x24) = 0x3f800000
int32_t rax_20 = *(arg4 + 4)
int64_t var_2a8

if (rax_20 s< 0)
label_1413a8f55:
    var_2a8 = 0
    int32_t var_2a0_1 = rbx_10
    int32_t var_29c_1 = r15
else
    int32_t r8_1 = *(arg4 + 0xc)
    
    if (r8_1 s< 0)
        goto label_1413a8f55
    
    int32_t rdx_6 = *(arg4 + 8)
    
    if (rdx_6 s< 0)
        goto label_1413a8f55
    
    int32_t rcx_26 = *(arg4 + 0x10)
    
    if (rcx_26 s< 0)
        goto label_1413a8f55
    
    var_2a8.d = rax_20
    var_2a8:4.d = rdx_6
    int32_t var_2a0 = r8_1
    int32_t var_29c = rcx_26

int64_t var_2b8

if (rax_20 s< 0)
label_1413a8f93:
    var_2b8 = 0
    int32_t var_2b0_1 = r9.d
    int32_t var_2ac_1 = r10.d
else
    int32_t rcx_27 = *(arg4 + 0xc)
    
    if (rcx_27 s< 0)
        goto label_1413a8f93
    
    int32_t rdx_7 = *(arg4 + 8)
    
    if (rdx_7 s< 0)
        goto label_1413a8f93
    
    int32_t r8_2 = *(arg4 + 0x10)
    
    if (r8_2 s< 0)
        goto label_1413a8f93
    
    var_2b8.d = rax_20
    var_2b8:4.d = rdx_7
    int32_t var_2b0 = rcx_27
    int32_t var_2ac = r8_2

int64_t* rax_22 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
void* var_248
sub_1419a2ec0(rax_22, &var_248, &data_143f1ed10, 0)
void* r13_1 = var_248
void* var_288
sub_1419a2ec0(rax_22, &var_288, &data_143f1e6c0, 0)
void* var_258
sub_1419a2ec0(rax_22, &var_258, &data_143f1e7c0, 0)
void* var_268
sub_1419a2ec0(rax_22, &var_268, &data_143f1e8d0, 0)
void* var_278
sub_1419a2ec0(rax_22, &var_278, &data_143f1e9e0, 0)
int32_t rcx_34 = *(*arg2 + 0x38)
void* rax_25
int64_t rdx_13
int16_t r14_1

if (rcx_34 == 2)
    void* rax_28 = var_258
    r14_1 = *(rax_28 + 0x118)
    rdx_13 = sx.q(*(rax_28 + 0x10c))
    void* var_250
    rax_25 = var_250
else if (rcx_34 == 4)
    void* rax_27 = var_268
    r14_1 = *(rax_27 + 0x118)
    rdx_13 = sx.q(*(rax_27 + 0x10c))
    void* var_260
    rax_25 = var_260
else if (rcx_34 == 8)
    void* rax_26 = var_278
    r14_1 = *(rax_26 + 0x118)
    rdx_13 = sx.q(*(rax_26 + 0x10c))
    void* var_270
    rax_25 = var_270
else
    void* rax_24 = var_288
    r14_1 = *(rax_24 + 0x118)
    rdx_13 = sx.q(*(rax_24 + 0x10c))
    void* var_280
    rax_25 = var_280

int64_t* r15_1 = *(rax_25 + 0x10)
int64_t rbx_12 = r15_1[3]

if (*(rbx_12 + (rdx_13 << 3)) == 0)
    sub_1419ccf30(r15_1, rdx_13.d)
    rbx_12 = r15_1[3]

int64_t rbx_13 = *(rbx_12 + (rdx_13 << 3))
var_238.q = data_143a2fe60
int64_t rax_30 = 0

if (r13_1 != 0)
    int64_t rdx_14 = sx.q(*(r13_1 + 0x10c))
    void* var_240
    int64_t* r14_2 = *(var_240 + 0x10)
    int64_t rax_32 = r14_2[3]
    
    if (*(rax_32 + (rdx_14 << 3)) == 0)
        sub_1419ccf30(r14_2, rdx_14.d)
        rax_32 = r14_2[3]
    
    rax_30 = *(rax_32 + (rdx_14 << 3))

var_238:8.q = rax_30
int128_t var_218
var_218.q = rbx_13
int32_t var_1e0 = 1
sub_1419870b0(arg1, &var_238, 2)
void*** rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_33 = &rcx_40[4]

if (rax_33 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_33 = &rcx_40[4]

*(arg1 + 0x30) = rax_33
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_40
*(arg1 + 8) = &rcx_40[1]
rcx_40[1] = 0
*rcx_40 = &data_142ef5798
*(rcx_40 + 0x10) = data_14399f5c0
int64_t r14_4 = *arg2

if (r14_4 != 0)
    void*** rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_36 = &rcx_46[5]
    
    if (rax_36 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_36 = &rcx_46[5]
    
    *(arg1 + 0x30) = rax_36
    void**** rax_37 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_37 = rcx_46
    *(arg1 + 8) = &rcx_46[1]
    rcx_46[1] = 0
    *rcx_46 = &data_142d5a070
    rcx_46[2] = rbx_13
    rcx_46[3].d = zx.d(r14_1)
    rcx_46[4] = r14_4

sub_1419d8470(r13_1, arg1, &var_2a8, &var_2b8, var_2c0.d, var_2c8)
void*** rcx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_41 = &rcx_53[4]

if (rax_41 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_41 = &rcx_53[4]

*(arg1 + 0x30) = rax_41
int64_t* rax_42 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_42 = rcx_53
*(arg1 + 8) = &rcx_53[1]
rcx_53[1] = 0
*rcx_53 = &data_142d54988
rcx_53[2].d = 0
*(rcx_53 + 0x14) = 2
rcx_53[3].d = 1
sub_141096650(arg1)
void*** rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rbx_15 = *arg3
void* rax_44 = &rcx_60[4]

if (rax_44 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_44 = &rcx_60[4]

*(arg1 + 0x30) = rax_44
int64_t* rax_45 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_45 = rcx_60
*(arg1 + 8) = &rcx_60[1]
rcx_60[1] = 0
*rcx_60 = &data_142f115e8
rcx_60[2].d = 1
rcx_60[3] = rbx_15
void var_80
int64_t result = sub_1405d1550(&var_80)
__security_check_cookie(rax_1 ^ &var_2f8)
return result
