// 函数: sub_14282b330
// 地址: 0x14282b330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x18)

if (rax_1 != 0)
    *(rax_1 + 8) = 1

int32_t* rax = *(arg1 + 0x20)

if (rax != 0)
    *rax = 1

int32_t* result = *(arg1 + 0x28)

if (result != 0)
    *result = 1

return result
