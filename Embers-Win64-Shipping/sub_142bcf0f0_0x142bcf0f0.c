// 函数: sub_142bcf0f0
// 地址: 0x142bcf0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x28)

if (*(arg1 + 0x59) != 0)
    int64_t rcx = sx.q(*(rbx + 2))
    char* r11_1 = *(rbx + 0x10)
    int32_t* r10_1 = *(rbx + 8) + (rcx << 3)
    *r10_1 = arg2 s>> 0xa
    int64_t rax
    rax.b = arg4 == 0
    r10_1[1] = arg3 s>> 0xa
    rax.b += 1
    r11_1[rcx] = rax.b

*(rbx + 2) += 1
