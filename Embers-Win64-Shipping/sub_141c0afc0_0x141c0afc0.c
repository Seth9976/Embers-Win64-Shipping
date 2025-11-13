// 函数: sub_141c0afc0
// 地址: 0x141c0afc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void var_50
sub_140d921c0(&var_50)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_50, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

void* rax_3 = *(arg2 + 0x38)
void* rdx_2 = &var_50

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
void var_58
int32_t* result = sub_141bae6f0(&var_58, rdx_2)
*arg3 = *result
__security_check_cookie(rax_1 ^ &var_78)
return result
