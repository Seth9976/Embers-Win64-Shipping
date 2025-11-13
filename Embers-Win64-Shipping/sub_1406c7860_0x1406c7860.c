// 函数: sub_1406c7860
// 地址: 0x1406c7860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3 = *(arg1 + 0x260)
int32_t rax_6 = *(arg1 + 0x260) + 1
*(arg1 + 0x260) = rax_6

if (rax_6 s> *(arg1 + 0x264))
    sub_1405a4e80(arg1 + 0x58, rax_3)

void* rax_13 = *(arg1 + 0x258)
void* var_38

if (rax_13 == 0)
    var_38 = arg1 + 0x58
else
    var_38 = rax_13

void* rcx_3 = var_38 + sx.q(rax_3) * 0x20
__builtin_memcpy(rcx_3, arg2, 0x10)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
return sub_1406c6360(rcx_3 + 0x10, arg3)
