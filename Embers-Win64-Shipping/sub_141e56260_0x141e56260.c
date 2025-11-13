// 函数: sub_141e56260
// 地址: 0x141e56260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8
char* rax = sub_141e5ec20(nullptr, &arg_8)
int512_t entry_zmm2

if (arg_8 != 0)
    EnterCriticalSection(&data_143f39aa0)
    entry_zmm2 = sub_141e563a0(rax, nullptr, entry_zmm2)
    LeaveCriticalSection(&data_143f39aa0)

char* rax_1 = sub_141e5ec20(nullptr, &arg_8)

if (arg_8 != 0)
    EnterCriticalSection(&data_143f39aa0)
    sub_141e563a0(rax_1, nullptr, entry_zmm2)
    LeaveCriticalSection(&data_143f39aa0)

int32_t rax_2 = *(rax_1 + 0x68)
int32_t r8_2

if (rax_2 == 0 || rax_2 s>= 0x2000)
    r8_2 = 0x40000
else
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_2)
    r8_2 = ((temp2_1 & 0x1f) + temp3_1) s>> 5 << 0xa

uint128_t zmm1 = data_143a2d2c0
uint128_t zmm0 = zx.o(0)

if (not(zmm1.d f< zmm0.d))
    zmm0 = __minss_xmmss_memss(zmm1.d, 0x3f733333)

zmm1.d = 1f f- zmm0.d
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(*(rax + 0x68) << 0xa)
zmm1.d = zmm1.d f* _mm_cvtepi32_ps(zx.o(r8_2)).d
*arg1 = 0
arg1[1] = 0
int64_t var_10 = sx.q(*(rax + 0x68) << 0xa)
int32_t var_14 = divs.dp.d(temp4:temp5, int.d(zmm1.d))
arg1[1].d = 1
sub_1405a4f90(arg1)
**arg1 = r8_2.o
return arg1
