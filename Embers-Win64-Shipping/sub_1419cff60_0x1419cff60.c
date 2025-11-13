// 函数: sub_1419cff60
// 地址: 0x1419cff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
*(arg1 + 0x44) = arg2
uint64_t rsi = zx.q(arg2)
arg1[8].d = 0
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rsi.d)
int32_t r10 = arg3
int32_t rcx_2 = 0x20 << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_reverse((rsi - 1).d)
char r8

if (rcx_2 == 0)
    r8 = 0x20
else
    r8 = 0x1f - temp0_1

uint32_t r12 = (rsi << 2).d
*(arg1 + 0x4c) = r10
arg1[0xa].b = arg4
int32_t r15 = 4
arg1[9].d = 1 << ((not.d(rcx_2)).b & (0x20 - r8))

if (arg4 != 0)
    r15 = 0x10

int32_t r14_3 = (zx.d(arg4) ^ 1) << 5 | 0x204
int128_t* var_a8
void var_98
int128_t var_88

if (r12 u> arg1[2].d)
    arg1[2].d = 0
    sub_1405d16e0(arg1, nullptr)
    sub_1405d16e0(&arg1[1], nullptr)
    int32_t rdx_2 = arg1[9].d << 2
    arg1[2].d = rdx_2
    int512_t zmm0_1
    zmm0_1.o = zx.o(0)
    int128_t zmm1_1 = data_143dbb1e0
    int64_t* rcx_8 = data_143f0f180
    int32_t rax_6 = (1 << (data_1439c7a34).b) - 1
    var_a8 = &var_88
    var_88 = zx.o(0)
    int32_t var_78_1 = 1
    int128_t var_74_1 = zmm1_1
    int32_t var_64_1 = rax_6
    char var_60_1 = 0
    int32_t var_50_1 = 0
    int64_t var_58_1 = arg5
    (*(*rcx_8 + 0x4a0))(zmm0_1, &var_98, &data_143f02b98, 4, rdx_2, r14_3, var_a8)
    sub_1405d1600(arg1, &var_98)
    sub_14081c9d0(&var_98)
    int64_t* rcx_11 = data_143f0f180
    (*(*rcx_11 + 0x5b0))(rcx_11, &var_98, &data_143f02b98, *arg1)
    sub_1405d1600(&arg1[1], &var_98)
    sub_1405ec8a0(&var_98)
    r10 = *(arg1 + 0x4c)

int32_t rsi_1 = rsi.d * r10

if (rsi_1 u> arg1[5].d)
    arg1[5].d = 0
    sub_1405d16e0(&arg1[3], nullptr)
    sub_1405d16e0(&arg1[4], nullptr)
    int32_t rdx_8 = arg1[9].d * *(arg1 + 0x4c)
    var_a8 = &var_88
    int512_t zmm0_2
    zmm0_2.o = zx.o(0)
    var_88 = zx.o(0)
    int32_t var_78_2 = 1
    char var_60_2 = 0
    arg1[5].d = rdx_8
    int128_t var_74_2 = data_143dbb1e0
    int32_t var_64_2 = (1 << (data_1439c7a34).b) - 1
    int32_t var_50_2 = 0
    int64_t var_58_2 = arg5
    (*(*data_143f0f180 + 0x4a0))(zmm0_2, &var_98, &data_143f02b98, zx.q(r15), rdx_8, r14_3, var_a8)
    sub_1405d1600(&arg1[3], &var_98)
    sub_14081c9d0(&var_98)
    int64_t* rcx_20 = data_143f0f180
    (*(*rcx_20 + 0x5b0))(rcx_20, &var_98, &data_143f02b98, arg1[3])
    sub_1405d1600(&arg1[4], &var_98)
    sub_1405ec8a0(&var_98)

int64_t* rcx_23 = data_143f0f180
int64_t rax_14 = (*(*rcx_23 + 0x158))(rcx_23, &data_143f02b98, *arg1, 0, r12, 1, var_a8)
int64_t r8_2 = arg1[3]
arg1[6] = rax_14
int64_t* rcx_24 = data_143f0f180
int64_t result = (*(*rcx_24 + 0x158))(rcx_24, &data_143f02b98, r8_2, 0, rsi_1, 1)
arg1[7] = result
__security_check_cookie(rax_1 ^ &var_d8)
return result
