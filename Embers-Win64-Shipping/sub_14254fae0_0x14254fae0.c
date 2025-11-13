// 函数: sub_14254fae0
// 地址: 0x14254fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = arg1

if ((arg2[5].b & 2) != 0)
    int32_t rax = arg1[1].d
    uint64_t var_38 = *arg1
    int32_t var_30 = rax
    *arg4 = sub_141ed1a20(&var_38, arg2)
    return 1

int64_t rax_2 = *arg2
int32_t arg_10 = 0
(*(rax_2 + 0x160))(arg2, &arg_10, 0x18)
char rax_3 = arg_10.b
int32_t arg_20 = 0
int32_t var_48 = 0
int32_t var_44 = 0
int32_t rdi = 1 << (rax_3 + 1)
int32_t rbx = 1 << (rax_3 + 2)
(*(*arg2 + 0x160))(arg2, &arg_20, zx.q(rbx))
(*(*arg2 + 0x160))(arg2, &var_48, zx.q(rbx))
(*(*arg2 + 0x160))(arg2, &var_44, zx.q(rbx))
int32_t rax_9 = var_48
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(arg_20 - rdi)).d f* 0.100000001f
*rbp = zmm0.d
int32_t rax_11 = var_44
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_9 - rdi)).d f* 0.100000001f
rbp[1] = zmm0.d
int32_t result
result.b = 1
zmm0.d = _mm_cvtepi32_ps(zx.o(rax_11 - rdi)).d f* 0.100000001f
rbp[2] = zmm0.d
*arg4 = 1
return result
