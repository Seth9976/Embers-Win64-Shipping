// 函数: sub_14064adc0
// 地址: 0x14064adc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_18 = 0
int64_t var_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rdx_4 = &var_18
void* rcx_2 = arg_10

if (rax_3 != 0)
    rdx_4 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
char result = sub_14062b790(rcx_2, rdx_4)
int64_t rcx_3 = var_18
*arg3 = result

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
