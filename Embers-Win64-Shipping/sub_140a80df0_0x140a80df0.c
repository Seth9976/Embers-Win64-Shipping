// 函数: sub_140a80df0
// 地址: 0x140a80df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a6ce70(arg1)
void arg_8
int32_t* result

if (*(arg1 + 0x140) != *(arg1 + 0x16c))
    result = sub_140960120(arg1 + 0x138, &arg_8, arg2)

if ((*(arg1 + 0x140) == *(arg1 + 0x16c) || *result != 0xffffffff)
        && *sub_140960120(arg1 + 0x188, &arg_8, arg2) == 0xffffffff)
    result.b = 1
    return result

result.b = 0
return result
