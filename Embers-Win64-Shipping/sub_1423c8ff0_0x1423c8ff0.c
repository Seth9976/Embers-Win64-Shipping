// 函数: sub_1423c8ff0
// 地址: 0x1423c8ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
int32_t arg_10
sub_141ff4780(&arg_10, arg2, 0, 0xd6)
void arg_18
sub_141ff4780(&arg_18, arg2, 0, 0xd6)
int64_t* r8 = arg2[1]
int64_t rdx_2 = *r8
int64_t result
bool cond:1

if (rdx_2 + 4 u> r8[1])
    int32_t rax_1
    rax_1.b = arg2[0xe] != 0
    arg_10 = rax_1
    result = (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:1 = arg_10 != 0
else
    cond:1 = *rdx_2 != 0
    result = rdx_2 + 4
    *r8 = result

if (cond:1 == 0 && arg2[0xe] == 0)
    return result

return sub_1423c91c0(arg1, arg2)
