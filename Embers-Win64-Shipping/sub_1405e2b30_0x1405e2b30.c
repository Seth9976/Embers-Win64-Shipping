// 函数: sub_1405e2b30
// 地址: 0x1405e2b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg5
void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* rsi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = arg7[2]
void* rcx = &rsi_2[1]
void* var_260 = rax_3

if (rcx u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rax_3 = var_260
    rsi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rsi_2[1]

*(arg1 + 0x30) = rcx
*rsi_2 = rax_3
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_4[5]

if (rax_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_4[5]

*(arg1 + 0x30) = rax_4
void**** rax_5 = *(arg1 + 8)
*(arg1 + 0x14) += 1
int128_t zmm1 = data_142d3f5a0
*rax_5 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142d549c8
rcx_4[2].d = 1
rcx_4[3] = rsi_2
rcx_4[4].d = 1
int64_t rax_7 = arg7[2]
int32_t var_c0 = 0
int32_t var_bc
__builtin_memset(&var_bc, 0xff, 0x14)
int128_t var_a8 = zmm1
int64_t var_98
__builtin_memset(&var_98, 0, 0x19)
int64_t var_198 = rax_7
int64_t var_190 = 0
int32_t var_188 = 0xffffffff
int16_t var_184 = 0x100
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x11)
int32_t var_c4 = 0
bool var_7f = *(rax_7 + 0x38) u> 1
void var_180
memset(&var_180, 0, 0xa8)
int64_t rsi_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_8 = rsi_7 + 0x34

if (rax_8 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x36)
    rsi_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    rax_8 = rsi_7 + 0x34

wchar16 const* const rcx_10 = u"ProcessOCIOColorSpaceXfrm"
*(arg1 + 0x30) = rax_8
wchar16 const i

do
    i = *rcx_10
    *(rcx_10 + rsi_7 - u"ProcessOCIOColorSpaceXfrm") = i
    rcx_10 = &rcx_10[1]
while (i != 0)
void*** rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_13[0x27]

if (rax_9 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x140)
    rcx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_13[0x27]

*(arg1 + 0x30) = rax_9
void**** rax_10 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_10 = rcx_13
*(arg1 + 8) = &rcx_13[1]
sub_1405d11b0(rcx_13, &var_198, rsi_7)
*(arg1 + 0x1c4) = 1
sub_1405d19b0(arg1, &var_198)
int64_t var_88
*(arg1 + 0x178) = var_88:7.b
*(arg1 + 0x179) = 0
*(arg1 + 0x1c4) = 1
arg5 = zx.o((*(*arg7 + 0x48))(arg7))
int64_t rax_15 = *arg7
arg5 = _mm_cvtepi32_ps(arg5)
int32_t rax_16 = (*(rax_15 + 0x40))(arg7)
void*** rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rax_16))
void* rax_17 = &rcx_22[5]

if (rax_17 u> *(arg1 + 0x38))
    arg5 = sub_140b0e3d0(arg1 + 0x30, 0x30)
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
rcx_22[4].d = arg5.d
rcx_22[2] = 0
rcx_22[3].d = 0
*(rcx_22 + 0x24) = 0x3f800000
sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[sx.q(arg2)]), &var_260, &data_143cd82a0, 0)
void* r12_1 = *(arg3 + 0x30)
void* rax_21 = sub_1419cec70(*(r12_1 + 0x28), &data_143cd83c8, 0)
int64_t var_1e0
__builtin_memset(&var_1e0, 0, 0x2c)
uint64_t rax_22 = zx.q(*(arg1 + 0xa0))
int32_t r14_1 = 0
int64_t var_1b0 = 0
int32_t var_1a8 = 0
int16_t var_1a4 = 0
char var_1a2 = 0
int16_t var_1a0 = 0
int32_t var_1e4 = rax_22.d
int128_t var_240
__builtin_memset(&var_240, 0, 0x30)
int128_t var_1f8 = zx.o(0)

