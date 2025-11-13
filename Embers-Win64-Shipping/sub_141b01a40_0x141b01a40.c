// 函数: sub_141b01a40
// 地址: 0x141b01a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t zmm0 = *arg3
int32_t rbx = arg3[1].d
void var_68
int64_t* rax_2 = sub_141a536f0(&var_68)
int64_t rbx_1 = sx.q(arg2[1].d)
int32_t rax_3 = (rbx_1 + 1).d
arg2[1].d = rax_3
double zmm1[0x2] = _mm_unpacklo_pd((*rax_2).o, zmm0)
uint64_t var_50 = rbx.q
int64_t var_80
var_80.o = zmm1

if (rax_3 s> *(arg2 + 0xc))
    sub_140775520(arg2)
    zmm1 = var_80.o

int64_t rax_4 = *arg2
int64_t rcx_3 = rbx_1 * 9
*(rax_4 + (rcx_3 << 3)) = zmm1
void* rdx_1 = rax_4 + (rcx_3 << 3)
char result = *(rax_4 + (rcx_3 << 3) + 0x40) & 0xfe
*(rdx_1 + 0x10) = var_50.o
result = result | 2 | 3
double var_40[0x2]
*(rdx_1 + 0x20) = var_40
*(rdx_1 + 0x40) = result
uint128_t var_30
*(rdx_1 + 0x30) = var_30
__security_check_cookie(rax_1 ^ &var_a8)
return result
