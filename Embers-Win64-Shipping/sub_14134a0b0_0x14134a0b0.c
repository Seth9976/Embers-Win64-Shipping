// 函数: sub_14134a0b0
// 地址: 0x14134a0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
char rbx = *(arg2 + 0x515a)
uint128_t zmm2 = *(data_143ebaa98 + 4)
uint128_t zmm1
zmm1.d = zmm2.d f* 0.25f
int32_t var_b8 = zmm1.d
zmm1.d = zmm2.d f* 0.125f
void* r8 = *(arg2 + 0x15a8)
int32_t var_b0 = zmm1.d
zmm1 = zx.o(arg3[1].d - *(arg3 + 8))
uint128_t zmm4 = zx.o(*(arg3 + 0x14) - *(arg3 + 0xc))
uint128_t var_c8 = data_142f64de0
uint128_t zmm0 = zmm2
zmm2.d = zmm2.d f* 0.0625f
zmm0.d = zmm0.d f* 0.166666672f
int32_t var_ac = zmm2.d
zmm1 = _mm_cvtepi32_ps(zmm1)
int32_t var_b4 = zmm0.d
uint128_t var_a8 = data_142d3f670
zmm4 = _mm_cvtepi32_ps(zmm4)
uint128_t zmm3

if (r8 == 0)
    zmm3 = 0x3f800000
else
    zmm3 = *(r8 + 0x1ac)

zmm3.d = zmm3.d f* *(arg2 + 0x1284)
int32_t var_258 = arg3[7].d
zmm2.d = zmm1.d f* *(&var_c8 + ((zx.q(arg8) + (zx.q(arg7) << 2)) << 2))
uint128_t var_278 = arg3[5]
int32_t var_254 = *(arg3 + 0x74)
zmm2.d = zmm2.d f* 0.5f
uint128_t var_268 = arg3[6]
int32_t var_250 = *(arg3 + 0x78)
uint128_t var_248 = arg3[8]
int32_t var_24c = *(arg3 + 0x7c)
uint128_t var_238 = arg3[9]
int32_t var_1e8 = arg3[0xe].d
uint128_t var_228 = arg3[0xa]
int32_t var_1e4 = *(arg3 + 0xe4)
uint128_t var_218 = arg3[0xb]
int32_t var_1e0 = *(arg3 + 0xe8)
uint128_t var_208 = arg3[0xc]
int32_t var_1dc = *(arg3 + 0xec)
uint128_t var_1f8 = arg3[0xd]
int32_t var_178 = arg3[0x15].d
uint128_t var_1d8 = arg3[0xf]
int32_t var_174 = *(arg3 + 0x154)
uint128_t var_1c8 = arg3[0x10]
int32_t var_170 = *(arg3 + 0x158)
uint128_t var_1b8 = arg3[0x11]
int32_t var_16c = *(arg3 + 0x15c)
zmm4.d = zmm4.d f/ zmm1.d
uint128_t var_1a8 = arg3[0x12]
zmm1.d = zmm3.d f* 0.5f
zmm3.d = zmm3.d f* 0.03125f
uint128_t var_198 = arg3[0x13]
zmm1.d = zmm1.d f* zmm2.d
uint128_t var_188 = arg3[0x14]
zmm0 = arg3[0x16]
zmm3.d = zmm3.d f* zmm2.d
zmm2.d = __andps_xmmxud_memxud(zmm2, data_142d3f770).d f* *(arg2 + 0x1288)
uint128_t var_168 = zmm0
zmm2.d = zmm2.d f* 0.00999999978f
uint128_t var_158 = arg3[0x17]
uint128_t var_148 = arg3[0x18]
zmm0 = arg3[0x19]
int32_t var_288 = zmm4.d
uint128_t var_138 = zmm0
int32_t var_284 = zmm1.d
uint128_t var_128 = arg3[0x1a]
int32_t var_280 = zmm3.d
int32_t var_27c = zmm2.d
int64_t rax_18 = data_14395fa10
int64_t var_f0 = rax_18
int64_t var_e8 = rax_18
int64_t var_e0 = rax_18
int64_t var_d8 = rax_18
int32_t rcx_2 = 1
uint128_t var_118 = arg3[0x1b]
zmm1 = *(arg4 + 0x40)
void* var_108 = arg4
var_c8 = *(arg4 + 0x30)
int64_t var_100 = arg5
var_b8.o = zmm1
int64_t var_f8 = arg6
int64_t var_a8_1 = (*(arg4 + 0x50)).q
var_a8_1:8.w = 1

if (rbx != 0)
    rcx_2 = 0x10000

uint128_t var_88 = *(arg4 + 0x70)
uint128_t var_98
var_98:8.w = 0
var_98.d |= data_143ed33b0
var_98:4.d = rcx_2 | ((*(arg4 + 0x60)):4.d & 0xfffefffe)
var_88:8.b = 0
int32_t rcx_4
rcx_4.b = sub_1413197f0() != 0
var_a8_1:0xc.d = rcx_4 + 9
void*** result = sub_141188e50(arg1, &var_c8, u"MotionBlur", 0)
int64_t* rdx_3 = *(arg1 + 8)
void*** rdi_1
void var_2c8
int128_t var_2a8
int128_t var_298
int128_t zmm7

