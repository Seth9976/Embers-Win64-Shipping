// 函数: sub_141304460
// 地址: 0x141304460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
void* rax = *arg5
uint128_t zmm1 = *(rax + 0x40)
uint128_t var_c8 = *(rax + 0x30)
uint128_t var_b8 = zmm1
uint128_t var_a8 = *(rax + 0x50)
var_a8:8.w = 1
uint128_t var_88 = *(rax + 0x70)
uint128_t var_98
var_98:8.w = 0
var_98:4.d = ((*(rax + 0x60)):4.d & 0xfffeffff) | 1
var_88.q = u"EyeAdaptationBasicSetup"
var_98.d |= data_143ed339c
var_88:8.b = 1
var_a8:0xc.d = 0xa
void*** rax_5 = sub_141188e50(arg2, &var_c8, u"BasicEyeAdaptationSetup", 0)
uint128_t zmm1_1 = *arg5
uint64_t var_58 = arg5[2]
void* rdx_1 = zmm1_1.q
int64_t rax_6 = _mm_bsrli_si128(zmm1_1, 8).q
uint128_t temp0_1 = _mm_bsrli_si128(zmm1_1, 8)
int32_t rcx_1 = *(rdx_1 + 0x44)
uint32_t var_dc = (rax_6 u>> 0x20).d
int32_t var_e4 = *(rdx_1 + 0x48)
uint32_t var_d4 = (var_58 u>> 0x20).d
int32_t var_e0 = temp0_1.d
int128_t* rax_11
int512_t zmm6
rax_11, zmm6 = sub_14081d830(0x100, *(arg2 + 8), 1, 0)
int128_t* rdi = rax_11

if (rax_11 == 0)
    rdi = nullptr
else
    __builtin_memset(&rax_11[5], 0, 0x20)
    sub_14117af20(&rax_11[7])

memset(rdi, 0, 0x100)
*rdi = *arg4
int128_t* var_f8 = rax_5
rdi[1] = arg4[1]
rdi[2] = arg4[2]
rdi[3] = arg4[3]
rdi[4] = arg4[4]
void* rbx_1 = arg_18
rdi[5] = arg4[5]
rdi[6].q = *arg5
*(rdi + 0x68) = data_14395fa10
char var_f0 = sub_14141f7a0(rbx_1)
int16_t var_ef = 0
int32_t var_ec = 0xffffffff
rdi[7] = var_f8.o
char rcx_7 = sub_1419a2ec0(*(rbx_1 + 0x5150), &var_f8, &data_143eb4250, 0)
int128_t zmm7 = var_f8.o
zmm6.o = zx.o(0)
int128_t var_68 = sub_141316120(rcx_7)
sub_141998c50(zmm7.q, &data_143eb83a0, rdi)
int64_t zmm0_3 = var_58.d.q
int64_t* rdx_4 = *(arg2 + 8)
var_c8.q = rbx_1
var_b8:8.q = zmm0_3
var_c8 = rcx_1.o
var_88:8.q = rdi
var_98.q = zmm0_3
char var_78 = 2
void*** rax_15
char rcx_9
rax_15, rcx_9 = sub_14081d830(0x90, rdx_4, 1, 0)
void*** rbx_2 = rax_15

if (rax_15 == 0)
    rbx_2 = nullptr
else
    var_f8 = rdi
    int128_t zmm6_2 = sub_141316120(rcx_9)
    var_f0.q = &data_143eb83d0
    var_68 = var_f8.o
    sub_141992bd0(rbx_2, &arg_18, &var_68, 1)
    uint128_t zmm0_5 = var_c8
    *rbx_2 = &data_142f5cc40
    *(rbx_2 + 0x38) = zmm0_5
    *(rbx_2 + 0x48) = var_b8
    *(rbx_2 + 0x58) = zmm6_2
    *(rbx_2 + 0x68) = zmm7
    *(rbx_2 + 0x78) = var_88
    rbx_2[0x11] = var_78.q

sub_1419968d0(arg2, rbx_2)
int128_t zmm0_6 = *(arg5 + 8)
*arg1 = rax_5
*(arg1 + 8) = zmm0_6
return arg1