if (rax_22.d != 0)
    do
        uint64_t rsi_10 = zx.q(r14_1)
        uint64_t r15_1 = rsi_10 * 3
        int64_t* rcx_29 = *(arg1 + (r15_1 << 3) + 0xa8)
        
        if (rcx_29 == 0)
            *(&var_1e0 + rsi_10) = 0
            rax_22.b = 0
        else
            *(&var_1e0 + rsi_10) = *(rcx_29 + 0x3c)
            int64_t var_1d8
            *(&var_1d8 + (rsi_10 << 2)) = rcx_29[8].d
            int64_t rax_26 = (*(*rcx_29 + 0x10))()
            
            if (rax_26 != 0)
                var_1a4:1.b = 1
            
            if (rax_26 == 0 || *(rax_26 + 0x68) u<= 1)
                var_1a4:1.b = 0
            
            rax_22 = zx.q(*(&var_1e0 + rsi_10))
        
        if (rax_22.b != 0)
            var_1a8.w = *(*(arg1 + (r15_1 << 3) + 0xa8) + 0x38)
        
        r14_1 += 1
    while (r14_1 u< var_1e4)

int64_t* rcx_31 = *(arg1 + 0x168)
int32_t var_1b8

if (rcx_31 == 0)
    var_1b8 = 0
else
    var_1b8 = *(rcx_31 + 0x3c)
    var_1b8 = rcx_31[8].d
    void* rax_30 = (*(*rcx_31 + 0x10))()
    
    if (rax_30 == 0 || *(rax_30 + 0x68) u<= 1)
        var_1a4:1.b = 0
    else
        var_1a4:1.b = 1

var_1b0.b = *(arg1 + 0x170)
var_1b0:1.b = *(arg1 + 0x171)
var_1b0:2.b = *(arg1 + 0x172)
var_1b0:3.b = *(arg1 + 0x173)
var_1b0:4.d = *(arg1 + 0x174)

if (var_1b8 != 0)
    var_1a8.w = *(*(arg1 + 0x168) + 0x38)

var_1a8:2.b = *(arg1 + 0x178)
var_1a8:3.b = *(arg1 + 0x179)
char var_1a2_1 = *(arg1 + 0x17a)
int64_t var_200 = data_14395d9e8
int64_t var_210 = data_14395da00
int64_t var_208 = data_14395da18
int32_t var_1e8 = 0
int64_t rax_43 = 0
var_240.q = data_1439c9410
void* rcx_34 = var_260

if (rcx_34 != 0)
    int64_t rdx_5 = sx.q(*(rcx_34 + 0x10c))
    void* var_258
    int64_t* rsi_11 = *(var_258 + 0x10)
    int64_t rax_45 = rsi_11[3]
    
    if (*(rax_45 + (rdx_5 << 3)) == 0)
        sub_1419ccf30(rsi_11, rdx_5.d)
        rax_45 = rsi_11[3]
    
    rax_43 = *(rax_45 + (rdx_5 << 3))

var_240:8.q = rax_43
int64_t rax_46 = 0

if (rax_21 != 0)
    int64_t rdx_6 = sx.q(*(rax_21 + 0x10c))
    int64_t* rsi_12 = *(r12_1 + 0x10)
    int64_t rax_47 = rsi_12[3]
    
    if (*(rax_47 + (rdx_6 << 3)) == 0)
        sub_1419ccf30(rsi_12, rdx_6.d)
        rax_47 = rsi_12[3]
    
    rax_46 = *(rax_47 + (rdx_6 << 3))

int128_t var_220
var_220.q = rax_46
sub_1419870b0(arg1, &var_240, 2)
int64_t* rsi_13 = data_14395f4d0
int64_t r14_4 = *(arg1 + 0x1a0)
int64_t r12_3 = *(arg6 + 0x10)

