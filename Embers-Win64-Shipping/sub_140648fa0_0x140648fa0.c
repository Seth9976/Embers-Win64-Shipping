// 函数: sub_140648fa0
// 地址: 0x140648fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int32_t zmm1 = arg_10
void* rcx_2 = arg_18
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
char result = sub_140629d60(rcx_2, zmm1)
*arg3 = result
return result
