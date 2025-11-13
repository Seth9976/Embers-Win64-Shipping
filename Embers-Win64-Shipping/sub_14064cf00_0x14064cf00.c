// 函数: sub_14064cf00
// 地址: 0x14064cf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
void* rcx_1 = arg_10
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
*arg3 = sub_14062f600(rcx_1)
return result
