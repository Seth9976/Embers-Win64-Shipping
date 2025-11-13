// 函数: sub_142bf2a60
// 地址: 0x142bf2a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 4) == 0)
    return 

int64_t rax = *(arg1 + 0xa8)

if (rax != 0)
    rax(*(arg1 + 0x68))

if (arg2 == 0)
    void* rcx_1 = *(arg1 + 0x10)
    *(arg1 + 0x28) = *(rcx_1 + 0x28)
    *(arg1 + 0x68) = *(rcx_1 + 0x68)
    *(arg1 + 0xa8) = 0
else
    *(arg1 + 0x28) = arg2
    *(arg1 + 0x68) = arg3
    *(arg1 + 0xa8) = arg4
