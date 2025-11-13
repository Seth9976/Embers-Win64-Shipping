// 函数: sub_1426cce70
// 地址: 0x1426cce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1426daeb0(arg2)

if (rax == 0)
    *(arg1 + 0x30) = rax
    *(arg1 + 0x38) = rax.b
    return rax

float zmm0 = sub_1426d7d40(rax, arg3, *(arg1 + 0x28))
*(arg1 + 0x30) = zmm0
int32_t rax_1 = *(arg1 + 0x30)
*(arg1 + 0x34) = rax_1
*(arg1 + 0x38) = zmm0 > 0f
return rax_1
