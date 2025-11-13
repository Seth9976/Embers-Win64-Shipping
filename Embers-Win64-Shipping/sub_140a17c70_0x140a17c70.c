// 函数: sub_140a17c70
// 地址: 0x140a17c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x48)
void arg_8
void arg_10
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(*(*(*rbx + 0x10))(rbx, &arg_8))).d
    f/ _mm_cvtepi32_ps(zx.o(*((*(*rbx + 0x10))(rbx, &arg_10) + 4))).d
int512_t result
result.o = zmm6
return result
