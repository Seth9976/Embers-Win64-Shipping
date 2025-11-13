// 函数: sub_1424af540
// 地址: 0x1424af540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void** var_d8
sub_141e4f3c0(&var_d8)
var_d8 = &data_142e259f0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_d8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

void*** rax_3 = *(arg2 + 0x38)
void*** rdx_2 = &var_d8

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
*arg3 = sub_141f08290(arg1, rdx_2)
var_d8 = &data_142e259f0
int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

void** var_b0
void* result = sub_140623ed0(&var_b0)
__security_check_cookie(rax_1 ^ &var_f8)
return result