if (*(rax_21 + 0x11a) u> 0)
    uint32_t r15_2 = zx.d(*(rax_21 + 0x118))
    void*** rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_48 = &rcx_40[5]
    
    if (rax_48 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_48 = &rcx_40[5]
    
    *(arg1 + 0x30) = rax_48
    void**** rax_49 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_49 = rcx_40
    *(arg1 + 8) = &rcx_40[1]
    rcx_40[1] = 0
    *rcx_40 = &data_142d5a070
    rcx_40[2] = r14_4
    rcx_40[3].d = r15_2
    rcx_40[4] = r12_3

if (*(rax_21 + 0x11e) u> 0)
    uint32_t r15_3 = zx.d(*(rax_21 + 0x11c))
    
    if ((*(*rsi_13 + 8))(rsi_13) == 0)
        void*** rcx_47 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_53 = &rcx_47[5]
        
        if (rax_53 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_47 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_53 = &rcx_47[5]
        
        *(arg1 + 0x30) = rax_53
        void**** rax_54 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_54 = rcx_47
        *(arg1 + 8) = &rcx_47[1]
        rcx_47[1] = 0
        *rcx_47 = &data_142d5a080
        rcx_47[2] = r14_4
        rcx_47[3].d = r15_3
        rcx_47[4] = rsi_13

if (arg4 != 0)
    int64_t r12_4 = *(arg4 + 0x10)
    int64_t* rsi_14 = data_14395f4d0
    int64_t r14_5 = *(arg1 + 0x1a0)
    
    if (*(rax_21 + 0x122) u> 0)
        uint32_t r15_4 = zx.d(*(rax_21 + 0x120))
        void*** rcx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_57 = &rcx_53[5]
        
        if (rax_57 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_57 = &rcx_53[5]
        
        *(arg1 + 0x30) = rax_57
        void**** rax_58 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_58 = rcx_53
        *(arg1 + 8) = &rcx_53[1]
        rcx_53[1] = 0
        *rcx_53 = &data_142d5a070
        rcx_53[2] = r14_5
        rcx_53[3].d = r15_4
        rcx_53[4] = r12_4
    
    if (*(rax_21 + 0x126) u> 0)
        uint32_t r15_5 = zx.d(*(rax_21 + 0x124))
        
        if ((*(*rsi_14 + 8))(rsi_14) == 0)
            void*** rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_62 = &rcx_60[5]
            
            if (rax_62 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_60 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_62 = &rcx_60[5]
            
            *(arg1 + 0x30) = rax_62
            void**** rax_63 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_63 = rcx_60
            *(arg1 + 8) = &rcx_60[1]
            rcx_60[1] = 0
            *rcx_60 = &data_142d5a080
            rcx_60[2] = r14_5
            rcx_60[3].d = r15_5
            rcx_60[4] = rsi_14

void*** rcx_66 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_65 = &rcx_66[4]

if (rax_65 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_66 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_65 = &rcx_66[4]

*(arg1 + 0x30) = rax_65
int64_t* rax_66 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_66 = rcx_66
*(arg1 + 8) = &rcx_66[1]
rcx_66[1] = 0
*rcx_66 = &data_142d54988
rcx_66[2].d = 0
*(rcx_66 + 0x14) = 2
rcx_66[3].d = 1
void*** rcx_72 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_68 = &rcx_72[2]

if (rax_68 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x18)
    rcx_72 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_68 = &rcx_72[2]

*(arg1 + 0x30) = rax_68
*(arg1 + 0x14) += 1
**(arg1 + 8) = rcx_72
*(arg1 + 8) = &rcx_72[1]
rcx_72[1] = 0
*rcx_72 = &data_142d549b8
*(arg1 + 0x1c4) = 0
*(arg1 + 0x178) = 0
int64_t rax_72 = arg7[2]
int64_t* rsi_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_76 = &rsi_17[1]

if (rcx_76 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rsi_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_76 = &rsi_17[1]

*(arg1 + 0x30) = rcx_76
*rsi_17 = rax_72
void*** rcx_80 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_73 = &rcx_80[5]

if (rax_73 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_80 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_73 = &rcx_80[5]

*(arg1 + 0x30) = rax_73
void**** rax_74 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_74 = rcx_80
*(arg1 + 8) = &rcx_80[1]
rcx_80[1] = 0
*rcx_80 = &data_142d549c8
rcx_80[2].d = 1
rcx_80[3] = rsi_17
rcx_80[4].d = 0
int64_t var_90
int64_t result
int512_t zmm6
result, zmm6 = sub_1405d1550(&var_90)
__security_check_cookie(rax_1 ^ &var_288)
zmm6.o = var_58
return result
