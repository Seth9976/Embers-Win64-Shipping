// 函数: sub_1415d15b0
// 地址: 0x1415d15b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
float zmm4[0x4] = arg3[1]
float zmm0[0x4] = *arg3
zmm4[0] = zmm4[0] f* *(arg1 + 0x34)
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
temp0[0] = temp0[0] f* *(arg1 + 0x38)
float var_d8[0x4] = zmm4
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
temp0_1[0] = temp0_1[0] f* *(arg1 + 0x3c)
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, 0)
float var_f8[0x4] = zmm0
float var_e8[0x4] = zmm0
float var_68[0x4] = zmm0
float temp0_3[0x4] = _mm_unpacklo_ps(zmm4, temp0_1[0].q)
zmm0 = data_14399f670
float var_58[0x4] = _mm_unpacklo_ps(temp0_3, temp0_2[0].q)
float var_48[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0[0].q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
void** var_c8
sub_141703820(&var_c8, arg2, arg1 + 0x34, zx.o(0)[0])
int32_t rax_2 = *(arg1 + 0x30)
arg4[0] = arg4[0] f+ *(arg1 + 0x40)
void* rcx_1 = *(arg1 + 0x10)
int32_t var_100 = rax_2
int64_t var_108
int64_t* var_110 = &var_108
float zmm3 = arg4[0]
var_108 = *(arg1 + 0x28)
char rax_3 = sub_1417afef0(rcx_1, &var_c8, &var_68, zmm3, arg5, arg6, arg7, var_110)
var_c8 = &data_142fc4f68
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
