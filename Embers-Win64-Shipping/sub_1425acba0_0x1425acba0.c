// 函数: sub_1425acba0
// 地址: 0x1425acba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
void* rcx_1 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
void* result = sub_14235eaa0(rcx_1)
*arg3 = result
return result
