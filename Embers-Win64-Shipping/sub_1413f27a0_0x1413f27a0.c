// 函数: sub_1413f27a0
// 地址: 0x1413f27a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x48)
int128_t var_a8
sub_14142a030(arg2, &var_a8)
int128_t var_e8
__builtin_memset(&var_e8, 0, 0x40)
sub_14142a1f0(&var_e8)
int32_t arg_40
int128_t zmm0
zmm0.d = 1f f/ arg_40
int32_t r15 = int.d(zmm0.d)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg3[0x2b4].d - arg3[0x2b3].d - 1 + r15)
int32_t arg_c = divs.dp.d(sx.q(*(arg3 + 0x15a4) - *(arg3 + 0x159c) - 1 + r15), r15)
int64_t* rcx_5 = *sub_14139d440(&data_143ec4c60)
int128_t* rax_12 = (*(*rcx_5 + 0x10))(rcx_5, (zx.o(0)).q)
int64_t zmm1 = (rax_12[3]).q
int128_t zmm2 = rax_12[1]
int128_t var_148 = *rax_12
int64_t var_118
var_118:4.d = zmm1:4.d | 0x10000
int128_t var_128 = rax_12[2]
var_128:0xc.d = 0xa
int128_t var_138 = zmm2
int128_t var_108 = rax_12[4]
var_118.d = zmm1.d & 0x7fefffff
var_138:4.d = divs.dp.d(sx.q((zmm2.q u>> 0x20).d), r15)
var_138:8.d = divs.dp.d(sx.q(var_138:8.d), r15)

if (*arg4 == 0)
    *arg4 = sub_141188e50(arg2, &var_148, u"RayTracingPrimaryRays", 0)

void** arg_28
void** r14 = arg_28
var_128:0xc.d = 0x15

if (*r14 == 0)
    *r14 = sub_141188e50(arg2, &var_148, u"RayTracingPrimaryRaysHitDistance", 0)

void*** rax_24
int32_t zmm6
rax_24, zmm6 = sub_14081d830(0x120, arg2[1], 1, 0)
void*** rbx = rax_24

if (rax_24 == 0)
    rbx = nullptr
else
    __builtin_memset(&rbx[7], 0, 0x38)
    __builtin_memset(&rbx[0xf], 0, 0xa0)

memset(rbx, 0, 0x120)
int32_t zmm1_1 = data_1439b6b44
int32_t r8 = data_1439b6b50
uint32_t rcx_9 = data_1439b6b5c
int32_t zmm3 = data_1439b6b60
zmm2 = data_1439b6b64
int32_t rdx_10 = data_1439b6b70
var_138:4.d = data_1439b6b4c
var_138:0xc.d = data_1439b6b58
*rbx = arg5
var_138.d = zmm1_1
uint32_t rax_29 = (var_138.q u>> 0x20).d
var_138:8.d = r8

if (rax_29 s<= 0xffffffff)
    rax_29 = *(arg3 + 0x12ec)

*(rbx + 4) = rax_29
rbx[1].d = arg6
*(rbx + 0xc) = (var_138:8.q u>> 0x20).d

if (rcx_9 s<= 0xffffffff)
    rcx_9 = zx.d(*(arg3 + 0x12f4))

rbx[5].d = zmm2.d
int32_t temp0_4 = _mm_min_ss(zmm2.d, zmm3)
rbx[2].d = rcx_9
*(rbx + 0x14) = r8
rbx[3].d = r15
*(rbx + 0x24) = temp0_4

if (not(zmm1_1 f>= 0f))
    zmm1_1 = arg3[0x25d].d

if (zmm1_1 f>= 0.00999999978f)
    zmm1_1 = _mm_min_ss(zmm1_1, zmm6)
else
    zmm1_1 = 0x3c23d70a

*(rbx + 0x2c) = zmm1_1

if (rdx_10 s< 0)
    rdx_10 = zx.d(*(arg3 + 0x12f5)) & 1

