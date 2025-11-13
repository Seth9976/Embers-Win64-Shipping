// 函数: sub_142478780
// 地址: 0x142478780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
void* r8_2 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
uint64_t var_18[0x2]
uint64_t* rax_3 = sub_141dc5da0(arg1, &var_18, r8_2, arg4, arg5)
*arg3 = *rax_3
int32_t result = rax_3[1].d
arg3[1].d = result
return result
