// 函数: sub_1414c4670
// 地址: 0x1414c4670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_1439b70ac
int32_t r11

if (rax s>= 4)
    r11 = 0x800
    
    if (rax s< 0x800)
        r11 = rax
else
    r11 = 4

__builtin_memset(arg1 + 4, 0, 0x14)

if (arg5 != 0)
    int32_t var_70 = 0
    int32_t var_6c = r11
    int32_t var_64 = r11
    *arg1 = 0.o
    arg1[1].q = r11.q
    return arg1

int128_t zmm7 = *(arg2 + 0xc)
int128_t zmm8 = *arg2
int128_t zmm3 = zmm8
int128_t zmm9 = *(arg2 + 4)
zmm8.d = zmm8.d f+ zmm7.d
zmm3.d = zmm3.d f- zmm7.d
int128_t zmm10 = *(arg2 + 8)
uint64_t rcx = zx.q(arg4)
int128_t zmm6
zmm6.d = zmm10.d f- zmm7.d
int128_t zmm5
zmm5.d = zmm9.d f- zmm7.d
zmm9.d = zmm9.d f+ zmm7.d
float zmm4 = 1f f/ *(arg3 + (rcx << 2) + 0x494c)
uint64_t rax_2 = rcx * 3
int128_t zmm0 = *(arg3 + (rax_2 << 2) + 0x4934)
zmm10.d = zmm10.d f+ zmm7.d
int64_t zmm1 = *(arg3 + (rax_2 << 2) + 0x4938)
zmm8.d = zmm8.d f- zmm0.d
int32_t zmm2 = *(arg3 + (rax_2 << 2) + 0x493c)
zmm3.d = zmm3.d f- zmm0.d
zmm6.d = zmm6.d f- zmm2
int32_t rax_3 = 0
zmm5.d = zmm5.d f- zmm1.d
zmm9.d = zmm9.d f- zmm1.d
zmm10.d = zmm10.d f- zmm2
zmm8.d = zmm8.d f* zmm4
zmm6.d = zmm6.d f* zmm4
zmm3.d = zmm3.d f* zmm4
zmm5.d = zmm5.d f* zmm4
zmm9.d = zmm9.d f* zmm4
int32_t rcx_1 = int.d(zmm3.d)
zmm10.d = zmm10.d f* zmm4

if (rcx_1 s>= 0)
    rax_3 = rcx_1

*arg1 = rax_3
int32_t rax_4 = 0
int32_t rcx_2 = int.d(zmm5.d)

if (rcx_2 s>= 0)
    rax_4 = rcx_2

*(arg1 + 4) = rax_4
int32_t rax_6 = r11

if (int.d(zmm8.d) + 1 s<= r11)
    rax_6 = int.d(zmm8.d) + 1

*(arg1 + 0xc) = rax_6
int32_t rax_7 = r11

if (int.d(zmm9.d) + 1 s<= r11)
    rax_7 = int.d(zmm9.d) + 1

arg1[1].d = rax_7

if (int.d(zmm10.d) + 1 s<= r11)
    r11 = int.d(zmm10.d) + 1

*(arg1 + 0x14) = r11
return arg1