rbx[6].d = rdx_10
int32_t zmm0_1 = data_1439b6af0
*(rbx + 0x1c) = 1
int32_t temp0_6 = _mm_max_ss(zmm0_1, 0x3c23d70a)
rbx[4].d = arg7
*(rbx + 0x34) = temp0_6
rbx[7] = *(arg3[0xa3d] + 0x18)
sub_1405d16e0(&rbx[0xa], arg3[2])
sub_1405d16e0(&rbx[0xb], arg3[0xa45])
rbx[8] = arg3[0xa46]
*(rbx + 0x70) = var_a8
__builtin_memset(&rbx[0x10], 0, 0x40)
*(rbx + 0xc0) = var_e8
__builtin_memset(&rbx[0x1a], 0, 0x30)
rbx[0x20] = sub_1410fccd0(arg2, sub_14139d440(&data_143ec4c60), u"SceneColor", 0)
sub_1405d1600(&rbx[0xc], sub_1412238e0(&arg_28, arg3, 1))
sub_1405d1550(&arg_28)
sub_1405d1600(&rbx[0xd], sub_1411235a0(&arg_28, arg3, 1))
sub_1405d1550(&arg_28)
void*** r15_1 = *arg4
int64_t* rdx_19 = arg2[1]
void*** var_158 = r15_1
int16_t var_150 = 0
void*** rax_40 = sub_14081d830(0x28, rdx_19, 1, 0)

if (rax_40 != 0)
    int128_t zmm0_3 = var_158.o
    rax_40[1] = r15_1[1]
    rax_40[2] = 0
    *(rax_40 + 0x18) = zmm0_3
    *rax_40 = &data_142f285c0

rbx[0x21] = rax_40
void*** r14_1 = *r14
int64_t* rdx_20 = arg2[1]
var_158 = r14_1
int16_t var_150_1 = 0
void*** rax_41 = sub_14081d830(0x28, rdx_20, 1, 0)

if (rax_41 != 0)
    int128_t zmm0_4 = var_158.o
    rax_41[1] = r14_1[1]
    rax_41[2] = 0
    *(rax_41 + 0x18) = zmm0_4
    *rax_41 = &data_142f285c0

rbx[0x22] = rax_41
void*** rax_42
int32_t r9
int512_t zmm6_1
rax_42, r9, zmm6_1 = sub_1410fccd0(arg2, &arg3[0xa42], u"External", 0)
rbx[9] = rax_42
int32_t rax_43 = sub_1422e5a30(arg3)
int64_t rax_44

if (data_143f0f220 != 0 && *(data_143ec8340 + 4) != 0)
    rax_44 = sx.q(rax_43)

int32_t rdx_22

if (data_143f0f220 == 0 || *(data_143ec8340 + 4) == 0
        || ((*(&data_143f025fc + rax_44 * 0x14) u>> 0x14).b & 1) == 0)
    rdx_22 = 0
else
    rdx_22 = 4

char rcx_28 = sub_1419a2ec0(arg3[0xa2a], &var_158, &data_143ec8880, 
    (sbb.d(r9, r9, *(data_143ec8e58 + 4) != 0) & 2) + rdx_22)
int128_t zmm7 = var_158.o
zmm6_1.o = zx.o(0)
int128_t var_f8 = sub_1413eadf0(rcx_28)
sub_141998c50(zmm7.q, &data_143ecc180, rbx)
var_148.q = rbx
var_148:8.q = arg1
var_138.q = arg3
var_128:8.q = divs.dp.d(temp2:temp3, r15).q
void*** rax_49
char rcx_30
rax_49, rcx_30 = sub_14081d830(0x68, arg2[1], 1, 0)
void*** rdi_1 = rax_49

if (rax_49 == 0)
    rdi_1 = nullptr
else
    var_158 = rbx
    sub_1413eadf0(rcx_30)
    var_150_1.q = &data_143ecc1b0
    var_f8 = var_158.o
    sub_141992bd0(rdi_1, &arg_40, &var_f8, 2)
    int128_t zmm0_6 = var_148
    *rdi_1 = &data_142f78ec8
    *(rdi_1 + 0x38) = zmm0_6
    *(rdi_1 + 0x48) = zmm7
    *(rdi_1 + 0x58) = var_128

return sub_1419968d0(arg2, rdi_1)
