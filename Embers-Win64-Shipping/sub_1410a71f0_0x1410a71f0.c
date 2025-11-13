// 函数: sub_1410a71f0
// 地址: 0x1410a71f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void* rdi = *arg2
int64_t* rax_2 = sub_1413a8300(&arg1[6], arg2)
arg2[8]
int128_t zmm0 = *(rdi + 0x1598)
int128_t zmm1 = data_142d3f5a0
int32_t temp0 = divs.dp.d(sx.q(data_143ec4fdc.d), (*(arg1 + 0x44)).d)
void* rdi_1 = zmm0:8.q
int64_t rsi = zmm0.q
void* var_2b8 = rdi_1
var_2b8.d = divs.dp.d(sx.q(rdi_1.d), temp0)
int64_t var_298 = rsi
var_2b8:4.d = divs.dp.d(sx.q(var_2b8:4.d), temp0)
void* rbx_2 = var_2b8
var_298.d = divs.dp.d(sx.q(rsi.d), temp0)
var_298:4.d = divs.dp.d(sx.q(var_298:4.d), temp0)
int64_t rax_18 = *rax_2
int32_t var_a0 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x19)
int64_t var_170 = 0
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x11)
int32_t var_a4 = 0
int32_t var_9c
__builtin_memset(&var_9c, 0xff, 0x14)
int128_t var_88 = zmm1
int64_t var_178 = rax_18
int32_t var_168 = 0xffffffff
int16_t var_164 = 0x500
bool var_5f = *(rax_18 + 0x38) u> 1
void var_160
memset(&var_160, 0, 0xa8)
void* r13 = arg2[8]
int64_t r15_3 = (*(r13 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_19 = r15_3 + 0x2c

if (rax_19 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x2e)
    r15_3 = (*(r13 + 0x30) + 1) & 0xfffffffffffffffe
    rax_19 = r15_3 + 0x2c

wchar16 const* const rcx_5 = u"AmbientOcclusionSetup"
*(r13 + 0x30) = rax_19
wchar16 const i

do
    i = *rcx_5
    *(rcx_5 + r15_3 - u"AmbientOcclusionSetup") = i
    rcx_5 = &rcx_5[1]
while (i != 0)
void*** rcx_8 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_20 = &rcx_8[0x27]

if (rax_20 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x140)
    rcx_8 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_20 = &rcx_8[0x27]

*(r13 + 0x30) = rax_20
void**** rax_21 = *(r13 + 8)
*(r13 + 0x14) += 1
*rax_21 = rcx_8
*(r13 + 8) = &rcx_8[1]
sub_1405d11b0(rcx_8, &var_178, r15_3)
*(r13 + 0x1c4) = 1
sub_1405d19b0(r13, &var_178)
int64_t var_68
*(r13 + 0x178) = var_68:7.b
uint128_t var_288 = var_298.o
*(r13 + 0x179) = 0
*(r13 + 0x1c4) = 1
sub_1410b7780(arg2, &var_288, zx.o(0), 0x3f800000)
void* rcx_14 = arg2[8]
int64_t var_1cc
__builtin_memset(&var_1cc, 0, 0x43)
int128_t var_228
__builtin_memset(&var_228, 0, 0x30)
int128_t var_1e0 = zx.o(0)
int16_t var_188 = 0
sub_140fdc870(rcx_14, &var_228)
int64_t var_1f8 = data_14395da00
int64_t var_1f0 = data_14395da18
int64_t var_1e8 = data_14395d9e8
int32_t var_1d0 = 0
sub_1419a2ec0(arg2[0xc], &var_2b8, &data_143ed5e80, 0)
void* r9
uint128_t zmm8
void* var_2b0
int128_t var_208

if (sub_14139ce70(arg1) == 0 || sub_14139ce70(arg1) != 0)
    sub_1419a2ec0(arg2[0xc], &var_288, &data_143e3ab80, 0)
    void* rcx_26 = var_2b8
    var_228.q = data_1439c9210
    int64_t rax_37 = 0
    
    if (rcx_26 != 0)
        int64_t rdx_20 = sx.q(*(rcx_26 + 0x10c))
        int64_t* r15_9 = *(var_2b0 + 0x10)
        int64_t rax_39 = r15_9[3]
        
        if (*(rax_39 + (rdx_20 << 3)) == 0)
            sub_1419ccf30(r15_9, rdx_20.d)
            rax_39 = r15_9[3]
        
        rax_37 = *(rax_39 + (rdx_20 << 3))
    
    void* r15_10 = var_288.q
    var_228:8.q = rax_37
    int64_t rax_40 = 0
    
    if (r15_10 != 0)
        int64_t rdx_21 = sx.q(*(r15_10 + 0x10c))
        int64_t rcx_28 = rdx_21
        int64_t* r13_4 = *(var_288:8.q + 0x10)
        int64_t rax_42 = r13_4[3]
        
        if (*(rax_42 + (rdx_21 << 3)) == 0)
            sub_1419ccf30(r13_4, rdx_21.d)
            rax_42 = r13_4[3]
            rcx_28 = rdx_21
        
        rax_40 = *(rax_42 + (rcx_28 << 3))
    
    var_208.q = rax_40
    sub_1419870b0(arg2[8], &var_228, 2)
    r9, zmm8 = sub_1410b4be0(r15_10, arg2)
else
    sub_1419a2ec0(arg2[0xc], &var_288, &data_143e3ace0, 0)
    void* rcx_19 = var_2b8
    var_228.q = data_1439c9210
    int64_t rax_30 = 0
    
    if (rcx_19 != 0)
        int64_t rdx_15 = sx.q(*(rcx_19 + 0x10c))
        int64_t* r15_7 = *(var_2b0 + 0x10)
        int64_t rax_32 = r15_7[3]
        
        if (*(rax_32 + (rdx_15 << 3)) == 0)
            sub_1419ccf30(r15_7, rdx_15.d)
            rax_32 = r15_7[3]
        
        rax_30 = *(rax_32 + (rdx_15 << 3))
    
    void* r15_8 = var_288.q
    var_228:8.q = rax_30
    int64_t rax_33 = 0
    
    if (r15_8 != 0)
        int64_t rdx_16 = sx.q(*(r15_8 + 0x10c))
        int64_t rcx_21 = rdx_16
        int64_t* r13_2 = *(var_288:8.q + 0x10)
        int64_t rax_35 = r13_2[3]
        
        if (*(rax_35 + (rdx_16 << 3)) == 0)
            sub_1419ccf30(r13_2, rdx_16.d)
            rax_35 = r13_2[3]
            rcx_21 = rdx_16
        
        rax_33 = *(rax_35 + (rcx_21 << 3))
    
    var_208.q = rax_33
    sub_1419870b0(arg2[8], &var_228, 2)
    r9, zmm8 = sub_1410b4be0(r15_8, arg2)
arg2[8]
char r15_11 = *(arg2 + 0x69)
var_288 = var_2b8.o
int32_t rdx_24 = zmm0:4.d
int32_t rbx_3 = rbx_2.d - var_298.d
int32_t r8_2 = rbx_2:4.d - var_298:4.d
int32_t rax_43 = (data_143ec4fdc).d
int32_t var_2c8 = 1
uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(rdx_24))
int32_t rcx_36 = *(rdi + 0xad0)
int128_t* var_2e0 = &var_288
void* rcx_37 = arg2[8]
uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(rdi_1.d - rsi.d))
var_2b8:4.d = r8_2
var_2b8.d = rbx_3
int32_t rax_44 = var_2b8.d
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rsi.d))
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(r8_2))
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(zmm0:0xc.d - rdx_24))
sub_141399210(rcx_37, zx.o(0), zx.o(0), r9, _mm_cvtepi32_ps(zx.o(rbx_3)), zmm8, zmm5.d, zmm4.d, 
    zmm2_1.d, zmm0_2.d, zmm6.d, rax_44, rax_43, var_2e0, rcx_36, r15_11, var_2c8)
