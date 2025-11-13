// 函数: sub_1414cef20
// 地址: 0x1414cef20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int32_t var_1f8 = data_1439c7b18
char var_240 = 0
int32_t var_1f4 = 1
void* const rsi = u"WhiteDummy"
int64_t var_1f0 = 1
int32_t var_1e8 = 1
int16_t var_1e0 = 1
char var_248 = 0
char var_250 = 1
wchar16 const* const var_1c8 = u"UnknownTexture2D"
int16_t var_1d0 = 0
int128_t var_208 = data_1439c7b08
int32_t var_1e4 = 0x10000
int32_t var_1dc = 2
int32_t var_1d8 = 0x200000
int32_t var_1d4 = 0x2000009
int16_t var_1bf = 0
char var_1c0 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0x10, WhiteDummy", var_250, var_248, var_240)
int128_t zmm1 = data_142d3f5a0
int64_t rcx = *(*(arg1 + 0x10) + 8)
int64_t var_168 = rcx
int32_t var_90 = 0
int32_t var_8c
__builtin_memset(&var_8c, 0xff, 0x14)
int128_t var_78 = zmm1
int64_t var_68
__builtin_memset(&var_68, 0, 0x19)
int64_t var_160 = 0
int32_t var_158 = 0xffffffff
int16_t var_154 = 0x900
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x11)
int32_t var_94 = 0
bool var_4f = *(rcx + 0x38) u> 1
void var_150
memset(&var_150, 0, 0xa8)
int64_t r14_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_4 = r14_2 + 0x16

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    r14_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_4 = r14_2 + 0x16

*(arg2 + 0x30) = rax_4
int16_t i

do
    i = *rsi
    *(rsi + r14_2 - u"WhiteDummy") = i
    rsi += 2
while (i != 0)
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_7[0x27]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_7[0x27]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_7
*(arg2 + 8) = &rcx_7[1]
sub_1405d11b0(rcx_7, &var_168, r14_2)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_168)
int64_t var_58
*(arg2 + 0x178) = var_58:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_141096650(arg2)
void* rax_9 = *(arg1 + 0x10)
int128_t zmm1_1 = data_142d3f800
int64_t rsi_2 = *(arg2 + 0x30) + 7
int128_t var_1b8 = data_142d57d10
void*** rsi_3 = rsi_2 & 0xfffffffffffffff8
int128_t zmm0_1 = data_142d57920
int128_t var_1a8 = zmm1_1
int64_t r12 = *(rax_9 + 0x10)
int64_t* r14_5 = *(rax_9 + 8)
void* rax_10 = &rsi_3[0xa]

if (rax_10 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rsi_3[0xa]

*(arg2 + 0x30) = rax_10
int64_t* rax_11 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_11 = rsi_3
*(arg2 + 8) = &rsi_3[1]
rsi_3[1] = 0
*rsi_3 = &data_142d56628
rsi_3[2].d = var_1b8.d
*(rsi_3 + 0x14) = var_1b8:4.d
rsi_3[3].d = var_1b8:8.d
*(rsi_3 + 0x1c) = var_1b8:0xc.d
__builtin_memset(&rsi_3[4], 0xff, 0x14)
*(rsi_3 + 0x34) = zmm0_1:4.d
rsi_3[7].d = zmm0_1:8.d
*(rsi_3 + 0x3c) = zmm0_1:0xc.d
rsi_3[8] = r14_5
rsi_3[9] = r12

if ((*(*r14_5 + 8))(r14_5) == 0)
    int64_t* rcx_15 = rsi_3[8]
    
    if ((*(*rcx_15 + 0x18))(rcx_15) == 0)
        int64_t* rcx_16 = rsi_3[8]
        
        if ((*(*rcx_16 + 0x20))(rcx_16) == 0)
            int64_t* rcx_17 = rsi_3[8]
            (*(*rcx_17 + 0x10))(rcx_17)

int64_t* rcx_18 = rsi_3[9]

if ((*(*rcx_18 + 8))(rcx_18) == 0)
    int64_t* rcx_19 = rsi_3[9]
    
    if ((*(*rcx_19 + 0x18))(rcx_19) == 0)
        int64_t* rcx_20 = rsi_3[9]
        
        if ((*(*rcx_20 + 0x20))(rcx_20) == 0)
            int64_t* rcx_21 = rsi_3[9]
            (*(*rcx_21 + 0x10))(rcx_21)

int64_t* rcx_22 = data_143f0f180
int16_t var_22f = 0x100
int64_t var_22c = 0
int32_t var_224 = 0
char var_230
char* var_258_1 = &var_230
var_230 = *(*(*(arg1 + 0x10) + 0x10) + 0x3c)
int32_t var_238
(*(*rcx_22 + 0x5d0))(rcx_22, &var_238, &data_143f02b98)
sub_1405d1600(arg1 + 0xc0, &var_238)
sub_1405ec8a0(&var_238)
int64_t var_60
sub_1405d1550(&var_60)
wchar16 const* const rsi_6 = u"BlackDummy"
int32_t var_1f8_1 = data_1439c7b30
char var_240_1 = 0
int32_t var_1f4_1 = 1
int64_t var_1f0_1 = 1
int32_t var_1e8_1 = 1
int16_t var_1e0_1 = 1
char var_248_1 = 0
char var_250_1 = 1
wchar16 const* const var_1c8_1 = u"UnknownTexture2D"
int16_t var_1d0_1 = 0
var_208 = data_1439c7b20
int32_t var_1e4_1 = 0x10000
int32_t var_1dc_1 = 2
int32_t var_1d8_1 = 0x200000
int32_t var_1d4_1 = 0x2000009
int16_t var_1bf_1 = 0
char var_1c0_1 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0x18, BlackDummy", var_250_1, var_248_1, 
    var_240_1)
int128_t zmm1_2 = data_142d3f5a0
int64_t rcx_26 = *(*(arg1 + 0x18) + 8)
var_168 = rcx_26
int32_t var_90_1 = 0
int32_t var_8c_1
__builtin_memset(&var_8c_1, 0xff, 0x14)
int128_t var_78_1 = zmm1_2
int64_t var_68_1
__builtin_memset(&var_68_1, 0, 0x19)
int64_t var_160_1 = 0
int32_t var_158_1 = 0xffffffff
int16_t var_154_1 = 0x900
int64_t var_a8_1
__builtin_memset(&var_a8_1, 0, 0x11)
int32_t var_94_1 = 0
bool var_4f_1 = *(rcx_26 + 0x38) u> 1
memset(&var_150, 0, 0xa8)
int64_t r14_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_39 = r14_8 + 0x16

