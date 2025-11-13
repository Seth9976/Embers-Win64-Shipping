// 函数: sub_142ac4860
// 地址: 0x142ac4860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x80)

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t* rcx_1 = *(arg1 + 0x88)

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = *(arg1 + 0x90)

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = *(arg1 + 0x98)

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

__builtin_memset(arg1 + 0x80, 0, 0x20)
*(arg1 + 0x78) = 0
return 0
