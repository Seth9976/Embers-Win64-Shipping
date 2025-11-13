// 函数: sub_141c6c6e0
// 地址: 0x141c6c6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0 || arg2 == 0)
    return 

uint64_t rax
int512_t zmm2_1
rax, zmm2_1 = sub_141c5d7c0(arg1)

if (rax == 0)
    return 

uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*(rax + 0xc)))
int32_t var_28 = 0xffffffff
int64_t var_20_1 = 0
int32_t var_18_1 = zmm0_1.d
int64_t* var_48
int128_t zmm1_1 = sub_141c4c3e0(&var_48, &var_28, arg4, zmm2_1)
sub_142376b50(var_48, 1)
uint128_t zmm0_2 = var_48.o
int32_t r9 = *(arg4 + 0xc)
uint128_t var_38 = zmm0_2
void* rax_1 = _mm_bsrli_si128(zmm0_2, 8).q

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_141c6c370(rax, arg2, arg3, r9, zmm1_1, &var_38)
int64_t* var_40

if (var_40 == 0)
    return 

var_40[1].d -= 1

if (var_40[1].d != 1)
    return 

(**var_40)(var_40)
int32_t rdi_2 = *(var_40 + 0xc)
*(var_40 + 0xc) -= 1

if (rdi_2 == 1)
    (*(*var_40 + 8))(var_40, zx.q(rdi_2))
