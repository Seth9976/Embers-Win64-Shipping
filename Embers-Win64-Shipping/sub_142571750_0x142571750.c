// 函数: sub_142571750
// 地址: 0x142571750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_1c
int32_t var_1c_1 = var_1c & 0xfffffffe
bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_28 = 0
int32_t var_20 = 0x40000000
char var_24 = 1

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_2 = *(arg2 + 0x20)
int128_t var_18 = var_28.o
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
char result = (*(*arg1 + 0x790))(arg1, &var_18)

if (result == 0)
    sub_140be4120(u"ServerViewSelf_Validate")
    return result

int64_t rax_4 = *arg1
var_18 = var_28.o
return (*(rax_4 + 0x798))(arg1, &var_18)
