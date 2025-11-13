// 函数: sub_141b014f0
// 地址: 0x141b014f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void var_70
int64_t* rax_2 = sub_141a535d0(&var_70)
int64_t rdi = sx.q(arg2[1].d)
int32_t rax_3 = (rdi + 1).d
float zmm6[0x4] = (*rax_2).o
arg2[1].d = rax_3
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
temp0[0] = arg3.d.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0x27)
temp0_1[0] = arg3:4.d.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)

if (rax_3 s> *(arg2 + 0xc))
    sub_140775520(arg2)

int64_t rax_4 = *arg2
int64_t rcx_3 = rdi * 9
float (* rdx_1)[0x4] = rax_4 + (rcx_3 << 3)
char result = *(rax_4 + (rcx_3 << 3) + 0x40)
*rdx_1 = temp0_2
int128_t var_58
rdx_1[1] = var_58
result = (result & 0xfe) | 2 | 3
int128_t var_48
rdx_1[2] = var_48
rdx_1[4][0].b = result
int128_t var_38
rdx_1[3] = var_38
__security_check_cookie(rax_1 ^ &var_a8)
return result
