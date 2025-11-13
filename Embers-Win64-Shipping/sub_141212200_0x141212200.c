// 函数: sub_141212200
// 地址: 0x141212200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* var_308 = arg3
int64_t rdi = data_143ec4fdc
int32_t rax_2 = data_1439b6364
int32_t r10

if (rax_2 s>= 1)
    r10 = 8
    
    if (rax_2 s< 8)
        r10 = rax_2
else
    r10 = 1

int128_t zmm0 = *(arg2 + 0x1598)
int32_t var_300 = r10
int128_t zmm1 = data_142d3f5a0
int64_t rcx = zmm0:8.q
int32_t var_2fc = r10
int64_t r8 = var_300.q
uint32_t r9_1 = (r8 u>> 0x20).d
int32_t temp0 = divs.dp.d(sx.q((rcx - 1).d + r10), r10)
var_300 = temp0
int32_t var_2fc_1 = divs.dp.d(sx.q((rcx u>> 0x20).d - 1 + r9_1), r9_1)
int64_t rax_11 = zmm0.q
int64_t var_2e8 = rax_11
int32_t temp0_2 = divs.dp.d(sx.q(rax_11.d), r10)
var_2e8.d = temp0_2
uint32_t rcx_4 = (var_300.q u>> 0x20).d
var_2e8:4.d = divs.dp.d(sx.q(var_2e8:4.d), (r8 u>> 0x20).d)
int64_t rbx = var_2e8
int64_t var_2f0 = rbx
uint32_t rcx_5 = rcx_4 - (rbx u>> 0x20).d
var_2e8.d = temp0 - temp0_2
int64_t rcx_6 = *(*arg5 + 8)
int64_t var_1b8 = rcx_6
int32_t var_e0 = 0
int32_t var_dc
__builtin_memset(&var_dc, 0xff, 0x14)
int128_t var_c8 = zmm1
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x1a)
int64_t var_1b0 = 0
int32_t var_1a8 = 0xffffffff
int16_t var_1a4 = 0x500
int64_t var_f8
__builtin_memset(&var_f8, 0, 0x11)
int32_t var_e4 = 0
int16_t var_a0
var_a0:1.b = *(rcx_6 + 0x38) u> 1
void var_1a0
memset(&var_1a0, 0, 0xa8)
sub_1410e0180(arg1, &var_1b8)
int64_t* rax_20 = sub_14139d700(&data_143ec4c60)
int64_t* r15_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_10 = *rax_20
int64_t var_2f8 = rcx_10
void* rax_21 = &r15_2[1]

if (rax_21 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rcx_10 = var_2f8
    r15_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &r15_2[1]

*(arg1 + 0x30) = rax_21
*r15_2 = rcx_10
void*** rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = &rcx_14[5]

if (rax_22 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = &rcx_14[5]

*(arg1 + 0x30) = rax_22
void**** rax_23 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_23 = rcx_14
*(arg1 + 8) = &rcx_14[1]
rcx_14[1] = 0
rcx_14[3] = r15_2
*rcx_14 = &data_142d549c8
rcx_14[2].d = 1
rcx_14[4].d = 0
int64_t r15_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_25 = r15_7 + 0x32

if (rax_25 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x34)
    r15_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_25 = r15_7 + 0x32

wchar16 const* const rcx_19 = u"DownsampleLightshaftMask"
*(arg1 + 0x30) = rax_25
wchar16 const i

do
    i = *rcx_19
    *(rcx_19 + r15_7 - u"DownsampleLightshaftMask") = i
    rcx_19 = &rcx_19[1]
while (i != 0)
void*** rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_26 = &rcx_22[0x27]

if (rax_26 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_26 = &rcx_22[0x27]

*(arg1 + 0x30) = rax_26
void**** rax_27 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_27 = rcx_22
*(arg1 + 8) = &rcx_22[1]
sub_1405d11b0(rcx_22, &var_1b8, r15_7)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_1b8)
int32_t rdx_9 = var_2f0:4.d
int64_t var_a8
*(arg1 + 0x178) = var_a8:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
int32_t zmm6 = float.s(zx.q(rcx_5 + rdx_9))
int128_t zmm7
zmm7.d = float.s(zx.q(var_2e8.d + rbx.d))
void*** rcx_33 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(rdx_9))
void* rax_30 = &rcx_33[5]
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rbx.d))

