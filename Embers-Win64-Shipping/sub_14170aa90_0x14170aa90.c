// 函数: sub_14170aa90
// 地址: 0x14170aa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
void* rcx = *(rax + 0x10)
uint128_t zmm6 = *(rax + 0x28)
int128_t zmm7 = *(rax + 0x2c)
uint128_t zmm0
zmm0.d = zmm6.d f* *arg3
uint128_t zmm8 = *(rax + 0x30)
float zmm4 = *(rcx + 0x20)
float zmm3 = *(rcx + 0x1c)
uint128_t zmm1
zmm1.d = zmm8.d f* arg3[2]
float zmm5 = *(rcx + 0x24)
zmm0.d = zmm0.d f* zmm3
zmm1.d = zmm1.d f* zmm5
uint64_t var_48
float var_40

if (zmm7.d f* arg3[1] * zmm4 f+ zmm0.d f+ zmm1.d < 0f)
    var_48 = *(rcx + 0x10)
    var_40 = *(rcx + 0x18)
else
    zmm0 = *(rcx + 0x28)
    var_48.d = zmm3 f* zmm0.d f+ *(rcx + 0x10)
    var_48:4.d = zmm4 f* zmm0.d f+ *(rcx + 0x14)
    var_40 = zmm5 f* zmm0.d f+ *(rcx + 0x18)

zmm1 = zx.o(var_48)
zmm8.d = zmm8.d f* var_40
zmm6.d = zmm6.d f* zmm1.d
zmm7.d = zmm7.d f* _mm_shuffle_ps(zmm1, zmm1, 0x55).d
*arg2 = zmm6.d
arg2[1] = zmm7.d
arg2[2] = zmm8.d
return arg2
