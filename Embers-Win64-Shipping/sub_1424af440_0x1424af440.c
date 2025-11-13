// 函数: sub_1424af440
// 地址: 0x1424af440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void** var_c8
sub_141e4f3c0(&var_c8)
var_c8 = &data_142e259f0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_c8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

void*** rax_3 = *(arg2 + 0x38)
void*** rdx_2 = &var_c8

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
sub_141f075a0(arg1, rdx_2)
var_c8 = &data_142e259f0
int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

void** var_a0
void* result = sub_140623ed0(&var_a0)
__security_check_cookie(rax_1 ^ &var_e8)
return result
