// 函数: sub_1413a4690
// 地址: 0x1413a4690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t r10 = data_143f02318
int16_t var_90 = 0
int64_t rax_3 = *(*(arg4 + 8) + 0x44)
int32_t var_b4 = rax_3.d
int32_t var_b0 = rax_3:4.d
int128_t var_c8 = data_143f02308
wchar16 const* const var_88 = u"UnknownTexture2D"
int32_t var_b8 = r10
int32_t var_ac = 0
int32_t var_a8 = 1
int32_t var_a4 = 0x10000
int16_t var_a0 = 1
int64_t var_9c = 0x15
int32_t var_94 = 0x10009
int16_t var_80 = 1
char var_7e = 0
void*** var_78 = sub_141188e50(arg2, &var_c8, u"RayTracingAmbientOcclusion", 0)
void*** rax_6 = sub_141188e50(arg2, &var_c8, u"RayTracingAmbientOcclusionHitDistance", 0)
int32_t rax_7 = data_1439b69fc
int64_t var_d8
var_d8.d = 0x3f800000

if (rax_7 s< 0)
    rax_7 = *(arg3 + 0x121c)

int64_t* rdx_2 = arg2[1]
var_d8:4.d = _mm_cvtepi32_ps(zx.o(rax_7)).d
int32_t* rax_8
float zmm6_1
rax_8, zmm6_1 = sub_14081d830(0x80, rdx_2, 1, 0)
int32_t* rsi = rax_8

if (rax_8 == 0)
    rsi = nullptr
else
    __builtin_memset(&rax_8[4], 0, 0x20)
    __builtin_memset(&rax_8[0xe], 0, 0x48)

memset(&rsi[1], 0, 0x7c)
*rsi = int.d(zmm6_1)
rsi[1] = *(arg3 + 0x11ec)
rsi[2] = *(arg3 + 0x11e4)
rsi[3] = sub_1413e95d0()
int16_t var_e0 = 0
*(rsi + 0x10) = *(*(arg3 + 0x51e8) + 0x18)
void*** rbx = var_78
int64_t* rdx_3 = arg2[1]
void*** var_e8 = rbx
void*** rax_13 = sub_14081d830(0x28, rdx_3, 1, 0)

if (rax_13 == 0)
    rax_13 = nullptr
else
    int128_t zmm0_2 = var_e8.o
    rax_13[1] = rbx[1]
    rax_13[2] = 0
    *(rax_13 + 0x18) = zmm0_2
    *rax_13 = &data_142f285c0

*(rsi + 0x18) = rax_13
int64_t* rdx_4 = arg2[1]
var_e8 = rax_6
int16_t var_e0_1 = 0
void*** rax_14 = sub_14081d830(0x28, rdx_4, 1, 0)

if (rax_14 == 0)
    rax_14 = nullptr
else
    int128_t zmm0_3 = var_e8.o
    rax_14[1] = rax_6[1]
    *rax_14 = &data_142f285c0
    rax_14[2] = 0
    *(rax_14 + 0x18) = zmm0_3

*(rsi + 0x20) = rax_14
int32_t r9
int512_t zmm6_2
r9, zmm6_2 = sub_1405d16e0(&rsi[0xa], *(arg3 + 0x10))
*(rsi + 0x30) = *arg4
*(rsi + 0x40) = arg4[1]
*(rsi + 0x50) = arg4[2]
*(rsi + 0x60) = arg4[3]
*(rsi + 0x70) = arg4[4]
int32_t rcx_8
rcx_8.b = *(data_143ec5148 + 4) != 0
char rcx_10 = sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x3b0))]), &var_e8, 
    &data_143ec5330, (sbb.d(r9, r9, *(data_143ec51f8 + 4) != 0) & 2) + rcx_8)
int128_t zmm7 = var_e8.o
zmm6_2.o = zx.o(0)
int128_t var_68 = sub_14139e490(rcx_10)
sub_141998c50(zmm7.q, &data_143ec7170, rsi)
var_e8.d = *(arg3 + 0x15a0) - *(arg3 + 0x1598)
var_e8:4.d = *(arg3 + 0x15a4) - *(arg3 + 0x159c)
var_a0.q = var_e8
var_c8.q = rsi
var_c8:8.q = arg1
var_b8.q = arg3
var_b0.o = zmm7
void*** rax_24
char rcx_12
rax_24, rcx_12 = sub_14081d830(0x68, arg2[1], 1, 0)
void*** rbx_4 = rax_24

if (rax_24 == 0)
    rbx_4 = nullptr
else
    var_e8 = rsi
    sub_14139e490(rcx_12)
    var_e0_1.q = &data_143ec71a0
    var_68 = var_e8.o
    void var_f8
    sub_141992bd0(rbx_4, &var_f8, &var_68, 2)
    int128_t zmm0_6 = var_c8
    *rbx_4 = &data_142f6e180
    *(rbx_4 + 0x38) = zmm0_6
    *(rbx_4 + 0x48) = var_b8.o
    *(rbx_4 + 0x58) = var_a8.o

sub_1419968d0(arg2, rbx_4)
int32_t rbx_5 = *(data_143ec5098 + 4)
void**** result

if (rbx_5 == 0)
    result = arg5
    *result = var_78
else
    __builtin_memset(&var_c8:8, 0, 0x48)
    sub_14142a030(arg2, &var_c8)
    int64_t* rax_26 = sub_141455400()
    int64_t* rcx_16 = data_143ed5ae0
    
    if (rbx_5 == 1)
        rcx_16 = rax_26
    
    (*(*rcx_16 + 0x30))(rcx_16, &var_68, arg2, arg3, arg3 + 0x4990, &var_c8, &var_78, var_d8)
    result = var_68.q
    *arg5 = result

__security_check_cookie(rax_1 ^ &var_138)
return result
