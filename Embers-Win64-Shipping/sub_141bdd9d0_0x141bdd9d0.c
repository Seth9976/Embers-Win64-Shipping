// 函数: sub_141bdd9d0
// 地址: 0x141bdd9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result = zx.o(arg1[0x7e])
void* const rbp = arg2
int64_t rdi

if (result.q f!= 0.0 || arg1[0x86].b == 0)
    rdi.b = 0
else
    rdi.b = 1

uint128_t zmm6
uint128_t var_18 = zmm6

if (arg4 == 0)
    if (result.q f!= 0.0)
        arg2 = nullptr
    else
        arg2.b = 1
    
    char rax_1
    rax_1, result = sub_140edb000(&arg1[0x9c], arg2.b, arg1[0x86].b, arg3.d)
    
    if (rax_1 != 0)
        int128_t zmm7
        zmm7.d = arg3.d f/ _mm_cvtepi32_ps(zx.o((*(*arg1 + 0x268))(arg1))).d
        int512_t zmm1_1
        result, zmm1_1 = sub_140ed8eb0(&arg1[0x9c], rbp, zmm7.d)
        zmm1_1.o = zx.o(0)
        
        if (not(result.d f== 0f))
            (*(*arg1 + 0x240))(arg1, zmm1_1)
        
        return result

if (rdi.b != 0)
    return zx.o(0)

int128_t zmm0
int512_t zmm6_1
zmm0, zmm6_1 = sub_140f75d80(arg1, result.d)
zmm6_1.o = zmm0
int32_t zmm0_1
int512_t zmm1_2
int32_t zmm7_1
zmm0_1, zmm1_2, zmm6, zmm7_1 = sub_140f76110(arg1, zmm0.d)
void var_38
sub_140f66450(&var_38, arg1[0x9b].d, zmm0_1, zmm6.d)
result = zx.o((*(*arg1 + 0x268))(arg1))
int64_t rax_7 = *arg1
result.d = _mm_cvtepi32_ps(result).d f* zmm7_1
int32_t var_34
result.d = result.d f/ var_34
result.q = _mm_cvtps_pd(result.q).q f+ arg1[0x7e]
zmm1_2.o = _mm_cvtpd_ps(result)
(*(rax_7 + 0x258))(arg1, zmm1_2)
return result
