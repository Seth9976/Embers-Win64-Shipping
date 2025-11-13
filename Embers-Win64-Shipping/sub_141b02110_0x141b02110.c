// 函数: sub_141b02110
// 地址: 0x141b02110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
double zmm6[0x2] = *arg3
void var_98
int64_t* rax_2 = sub_141a50860(&var_98)
int64_t rdi = sx.q(arg2[1].d)
double var_88[0x2] = zmm6
int64_t rcx_1 = *rax_2
int32_t rax_3 = (rdi + 1).d
double temp0[0x2] = _mm_unpackhi_pd(zmm6, zmm6[0])
arg2[1].d = rax_3
int64_t var_68 = temp0.q

if (rax_3 s> *(arg2 + 0xc))
    sub_140775520(arg2)

int64_t rax_4 = *arg2
int64_t rcx_3 = rdi * 9
int128_t* rdx_1 = rax_4 + (rcx_3 << 3)
char result = *(rax_4 + (rcx_3 << 3) + 0x40)
*rdx_1 = rcx_1.o
rdx_1[1] = var_68.o
result = (result & 0xfe) | 2 | 3
int128_t var_58
rdx_1[2] = var_58
rdx_1[4].b = result
int128_t var_48
rdx_1[3] = var_48
__security_check_cookie(rax_1 ^ &var_b8)
return result
