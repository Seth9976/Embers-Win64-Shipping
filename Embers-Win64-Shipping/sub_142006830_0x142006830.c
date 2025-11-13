// 函数: sub_142006830
// 地址: 0x142006830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xa0)
void* rcx = *(arg1 + 0xb0)
uint128_t zmm1 = data_143dbb1f8
int32_t zmm3 = data_143dbb1fc
uint128_t zmm6 = arg3
int128_t zmm7 = zx.o(0)
uint64_t var_38 = *(arg1 + 0x98)
int32_t var_30 = rax
var_38.d = 0
uint128_t zmm0

if (rcx == 0)
    zmm0.d = zmm6.d f+ zmm6.d
    zmm0.d = zmm0.d f- 1f
    zmm0.d = zmm0.d f* zmm0.d
    arg3.d = 1f f- zmm0.d
else
    uint64_t var_58
    int32_t* rax_1
    rax_1, zmm6, zmm7 = sub_141f8c030(rcx, &var_58, arg3)
    zmm1 = zx.o(*rax_1)
    int32_t rax_2 = rax_1[2]
    zmm3 = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
    arg3 = rax_2
    var_58 = zmm1.q
    zmm1 = var_58.d

zmm0 = *(arg1 + 0xa8)

if (not(zmm0.d f< zmm7.d))
    arg3.d = arg3.d f* zmm0.d

zmm6.d = zmm6.d f* *(arg1 + 0xa4)
int32_t var_44 = zmm3
int32_t var_40 = arg3.d
zmm6.d = zmm6.d f+ zmm1.d
int32_t var_48 = zmm6.d
sub_140adf300(&var_38, arg2, &var_48)
return arg2
