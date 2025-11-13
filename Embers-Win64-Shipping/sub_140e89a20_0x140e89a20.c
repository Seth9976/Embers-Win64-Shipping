// 函数: sub_140e89a20
// 地址: 0x140e89a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0 && arg2 == 0xa)
    (*(*rcx + 0x20))(rcx, zx.q(arg3), zx.q(arg4))

uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg3))
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg4))
int32_t arg_8 = zmm0.d
int32_t arg_c = zmm1.d
return sub_140e8d2e0(arg1, arg2, &arg_8)