if (rax_30 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_33 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_30 = &rcx_33[5]

*(arg1 + 0x30) = rax_30
void**** rax_31 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_31 = rcx_33
*(arg1 + 8) = &rcx_33[1]
rcx_33[1] = 0
*rcx_33 = &data_142d54998
rcx_33[2].d = zmm9.d
*(rcx_33 + 0x14) = zmm8.d
*(rcx_33 + 0x1c) = zmm7.d
rcx_33[4].d = zmm6
rcx_33[3].d = 0
*(rcx_33 + 0x24) = 0x3f800000
int128_t var_268
__builtin_memset(&var_268, 0, 0x30)
int64_t var_20c
__builtin_memset(&var_20c, 0, 0x43)
int128_t var_220 = zx.o(0)
int16_t var_1c8 = 0
sub_140fdc870(arg1, &var_268)
int64_t var_238 = data_14395da00
int64_t var_230 = data_14395da18
int64_t var_228 = data_14395d9e8
int32_t var_210 = 0
void* var_278
sub_1419a2ec0(arg2[0xa2a], &var_278, &data_143e83410, 0)
void* rbx_1 = var_278
int64_t* rcx_39 = arg2[0xa2a]
char rdx_12 = *(*(arg3 + 0x20) + 0x13c)
int128_t var_2c8
void* var_270
var_2c8.q = var_270
var_300.q = 0
void* var_2e0
int64_t rax_40
void* r15_12
void* var_2d8
int64_t rax_42
int64_t* r12_2

if (rdx_12 == 0)
    sub_1419a2ec0(rcx_39, &var_2e0, &data_143e88a10, 0)
    var_268.q = data_1439c9210
    int64_t rax_51 = 0
    
    if (rbx_1 != 0)
        int64_t rdx_24 = sx.q(*(rbx_1 + 0x10c))
        int64_t* r15_14 = *(var_270 + 0x10)
        int64_t rax_52 = r15_14[3]
        
        if (*(rax_52 + (rdx_24 << 3)) == 0)
            sub_1419ccf30(r15_14, rdx_24.d)
            rax_52 = r15_14[3]
        
        rax_51 = *(rax_52 + (rdx_24 << 3))
    
    r15_12 = var_2e0
    var_268:8.q = rax_51
    rax_40 = 0
    
    if (r15_12 != 0)
        int64_t rdx_25 = sx.q(*(r15_12 + 0x10c))
        var_2f0 = rdx_25
        r12_2 = *(var_2d8 + 0x10)
        rax_42 = r12_2[3]
        
        if (*(rax_42 + (rdx_25 << 3)) != 0)
            rax_40 = *(rax_42 + (rdx_25 << 3))
        else
            sub_1419ccf30(r12_2, rdx_25.d)
            rax_40 = *(r12_2[3] + (var_2f0 << 3))
else
    void** rdx_13 = &var_2e0
    
    if (rdx_12 == 2)
        sub_1419a2ec0(rcx_39, rdx_13, &data_143e888b0, 0)
        var_268.q = data_1439c9210
        int64_t rax_47 = 0
        
        if (rbx_1 != 0)
            int64_t rdx_21 = sx.q(*(rbx_1 + 0x10c))
            int64_t* r15_13 = *(var_270 + 0x10)
            int64_t rax_48 = r15_13[3]
            
            if (*(rax_48 + (rdx_21 << 3)) == 0)
                sub_1419ccf30(r15_13, rdx_21.d)
                rax_48 = r15_13[3]
            
            rax_47 = *(rax_48 + (rdx_21 << 3))
        
        r15_12 = var_2e0
        var_268:8.q = rax_47
        rax_40 = 0
        
        if (r15_12 != 0)
            int64_t rdx_22 = sx.q(*(r15_12 + 0x10c))
            var_2f0 = rdx_22
            r12_2 = *(var_2d8 + 0x10)
            rax_42 = r12_2[3]
            
            if (*(rax_42 + (rdx_22 << 3)) != 0)
                rax_40 = *(rax_42 + (rdx_22 << 3))
            else
                sub_1419ccf30(r12_2, rdx_22.d)
                rax_40 = *(r12_2[3] + (var_2f0 << 3))
    else
        sub_1419a2ec0(rcx_39, rdx_13, &data_143e88750, 0)
        var_268.q = data_1439c9210
        int64_t rax_38 = 0
        
        if (rbx_1 != 0)
            int64_t rdx_14 = sx.q(*(rbx_1 + 0x10c))
            int64_t* r15_11 = *(var_270 + 0x10)
            int64_t rax_39 = r15_11[3]
            
            if (*(rax_39 + (rdx_14 << 3)) == 0)
                sub_1419ccf30(r15_11, rdx_14.d)
                rax_39 = r15_11[3]
            
            rax_38 = *(rax_39 + (rdx_14 << 3))
        
        r15_12 = var_2e0
        var_268:8.q = rax_38
        rax_40 = 0
        
        if (r15_12 != 0)
            int64_t rdx_15 = sx.q(*(r15_12 + 0x10c))
            var_2f0 = rdx_15
            r12_2 = *(var_2d8 + 0x10)
            rax_42 = r12_2[3]
            
            if (*(rax_42 + (rdx_15 << 3)) != 0)
                rax_40 = *(rax_42 + (rdx_15 << 3))
            else
                sub_1419ccf30(r12_2, rdx_15.d)
                rax_40 = *(r12_2[3] + (var_2f0 << 3))
int128_t var_248
var_248.q = rax_40
sub_1419870b0(arg1, &var_268, 2)
sub_141080ac0(r15_12, arg1, *(arg1 + 0x1a0), arg2[2])
int32_t var_350 = &var_300
int512_t zmm2
int512_t zmm3
zmm2, zmm3 = sub_141215990(r15_12 + 0x118, arg1, *(arg1 + 0x1a0), var_308, arg2)
zmm2.o = 0x3f800000
int64_t* var_358
var_358.d = 0
int64_t rcx_47 = *(sub_14139bef0(arg1) + 0x37c)
var_2f0 = *(arg1 + 0x1a0)
uint128_t zmm0_1
zmm0_1.d = 1f f/ _mm_cvtepi32_ps(zx.o(rcx_47.d)).d
var_2f8.d = zmm0_1.d
zmm2.d = 1f f/ _mm_cvtepi32_ps(zx.o((rcx_47 u>> 0x20).d)).d
var_2f8:4.d = zmm2.d
sub_1405d0cd0(arg1, &var_2f0, r15_12 + 0x168, &var_2f8, var_358.d)
int32_t r8_6 = arg2[0x2a9].d
var_300.q = *(arg1 + 0x1a0)

if (*(r15_12 + 0x16e) != 0xffff)
    int64_t* rcx_50 = &var_308
    
    if (r8_6 s< 3)
        sub_14137b7f0(rcx_50, arg1)
    else
        sub_14137baa0(rcx_50, arg1, 0xf, r8_6)
    
    sub_141083500(arg1, &var_300, r15_12 + 0x16e, var_308)
    sub_1405d1550(&var_308)

sub_141080be0(rbx_1, arg1, *(arg1 + 0x188), arg2[2])
int32_t rcx_58 = *(arg2 + 0x159c)
zmm3.o = zx.o(0)
int32_t rdx_28 = arg2[0x2b3].d
void* r9_8 = zx.q(var_2e8.d)
int32_t var_310 = 1
int64_t var_2d8_1 = var_2c8.q
int32_t rax_56 = *(arg2 + 0x15a4) - rcx_58
int32_t var_318 = 1
zmm2.o = zx.o(rcx_58)
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
var_2f8.d = r9_8.d
var_2f8:4.d = rcx_5
var_2e0 = rbx_1
int32_t rax_58 = arg2[0x2b4].d - rdx_28
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(rax_56))
uint128_t zmm1_3 = _mm_cvtepi32_ps(zx.o(rax_58))
int32_t var_348 = zmm2.d
zmm2.o = zx.o(0)
zmm3.d = float.s(r9_8)
var_358.d = float.s(zx.q(rcx_5))
sub_1413993b0(arg1, zx.o(0), zmm2, r9_8, zmm3, var_358.d, _mm_cvtepi32_ps(zx.o(rdx_28)).d, var_348, 
    zmm1_3.d, zmm5.d, var_2f8, rdi, &var_2e0, var_318, var_310)
