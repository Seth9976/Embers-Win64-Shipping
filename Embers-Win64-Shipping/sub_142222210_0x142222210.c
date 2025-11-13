// 函数: sub_142222210
// 地址: 0x142222210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0xc)
char result = r8 & 1

if (result == arg2)
    return result

void* arg_8 = arg1
void** var_10 = &arg_8
*(arg1 + 0xc) = (r8 & 0xfe) | arg2
int64_t (* var_18)(int64_t* arg1, int64_t* arg2) = sub_142211df0
sub_14226a4e0(arg1 + 0xf0, &var_18)
return sub_142227570(arg1) __tailcall
