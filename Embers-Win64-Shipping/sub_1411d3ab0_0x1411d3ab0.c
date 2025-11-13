// 函数: sub_1411d3ab0
// 地址: 0x1411d3ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_d0 = 0
int16_t rbx = 8
int32_t var_c8 = 0

if (data_1439b60cc s<= 4)
    rbx = 4

int32_t var_c0 = arg6[1]
int32_t var_b4 = 0x10000
int16_t var_a0 = 0x100
char var_8e = 0
wchar16 const* const var_98 = u"UnknownTexture"
int128_t* var_d8
int64_t* rdx_1 = &var_d8
int32_t var_c4 = *arg6
int16_t var_b0 = rbx
int32_t var_a4 = 9
var_d8 = 1
int32_t var_b8 = 1
int16_t var_90 = 1
int32_t var_bc = 0
void var_e8
int128_t* r8_1
char r9

if (arg1 == 0)
    int64_t var_ac_1 = 0x44
    void*** rax_8 = sub_141188e50(arg2, rdx_1, u"HairVisibilityIDTexture", 0)
    var_d8.d = 1
    var_d8:4.o = zx.o(0)
    int128_t zmm0_1 = var_d8.o
    *arg7 = rax_8
    wchar16 const* const var_48_1 = u"UnknownTexture"
    int32_t var_74_1 = *arg6
    int32_t rax_10 = arg6[1]
    int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
    int32_t var_70_1 = rax_10
    int32_t var_68_1 = 1
    int32_t var_64_1 = 0x10000
    int16_t var_50_1 = 0x100
    int16_t var_40_1 = 1
    char var_3e_1 = 0
    int32_t var_6c_1 = 0
    int64_t var_5c_1 = 0x25
    int16_t var_60_1 = rbx
    int32_t var_54_1 = 9
    int128_t var_88 = zmm0_1
    int32_t var_78_1 = temp0_1
    void*** rax_11 = sub_141188e50(arg2, &var_88, u"HairVisibilityMaterialTexture", 0)
    var_d8.d = 1
    var_d8:4.o = zx.o(0)
    int128_t zmm0_2 = var_d8.o
    *arg8 = rax_11
    wchar16 const* const var_48_2 = u"UnknownTexture"
    int32_t var_74_2 = *arg6
    int32_t rax_13 = arg6[1]
    int32_t temp0_2 = _mm_bsrli_si128(zx.o(0), 0xc)
    int32_t var_70_2 = rax_13
    int32_t var_68_2 = 1
    int32_t var_64_2 = 0x10000
    int16_t var_50_2 = 0x100
    int16_t var_40_2 = 1
    char var_3e_2 = 0
    int32_t var_6c_2 = 0
    int64_t var_5c_2 = 0x25
    int16_t var_60_2 = rbx
    int32_t var_54_2 = 9
    var_88 = zmm0_2
    int32_t var_78_2 = temp0_2
    void*** rax_14 = sub_141188e50(arg2, &var_88, u"HairVisibilityAttributeTexture", 0)
    var_d8.d = 1
    var_d8:4.o = zx.o(0)
    int32_t var_68_3 = 1
    int128_t zmm0_3 = var_d8.o
    *arg9 = rax_14
    wchar16 const* const var_48_3 = u"UnknownTexture"
    int32_t var_74_3 = *arg6
    int32_t var_70_3 = arg6[1]
    int32_t var_64_3 = 0x10000
    int16_t var_50_3 = 0x100
    int16_t var_40_3 = 1
    char var_3e_3 = 0
    int32_t var_6c_3 = 0
    int64_t var_5c_3 = 0xe
    int16_t var_60_3 = rbx
    int32_t var_54_3 = 9
    int32_t var_78_3 = _mm_bsrli_si128(zx.o(0), 0xc)
    var_88 = zmm0_3
    *arg10 = sub_141188e50(arg2, &var_88, u"HairVisibilityVelocityTexture", 0)
    sub_1411cf3e0(arg2, &var_e8, arg4, 0xffffffff, arg7)
    int32_t* r15
    r15.b = 0
    
    if (data_143e7595c != 0)
        r15.b = 1
        sub_1411cf3e0(arg2, &var_e8, arg4, 0, arg8)
        sub_1411cf3e0(arg2, &var_e8, arg4, 0, arg9)
        sub_1411cf3e0(arg2, &var_e8, arg4, 0, arg10)
    
    int128_t* rax_21 = sub_1411b2c40(arg2)
    sub_1411df5e0(arg2, rax_21)
    r9 = 1
    var_d0.w = 1
    r8_1 = rax_21
    var_d0:2.b = 0
    var_d0:4.d = 0xffffffff
    var_d8 = *arg7
    rax_21[2] = var_d8.o
    var_d8 = *arg8
    var_d0.b = r15.b
    var_d0:1.w = 0
    var_d0:4.d = 0xffffffff
    rax_21[3] = var_d8.o
    var_d8 = *arg9
    var_d0.b = r15.b
    var_d0:1.w = 0
    var_d0:4.d = 0xffffffff
    rax_21[4] = var_d8.o
    var_d8 = *arg10
    var_d0:1.w = 0
    var_d0.b = r15.b
    var_d0:4.d = 0xffffffff
    rax_21[5] = var_d8.o
    var_d8 = *arg11
    var_d0.w = 1
    var_d0:2.b = 0
    var_d0:4.d = 2
    rax_21[0xa] = var_d8.o
    var_d8 = rax_21
    int32_t var_b8_2 = 0
else
    int64_t var_ac = 0x1c
    int64_t* var_f8 = arg7
    *arg7 = sub_141188e50(arg2, rdx_1, u"HairVisibilityIDTexture", 0)
    *arg8 = 0
    *arg9 = 0
    *arg10 = 0
    sub_1411cf3e0(arg2, &var_e8, arg4, 0xffffffff, var_f8)
    int128_t* rax_7 = sub_1411b2c40(arg2)
    sub_1411df5e0(arg2, rax_7)
    r9 = 1
    var_d8 = *arg7
    r8_1 = rax_7
    var_d0.w = 1
    var_d0:2.b = 0
    var_d0:4.d = 0xffffffff
    rax_7[2] = var_d8.o
    var_d8 = *arg11
    var_d0.w = 1
    var_d0:2.b = 0
    var_d0:4.d = 2
    rax_7[0xa] = var_d8.o
    var_d8 = rax_7
    int32_t var_b8_1 = 3

var_c0.q = arg5
int64_t var_d0_1 = arg3
var_c8.q = arg4
int64_t result = sub_1411b29a0(arg2, &var_e8, r8_1, r9, &var_d8)
__security_check_cookie(rax_1 ^ &var_118)
return result
