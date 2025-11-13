// 函数: sub_1405b42d0
// 地址: 0x1405b42d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm2 = *(arg1 + 0x70)
float zmm1[0x4] = (arg1 + 0x38).o
int32_t var_38 = 0
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
temp0[0] = zmm2
int64_t* var_20 = _mm_shuffle_ps(temp0, temp0, 0xc9)[0].q
int128_t var_30 = zx.o(0)
sub_1405c3fc0(arg1, arg2, arg3, &var_38)
int32_t rax_3 = (var_38 + 1) & 0x80000001

if (rax_3 s< 0)
    rax_3 = ((rax_3 - 1) | 0xfffffffe) + 1

int64_t rax_6 = sx.q(rax_3)
void* rdi = *(&var_30 + (rax_6 << 3))
*(&var_30 + (rax_6 << 3)) = 0
void* rdx = *(&var_30 + (sx.q(var_38) << 3))

if (rdx != 0)
    sub_1405c2980(var_20, rdx)
    *(&var_30 + (sx.q(var_38) << 3)) = 0

if (rdi != 0)
    return rdi

return arg2
