// 函数: sub_141e2c5d0
// 地址: 0x141e2c5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x38)

if (rcx == 0 || sub_14236bbe0(rcx, arg3.d) != 0)
    return 

int32_t var_38
uint64_t var_28
uint128_t zmm1

if ((*(arg1 + 0x48) & 1) != 0)
    int32_t rax_1 = data_143dbb210
    int64_t r8_1 = *(arg1 + 0x4c)
    char var_48 = 1
    var_38.q = data_143dbb208
    arg3 = _mm_unpacklo_ps(zx.o(0), 0)
    zmm1 = *(arg1 + 0x40)
    int32_t var_30_1 = rax_1
    var_28 = arg3.q
    int32_t var_10_1 = 0
    int32_t var_20_1 = 0
    sub_14203f630(*(arg1 + 0x38), arg2, r8_1, &var_28, &var_38, 2, 0, zmm1.d, (*(arg1 + 0x44)).d, 
        0, 0, 0)
    return 

zmm1 = *(arg2 + 0x1d0)
int64_t* rax_3 = arg2[0x15]
arg3 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
var_38 = zmm1.d
int32_t var_30_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
int32_t var_34_1 = arg3.d

if (rax_3 == 0)
    rax_3 = sub_141ee69e0(arg2)

zmm1 = *(arg1 + 0x44)
int64_t* rdx_1 = *(arg1 + 0x38)
int32_t var_20_2 = data_143dbb210
var_28 = data_143dbb208
int32_t var_10_2 = var_30_2
uint64_t var_18 = var_38.q
sub_142035e10(rax_3, rdx_1, &var_18, &var_28, (*(arg1 + 0x40)).d, zmm1.d, 0, nullptr, nullptr, 0)
