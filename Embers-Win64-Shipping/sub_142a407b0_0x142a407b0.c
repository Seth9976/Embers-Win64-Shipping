// 函数: sub_142a407b0
// 地址: 0x142a407b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
void* result = sub_142a3ee60(arg3, rdx + 0x18, rdx + 0x78)

if (result == 0)
    return result

*arg1
int64_t arg_8
sub_142a3f0a0(result & 0xffffffffffc00000, result, arg3, &arg_8)
int64_t rax = arg_8
*(result + 0x30) = arg3
*(result + 4) = (divu.dp.q(0:rax, arg3)).w
*(result + 7) = *(result + 1) u>> 3 & 1
sub_142a40670(arg1, result)
j_sub_142a44ce0(*arg1 + 0xa8, 1)

if (arg2 != 0)
    sub_142a40cb0(arg1, arg2, result)

return result
