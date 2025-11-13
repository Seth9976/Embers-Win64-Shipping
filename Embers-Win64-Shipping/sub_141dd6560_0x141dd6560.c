// 函数: sub_141dd6560
// 地址: 0x141dd6560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423c8fc0(arg1, arg2)
void arg_10
sub_141ff4780(&arg_10, arg2, 0, 0xd6)
int64_t* r8 = arg2[1]
int64_t rdx_1 = *r8
int64_t result
bool cond:1

if (rdx_1 + 4 u> r8[1])
    int32_t rax_1
    rax_1.b = arg2[0xe] != 0
    int32_t arg_18 = rax_1
    result = (*(*arg2 + 0x150))(arg2, &arg_18, 4)
    cond:1 = arg_18 != 0
else
    cond:1 = *rdx_1 != 0
    result = rdx_1 + 4
    *r8 = result

if (cond:1 == 0 && arg2[0xe] == 0)
    return result

return sub_1423c91c0(arg1, arg2)
