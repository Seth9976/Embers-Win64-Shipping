// 函数: sub_1415d18f0
// 地址: 0x1415d18f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint128_t zmm4 = arg3[1]
uint128_t zmm6 = arg4
uint128_t zmm0 = *arg3
arg4.d = zmm4.d f* *(arg1 + 0x34)
uint128_t zmm2
zmm2.d = _mm_shuffle_ps(zmm4, zmm4, 0x55).d f* *(arg1 + 0x38)
uint128_t var_d8 = zmm4
zmm4.d = _mm_shuffle_ps(zmm4, zmm4, 0xaa).d f* *(arg1 + 0x3c)
zmm2 = _mm_unpacklo_ps(zmm2, 0)
uint128_t var_f8 = zmm0
uint128_t var_e8 = zmm0
uint128_t var_68 = zmm0
zmm4 = _mm_unpacklo_ps(arg4, zmm4.q)
zmm0 = data_14399f670
uint128_t var_58 = _mm_unpacklo_ps(zmm4, zmm2.q)
uint128_t var_48 =
    _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), _mm_unpacklo_ps(data_14399f66c, 0).q)
void** var_c8
sub_141703c00(&var_c8, arg2, arg1 + 0x34, zx.o(0))
zmm6.d = zmm6.d f+ *(arg1 + 0x40)
void* rcx_1 = *(arg1 + 0x10)
int32_t var_100 = *(arg1 + 0x30)
int64_t var_108
int64_t* var_110 = &var_108
var_108 = *(arg1 + 0x28)
char rax_3 = sub_1417affb0(rcx_1, &var_c8, &var_68, zmm6, arg5, arg6, arg7, var_110)
var_c8 = &data_142fc4d40
int64_t* var_a8

if (var_a8 != 0)
    int32_t rdx_1 = var_a8[1].d
    var_a8[1].d -= 1
    
    if (rdx_1 == 1)
        (**var_a8)(var_a8, rdx_1)
        int32_t rdi_1 = *(var_a8 + 0xc)
        *(var_a8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_a8 + 8))(var_a8, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_148)
return zx.q(rax_3)
