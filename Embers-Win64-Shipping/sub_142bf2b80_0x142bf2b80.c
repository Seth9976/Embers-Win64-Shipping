// 函数: sub_142bf2b80
// 地址: 0x142bf2b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 4) == 0)
    return 

int64_t rax = *(arg1 + 0xb8)

if (rax != 0)
    rax(*(arg1 + 0x78))

if (arg2 == 0)
    void* rcx_1 = *(arg1 + 0x10)
    *(arg1 + 0x38) = *(rcx_1 + 0x38)
    *(arg1 + 0x78) = *(rcx_1 + 0x78)
    *(arg1 + 0xb8) = 0
else
    *(arg1 + 0x38) = arg2
    *(arg1 + 0x78) = arg3
    *(arg1 + 0xb8) = arg4
