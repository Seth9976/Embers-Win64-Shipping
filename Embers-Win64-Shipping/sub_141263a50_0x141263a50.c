// 函数: sub_141263a50
// 地址: 0x141263a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
void* rax_3 = *arg4
int128_t var_220
__builtin_memset(&var_220, 0, 0x30)
int64_t var_1c4
__builtin_memset(&var_1c4, 0, 0x43)
int128_t var_1d8 = zx.o(0)
int16_t var_180 = 0
int32_t rsi = *(rax_3 + 0x48)
int32_t rcx = *(rax_3 + 0x4c)
int64_t rax_5
int64_t rbx

if (rsi - 6 u> 1)
    if (rsi == 0)
        goto label_141263b03
    
    rax_5 = data_14395da00
    rbx.b = 1
else
    rsi = 0
label_141263b03:
    
    if (rcx == 2)
        rax_5 = data_1439b6548
        rbx.b = 5
    else if (rcx != 1)
        rax_5 = data_14395da00
        rbx.b = 1
    else
        rax_5 = data_1439b66f8
        rbx.b = 5

int64_t var_1f0 = rax_5
int64_t var_1e0 = data_14395d9e8
int32_t var_248 = *(arg6 + 0x60)
int32_t var_244 = *(arg6 + 0x64)
int64_t* rax_10 = (*(*arg2 + 8))(arg2)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_3 = *rax_10
int64_t var_178 = rcx_3
int32_t var_a0 = 0
int32_t var_9c
__builtin_memset(&var_9c, 0xff, 0x14)
int128_t var_88 = zmm1
int64_t var_78
__builtin_memset(&var_78, 0, 0x19)
int64_t var_170 = 0
int32_t var_168 = 0xffffffff
char var_164 = 0
char var_163 = rbx.b
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x11)
int32_t var_a4 = 0
bool var_5f = *(rcx_3 + 0x38) u> 1
void var_160
memset(&var_160, 0, 0xa8)
int64_t rbx_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_11 = rbx_3 + 0x20

if (rax_11 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x22)
    rbx_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_11 = rbx_3 + 0x20

wchar16 const* const rcx_6 = u"CaptureToTarget"
*(arg1 + 0x30) = rax_11
wchar16 const i

do
    i = *rcx_6
    *(rcx_6 + rbx_3 - u"CaptureToTarget") = i
    rcx_6 = &rcx_6[1]
while (i != 0)
void*** rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_9[0x27]

if (rax_12 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_9[0x27]

*(arg1 + 0x30) = rax_12
void**** rax_13 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_13 = rcx_9
*(arg1 + 8) = &rcx_9[1]
sub_1405d11b0(rcx_9, &var_178, rbx_3)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_178)
int64_t var_68
*(arg1 + 0x178) = var_68:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
sub_140fdc870(arg1, &var_220)
int64_t var_1e8 = data_14395da18
int32_t var_1c8 = 0
void* var_258
void* r9_1
int512_t zmm2
r9_1, zmm2 = sub_141295c90(&var_258, arg1, &var_220, rsi, arg4, &var_248, arg6)
int32_t rcx_16 = *arg5
int64_t rbx_6 = var_248.q
int32_t var_260 = 1
int32_t var_268 = 1
uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_16))
void* var_298
int32_t var_290
int32_t var_288
int64_t var_280
int64_t var_278
void** var_270
uint128_t zmm0
int512_t zmm3

if (arg7 == 0)
    int32_t rdx_8 = arg5[1]
    int32_t rax_28 = arg5[2] - rcx_16
    zmm2.o = zx.o(rdx_8)
    zmm0 = _mm_cvtepi32_ps(zx.o(arg5[3] - rdx_8))
    zmm3.o = zx.o(rax_28)
    var_270 = &var_258
    var_278 = rbx_6
    zmm3.o = _mm_cvtepi32_ps(zmm3.o)
    var_280 = *arg3
    var_288 = zmm0.d
    zmm2.o = _mm_cvtepi32_ps(zmm2.o)
    var_290 = zmm3.d
    var_298.d = zmm2.d
else
    int32_t r8_2 = arg5[1]
    int32_t rdx_6 = arg5[3]
    int32_t rax_19 = arg5[2] - rcx_16
    zmm2.o = zx.o(r8_2)
    zmm2.o = _mm_cvtepi32_ps(zmm2.o)
    zmm3.o = zx.o(rax_19)
    zmm3.o = _mm_cvtepi32_ps(zmm3.o)
    var_270 = &var_258
    var_278 = rbx_6
    uint128_t zmm5_1 = _mm_cvtepi32_ps(zx.o(r8_2 - rdx_6))
    var_280 = *arg3
    var_288 = zmm5_1.d
    var_290 = zmm3.d
    var_298.d = _mm_cvtepi32_ps(zx.o(rdx_6 - r8_2 * 2)).d
    zmm0 = _mm_cvtepi32_ps(zx.o(rdx_6 - r8_2))

int32_t* var_2a0
var_2a0.d = zmm1_1.d
int64_t* var_2a8
var_2a8.d = zmm0.d
sub_1413993b0(arg1, zmm1_1, zmm2, r9_1, zmm3, var_2a8.d, var_2a0.d, var_298.d, var_290, var_288, 
    var_280, var_278, var_270, var_268, var_260)
sub_141096650(arg1)
int64_t var_70
int64_t result = sub_1405d1550(&var_70)

