// 函数: sub_141d0c390
// 地址: 0x141d0c390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8

if (*(arg1 + 0x71) != 0)
    goto label_141d0c4bc

int128_t var_88 = data_14321e0d0
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int64_t var_58
__builtin_memset(&var_58, 0, 0x1a)
void* rax_2 = *(arg1 + 0x90)
void* rcx = arg1 + 0xa0

if (rax_2 != 0)
    rcx = rax_2

int64_t* rax_5 = (*(arg1 + 0x80))((*(*rcx + 8))(rcx))
int64_t r8 = *rax_5
(*(r8 + 0x178))(rax_5, *(arg1 + 0x28), r8)
sub_141d0f7d0(&var_88, rax_5, zx.q(*(*(arg1 + 0x20) + 0xa4)), arg4)
char rcx_5 = 1

if (*(arg1 + 0x30) != var_88:8.q)
    rcx_5 = 0

char rdx_2 = rcx_5

if (*(arg1 + 0x38) != var_78)
    rdx_2 = 0

char rcx_6 = rdx_2
int64_t var_48

if (*(arg1 + 0x6c) != var_48:4.d)
    rcx_6 = 0

int64_t var_70
int64_t var_68
int32_t var_60
int64_t result

if (*(arg1 + 0x40) != var_70 || *(arg1 + 0x48) != var_68 || *(arg1 + 0x50) != var_60 || rcx_6 == 0)
    sub_140a1d5c0(&var_58)
    result.b = 0
else
    *(arg1 + 0x71) = 1
    sub_140a1d5c0(&var_58)
label_141d0c4bc:
    int64_t rdx_3 = *(arg1 + 0x10)
    
    if (*(arg1 + 0x30) s< rdx_3 + arg3)
        result.b = 0
    else
        sub_141d0f650(arg1 + 0x20, rdx_3, arg2, arg3)
        *(arg1 + 0x10) += arg3
        result.b = 1

__security_check_cookie(rax_1 ^ &var_a8)
return result
