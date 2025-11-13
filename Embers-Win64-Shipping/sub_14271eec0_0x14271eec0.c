// 函数: sub_14271eec0
// 地址: 0x14271eec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg2)
char var_48 = *(arg1 + 0x44)
int64_t r8_1 = *(arg1 + 0x48)
void* rax_1 = sub_142702010(rax, &var_48)
void* const rbx = rax_1
void* rax_2
int64_t rax_3
void* rdx_1

if (rax_1 != 0)
    rax_2 = sub_14272a790()
    rdx_1 = *(rbx + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (rax_1 == 0 || rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rbx = nullptr

int32_t rdx_2 = *(rbx + 0x5c)
float zmm6 = *(rbx + 0x50)
int128_t zmm7 = *(rbx + 0x54)
zmm7.d = zmm7.d f* zmm7.d
uint8_t var_30 = ((((rdx_2 u>> 1).b & 1) | ((rdx_2.b & 1) * 2)) * 2) | ((rdx_2 u>> 2).b & 1)
int32_t rbx_1 = arg2[0xb]
int32_t var_2c
int32_t var_2c_1 = var_2c ^ ((*(rbx + 0x58) ^ var_2c) & 1)
sub_14271bba0(arg1 + 0x98, &var_48)
int32_t* rdx_5 = r8_1
int32_t rax_8 = var_48.d
*rdx_5 = rbx_1
float var_38[0x4]
var_38[0] = zmm6 * zmm6
float temp0[0x4] = _mm_shuffle_ps(var_38, var_38, 0xe1)
temp0[0] = zmm7.d
*(rdx_5 + 4) = _mm_shuffle_ps(temp0, temp0, 0xe1)
rdx_5[5] = 0xffffffff
void arg_8
return sub_14271cb30(arg1 + 0x98, &arg_8, *rdx_5, rdx_5, rax_8, nullptr)
