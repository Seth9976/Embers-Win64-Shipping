// 函数: sub_14209b0a0
// 地址: 0x14209b0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(arg1 + 0x280)).b

if ((result & 1) == 0)
    return result

if ((result & 4) != 0)
    if (*(arg1 + 0x298) s> 0)
        sub_1405a9f90(arg1 + 0x290, 0)
else if (*(arg1 + 0x2b8) s> 0)
    sub_1405a9f90(arg1 + 0x2b0, 0)

void var_28
char r8 = sub_1423ddaf0(data_143f5b298, &var_28)
void* var_20

if (sub_141e80b60(&var_28) != 0)
    sub_141e7a8d0(var_20, 1, r8)
sub_141e71cd0(&var_28)
int32_t rax_1 = *(arg1 + 0x280)
int32_t rcx_9 = ((not.d(rax_1) ^ rax_1) & 4) ^ rax_1
*(arg1 + 0x280) = rcx_9
return sub_141dd7200(arg1, not.b((rcx_9 u>> 2).b) & 1) __tailcall
