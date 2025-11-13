// 函数: sub_1405d2250
// 地址: 0x1405d2250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_48 = arg5
void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* rax_3 = (*(arg4[9] + 8))(&arg4[9])
int64_t* rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r14 = *rax_3
void* rcx_1 = &rbx_2[1]

if (rcx_1 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_1 = &rbx_2[1]

*(arg1 + 0x30) = rcx_1
*rbx_2 = r14
void*** rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_5[5]

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_5[5]

*(arg1 + 0x30) = rax_5
void**** rax_6 = *(arg1 + 8)
*(arg1 + 0x14) += 1
int128_t zmm1 = data_142d3f5a0
*rax_6 = rcx_5
*(arg1 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142d549c8
rcx_5[2].d = 1
rcx_5[3] = rbx_2
rcx_5[4].d = 1
int64_t var_180 = arg4[2]
int32_t var_b0 = 0
int32_t var_ac
__builtin_memset(&var_ac, 0xff, 0x14)
int128_t var_98 = zmm1
int64_t var_88
__builtin_memset(&var_88, 0, 0x19)
int64_t var_188 = r14
int32_t var_178 = 0xffffffff
int16_t var_174 = 0x100
int64_t var_c8
__builtin_memset(&var_c8, 0, 0x11)
int32_t var_b4 = 0
bool var_6f = *(r14 + 0x38) u> 1
void var_170
memset(&var_170, 0, 0xa8)
int64_t rbx_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_9 = rbx_7 + 0x26

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rbx_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_9 = rbx_7 + 0x26

wchar16 const* const rcx_11 = u"DrawUVDisplacement"
*(arg1 + 0x30) = rax_9
wchar16 const i

do
    i = *rcx_11
    *(rcx_11 + rbx_7 - u"DrawUVDisplacement") = i
    rcx_11 = &rcx_11[1]
while (i != 0)
void*** rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_14[0x27]

if (rax_10 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_14[0x27]

*(arg1 + 0x30) = rax_10
void**** rax_11 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_11 = rcx_14
*(arg1 + 8) = &rcx_14[1]
sub_1405d11b0(rcx_14, &var_188, rbx_7)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_188)
int64_t var_78
*(arg1 + 0x178) = var_78:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
int32_t rax_15 = (*(*arg4 + 0x48))(arg4)
int64_t rdx_4 = *arg4
int32_t rax_16 = (*(rdx_4 + 0x40))(arg4, rdx_4)
int64_t rcx_22 = *(arg1 + 0x30) + 7
int32_t var_270 = rax_16
void*** rcx_23 = rcx_22 & 0xfffffffffffffff8
int32_t var_26c = rax_15
arg5 = _mm_cvtepi32_ps(zx.o(rax_15))
void* rax_17 = &rcx_23[5]
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rax_16))

if (rax_17 u> *(arg1 + 0x38))
    arg5 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_23 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_23[5]

*(arg1 + 0x30) = rax_17
int64_t* rax_18 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_18 = rcx_23
*(arg1 + 8) = &rcx_23[1]
rcx_23[1] = 0
*rcx_23 = &data_142d54998
*(rcx_23 + 0x1c) = zmm7.d
rcx_23[4].d = arg5.d
rcx_23[2] = 0
rcx_23[3].d = 0
*(rcx_23 + 0x24) = 0x3f800000
int64_t* rax_20 = std::_Get_future_error_what((*U"1111")[sx.q(arg6)])
void* var_250
sub_1419a2ec0(rax_20, &var_250, &data_143cd6aa0, 0)
void* r15_1 = var_250
void* var_240
sub_1419a2ec0(rax_20, &var_240, &data_143cd6ba0, 0)
void* r13 = var_240
uint64_t rax_23 = zx.q(*(arg1 + 0xa0))
int32_t r14_1 = 0
int64_t var_1d0
__builtin_memset(&var_1d0, 0, 0x2c)
int64_t var_1a0 = 0
int32_t var_198 = 0
int16_t var_194 = 0
char var_192 = 0
int16_t var_190 = 0
int32_t var_1d4 = rax_23.d
int128_t var_230
__builtin_memset(&var_230, 0, 0x30)
int128_t var_1e8 = zx.o(0)

if (rax_23.d != 0)
    do
        uint64_t rbx_12 = zx.q(r14_1)
        uint64_t r15_2 = rbx_12 * 3
        int64_t* rcx_30 = *(arg1 + (r15_2 << 3) + 0xa8)
        
        if (rcx_30 == 0)
            *(&var_1d0 + rbx_12) = 0
            rax_23.b = 0
        else
            *(&var_1d0 + rbx_12) = *(rcx_30 + 0x3c)
            int64_t var_1c8
            *(&var_1c8 + (rbx_12 << 2)) = rcx_30[8].d
            int64_t rax_27 = (*(*rcx_30 + 0x10))()
            
            if (rax_27 != 0)
                var_194:1.b = 1
            
            if (rax_27 == 0 || *(rax_27 + 0x68) u<= 1)
                var_194:1.b = 0
            
            rax_23 = zx.q(*(&var_1d0 + rbx_12))
        
        if (rax_23.b != 0)
            var_198.w = *(*(arg1 + (r15_2 << 3) + 0xa8) + 0x38)
        
        r14_1 += 1
    while (r14_1 u< var_1d4)

int64_t* rcx_32 = *(arg1 + 0x168)
int32_t var_1a8

