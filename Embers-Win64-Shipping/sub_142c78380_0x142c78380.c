// 函数: sub_142c78380
// 地址: 0x142c78380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142c77770(arg1, *arg1 + 0xa88, 0x71, 3)
void* rax = *arg1
*(rax + 0xaac) = 0
*(rax + 0xaae) = 0
int64_t arg_8
int64_t* var_18 = &arg_8
int32_t result = sub_142c64d60(arg1, 0, arg2, *arg1 + 0xa88)

if (result != 0)
    return result

int64_t rax_1 = arg_8

if (rax_1 != 0x27)
    arg1[0xda] = 0x27
    arg1[0xdb] = rax_1

arg1[0xd9] = 0
return 0