sub_141096650(arg2[8])
void* rsi_1 = arg2[8]
int128_t var_268 = data_142d57d10
int128_t zmm0_3 = data_142d57920
int64_t r15_12 = rax_2[1]
int64_t* r14_2 = *rax_2
int128_t var_258 = data_142d3f800
void*** rbx_6 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_45 = &rbx_6[0xa]

if (rax_45 u> *(rsi_1 + 0x38))
    sub_140b0e3d0(rsi_1 + 0x30, 0x58)
    rbx_6 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_45 = &rbx_6[0xa]

*(rsi_1 + 0x30) = rax_45
*(rsi_1 + 0x14) += 1
**(rsi_1 + 8) = rbx_6
*(rsi_1 + 8) = &rbx_6[1]
rbx_6[1] = 0
*rbx_6 = &data_142d56628
rbx_6[2].d = var_268.d
__builtin_memset(rbx_6 + 0x14, 0xff, 0x20)
*(rbx_6 + 0x34) = zmm0_3:4.d
rbx_6[7].d = zmm0_3:8.d
*(rbx_6 + 0x3c) = zmm0_3:0xc.d
rbx_6[8] = r14_2
rbx_6[9] = r15_12

if ((*(*r14_2 + 8))(r14_2) == 0)
    int64_t* rcx_41 = rbx_6[8]
    
    if ((*(*rcx_41 + 0x18))(rcx_41) == 0)
        int64_t* rcx_42 = rbx_6[8]
        
        if ((*(*rcx_42 + 0x20))(rcx_42) == 0)
            int64_t* rcx_43 = rbx_6[8]
            (*(*rcx_43 + 0x10))(rcx_43)

int64_t* rcx_44 = rbx_6[9]

if ((*(*rcx_44 + 8))(rcx_44) == 0)
    int64_t* rcx_45 = rbx_6[9]
    
    if ((*(*rcx_45 + 0x18))(rcx_45) == 0)
        int64_t* rcx_46 = rbx_6[9]
        
        if ((*(*rcx_46 + 0x20))(rcx_46) == 0)
            int64_t* rcx_47 = rbx_6[9]
            (*(*rcx_47 + 0x10))(rcx_47)

int64_t var_70
int64_t result = sub_1405d1550(&var_70)
__security_check_cookie(rax_1 ^ &var_338)
return result
