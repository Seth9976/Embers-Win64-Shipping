// 函数: sub_1418f4ed0
// 地址: 0x1418f4ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x20)
void*** rax = sub_1418c0d30(*(rbx + 0x240))
int32_t* rax_1 = sub_1418e1230(rbx + 0x248, *arg1, 0)
int32_t rdi = *(arg1 + 0xc)
int64_t rbx_1 = *arg1
int32_t var_28 = 1
int64_t var_38 = 0
int32_t* var_30 = nullptr
int64_t var_20 = 0
int32_t var_18 = 0
sub_140775520(&var_30)
__builtin_memset(var_30, 0, 0x48)
int32_t* rax_3 = var_30
*rax_3 = 0x2d
*(rax_3 + 0x28) = rbx_1
rax_3[0xc] = rdi
rax_3[0xe] = 0xffffffff
rax_3[0x10] = 0xffffffff
*(rax_3 + 0x20) = -1
int32_t rax_4 = sub_1418e1d20(arg1[1].d)
int32_t* rbx_2 = var_30
int32_t rax_5 = sub_1418bfb90(0, &rbx_2[4], &rbx_2[6])
var_38.d |= rax_5
int32_t rax_6 = sub_1418bfb90(rax_4, &rbx_2[5], &rbx_2[7])
var_38:4.d |= rax_6

if (var_28 s> 0 || var_18 s> 0)
    int32_t* r8_1
    r8_1.b = 1
    sub_1418c1fc0(&var_38, rax)

int32_t result = arg1[1].d
*rax_1 = result

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int32_t* rcx_7 = var_30

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
