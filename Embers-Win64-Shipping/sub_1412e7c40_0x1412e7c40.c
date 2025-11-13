// 函数: sub_1412e7c40
// 地址: 0x1412e7c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
char var_2a7
char* var_210 = &var_2a7
void*** (* var_218)() = j_sub_140597fc0
var_2a7 = 0
int64_t* rax_5 = sub_140a756e0(&var_218, &data_143958018) + 0x10
int64_t* var_288 = rax_5
int64_t rcx_1 = *rax_5
int64_t rcx_2 = rax_5[2]
char var_270 = 0
int64_t result_1 = rax_5[3]
rax_5[3] = &var_288
int64_t* rax_6 = var_288
rax_6[4].d += 1
sub_1423cc240(arg1)
int32_t rax_7 = arg2[0xb].d
int64_t r13

if (rax_7 == 2 || rax_7 == 8)
    r13.b = 0
else
    r13.b = 1

int64_t* var_2a0 = arg2[0x14]
char rax_9 = sub_1422eb710()
char rcx_5

if (sub_14128e090(data_143f0f1a0) == 0 || arg10 == 0)
    rcx_5 = 0
else
    rcx_5 = 1

char var_2a8
int64_t r15

if (rax_9 == 0)
    if (rcx_5 != 0)
        goto label_1412e7d64
    
    var_2a8 = 0
    r15.b = 0
else if (r13.b != 0 || rcx_5 == 0)
    var_2a8 = 0
    r15.b = 0
else
label_1412e7d64:
    var_2a8 = 1
    
    if (r13.b != 0)
        r15.b = 0
    else
        r15.b = 1

int64_t* r12 = arg2[5]
int64_t* var_290 = nullptr
wchar16 const* const var_2d8
char var_2d0
char var_2c0
void* var_298
int64_t* rax_17

if (r15.b != 0)
    void* rcx_7 = *(*(*r12 + 8))(r12)
    int128_t zmm6 = *(rcx_7 + 0x20)
    int32_t rbx_1 = *(rcx_7 + 0x30)
    int32_t rdi_1 = *(rcx_7 + 0x3c)
    void var_1f8
    void* rax_15 = *(*(*r12 + 0x18))(r12, &var_1f8)
    var_298 = rax_15
    int32_t var_1c4_1 = rax_15.d
    int32_t var_1c0_1 = var_298:4.d
    int32_t var_1ac_1 = rdi_1
    var_2c0 = 0
    int32_t var_1c8_1 = rbx_1
    wchar16 const* const var_198_1 = u"UnknownTexture2D"
    char var_2c8_1 = 1
    var_2d0 = 1
    var_2d8 = u"SceneCaptureFlipped"
    int16_t var_1a0_1 = 0
    int128_t var_1d8 = zmm6
    int32_t var_1bc_1 = 0
    int32_t var_1b8_1 = 1
    int32_t var_1b4_1 = 0x10000
    int16_t var_1b0_1 = 1
    int32_t var_1a8_1 = 0
    int32_t var_1a4_1 = 1
    int16_t var_190_1 = 1
    char var_18e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg1, &var_1d8, &var_290, var_2d8, var_2d0, var_2c8_1, var_2c0)
    rax_17 = var_290

void* const rax_19

if (r15.b == 0 || rax_17 == 0)
    rax_19 = nullptr
else
    int64_t* rcx_9 = rax_17[1]
    rax_19 = (*(*rcx_9 + 8))(rcx_9)

void* var_250 = nullptr
void** const var_258 = &data_142f52088
sub_1405d16e0(&var_250, rax_19)
int64_t* rbx_2 = var_2a0
int64_t* var_248 = r12
int128_t zmm0 = *(rbx_2 + 0x268)
int128_t var_208 = *(rbx_2 + 0x258)

if (r15.b != 0)
    int64_t* rax_21 = (*(*r12 + 8))(r12)
    int128_t zmm1_1 = data_142d3f5a0
    int64_t rcx_12 = *rax_21
    int64_t var_188 = rcx_12
    int32_t var_b0_1 = 0
    int32_t var_ac
    __builtin_memset(&var_ac, 0xff, 0x14)
    int128_t var_98_1 = zmm1_1
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x1a)
    int64_t var_180_1 = 0
    int32_t var_178_1 = 0xffffffff
    int16_t var_174_1 = 0x100
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x11)
    int32_t var_b4_1 = 0
    int16_t var_70
    var_70:1.b = *(rcx_12 + 0x38) u> 1
    void var_170
    memset(&var_170, 0, 0xa8)
    int128_t zmm6_2 = sub_1410e0180(arg1, &var_188)
    int64_t rbx_5 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_22 = rbx_5 + 0xc
    
    if (rax_22 u> *(arg1 + 0x38))
        zmm6_2 = sub_140b0e3d0(&arg1[0x30], 0xe)
        rbx_5 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_22 = rbx_5 + 0xc
    
    wchar16 const* const rcx_16 = u"Clear"
    *(arg1 + 0x30) = rax_22
    wchar16 const i
    
    do
        i = *rcx_16
        *(rcx_16 + rbx_5 - u"Clear") = i
        rcx_16 = &rcx_16[1]
    while (i != 0)
    void*** rcx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_23 = &rcx_19[0x27]
    
    if (rax_23 u> *(arg1 + 0x38))
        zmm6_2 = sub_140b0e3d0(&arg1[0x30], 0x140)
        rcx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_23 = &rcx_19[0x27]
    
    *(arg1 + 0x30) = rax_23
    void**** rax_24 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_24 = rcx_19
    *(arg1 + 8) = &rcx_19[1]
    sub_1405d11b0(rcx_19, &var_188, rbx_5)
    arg1[0x1c4] = 1
    sub_1405d19b0(arg1, &var_188)
    int64_t var_78
    arg1[0x178] = var_78:7.b
    arg1[0x179] = 0
    arg1[0x1c4] = 1
    void var_1f0
    int64_t* rax_28 = (*(*r12 + 0x18))(r12, &var_1f0)
    int128_t var_1e8 = zmm6_2
    var_2c0.d = 0
    var_2d0.d = 0
    var_2d8.b = 0
    arg5, arg6 = sub_14199cee0(arg1, 1, 1, &data_14399f5e0, var_2d8.b, var_2d0, 0, var_2c0, 
        *rax_28, &var_1e8)
    sub_141096650(arg1)
    int64_t var_80
    sub_1405d1550(&var_80)
    rbx_2 = var_2a0

