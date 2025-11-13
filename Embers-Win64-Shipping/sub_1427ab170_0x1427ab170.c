// 函数: sub_1427ab170
// 地址: 0x1427ab170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx

if (*(arg1 + 0x20) == 0)
    rcx = nullptr
else
    rcx = *(arg1 + 0x28)

(*(*rcx + 0x10))(rcx)
void* rax_1 = *(arg1 + 0x48)
void* rcx_1 = arg1 + 0x58

if (rax_1 != 0)
    rcx_1 = rax_1

void var_18
int64_t* rax_4 = (*(arg1 + 0x38))(&var_18, (*(*rcx_1 + 8))(rcx_1))
uint128_t zmm5 = zx.o(*rax_4)
int64_t zmm1 = rax_4[1].d
uint128_t zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
*(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm1), _mm_unpacklo_ps(zmm0, 0).q)
return arg2
