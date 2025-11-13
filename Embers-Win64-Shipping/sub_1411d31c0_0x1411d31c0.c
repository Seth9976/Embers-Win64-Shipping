// 函数: sub_1411d31c0
// 地址: 0x1411d31c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint128_t zmm1 = data_142d3f670
int32_t r14 = 1
int32_t var_a8 = 1
int32_t var_58 = 1

if (arg7 != 0)
    r14 = 4

int16_t var_30 = 1
int16_t var_50 = 1
wchar16 const* const var_38 = u"UnknownTexture"
int32_t var_64 = *arg6
int64_t* rdx = *(arg2 + 8)
uint128_t var_a4 = zmm1
int32_t var_60 = arg6[1]
int128_t zmm0 = var_a8.o
int32_t var_5c = 0
uint128_t temp0 = _mm_bsrli_si128(zmm1, 0xc)
int32_t var_54 = 0x10000
int16_t var_40 = 0x100
char var_2e = 0
int64_t var_4c = 0xd
int32_t var_44 = 9
int128_t var_78 = zmm0
int32_t var_68 = temp0.d
int128_t* rax_4 = sub_14081d830(0xb0, rdx, 1, 0)
int128_t* rbx = rax_4

if (rax_4 == 0)
    rbx = rax_4
else
    __builtin_memset(rbx + 8, 0, 0x18)
    sub_14117af20(&rbx[2])

memset(rbx, 0, 0xb0)
sub_1411df5e0(arg2, rbx)
__builtin_memset(arg1, 0, 0x20)
void*** rax_5 = sub_141188e50(arg2, &var_78, u"HairViewTransmittanceTexture", 0)
var_a8.q = rax_5
var_a4:4.w = 2
var_a4:6.b = 0
var_a4:8.d = 0xffffffff
rbx[2] = var_a8.o
*arg1 = rax_5

if (arg7 != 0)
    var_a8 = 1
    var_a4 = zx.o(0)
    int128_t zmm0_1 = var_a8.o
    int32_t temp0_1 = _mm_bsrli_si128(zx.o(0), 0xc)
    var_78 = zmm0_1
    var_4c.d = 0x11
    int32_t var_68_1 = temp0_1
    void*** rax_6 = sub_141188e50(arg2, &var_78, u"HairViewHairCountTexture", 0)
    var_a8.q = rax_6
    var_a4:4.w = 2
    var_a4:6.b = 0
    var_a4:8.d = 0xffffffff
    rbx[3] = var_a8.o
    arg1[1] = rax_6

var_a8.q = arg8
var_a4:4.w = 1
var_a4:6.b = 0
var_a4:8.d = 1
int64_t var_90 = arg5
int128_t* var_c8 = &var_a8
rbx[0xa] = var_a8.o
var_a8.q = rbx
var_a4:4.q = arg3
var_a4:0xc.q = arg4
int32_t var_88 = r14
void var_b8
sub_1411b29a0(arg2, &var_b8, rbx, 1, var_c8)
__security_check_cookie(rax_1 ^ &var_e8)
return arg1
