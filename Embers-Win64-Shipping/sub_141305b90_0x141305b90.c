// 函数: sub_141305b90
// 地址: 0x141305b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = *arg4
void*** r15 = zmm6.q
uint128_t var_f8 = zmm6
int72_t var_e8 = arg4[1].9
uint64_t var_108
uint128_t var_d8
uint128_t var_b8
int128_t var_a8
uint64_t r12

if (r15 == 0)
label_141305c3e:
    var_108 = arg4[3].q
    void* rax_4 = arg4[2].q
    int128_t zmm1 = *(rax_4 + 0x40)
    var_d8 = *(rax_4 + 0x30)
    int128_t var_c8_1 = zmm1
    var_b8 = *(rax_4 + 0x50)
    var_b8:8.w = 1
    int64_t* var_98 = (*(rax_4 + 0x70)).q
    var_a8:8.w = 0
    var_a8:4.d = ((*(rax_4 + 0x60)):4.d & 0xfffeffff) | 1
    var_98:8.b = 1
    void*** rax_8
    uint128_t zmm6_1
    rax_8, zmm6_1 = sub_141188e50(arg2, &var_d8, u"HMD Distortion", 0)
    var_f8.q = rax_8
    r15 = rax_8
    r12.b = 2
    var_f8:0xc.d = (_mm_bsrli_si128(zmm6_1, 8).q u>> 0x20).d
    var_e8.d = var_108.d
    var_f8:8.d = _mm_bsrli_si128(zmm6_1, 8).d
    var_e8:4.d = (var_108 u>> 0x20).d
else if (var_e8.d != _mm_bsrli_si128(zmm6, 8).d)
    r12 = zx.q(var_e8:8.b)
else
    if ((var_e8.q u>> 0x20).d == (_mm_bsrli_si128(zmm6, 8).q u>> 0x20).d)
        goto label_141305c3e
    
    r12 = zx.q(var_e8:8.b)

int64_t* rax_9 = sub_14081d830(0xb0, arg2[1], 1, 0)
int64_t* rdi = rax_9

if (rax_9 == 0)
    rdi = nullptr
else
    *rax_9 = 0
    rax_9[1] = 0
    sub_14117af20(&rax_9[4])

memset(rdi, 0, 0xb0)
int64_t* var_118 = r15
char var_110 = r12.b
int16_t var_10f = 0
int32_t var_10c = 0xffffffff
*(rdi + 0x20) = var_118.o
*rdi = arg4[2].q
rdi[1] = data_1439b5bb0
int64_t* rcx_10 = *(data_143f5b298 + 0xb08)
int64_t* rax_14 = (*(*rcx_10 + 0x100))(rcx_10)
sub_141385550(&var_d8, *arg2, arg3)
int64_t arg_8
int64_t arg_10
(*(*rax_14 + 0x78))(rax_14, &var_d8, &arg_8, &arg_10, var_118, var_110, var_108)
int64_t zmm1_1 = arg_10
rdi[2] = arg_8
rdi[3] = zmm1_1
sub_141386800(&var_d8)
sub_1419a2ec0(*(arg3 + 0x5150), &var_118, &data_143eb4d60, 0)
int128_t zmm7 = var_118.o
sub_1419a2ec0(*(arg3 + 0x5150), &var_118, &data_143eb4c60, 0)
int128_t zmm8 = var_118.o
var_b8.q = rdi
var_a8:8.q = arg3
void*** rax_15
char rcx_16
rax_15, rcx_16 = sub_14081d830(0x80, arg2[1], 1, 0)
void*** rbx_2 = rax_15

if (rax_15 == 0)
    rbx_2 = nullptr
else
    var_118 = rdi
    sub_141315cd0(rcx_16)
    var_110.q = &data_143eb8fe0
    var_118.o = var_118.o
    sub_141992bd0(rbx_2, &arg_8, &var_118, 1)
    *rbx_2 = &data_142f5caf0
    *(rbx_2 + 0x38) = zmm7
    *(rbx_2 + 0x48) = zmm8
    *(rbx_2 + 0x58) = var_f8
    *(rbx_2 + 0x68) = var_a8
    rbx_2[0xf] = rax_14

*arg1 = sub_1419968d0(arg2, rbx_2)
arg1[1].q = var_e8.q
return arg1