data_143e8e8d0 = sub_1412653d0
data_143e8e9c0 = 2

if (r15.b != 0)
    arg2[5] = &var_258

(*(*arg2 + 8))(arg2, arg1)

if (r15.b != 0)
    arg2[5] = r12

var_2a0.d = zmm0:8.d - zmm0.d
var_2a0:4.d = zmm0:0xc.d - zmm0:4.d

if (r15.b != 0)
    void* rax_35 = var_250
    var_298 = rax_35
    
    if (rax_35 != 0)
        *(rax_35 + 8) += 1
        rax_35 = var_298
    
    var_2c0.q = arg2
    var_2d0.q = rax_35
    arg5, arg6 = sub_141263a50(arg1, r12, &var_2a0, rbx_2, &var_208, var_2d0, var_2a8, var_2c0)
    sub_1405d1550(&var_298)
else if (r13.b != 0)
    int64_t* rcx_33 = *sub_14139d700(&data_143ec4c60)
    var_2c0.q = arg2
    var_2d0.q = (*(*rcx_33 + 8))(rcx_33)
    arg5, arg6 = sub_141263a50(arg1, r12, &var_2a0, rbx_2, &var_208, var_2d0, var_2a8, var_2c0)

if (arg8 != 0)
    var_2d8.b = 0
    arg6 = sub_14199f740(arg1, *(*(*arg3 + 8))(arg3), arg9, nullptr, arg5, arg6)

int64_t r12_2 = *(arg4 + 0x10)
int64_t* rax_42 = (*(*arg3 + 8))(arg3)
void*** rbx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t* r15_1 = *rax_42
void* rax_43 = &rbx_11[0xa]

if (rax_43 u> *(arg1 + 0x38))
    sub_140b0e3d0(&arg1[0x30], 0x58)
    rbx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_43 = &rbx_11[0xa]

*(arg1 + 0x30) = rax_43
*(arg1 + 0x14) += 1
**(arg1 + 8) = rbx_11
*(arg1 + 8) = &rbx_11[1]
rbx_11[1] = 0
*rbx_11 = &data_142d56628
rbx_11[2].d = *arg7
*(rbx_11 + 0x14) = arg7[1]
rbx_11[3].d = arg7[2]
*(rbx_11 + 0x1c) = arg7[3]
rbx_11[4].d = arg7[4]
*(rbx_11 + 0x24) = arg7[5]
rbx_11[5].d = arg7[6]
*(rbx_11 + 0x2c) = arg7[7]
rbx_11[6].d = arg7[8]
*(rbx_11 + 0x34) = arg7[9]
rbx_11[7].d = arg7[0xa]
*(rbx_11 + 0x3c) = arg7[0xb]
rbx_11[8] = r15_1
rbx_11[9] = r12_2

if ((*(*r15_1 + 8))(r15_1) == 0)
    int64_t* rcx_42 = rbx_11[8]
    
    if ((*(*rcx_42 + 0x18))(rcx_42) == 0)
        int64_t* rcx_43 = rbx_11[8]
        
        if ((*(*rcx_43 + 0x20))(rcx_43) == 0)
            int64_t* rcx_44 = rbx_11[8]
            (*(*rcx_44 + 0x10))(rcx_44)

int64_t* rcx_45 = rbx_11[9]

if ((*(*rcx_45 + 8))(rcx_45) == 0)
    int64_t* rcx_46 = rbx_11[9]
    
    if ((*(*rcx_46 + 0x18))(rcx_46) == 0)
        int64_t* rcx_47 = rbx_11[9]
        
        if ((*(*rcx_47 + 0x20))(rcx_47) == 0)
            int64_t* rcx_48 = rbx_11[9]
            (*(*rcx_48 + 0x10))(rcx_48)

data_143e8e8d0 = 0
var_258 = &data_142f18c08
data_143e8e9c0 = 0
sub_1405d1550(&var_250)
int64_t* rcx_50 = var_290

if (rcx_50 != 0)
    (*(*rcx_50 + 0x38))(rcx_50)

int64_t result = sub_1414336b0(arg1, arg2, 1, arg6)

if (var_270 == 0)
    int64_t* rax_73 = var_288
    char var_270_1 = 1
    rax_73[4].d -= 1
    int64_t* rcx_52 = var_288
    
    if (rcx_2 != rcx_52[2])
        sub_140b16b40(rcx_52, rcx_2)
        rcx_52 = var_288
    
    *rcx_52 = rcx_1
    result = result_1
    var_288[3] = result

__security_check_cookie(rax_1 ^ &var_2f8)
return result
