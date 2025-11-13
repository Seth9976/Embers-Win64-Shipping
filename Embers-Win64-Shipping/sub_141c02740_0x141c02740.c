// 函数: sub_141c02740
// 地址: 0x141c02740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68 = 0xffffffff
int64_t var_58
__builtin_memset(&var_58, 0, 0x18)
int64_t var_64 = 0
int64_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

arg_8.d = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_3 = *(arg2 + 0x20)
bool cond:0 = arg_8.d != 0
uint64_t var_28 = 0
int64_t rbx
rbx.b = cond:0
int64_t var_20 = 0
int64_t rcx_2
rcx_2.b = rax_3 != 0
int64_t var_40 = var_68.q
int32_t var_38 = var_64:4.d
int64_t rax_6 = var_58
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t var_30 = rax_6
int64_t var_50
sub_140597df0(&var_28, &var_50)
int64_t result = (*(*arg1 + 0x2f0))(arg1, &var_40, zx.q(rbx.b))
int64_t rcx_6 = var_50

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