if (rbx == 0)
    int128_t* rax_38
    int512_t zmm6_2
    rax_38, zmm6_2 = sub_14081d830(0x250, rdx_3, 1, 0)
    int128_t* rbx_2 = rax_38
    
    if (rax_38 == 0)
        rbx_2 = nullptr
    else
        __builtin_memset(&rax_38[0x18], 0, 0x38)
        sub_14117af20(&rax_38[0x1c])
    
    memset(rbx_2, 0, 0x250)
    sub_141346970(rbx_2, &var_288)
    char var_2b0_1 = sub_14141f7a0(arg2)
    int16_t var_2af_1 = 0
    int32_t var_2ac_1 = 0xffffffff
    rbx_2[0x1c] = result.o
    char rcx_20 = sub_1419a2ec0(*(arg2 + 0x5150), &var_2a8, &data_143ebcb70, arg8)
    zmm7 = var_2a8
    zmm6_2.o = zx.o(0)
    var_298 = sub_141359480(rcx_20)
    sub_141998c50(zmm7.q, &data_143ec0ed0, rbx_2)
    int64_t* rdx_15 = *(arg1 + 8)
    int64_t zmm1_2 = arg3[1].q
    var_c8.q = arg2
    var_c8 = *arg3
    var_88:8.q = rbx_2
    var_b0.q = zmm1_2
    var_98.q = zmm1_2
    char var_78_1 = 2
    void*** rax_40
    char rcx_22
    rax_40, rcx_22 = sub_14081d830(0x90, rdx_15, 1, 0)
    rdi_1 = rax_40
    
    if (rax_40 == 0)
        rdi_1 = nullptr
    else
        int128_t zmm6_4 = sub_141359480(rcx_22)
        var_2b0_1.q = &data_143ec0f00
        var_2a8 = rbx_2.o
        sub_141992bd0(rdi_1, &var_2c8, &var_2a8, 1)
        uint128_t zmm0_8 = var_c8
        *rdi_1 = &data_142f64ca0
        *(rdi_1 + 0x38) = zmm0_8
        *(rdi_1 + 0x48) = var_b8.o
        *(rdi_1 + 0x58) = zmm6_4
        *(rdi_1 + 0x68) = zmm7
        *(rdi_1 + 0x78) = var_88
        rdi_1[0x11] = var_78_1.q
else
    int128_t* rax_23 = sub_14081d830(0x1d0, rdx_3, 1, 0)
    int128_t* rbx_1 = rax_23
    
    if (rax_23 == 0)
        rbx_1 = nullptr
    else
        __builtin_memset(&rax_23[0x18], 0, 0x38)
        rax_23[0x1c].q = 0
    
    memset(rbx_1, 0, 0x1d0)
    sub_141346970(rbx_1, &var_288)
    char var_2b0
    var_2b0.w = 0
    void*** rax_24
    int512_t zmm6
    rax_24, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
    
    if (rax_24 == 0)
        rax_24 = nullptr
    else
        rax_24[1] = result[1]
        *rax_24 = &data_142f285c0
        rax_24[2] = 0
        *(rax_24 + 0x18) = result.o
    
    rbx_1[0x1c].q = rax_24
    char rcx_11 = sub_1419a2ec0(*(arg2 + 0x5150), &var_298, &data_143ebcc70, arg8)
    zmm6.o = zx.o(0)
    zmm7 = var_298
    int32_t temp0_3
    int32_t temp1_1
    temp0_3:temp1_1 = sx.q(arg3[1].d - *(arg3 + 8) + 7)
    void*** var_2b8
    var_2b8.d = (temp1_1 + (temp0_3 & 7)) s>> 3
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(*(arg3 + 0x14) - *(arg3 + 0xc) + 7)
    var_2b8:4.d = (temp3_1 + (temp2_1 & 7)) s>> 3
    var_2a8 = sub_141359310(rcx_11)
    sub_141998c50(zmm7.q, &data_143ec0fe0, rbx_1)
    int64_t* rdx_11 = *(arg1 + 8)
    var_c8.q = rbx_1
    var_c8 = zmm7
    var_a8_1.d = 1
    var_b0.q = var_2b8
    void*** rax_37
    char rcx_13
    rax_37, rcx_13 = sub_14081d830(0x60, rdx_11, 1, 0)
    rdi_1 = rax_37
    
    if (rax_37 == 0)
        rdi_1 = nullptr
    else
        sub_141359310(rcx_13)
        var_2b0.q = &data_143ec1010
        var_2a8 = rbx_1.o
        sub_141992bd0(rdi_1, &var_2c8, &var_2a8, 2)
        uint128_t zmm0_4 = var_c8
        *rdi_1 = &data_142f64c90
        *(rdi_1 + 0x38) = zmm0_4
        *(rdi_1 + 0x48) = var_b8.o
        rdi_1[0xb] = var_a8_1
sub_1419968d0(arg1, rdi_1)
__security_check_cookie(rax_1 ^ &var_2e8)
return result