if (rcx_32 == 0)
    var_1a8 = 0
else
    var_1a8 = *(rcx_32 + 0x3c)
    var_1a8 = rcx_32[8].d
    void* rax_31 = (*(*rcx_32 + 0x10))()
    
    if (rax_31 == 0 || *(rax_31 + 0x68) u<= 1)
        var_194:1.b = 0
    else
        var_194:1.b = 1

var_1a0.b = *(arg1 + 0x170)
var_1a0:1.b = *(arg1 + 0x171)
var_1a0:2.b = *(arg1 + 0x172)
var_1a0:3.b = *(arg1 + 0x173)
var_1a0:4.d = *(arg1 + 0x174)

if (var_1a8 != 0)
    var_198.w = *(*(arg1 + 0x168) + 0x38)

var_198:2.b = *(arg1 + 0x178)
var_198:3.b = *(arg1 + 0x179)
char var_192_1 = *(arg1 + 0x17a)
int64_t var_1f0 = data_14395d9e8
int64_t var_200 = data_14395da00
int64_t var_1f8 = data_14395da18
int32_t var_1d8 = 0
int64_t rax_44 = 0
var_230.q = data_1439c9410
void* var_248

if (r15_1 != 0)
    int64_t rdx_7 = sx.q(*(r15_1 + 0x10c))
    int64_t* rbx_14 = *(var_248 + 0x10)
    int64_t rax_45 = rbx_14[3]
    
    if (*(rax_45 + (rdx_7 << 3)) == 0)
        sub_1419ccf30(rbx_14, rdx_7.d)
        rax_45 = rbx_14[3]
    
    rax_44 = *(rax_45 + (rdx_7 << 3))

var_230:8.q = rax_44
int64_t rax_46 = 0
void* var_238

if (r13 != 0)
    int64_t rdx_8 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_16 = *(var_238 + 0x10)
    int64_t rax_47 = rbx_16[3]
    
    if (*(rax_47 + (rdx_8 << 3)) == 0)
        sub_1419ccf30(rbx_16, rdx_8.d)
        rax_47 = rbx_16[3]
    
    rax_46 = *(rax_47 + (rdx_8 << 3))

int128_t var_210
var_210.q = rax_46
sub_1419870b0(arg1, &var_230, 2)
float zmm6 = float.s(zx.q((*(*arg4 + 0x48))(arg4)))
int32_t rax_52 = (*(*arg4 + 0x40))(arg4)
void*** rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
zmm7.d = float.s(zx.q(rax_52))
void* rax_54 = &rcx_42[5]

if (rax_54 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_54 = &rcx_42[5]

*(arg1 + 0x30) = rax_54
int64_t r8_1 = 0
void**** rax_55 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_55 = rcx_42
*(arg1 + 8) = &rcx_42[1]
rcx_42[1] = 0
*rcx_42 = &data_142d54998
*(rcx_42 + 0x1c) = zmm7.d
rcx_42[4].d = zmm6
rcx_42[2] = 0
rcx_42[3].d = 0
*(rcx_42 + 0x24) = 0x3f800000

if (r15_1 != 0)
    int64_t rdx_10 = sx.q(*(r15_1 + 0x10c))
    int64_t* rbx_17 = *(var_248 + 0x10)
    int64_t rax_58 = rbx_17[3]
    
    if (*(rax_58 + (rdx_10 << 3)) == 0)
        sub_1419ccf30(rbx_17, rdx_10.d)
        rax_58 = rbx_17[3]
    
    r8_1 = *(rax_58 + (rdx_10 << 3))

sub_1405d0a70(r15_1, arg1, r8_1, arg2, &var_270)
int64_t r8_2 = 0

if (r13 != 0)
    int64_t rdx_12 = sx.q(*(r13 + 0x10c))
    int64_t* rbx_18 = *(var_238 + 0x10)
    int64_t rax_60 = rbx_18[3]
    
    if (*(rax_60 + (rdx_12 << 3)) == 0)
        sub_1419ccf30(rbx_18, rdx_12.d)
        rax_60 = rbx_18[3]
    
    r8_2 = *(rax_60 + (rdx_12 << 3))

sub_1405d0a70(r13, arg1, r8_2, arg2, &var_270)
void*** rcx_52 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_61 = &rcx_52[4]

if (rax_61 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_52 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_61 = &rcx_52[4]

*(arg1 + 0x30) = rax_61
int64_t* rax_62 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_62 = rcx_52
*(arg1 + 8) = &rcx_52[1]
rcx_52[1] = 0
*rcx_52 = &data_142d54988
rcx_52[2].d = 0
*(rcx_52 + 0x14) = 0x400
rcx_52[3].d = 1
void*** rcx_58 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_64 = &rcx_58[2]

if (rax_64 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x18)
    rcx_58 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_64 = &rcx_58[2]

*(arg1 + 0x30) = rax_64
int64_t* rax_65 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_65 = rcx_58
*(arg1 + 8) = &rcx_58[1]
rcx_58[1] = 0
*rcx_58 = &data_142d549b8
*(arg1 + 0x1c4) = 0
*(arg1 + 0x178) = 0
int64_t var_80
int64_t result
int512_t zmm6_1
result, zmm6_1 = sub_1405d1550(&var_80)
__security_check_cookie(rax_1 ^ &var_2a8)
zmm6_1.o = var_48
return result
