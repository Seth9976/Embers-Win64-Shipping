// 函数: sub_142bcece0
// 地址: 0x142bcece0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x28)

if (*(arg1 + 0x5c) != 0)
    int64_t rcx = sx.q(*(rsi + 2))
    int32_t* rbx_1 = *(rsi + 8) + (rcx << 3)
    char* rdi_2 = *(rsi + 0x10) + rcx
    *rbx_1 = sub_142b96160(arg2) s>> 0x10
    rbx_1[1] = sub_142b96160(arg3) s>> 0x10
    int32_t rax
    rax.b = arg4 == 0
    rax.b += 1
    *rdi_2 = rax.b

*(rsi + 2) += 1
