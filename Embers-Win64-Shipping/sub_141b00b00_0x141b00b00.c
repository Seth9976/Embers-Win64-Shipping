// 函数: sub_141b00b00
// 地址: 0x141b00b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void var_88
int64_t* rax_2 = sub_141a50c70(&var_88)
int64_t rdi = sx.q(arg2[1].d)
int32_t rax_3 = (rdi + 1).d
float zmm7[0x4] = (*rax_2).o
arg2[1].d = rax_3
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
temp0[0] = arg3.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)

if (rax_3 s> *(arg2 + 0xc))
    sub_140775520(arg2)

int64_t rcx_3 = *arg2
int64_t rdx_1 = rdi * 9
char result = *(rcx_3 + (rdx_1 << 3) + 0x40)
*(rcx_3 + (rdx_1 << 3)) = temp0_1
int128_t var_70
*(rcx_3 + (rdx_1 << 3) + 0x10) = var_70
result = (result & 0xfe) | 2 | 3
int128_t var_60
*(rcx_3 + (rdx_1 << 3) + 0x20) = var_60
*(rcx_3 + (rdx_1 << 3) + 0x40) = result
int128_t var_50
*(rcx_3 + (rdx_1 << 3) + 0x30) = var_50
__security_check_cookie(rax_1 ^ &var_b8)
return result
