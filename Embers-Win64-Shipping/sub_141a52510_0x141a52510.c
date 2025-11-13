// 函数: sub_141a52510
// 地址: 0x141a52510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0xffffffff
int32_t arg_14 = 0
int32_t arg_8

if (arg2 != 0)
    sub_140d3a3a0(&arg_8, arg2)
    arg_10.q = arg_8.q

sub_1405ba8e0(arg1, &arg_8, &arg_10)
int64_t rax_2 = sx.q(arg_8)
int64_t rbx_2
void* rbx_3

if (rax_2.d != 0xffffffff)
    rbx_2 = rax_2 * 0x50
    rbx_3 = rbx_2 + *arg1

void var_58
int64_t var_28
int64_t var_20

if (rax_2.d == 0xffffffff || rbx_2 == neg.q(*arg1))
    sub_140d3a3a0(&var_58, nullptr)
    int64_t var_50_1 = 0
    int32_t var_48_1 = 0xffffffff
    int32_t var_44
    __builtin_memset(&var_44, 0, 0x1c)
    sub_140d3a3a0(&var_28, nullptr)
    sub_140d3a3a0(&var_20, nullptr)
else
    sub_141a2ed30(&var_58, rbx_3 + 8)
    int64_t var_30_1 = *(rbx_3 + 0x30)
    var_28 = *(rbx_3 + 0x38)
    var_20 = *(rbx_3 + 0x40)
void* result_1 = sub_1405bdd80(&var_58)
void* result = result_1

if (result_1 == 0)
    void var_88
    result = sub_1405bdd80(sub_141a4b810(&var_88, arg2, &arg1[0xa]))
    int64_t var_70
    
    if (var_70 != 0)
        sub_140a74f90(var_70)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

return result
