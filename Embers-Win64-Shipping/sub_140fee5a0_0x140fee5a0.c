// 函数: sub_140fee5a0
// 地址: 0x140fee5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t rbx = arg3
sub_14081d930(arg1 + 0x2678, arg2)
int64_t var_38

if (rbx == 0)
    rbx = *(arg2 + 0x78)
    var_38 = rbx
    sub_140ffa600(arg1, 1, &var_38, 1)

var_38 = rbx
int32_t var_30 = 0
int32_t var_2c = 0xffffffff
int16_t var_28 = 0x101
sub_140ff8b80(arg1, 1, &var_38, nullptr)
float zmm2[0x4] = *(arg1 + 0x19e4)
int32_t rcx_3 = int.d(zmm2[0])
var_28.q = *(arg1 + 0x19f4)
int32_t rax_2 = int.d(_mm_shuffle_ps(zmm2, zmm2, 0xaa)[0])
var_38.d = rcx_3
uint128_t zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
int64_t* rcx_4 = *(arg1 + 0x138)
int32_t var_30_1 = rax_2 + rcx_3
int32_t r8_2 = int.d(zmm0.d)
var_38:4.d = r8_2
int32_t var_2c_1 = int.d(temp0_2[0]) + r8_2
int64_t result = (*(*rcx_4 + 0x168))(rcx_4, 1, &var_38)
__security_check_cookie(rax_1 ^ &var_58)
return result
