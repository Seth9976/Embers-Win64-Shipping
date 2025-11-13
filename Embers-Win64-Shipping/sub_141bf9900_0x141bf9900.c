// 函数: sub_141bf9900
// 地址: 0x141bf9900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr
int32_t r8_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_2 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_2[4]
    r8_1 = sub_140d30490(arg2, &arg_10, r8_2)
else
    r8_1 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
void* rdx_2 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
return sub_141bdf6a0(arg1, rdx_2, r8_1)