if (rsi == 0)
    sub_141290cf0(arg8, arg1, arg4)
    int64_t* rax_32 = (*(*arg2 + 8))(arg2)
    int128_t zmm1_2 = data_142d3f5a0
    int64_t rcx_24 = *rax_32
    var_178 = rcx_24
    int32_t var_a0_1 = 0
    int32_t var_9c_1
    __builtin_memset(&var_9c_1, 0xff, 0x14)
    int128_t var_88_1 = zmm1_2
    int64_t var_78_1
    __builtin_memset(&var_78_1, 0, 0x19)
    int64_t var_170_1 = 0
    int32_t var_168_1 = 0xffffffff
    var_164.w = 0x500
    int64_t var_b8_1
    __builtin_memset(&var_b8_1, 0, 0x11)
    int32_t var_a4_1 = 0
    bool var_5f_1 = *(rcx_24 + 0x38) u> 1
    memset(&var_160, 0, 0xa8)
    int64_t rsi_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_33 = rsi_3 + 0x28
    
    if (rax_33 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x2a)
        rsi_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_33 = rsi_3 + 0x28
    
    wchar16 const* const rcx_27 = u"OpacitySceneCapture"
    *(arg1 + 0x30) = rax_33
    wchar16 const i_1
    
    do
        i_1 = *rcx_27
        *(rsi_3 - u"OpacitySceneCapture" + rcx_27) = i_1
        rcx_27 = &rcx_27[1]
    while (i_1 != 0)
    void*** rcx_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_34 = &rcx_30[0x27]
    
    if (rax_34 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x140)
        rcx_30 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_34 = &rcx_30[0x27]
    
    *(arg1 + 0x30) = rax_34
    void**** rax_35 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_35 = rcx_30
    *(arg1 + 8) = &rcx_30[1]
    sub_1405d11b0(rcx_30, &var_178, rsi_3)
    *(arg1 + 0x1c4) = 1
    sub_1405d19b0(arg1, &var_178)
    int64_t var_68_1
    *(arg1 + 0x178) = var_68_1:7.b
    *(arg1 + 0x179) = 0
    *(arg1 + 0x1c4) = 1
    sub_140fdc870(arg1, &var_220)
    int64_t var_1e0_1 = data_14395d9e8
    int64_t var_1f0_1 = data_1439b6710
    int64_t var_1e8_1 = data_14395da18
    int32_t var_1c8_1 = 0
    sub_1419a2ec0(arg4[0xa2a], &var_258, &data_143f55f90, 0)
    void* r13_1 = var_258
    sub_1419a2ec0(arg4[0xa2a], &var_248, &data_143f55b50, 0)
    var_220.q = data_1439c9210
    int64_t rax_42 = 0
    void* var_250
    
    if (r13_1 != 0)
        int64_t rdx_17 = sx.q(*(r13_1 + 0x10c))
        int64_t* rdi_2 = *(var_250 + 0x10)
        int64_t rax_43 = rdi_2[3]
        
        if (*(rax_43 + (rdx_17 << 3)) == 0)
            sub_1419ccf30(rdi_2, rdx_17.d)
            rax_43 = rdi_2[3]
        
        rax_42 = *(rax_43 + (rdx_17 << 3))
    
    void* rsi_7 = var_248.q
    var_220:8.q = rax_42
    int64_t rax_44 = 0
    
    if (rsi_7 != 0)
        int64_t rdx_18 = sx.q(*(rsi_7 + 0x10c))
        void* var_240
        int64_t* rdi_3 = *(var_240 + 0x10)
        int64_t rax_46 = rdi_3[3]
        
        if (*(rax_46 + (rdx_18 << 3)) == 0)
            sub_1419ccf30(rdi_3, rdx_18.d)
            rax_46 = rdi_3[3]
        
        rax_44 = *(rax_46 + (rdx_18 << 3))
    
    int128_t var_200
    var_200.q = rax_44
    int32_t var_1c8_2 = 0
    sub_1419870b0(arg1, &var_220, 2)
    sub_141080be0(r13_1, arg1, *(arg1 + 0x188), arg4[2])
    void* r9_4 = sub_141298600(rsi_7, arg1, data_14395fa10, arg6)
    int32_t rcx_44 = *arg5
    int32_t r8_7 = arg5[1]
    void* var_250_1 = var_250
    int32_t rdx_23 = arg5[3] - r8_7
    int32_t var_260_1 = 1
    int32_t var_268_1 = 1
    int512_t zmm3_1
    zmm3_1.o = zx.o(arg5[2] - rcx_44)
    int32_t rax_52 = neg.d(rdx_23)
    int512_t zmm2_1
    zmm2_1.o = zx.o(r8_7)
    zmm3_1.o = _mm_cvtepi32_ps(zmm3_1.o)
    
    if (arg7 == 0)
        rax_52 = rdx_23
    
    var_258 = r13_1
    int32_t rax_54 = rdx_23 - r8_7
    uint128_t zmm5_2 = _mm_cvtepi32_ps(zx.o(rax_52))
    
    if (arg7 == 0)
        rax_54 = r8_7
    
    void** var_270_1 = &var_258
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_54))
    int64_t rax_56 = *arg3
    int32_t var_288_1 = zmm5_2.d
    int32_t var_290_1 = zmm3_1.d
    var_298.d = zmm0_1.d
    uint128_t zmm1_3 = _mm_cvtepi32_ps(zx.o(rcx_44))
    uint128_t zmm4_2 = _mm_cvtepi32_ps(zx.o(rdx_23))
    var_2a0.d = zmm1_3.d
    zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
    var_2a8.d = zmm4_2.d
    sub_1413993b0(arg1, zmm1_3, zmm2_1, r9_4, zmm3_1, var_2a8.d, var_2a0.d, var_298.d, var_290_1, 
        var_288_1, rax_56, rbx_6, var_270_1, var_268_1, var_260_1)
    sub_141096650(arg1)
    result = sub_1405d1550(&var_70)

__security_check_cookie(rax_1 ^ &var_2c8)
return result
