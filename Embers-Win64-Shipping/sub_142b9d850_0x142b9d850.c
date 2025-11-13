// 函数: sub_142b9d850
// 地址: 0x142b9d850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

if (arg2 == 0)
    return zx.q((arg2 + 6).d)

int64_t rsi = *arg1
int32_t arg_8
void* rax_2 = sub_142b99860(rsi, 0xa8, &arg_8)
int32_t rcx_1 = arg_8

if (rcx_1 == 0)
    *(rax_2 + 0xa0) = arg1
    __builtin_memset(rax_2 + 0x40, 0, 0x18)
    *(rax_2 + 0x68) = 0
    *(rax_2 + 0x60) = rsi
    *(rax_2 + 0x5c) = 0xffffffff
    *(rax_2 + 0x90) = rsi
    __builtin_memset(rax_2 + 0x70, 0, 0x18)
    *(rax_2 + 0x8c) = 0xffffffff
    *(rax_2 + 0x98) = 0
    rcx_1 = arg_8

*arg2 = rax_2
return zx.q(rcx_1)
