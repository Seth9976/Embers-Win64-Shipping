// 函数: sub_142c77ba0
// 地址: 0x142c77ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142c77770(arg1, *arg1 + 0xa88, arg2, arg4.w)
int64_t arg_8
int64_t* var_18 = &arg_8
int32_t result = sub_142c64d60(arg1, 0, memcpy(*arg1 + 0xaac, arg3, arg4.d), *arg1 + 0xa88)

if (result != 0)
    return result

int64_t rax = arg_8

if (rax != arg4 + 0x24)
    arg1[0xda] = arg4 + 0x24
    arg1[0xdb] = rax

arg1[0xd9] = 0
return 0