if (rax_39 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    r14_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_39 = r14_8 + 0x16

*(arg2 + 0x30) = rax_39
wchar16 const i_1

do
    i_1 = *rsi_6
    *(r14_8 - u"BlackDummy" + rsi_6) = i_1
    rsi_6 = &rsi_6[1]
while (i_1 != 0)
void*** rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_40 = &rcx_33[0x27]

if (rax_40 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_40 = &rcx_33[0x27]

*(arg2 + 0x30) = rax_40
void**** rax_41 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_41 = rcx_33
*(arg2 + 8) = &rcx_33[1]
sub_1405d11b0(rcx_33, &var_168, r14_8)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_168)
int64_t var_58_1
*(arg2 + 0x178) = var_58_1:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_141096650(arg2)
void* rax_44 = *(arg1 + 0x18)
int128_t zmm1_3 = data_142d3f800
int64_t rsi_8 = *(arg2 + 0x30) + 7
var_1b8 = data_142d57d10
void*** rsi_9 = rsi_8 & 0xfffffffffffffff8
int128_t zmm0_3 = data_142d57920
int128_t var_1a8_1 = zmm1_3
int64_t r15 = *(rax_44 + 0x10)
int64_t* r14_11 = *(rax_44 + 8)
void* rax_45 = &rsi_9[0xa]

if (rax_45 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rsi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_45 = &rsi_9[0xa]

*(arg2 + 0x30) = rax_45
int64_t* rax_46 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_46 = rsi_9
*(arg2 + 8) = &rsi_9[1]
rsi_9[1] = 0
*rsi_9 = &data_142d56628
rsi_9[2].d = var_1b8.d
*(rsi_9 + 0x14) = var_1b8:4.d
rsi_9[3].d = var_1b8:8.d
*(rsi_9 + 0x1c) = var_1b8:0xc.d
__builtin_memset(&rsi_9[4], 0xff, 0x14)
*(rsi_9 + 0x34) = zmm0_3:4.d
rsi_9[7].d = zmm0_3:8.d
*(rsi_9 + 0x3c) = zmm0_3:0xc.d
rsi_9[8] = r14_11
rsi_9[9] = r15

if ((*(*r14_11 + 8))(r14_11) == 0)
    int64_t* rcx_41 = rsi_9[8]
    
    if ((*(*rcx_41 + 0x18))(rcx_41) == 0)
        int64_t* rcx_42 = rsi_9[8]
        
        if ((*(*rcx_42 + 0x20))(rcx_42) == 0)
            int64_t* rcx_43 = rsi_9[8]
            (*(*rcx_43 + 0x10))(rcx_43)

int64_t* rcx_44 = rsi_9[9]

if ((*(*rcx_44 + 8))(rcx_44) == 0)
    int64_t* rcx_45 = rsi_9[9]
    
    if ((*(*rcx_45 + 0x18))(rcx_45) == 0)
        int64_t* rcx_46 = rsi_9[9]
        
        if ((*(*rcx_46 + 0x20))(rcx_46) == 0)
            int64_t* rcx_47 = rsi_9[9]
            (*(*rcx_47 + 0x10))(rcx_47)

sub_1405d1550(&var_60)
int32_t var_1f8_2 = data_1439c7b30
char var_240_2 = 0
int32_t var_1f4_2 = 1
int64_t var_1f0_2 = 1
int32_t var_1e8_2 = 1
int16_t var_1e0_2 = 1
wchar16 const* const var_1c8_2 = u"UnknownTexture2D"
char var_248_2 = 0
char var_250_2 = 1
wchar16 const* const var_258_3 = u"ZeroUIntDummy"
int16_t var_1d0_2 = 0
var_208 = data_1439c7b20
int32_t var_1e4_2 = 0x10000
int32_t var_1dc_2 = 0x1c
int32_t var_1d8_2 = 0x200000
int32_t var_1d4_2 = 0x2000009
int16_t var_1bf_2 = 0
char var_1c0_2 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0xb8, var_258_3, var_250_2, var_248_2, 
    var_240_2)
int128_t zmm1_4 = data_142d3f5a0
int64_t rcx_49 = *(*(arg1 + 0xb8) + 8)
var_168 = rcx_49
int32_t var_90_2 = 0
int32_t var_8c_2
__builtin_memset(&var_8c_2, 0xff, 0x14)
int128_t var_78_2 = zmm1_4
int64_t var_68_2
__builtin_memset(&var_68_2, 0, 0x19)
int64_t var_160_2 = 0
int32_t var_158_2 = 0xffffffff
int16_t var_154_2 = 0x900
int64_t var_a8_2
__builtin_memset(&var_a8_2, 0, 0x11)
int32_t var_94_2 = 0
bool var_4f_2 = *(rcx_49 + 0x38) u> 1
memset(&var_150, 0, 0xa8)
int64_t rsi_14 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_71 = rsi_14 + 0x26

if (rax_71 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rsi_14 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_71 = rsi_14 + 0x26

wchar16 const* const rcx_52 = u"ClearZeroUIntDummy"
*(arg2 + 0x30) = rax_71
wchar16 const i_2

do
    i_2 = *rcx_52
    *(rcx_52 + rsi_14 - u"ClearZeroUIntDummy") = i_2
    rcx_52 = &rcx_52[1]
while (i_2 != 0)
void*** rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_72 = &rcx_55[0x27]

if (rax_72 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_55 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_72 = &rcx_55[0x27]

*(arg2 + 0x30) = rax_72
void**** rax_73 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_73 = rcx_55
*(arg2 + 8) = &rcx_55[1]
sub_1405d11b0(rcx_55, &var_168, rsi_14)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_168)
int64_t var_58_2
*(arg2 + 0x178) = var_58_2:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_141096650(arg2)
void* rax_76 = *(arg1 + 0xb8)
int128_t zmm1_5 = data_142d3f800
int64_t rsi_18 = *(arg2 + 0x30) + 7
var_1b8 = data_142d57d10
void*** rsi_19 = rsi_18 & 0xfffffffffffffff8
int128_t zmm0_5 = data_142d57920
int128_t var_1a8_2 = zmm1_5
int64_t r15_1 = *(rax_76 + 0x10)
int64_t* r14_12 = *(rax_76 + 8)
void* rax_77 = &rsi_19[0xa]

if (rax_77 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rsi_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_77 = &rsi_19[0xa]

*(arg2 + 0x30) = rax_77
int64_t* rax_78 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_78 = rsi_19
*(arg2 + 8) = &rsi_19[1]
rsi_19[1] = 0
*rsi_19 = &data_142d56628
rsi_19[2].d = var_1b8.d
*(rsi_19 + 0x14) = var_1b8:4.d
rsi_19[3].d = var_1b8:8.d
*(rsi_19 + 0x1c) = var_1b8:0xc.d
__builtin_memset(&rsi_19[4], 0xff, 0x14)
*(rsi_19 + 0x34) = zmm0_5:4.d
rsi_19[7].d = zmm0_5:8.d
*(rsi_19 + 0x3c) = zmm0_5:0xc.d
rsi_19[8] = r14_12
rsi_19[9] = r15_1

if ((*(*r14_12 + 8))(r14_12) == 0)
    int64_t* rcx_63 = rsi_19[8]
    
    if ((*(*rcx_63 + 0x18))(rcx_63) == 0)
        int64_t* rcx_64 = rsi_19[8]
        
        if ((*(*rcx_64 + 0x20))(rcx_64) == 0)
            int64_t* rcx_65 = rsi_19[8]
            (*(*rcx_65 + 0x10))(rcx_65)

int64_t* rcx_66 = rsi_19[9]

if ((*(*rcx_66 + 8))(rcx_66) == 0)
    int64_t* rcx_67 = rsi_19[9]
    
    if ((*(*rcx_67 + 0x18))(rcx_67) == 0)
        int64_t* rcx_68 = rsi_19[9]
        
        if ((*(*rcx_68 + 0x20))(rcx_68) == 0)
            int64_t* rcx_69 = rsi_19[9]
            (*(*rcx_69 + 0x10))(rcx_69)

sub_1405d1550(&var_60)
wchar16 const* const rsi_22 = u"BlackAlphaOneDummy"
int32_t var_1f8_3 = data_1439c7ae8
char var_240_3 = 0
int32_t var_1f4_3 = 1
int64_t var_1f0_3 = 1
int32_t var_1e8_3 = 1
int16_t var_1e0_3 = 1
char var_248_3 = 0
char var_250_3 = 1
wchar16 const* const var_1c8_3 = u"UnknownTexture2D"
int16_t var_1d0_3 = 0
var_208 = data_1439c7ad8
int32_t var_1e4_3 = 0x10000
int32_t var_1dc_3 = 2
int32_t var_1d8_3 = 0x200000
int32_t var_1d4_3 = 0x2000009
int16_t var_1bf_3 = 0
char var_1c0_3 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0x20, BlackAlphaOneDummy", var_250_3, 
    var_248_3, var_240_3)
int128_t zmm1_6 = data_142d3f5a0
int64_t rcx_71 = *(*(arg1 + 0x20) + 8)
var_168 = rcx_71
int32_t var_90_3 = 0
int32_t var_8c_3
__builtin_memset(&var_8c_3, 0xff, 0x14)
int128_t var_78_3 = zmm1_6
int64_t var_68_3
__builtin_memset(&var_68_3, 0, 0x19)
int64_t var_160_3 = 0
int32_t var_158_3 = 0xffffffff
int16_t var_154_3 = 0x900
int64_t var_a8_3
__builtin_memset(&var_a8_3, 0, 0x11)
int32_t var_94_3 = 0
bool var_4f_3 = *(rcx_71 + 0x38) u> 1
memset(&var_150, 0, 0xa8)
int64_t r14_15 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_103 = r14_15 + 0x26

if (rax_103 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    r14_15 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_103 = r14_15 + 0x26

*(arg2 + 0x30) = rax_103
wchar16 const i_3

do
    i_3 = *rsi_22
    *(r14_15 - u"BlackAlphaOneDummy" + rsi_22) = i_3
    rsi_22 = &rsi_22[1]
while (i_3 != 0)
void*** rcx_78 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_104 = &rcx_78[0x27]

if (rax_104 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_78 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_104 = &rcx_78[0x27]

*(arg2 + 0x30) = rax_104
void**** rax_105 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_105 = rcx_78
*(arg2 + 8) = &rcx_78[1]
sub_1405d11b0(rcx_78, &var_168, r14_15)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_168)
int64_t var_58_3
*(arg2 + 0x178) = var_58_3:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_141096650(arg2)
void* rax_108 = *(arg1 + 0x20)
int128_t zmm1_7 = data_142d3f800
int64_t rsi_24 = *(arg2 + 0x30) + 7
var_1b8 = data_142d57d10
void*** rsi_25 = rsi_24 & 0xfffffffffffffff8
int128_t zmm0_7 = data_142d57920
int128_t var_1a8_3 = zmm1_7
int64_t r15_2 = *(rax_108 + 0x10)
int64_t* r14_18 = *(rax_108 + 8)
void* rax_109 = &rsi_25[0xa]

if (rax_109 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rsi_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_109 = &rsi_25[0xa]

*(arg2 + 0x30) = rax_109
int64_t* rax_110 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_110 = rsi_25
*(arg2 + 8) = &rsi_25[1]
rsi_25[1] = 0
*rsi_25 = &data_142d56628
rsi_25[2].d = var_1b8.d
*(rsi_25 + 0x14) = var_1b8:4.d
rsi_25[3].d = var_1b8:8.d
*(rsi_25 + 0x1c) = var_1b8:0xc.d
__builtin_memset(&rsi_25[4], 0xff, 0x14)
*(rsi_25 + 0x34) = zmm0_7:4.d
rsi_25[7].d = zmm0_7:8.d
*(rsi_25 + 0x3c) = zmm0_7:0xc.d
rsi_25[8] = r14_18
rsi_25[9] = r15_2

if ((*(*r14_18 + 8))(r14_18) == 0)
    int64_t* rcx_86 = rsi_25[8]
    
    if ((*(*rcx_86 + 0x18))(rcx_86) == 0)
        int64_t* rcx_87 = rsi_25[8]
        
        if ((*(*rcx_87 + 0x20))(rcx_87) == 0)
            int64_t* rcx_88 = rsi_25[8]
            (*(*rcx_88 + 0x10))(rcx_88)

int64_t* rcx_89 = rsi_25[9]

if ((*(*rcx_89 + 8))(rcx_89) == 0)
    int64_t* rcx_90 = rsi_25[9]
    
    if ((*(*rcx_90 + 0x18))(rcx_90) == 0)
        int64_t* rcx_91 = rsi_25[9]
        
        if ((*(*rcx_91 + 0x20))(rcx_91) == 0)
            int64_t* rcx_92 = rsi_25[9]
            (*(*rcx_92 + 0x10))(rcx_92)

sub_1405d1550(&var_60)
wchar16 const* const rsi_28 = u"GreenDummy"
int32_t var_1f8_4 = data_1439c7b90
char var_240_4 = 0
int32_t var_1f4_4 = 1
int64_t var_1f0_4 = 1
int32_t var_1e8_4 = 1
int16_t var_1e0_4 = 1
char var_248_4 = 0
char var_250_4 = 1
wchar16 const* const var_1c8_4 = u"UnknownTexture2D"
int16_t var_1d0_4 = 0
var_208 = data_1439c7b80
int32_t var_1e4_4 = 0x10000
int32_t var_1dc_4 = 2
int32_t var_1d8_4 = 0x200000
int32_t var_1d4_4 = 0x2000009
int16_t var_1bf_4 = 0
char var_1c0_4 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0x98, GreenDummy", var_250_4, var_248_4, 
    var_240_4)
int128_t zmm1_8 = data_142d3f5a0
int64_t rcx_94 = *(*(arg1 + 0x98) + 8)
var_168 = rcx_94
int32_t var_90_4 = 0
int32_t var_8c_4
__builtin_memset(&var_8c_4, 0xff, 0x14)
int128_t var_78_4 = zmm1_8
int64_t var_68_4
__builtin_memset(&var_68_4, 0, 0x19)
int64_t var_160_4 = 0
int32_t var_158_4 = 0xffffffff
int16_t var_154_4 = 0x900
int64_t var_a8_4
__builtin_memset(&var_a8_4, 0, 0x11)
int32_t var_94_4 = 0
bool var_4f_4 = *(rcx_94 + 0x38) u> 1
memset(&var_150, 0, 0xa8)
int64_t r14_21 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_135 = r14_21 + 0x16

if (rax_135 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    r14_21 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_135 = r14_21 + 0x16

*(arg2 + 0x30) = rax_135
wchar16 const i_4

do
    i_4 = *rsi_28
    *(rsi_28 + r14_21 - u"GreenDummy") = i_4
    rsi_28 = &rsi_28[1]
while (i_4 != 0)
void*** rcx_101 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_136 = &rcx_101[0x27]

if (rax_136 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_101 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_136 = &rcx_101[0x27]

*(arg2 + 0x30) = rax_136
void**** rax_137 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_137 = rcx_101
*(arg2 + 8) = &rcx_101[1]
sub_1405d11b0(rcx_101, &var_168, r14_21)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_168)
int64_t var_58_4
*(arg2 + 0x178) = var_58_4:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_141096650(arg2)
void* rax_140 = *(arg1 + 0x98)
int128_t zmm1_9 = data_142d3f800
int64_t rsi_30 = *(arg2 + 0x30) + 7
var_1b8 = data_142d57d10
void*** rsi_31 = rsi_30 & 0xfffffffffffffff8
int128_t zmm0_9 = data_142d57920
int128_t var_1a8_4 = zmm1_9
int64_t r15_3 = *(rax_140 + 0x10)
int64_t* r14_24 = *(rax_140 + 8)
void* rax_141 = &rsi_31[0xa]

if (rax_141 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rsi_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_141 = &rsi_31[0xa]

*(arg2 + 0x30) = rax_141
int64_t* rax_142 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_142 = rsi_31
*(arg2 + 8) = &rsi_31[1]
rsi_31[1] = 0
*rsi_31 = &data_142d56628
rsi_31[2].d = var_1b8.d
*(rsi_31 + 0x14) = var_1b8:4.d
rsi_31[3].d = var_1b8:8.d
*(rsi_31 + 0x1c) = var_1b8:0xc.d
__builtin_memset(&rsi_31[4], 0xff, 0x14)
*(rsi_31 + 0x34) = zmm0_9:4.d
rsi_31[7].d = zmm0_9:8.d
*(rsi_31 + 0x3c) = zmm0_9:0xc.d
rsi_31[8] = r14_24
rsi_31[9] = r15_3

if ((*(*r14_24 + 8))(r14_24) == 0)
    int64_t* rcx_109 = rsi_31[8]
    
    if ((*(*rcx_109 + 0x18))(rcx_109) == 0)
        int64_t* rcx_110 = rsi_31[8]
        
        if ((*(*rcx_110 + 0x20))(rcx_110) == 0)
            int64_t* rcx_111 = rsi_31[8]
            (*(*rcx_111 + 0x10))(rcx_111)

int64_t* rcx_112 = rsi_31[9]

if ((*(*rcx_112 + 8))(rcx_112) == 0)
    int64_t* rcx_113 = rsi_31[9]
    
    if ((*(*rcx_113 + 0x18))(rcx_113) == 0)
        int64_t* rcx_114 = rsi_31[9]
        
        if ((*(*rcx_114 + 0x20))(rcx_114) == 0)
            int64_t* rcx_115 = rsi_31[9]
            (*(*rcx_115 + 0x10))(rcx_115)

sub_1405d1550(&var_60)
wchar16 const* const rsi_34 = u"DefaultNormal8Bit"
int32_t var_1f8_5 = data_1439c7ba8
char var_240_5 = 0
int32_t var_1f4_5 = 1
int64_t var_1f0_5 = 1
int32_t var_1e8_5 = 1
int16_t var_1e0_5 = 1
char var_248_5 = 0
char var_250_5 = 1
wchar16 const* const var_1c8_5 = u"UnknownTexture2D"
int16_t var_1d0_5 = 0
var_208 = data_1439c7b98
int32_t var_1e4_5 = 0x10000
int32_t var_1dc_5 = 2
int32_t var_1d8_5 = 0x200000
int32_t var_1d4_5 = 0x2000009
int16_t var_1bf_5 = 0
char var_1c0_5 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0xa0, DefaultNormal8Bit", var_250_5, 
    var_248_5, var_240_5)
int128_t zmm1_10 = data_142d3f5a0
int64_t rcx_117 = *(*(arg1 + 0xa0) + 8)
var_168 = rcx_117
int32_t var_90_5 = 0
int32_t var_8c_5
__builtin_memset(&var_8c_5, 0xff, 0x14)
int128_t var_78_5 = zmm1_10
int64_t var_68_5
__builtin_memset(&var_68_5, 0, 0x19)
int64_t var_160_5 = 0
int32_t var_158_5 = 0xffffffff
int16_t var_154_5 = 0x900
int64_t var_a8_5
__builtin_memset(&var_a8_5, 0, 0x11)
int32_t var_94_5 = 0
bool var_4f_5 = *(rcx_117 + 0x38) u> 1
memset(&var_150, 0, 0xa8)
int64_t r14_27 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_167 = r14_27 + 0x24

if (rax_167 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x26)
    r14_27 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_167 = r14_27 + 0x24

*(arg2 + 0x30) = rax_167
wchar16 const i_5

do
    i_5 = *rsi_34
    *(r14_27 - u"DefaultNormal8Bit" + rsi_34) = i_5
    rsi_34 = &rsi_34[1]
while (i_5 != 0)
void*** rcx_124 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_168 = &rcx_124[0x27]

if (rax_168 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_124 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_168 = &rcx_124[0x27]

*(arg2 + 0x30) = rax_168
void**** rax_169 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_169 = rcx_124
*(arg2 + 8) = &rcx_124[1]
sub_1405d11b0(rcx_124, &var_168, r14_27)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_168)
int64_t var_58_5
*(arg2 + 0x178) = var_58_5:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_141096650(arg2)
void* rax_172 = *(arg1 + 0xa0)
int128_t zmm1_11 = data_142d3f800
int64_t rsi_36 = *(arg2 + 0x30) + 7
var_1b8 = data_142d57d10
void*** rsi_37 = rsi_36 & 0xfffffffffffffff8
int128_t zmm0_11 = data_142d57920
int128_t var_1a8_5 = zmm1_11
int64_t r15_4 = *(rax_172 + 0x10)
int64_t* r14_30 = *(rax_172 + 8)
void* rax_173 = &rsi_37[0xa]

if (rax_173 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rsi_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_173 = &rsi_37[0xa]

*(arg2 + 0x30) = rax_173
int64_t* rax_174 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_174 = rsi_37
*(arg2 + 8) = &rsi_37[1]
rsi_37[1] = 0
*rsi_37 = &data_142d56628
rsi_37[2].d = var_1b8.d
*(rsi_37 + 0x14) = var_1b8:4.d
rsi_37[3].d = var_1b8:8.d
*(rsi_37 + 0x1c) = var_1b8:0xc.d
__builtin_memset(&rsi_37[4], 0xff, 0x14)
*(rsi_37 + 0x34) = zmm0_11:4.d
rsi_37[7].d = zmm0_11:8.d
*(rsi_37 + 0x3c) = zmm0_11:0xc.d
rsi_37[8] = r14_30
rsi_37[9] = r15_4

if ((*(*r14_30 + 8))(r14_30) == 0)
    int64_t* rcx_132 = rsi_37[8]
    
    if ((*(*rcx_132 + 0x18))(rcx_132) == 0)
        int64_t* rcx_133 = rsi_37[8]
        
        if ((*(*rcx_133 + 0x20))(rcx_133) == 0)
            int64_t* rcx_134 = rsi_37[8]
            (*(*rcx_134 + 0x10))(rcx_134)

int64_t* rcx_135 = rsi_37[9]

if ((*(*rcx_135 + 8))(rcx_135) == 0)
    int64_t* rcx_136 = rsi_37[9]
    
    if ((*(*rcx_136 + 0x18))(rcx_136) == 0)
        int64_t* rcx_137 = rsi_37[9]
        
        if ((*(*rcx_137 + 0x20))(rcx_137) == 0)
            int64_t* rcx_138 = rsi_37[9]
            (*(*rcx_138 + 0x10))(rcx_138)

sub_1405d1550(&var_60)
var_1a8_5.d = data_143f02318
char var_240_6 = 0
char var_248_6 = 0
wchar16 const* const var_178 = u"UnknownTexture2D"
char var_250_6 = 1
wchar16 const* const var_258_7 = u"PerlinNoiseGradient"
int16_t var_180 = 0
var_1b8 = data_143f02308
var_1a8_5:4.d = 0x80
var_1a8_5:8.q = 0x80
int128_t var_198_5
var_198_5.d = 1
var_198_5:4.d = 0x10000
var_198_5:8.w = 1
var_198_5:0xc.d = 2
int32_t var_188 = 0x200000
int32_t var_184 = 0x2000008
int16_t var_16f = 0
char var_170 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_1b8, arg1 + 0x28, var_258_7, var_250_6, var_248_6, 
    var_240_6)
int64_t* rcx_140 = data_143f0f180
var_250_6.q = &var_238
var_258_7.d = 1
int64_t rax_199 =
    (*(*rcx_140 + 0x510))(rcx_140, arg2, *(*(arg1 + 0x28) + 0x10), 0, var_258_7, var_250_6, 0, 1)
int32_t rdx_23 = var_1a8_5:8.d
int32_t r8_14 = 0x3039
int32_t r11 = 0

if (rdx_23 s> 0)
    int32_t rcx_141 = var_1a8_5:4.d
    
    do
        int32_t r10_1 = 0
        
        if (rcx_141 s> 0)
            int64_t r9_8 = 0
            
            do
                r10_1 += 1
                r8_14 = r8_14 * 0xbb38435 + 0x3619636b
                int32_t* rcx_144 = zx.q(r11 * var_238) + r9_8
                r9_8 += 4
                int128_t zmm0_13
                zmm0_13.d = (r8_14 u>> 9 | 0x3f800000).d f- 1f
                zmm0_13.d = zmm0_13.d f* 12f
                *(rcx_144 + rax_199) = *(&data_1439b71d0 + (zx.q((int.q(zmm0_13.d)).d) << 2))
                rcx_141 = var_1a8_5:4.d
            while (r10_1 s< rcx_141)
            
            rdx_23 = var_1a8_5:8.d
        
        r11 += 1
    while (r11 s< rdx_23)

int64_t* rcx_145 = data_143f0f180
var_258_7.b = 0
(*(*rcx_145 + 0x518))(rcx_145, arg2, *(*(arg1 + 0x28) + 0x10), 0, var_258_7, 1)

if (data_1439c8790 != 0)
    uint128_t zmm1_12 = data_142fb8340
    var_22c.o = zmm1_12
    char var_240_8 = 0
    wchar16 const* const rsi_41 = u"MaxFP16Depth"
    uint128_t temp0_1 = _mm_bsrli_si128(zmm1_12, 0xc)
    char var_248_8 = 0
    var_230.d = 1
    char var_250_8 = 1
    int16_t var_1d0_6 = 0
    var_208 = var_230.o
    int32_t var_1f8_6 = temp0_1.d
    int32_t var_1f4_6 = 1
    int64_t var_1f0_6 = 1
    int32_t var_1e8_6 = 1
    int32_t var_1e4_6 = 0x10000
    int16_t var_1e0_6 = 1
    var_1dc_5 = 0xa
    int32_t var_1d8_6 = 0x200000
    int32_t var_1d4_6 = 0x2000009
    wchar16 const* const var_1c8_6 = u"UnknownTexture2D"
    int16_t var_1bf_6 = 0
    char var_1c0_6 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0x80, MaxFP16Depth", var_250_8, 
        var_248_8, var_240_8)
    var_250_8.d = 0xffffffff
    wchar16 const* const var_258_8
    var_258_8.d = 0
    sub_1414bfe70(&var_168, *(*(arg1 + 0x80) + 8), 9, 0, var_258_8.b, var_250_8)
    int64_t r14_33 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_205 = r14_33 + 0x1a
    
    if (rax_205 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x1c)
        r14_33 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_205 = r14_33 + 0x1a
    
    *(arg2 + 0x30) = rax_205
    wchar16 const i_6
    
    do
        i_6 = *rsi_41
        *(r14_33 - u"MaxFP16Depth" + rsi_41) = i_6
        rsi_41 = &rsi_41[1]
    while (i_6 != 0)
    void*** rcx_152 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_206 = &rcx_152[0x27]
    
    if (rax_206 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_152 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_206 = &rcx_152[0x27]
    
    *(arg2 + 0x30) = rax_206
    void**** rax_207 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_207 = rcx_152
    *(arg2 + 8) = &rcx_152[1]
    sub_1405d11b0(rcx_152, &var_168, r14_33)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_168)
    *(arg2 + 0x178) = var_58_5:7.b
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    sub_141096650(arg2)
    void* rax_210 = *(arg1 + 0x80)
    int128_t zmm1_13 = data_142d3f800
    int64_t rsi_43 = *(arg2 + 0x30) + 7
    var_1b8 = data_142d57d10
    void*** rsi_44 = rsi_43 & 0xfffffffffffffff8
    int128_t zmm0_14 = data_142d57920
    int128_t var_1a8_6 = zmm1_13
    int64_t r15_5 = *(rax_210 + 0x10)
    int64_t* r14_36 = *(rax_210 + 8)
    void* rax_211 = &rsi_44[0xa]
    
    if (rax_211 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rsi_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_211 = &rsi_44[0xa]
    
    *(arg2 + 0x30) = rax_211
    int64_t* rax_212 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_212 = rsi_44
    *(arg2 + 8) = &rsi_44[1]
    rsi_44[1] = 0
    *rsi_44 = &data_142d56628
    rsi_44[2].d = var_1b8.d
    *(rsi_44 + 0x14) = var_1b8:4.d
    rsi_44[3].d = var_1b8:8.d
    *(rsi_44 + 0x1c) = var_1b8:0xc.d
    __builtin_memset(&rsi_44[4], 0xff, 0x14)
    *(rsi_44 + 0x34) = zmm0_14:4.d
    rsi_44[7].d = zmm0_14:8.d
    *(rsi_44 + 0x3c) = zmm0_14:0xc.d
    rsi_44[8] = r14_36
    rsi_44[9] = r15_5
    
    if ((*(*r14_36 + 8))(r14_36) == 0)
        int64_t* rcx_160 = rsi_44[8]
        
        if ((*(*rcx_160 + 0x18))(rcx_160) == 0)
            int64_t* rcx_161 = rsi_44[8]
            
            if ((*(*rcx_161 + 0x20))(rcx_161) == 0)
                int64_t* rcx_162 = rsi_44[8]
                (*(*rcx_162 + 0x10))(rcx_162)
    
    int64_t* rcx_163 = rsi_44[9]
    
    if ((*(*rcx_163 + 8))(rcx_163) == 0)
        int64_t* rcx_164 = rsi_44[9]
        
        if ((*(*rcx_164 + 0x18))(rcx_164) == 0)
            int64_t* rcx_165 = rsi_44[9]
            
            if ((*(*rcx_165 + 0x20))(rcx_165) == 0)
                int64_t* rcx_166 = rsi_44[9]
                (*(*rcx_166 + 0x10))(rcx_166)
    
    sub_1405d1550(&var_60)

wchar16 const* const rsi_47 = u"DepthDummy"
int32_t var_1f8_7 = data_1439c7b78
char var_240_9 = 0
int32_t var_1f4_7 = 1
int64_t var_1f0_7 = 1
int32_t var_1e8_7 = 1
int16_t var_1e0_7 = 1
char var_248_9 = 0
char var_250_9 = 1
wchar16 const* const var_1c8_7 = u"UnknownTexture2D"
int16_t var_1d0_7 = 0
var_208 = data_1439c7b68
int32_t var_1e4_7 = 0x10000
var_1dc_5.q = 0xb
int32_t var_1d4_7 = 4
int16_t var_1bf_7 = 0
char var_1c0_7 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0x88, DepthDummy", var_250_9, var_248_9, 
    var_240_9)
int128_t zmm1_14 = data_142d3f5a0
int64_t rcx_168 = *(*(arg1 + 0x88) + 8)
int64_t var_a8_6 = rcx_168
int32_t var_90_6 = 0
int32_t var_8c_6
__builtin_memset(&var_8c_6, 0xff, 0x14)
int128_t var_78_6 = zmm1_14
int64_t var_68_6
__builtin_memset(&var_68_6, 0, 0x19)
int64_t var_a0 = 0
char var_98 = 0x99
int32_t var_94_6 = 0x22
bool var_4f_6 = *(rcx_168 + 0x38) u> 1
memset(&var_168, 0, 0xc0)
int64_t r14_39 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_237 = r14_39 + 0x16

if (rax_237 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    r14_39 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_237 = r14_39 + 0x16

*(arg2 + 0x30) = rax_237
wchar16 const i_7

do
    i_7 = *rsi_47
    *(r14_39 - u"DepthDummy" + rsi_47) = i_7
    rsi_47 = &rsi_47[1]
while (i_7 != 0)
void*** rcx_175 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_238 = &rcx_175[0x27]

if (rax_238 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_175 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_238 = &rcx_175[0x27]

*(arg2 + 0x30) = rax_238
void**** rax_239 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_239 = rcx_175
*(arg2 + 8) = &rcx_175[1]
sub_1405d11b0(rcx_175, &var_168, r14_39)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_168)
int64_t var_58_6
*(arg2 + 0x178) = var_58_6:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_141096650(arg2)
void* rax_242 = *(arg1 + 0x88)
int128_t zmm1_15 = data_142d3f800
int64_t rsi_49 = *(arg2 + 0x30) + 7
var_1b8 = data_142d57d10
void*** rsi_50 = rsi_49 & 0xfffffffffffffff8
int128_t zmm0_15 = data_142d57920
int128_t var_1a8_7 = zmm1_15
int64_t r15_6 = *(rax_242 + 0x10)
int64_t* r14_42 = *(rax_242 + 8)
void* rax_243 = &rsi_50[0xa]

if (rax_243 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rsi_50 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_243 = &rsi_50[0xa]

*(arg2 + 0x30) = rax_243
int64_t* rax_244 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_244 = rsi_50
*(arg2 + 8) = &rsi_50[1]
rsi_50[1] = 0
*rsi_50 = &data_142d56628
rsi_50[2].d = var_1b8.d
*(rsi_50 + 0x14) = var_1b8:4.d
rsi_50[3].d = var_1b8:8.d
*(rsi_50 + 0x1c) = var_1b8:0xc.d
__builtin_memset(&rsi_50[4], 0xff, 0x14)
*(rsi_50 + 0x34) = zmm0_15:4.d
rsi_50[7].d = zmm0_15:8.d
*(rsi_50 + 0x3c) = zmm0_15:0xc.d
rsi_50[8] = r14_42
rsi_50[9] = r15_6

if ((*(*r14_42 + 8))(r14_42) == 0)
    int64_t* rcx_183 = rsi_50[8]
    
    if ((*(*rcx_183 + 0x18))(rcx_183) == 0)
        int64_t* rcx_184 = rsi_50[8]
        
        if ((*(*rcx_184 + 0x20))(rcx_184) == 0)
            int64_t* rcx_185 = rsi_50[8]
            (*(*rcx_185 + 0x10))(rcx_185)

int64_t* rcx_186 = rsi_50[9]

if ((*(*rcx_186 + 8))(rcx_186) == 0)
    int64_t* rcx_187 = rsi_50[9]
    
    if ((*(*rcx_187 + 0x18))(rcx_187) == 0)
        int64_t* rcx_188 = rsi_50[9]
        
        if ((*(*rcx_188 + 0x20))(rcx_188) == 0)
            int64_t* rcx_189 = rsi_50[9]
            (*(*rcx_189 + 0x10))(rcx_189)

sub_1405d1550(&var_60)
wchar16 const* const rsi_53 = u"StencilDummy"
int32_t var_1f8_8 = data_1439c7b18
char var_240_10 = 0
int32_t var_1f4_8 = 1
int64_t var_1f0_8 = 1
int32_t var_1e8_8 = 1
int16_t var_1e0_8 = 1
char var_248_10 = 0
char var_250_10 = 1
wchar16 const* const var_1c8_8 = u"UnknownTexture2D"
int16_t var_1d0_8 = 0
var_208 = data_1439c7b08
int32_t var_1e4_8 = 0x10000
int32_t var_1dc_6 = 0x3c
int32_t var_1d8_7 = 0x200000
int32_t var_1d4_8 = 0x2000001
int16_t var_1bf_8 = 0
char var_1c0_8 = 0
sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0x90, StencilDummy", var_250_10, var_248_10, 
    var_240_10)
var_250_10.d = 0xffffffff
wchar16 const* const var_258_10
var_258_10.d = 0
sub_1414bfe70(&var_168, *(*(arg1 + 0x90) + 8), 9, 0, var_258_10.b, var_250_10)
int64_t r14_45 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_268 = r14_45 + 0x1a

if (rax_268 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x1c)
    r14_45 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_268 = r14_45 + 0x1a

*(arg2 + 0x30) = rax_268
wchar16 const i_8

do
    i_8 = *rsi_53
    *(r14_45 - u"StencilDummy" + rsi_53) = i_8
    rsi_53 = &rsi_53[1]
while (i_8 != 0)
void*** rcx_197 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_269 = &rcx_197[0x27]

if (rax_269 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_197 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_269 = &rcx_197[0x27]

*(arg2 + 0x30) = rax_269
void**** rax_270 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_270 = rcx_197
*(arg2 + 8) = &rcx_197[1]
sub_1405d11b0(rcx_197, &var_168, r14_45)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_168)
*(arg2 + 0x178) = var_58_6:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_141096650(arg2)
void* rax_273 = *(arg1 + 0x90)
int128_t zmm1_16 = data_142d3f800
int64_t rsi_55 = *(arg2 + 0x30) + 7
var_1b8 = data_142d57d10
void*** rsi_56 = rsi_55 & 0xfffffffffffffff8
int128_t zmm0_17 = data_142d57920
int128_t var_1a8_8 = zmm1_16
int64_t r12_1 = *(rax_273 + 0x10)
int64_t* r14_48 = *(rax_273 + 8)
void* rax_274 = &rsi_56[0xa]

if (rax_274 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rsi_56 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_274 = &rsi_56[0xa]

*(arg2 + 0x30) = rax_274
int64_t* rax_275 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_275 = rsi_56
*(arg2 + 8) = &rsi_56[1]
rsi_56[1] = 0
*rsi_56 = &data_142d56628
rsi_56[2].d = var_1b8.d
*(rsi_56 + 0x14) = var_1b8:4.d
rsi_56[3].d = var_1b8:8.d
*(rsi_56 + 0x1c) = var_1b8:0xc.d
__builtin_memset(&rsi_56[4], 0xff, 0x14)
*(rsi_56 + 0x34) = zmm0_17:4.d
rsi_56[7].d = zmm0_17:8.d
*(rsi_56 + 0x3c) = zmm0_17:0xc.d
rsi_56[8] = r14_48
rsi_56[9] = r12_1

if ((*(*r14_48 + 8))(r14_48) == 0)
    int64_t* rcx_205 = rsi_56[8]
    
    if ((*(*rcx_205 + 0x18))(rcx_205) == 0)
        int64_t* rcx_206 = rsi_56[8]
        
        if ((*(*rcx_206 + 0x20))(rcx_206) == 0)
            int64_t* rcx_207 = rsi_56[8]
            (*(*rcx_207 + 0x10))(rcx_207)

int64_t* rcx_208 = rsi_56[9]

if ((*(*rcx_208 + 8))(rcx_208) == 0)
    int64_t* rcx_209 = rsi_56[9]
    
    if ((*(*rcx_209 + 0x18))(rcx_209) == 0)
        int64_t* rcx_210 = rsi_56[9]
        
        if ((*(*rcx_210 + 0x20))(rcx_210) == 0)
            int64_t* rcx_211 = rsi_56[9]
            (*(*rcx_211 + 0x10))(rcx_211)

int64_t* rcx_212 = data_143f0f180
int16_t var_22f_1 = 0x100
int64_t var_22c_1 = 0
int32_t var_224_1 = 0
char* var_258_11 = &var_230
var_230 = *(*(*(arg1 + 0x90) + 0x10) + 0x3c)
(*(*rcx_212 + 0x5d0))(rcx_212, &var_238, &data_143f02b98)
sub_1405d1600(arg1 + 0xc8, &var_238)
sub_1405ec8a0(&var_238)
int64_t result = sub_1405d1550(&var_60)

if (data_143f0f1b5 == 0 && data_1439c8790 != 0)
    uint128_t zmm1_17 = data_142d3f640
    wchar16 const* const rsi_59 = u"MidGreyDummy"
    char var_240_11 = 0
    var_230.d = 1
    var_22c_1.o = zmm1_17
    int32_t var_1f4_9 = 1
    int128_t zmm0_18 = var_230.o
    int64_t var_1f0_9 = 1
    int32_t var_1e8_9 = 1
    int16_t var_1e0_9 = 1
    uint128_t temp0_2 = _mm_bsrli_si128(zmm1_17, 0xc)
    char var_248_11 = 0
    char var_250_11 = 1
    var_208 = zmm0_18
    int16_t var_1d0_9 = 0
    int32_t var_1f8_9 = temp0_2.d
    int32_t var_1e4_9 = 0x10000
    int32_t var_1dc_7 = 0xa
    int32_t var_1d8_8 = 0x200000
    int32_t var_1d4_9 = 0x2000009
    wchar16 const* const var_1c8_9 = u"UnknownTexture2D"
    int16_t var_1bf_9 = 0
    char var_1c0_9 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg1 + 0xa8, MidGreyDummy", var_250_11, 
        var_248_11, var_240_11)
    var_250_11.d = 0xffffffff
    wchar16 const* const var_258_12
    var_258_12.d = 0
    sub_1414bfe70(&var_168, *(*(arg1 + 0xa8) + 8), 9, 0, var_258_12.b, var_250_11)
    int64_t r14_51 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_301 = r14_51 + 0x1a
    
    if (rax_301 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x1c)
        r14_51 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_301 = r14_51 + 0x1a
    
    *(arg2 + 0x30) = rax_301
    wchar16 const i_9
    
    do
        i_9 = *rsi_59
        *(r14_51 - u"MidGreyDummy" + rsi_59) = i_9
        rsi_59 = &rsi_59[1]
    while (i_9 != 0)
    void*** rcx_222 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_302 = &rcx_222[0x27]
    
    if (rax_302 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_222 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_302 = &rcx_222[0x27]
    
    *(arg2 + 0x30) = rax_302
    void**** rax_303 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_303 = rcx_222
    *(arg2 + 8) = &rcx_222[1]
    sub_1405d11b0(rcx_222, &var_168, r14_51)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_168)
    *(arg2 + 0x178) = var_58_6:7.b
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    sub_141096650(arg2)
    void* rax_306 = *(arg1 + 0xa8)
    int128_t zmm1_18 = data_142d3f800
    int64_t rsi_61 = *(arg2 + 0x30) + 7
    var_1b8 = data_142d57d10
    void*** rsi_62 = rsi_61 & 0xfffffffffffffff8
    int128_t zmm0_19 = data_142d57920
    int128_t var_1a8_9 = zmm1_18
    int64_t r15_7 = *(rax_306 + 0x10)
    int64_t* r14_54 = *(rax_306 + 8)
    void* rax_307 = &rsi_62[0xa]
    
    if (rax_307 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rsi_62 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_307 = &rsi_62[0xa]
    
    *(arg2 + 0x30) = rax_307
    int64_t* rax_308 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_308 = rsi_62
    *(arg2 + 8) = &rsi_62[1]
    rsi_62[1] = 0
    *rsi_62 = &data_142d56628
    rsi_62[2].d = var_1b8.d
    *(rsi_62 + 0x14) = var_1b8:4.d
    rsi_62[3].d = var_1b8:8.d
    *(rsi_62 + 0x1c) = var_1b8:0xc.d
    __builtin_memset(&rsi_62[4], 0xff, 0x14)
    *(rsi_62 + 0x34) = zmm0_19:4.d
    rsi_62[7].d = zmm0_19:8.d
    *(rsi_62 + 0x3c) = zmm0_19:0xc.d
    rsi_62[8] = r14_54
    rsi_62[9] = r15_7
    
    if ((*(*r14_54 + 8))(r14_54) == 0)
        int64_t* rcx_230 = rsi_62[8]
        
        if ((*(*rcx_230 + 0x18))(rcx_230) == 0)
            int64_t* rcx_231 = rsi_62[8]
            
            if ((*(*rcx_231 + 0x20))(rcx_231) == 0)
                int64_t* rcx_232 = rsi_62[8]
                (*(*rcx_232 + 0x10))(rcx_232)
    
    int64_t* rcx_233 = rsi_62[9]
    
    if ((*(*rcx_233 + 8))(rcx_233) == 0)
        int64_t* rcx_234 = rsi_62[9]
        
        if ((*(*rcx_234 + 0x18))(rcx_234) == 0)
            int64_t* rcx_235 = rsi_62[9]
            
            if ((*(*rcx_235 + 0x20))(rcx_235) == 0)
                int64_t* rcx_236 = rsi_62[9]
                (*(*rcx_236 + 0x10))(rcx_236)
    
    result = sub_1405d1550(&var_60)

__security_check_cookie(rax_1 ^ &var_278)
return result
