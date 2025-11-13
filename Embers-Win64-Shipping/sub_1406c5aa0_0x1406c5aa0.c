// 函数: sub_1406c5aa0
// 地址: 0x1406c5aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_b8 = zx.o(0)
var_b8.q = 0
var_b8:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_b8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

void var_a8
sub_1406c5150(&var_a8)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_58
char result = sub_1406c0e50(&var_b8, sub_1406b55b0(&var_58, &var_a8))
*arg3 = result
int64_t var_70

if (var_70 != 0)
    result = sub_140a74f90(var_70)

int64_t var_80

if (var_80 != 0)
    result = sub_140a74f90(var_80)

int64_t var_90

if (var_90 != 0)
    result = sub_140a74f90(var_90)

int64_t rcx_8 = var_b8.q

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
