// 函数: sub_1422d1ed0
// 地址: 0x1422d1ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x30) = arg3
*(arg1 + 0x28) = 0
int32_t rdi_1 = (arg3 + 7) s>> 3

if (rdi_1 s> *(arg1 + 0x2c))
    sub_1405c5510(arg1 + 0x20, rdi_1)

int32_t rax = *(arg1 + 0x28) + rdi_1
*(arg1 + 0x28) = rax

if (rax s> *(arg1 + 0x2c))
    sub_1405daba0(arg1 + 0x20)

return memcpy(*(arg1 + 0x20), arg2, rdi_1) __tailcall