sub_141096650(arg1)
void* rax_61 = *arg5
uint128_t var_2b8 = data_142d57d10
void*** rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm0_3 = data_142d57920
uint128_t var_2a8 = data_142d3f800
int64_t r12_5 = *(rax_61 + 0x10)
int64_t* rdi_1 = *(rax_61 + 8)
void* rax_62 = &rbx_4[0xa]

if (rax_62 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x58)
    rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_62 = &rbx_4[0xa]

*(arg1 + 0x30) = rax_62
int64_t* rax_63 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_63 = rbx_4
*(arg1 + 8) = &rbx_4[1]
rbx_4[1] = 0
*rbx_4 = &data_142d56628
rbx_4[2].d = var_2b8.d
__builtin_memset(rbx_4 + 0x14, 0xff, 0x20)
*(rbx_4 + 0x34) = zmm0_3:4.d
rbx_4[7].d = zmm0_3:8.d
*(rbx_4 + 0x3c) = zmm0_3:0xc.d
rbx_4[8] = rdi_1
rbx_4[9] = r12_5

if ((*(*rdi_1 + 8))(rdi_1) == 0)
    int64_t* rcx_63 = rbx_4[8]
    
    if ((*(*rcx_63 + 0x18))(rcx_63) == 0)
        int64_t* rcx_64 = rbx_4[8]
        
        if ((*(*rcx_64 + 0x20))(rcx_64) == 0)
            int64_t* rcx_65 = rbx_4[8]
            (*(*rcx_65 + 0x10))(rcx_65)

int64_t* rcx_66 = rbx_4[9]

if ((*(*rcx_66 + 8))(rcx_66) == 0)
    int64_t* rcx_67 = rbx_4[9]
    
    if ((*(*rcx_67 + 0x18))(rcx_67) == 0)
        int64_t* rcx_68 = rbx_4[9]
        
        if ((*(*rcx_68 + 0x20))(rcx_68) == 0)
            int64_t* rcx_69 = rbx_4[9]
            (*(*rcx_69 + 0x10))(rcx_69)

if (arg4 != arg5)
    uint128_t zmm1_4 = zx.o(*arg4)
    *arg4 = *arg5
    *arg5 = zmm1_4.q

int64_t var_b0
int64_t result = sub_1405d1550(&var_b0)
__security_check_cookie(rax_1 ^ &var_378)
return result
