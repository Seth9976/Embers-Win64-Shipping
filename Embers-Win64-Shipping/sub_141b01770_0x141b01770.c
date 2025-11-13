// 函数: sub_141b01770
// 地址: 0x141b01770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int128_t zmm6 = *arg3
void var_98
int64_t rcx_1 = *sub_141a53660(&var_98)
int128_t* rax_3 = sub_140a82f30(0x20, 0x10)
char var_28
char rcx_2 = (var_28 & 0xfd) | 1
*rax_3 = rcx_1.o
rax_3[1] = zmm6
int64_t rdi = sx.q(arg2[1].d)
int32_t rax_4 = (rdi + 1).d
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_140775520(arg2)

uint64_t result = *arg2
int64_t rcx_4 = rdi * 9
int128_t* r8 = result + (rcx_4 << 3)
char rcx_5 = (*(result + (rcx_4 << 3) + 0x40) & 0xfe) | 2
r8[4].b = rcx_5

if ((rcx_2 & 1) != 0)
    rcx_5 |= 1
    char rdx_1 = rcx_2 & 0xfe
    *r8 = rax_3.o
    result.b = rdx_1 ^ rcx_5
    result.b &= 2
    int128_t var_58
    r8[1] = var_58
    result.b ^= rcx_5
    r8[4].b = result.b
    int128_t var_48
    r8[2] = var_48
    int128_t var_38
    r8[3] = var_38
    
    if ((rdx_1 & 1) != 0 && (rdx_1 & 2) == 0)
        result = sub_140a74f90(rax_3)

__security_check_cookie(rax_1 ^ &var_b8)
return result
