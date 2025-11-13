// 函数: sub_141c6cda0
// 地址: 0x141c6cda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) s<= 0xffffffff)
    sub_140775b10(arg1 + 0x28, 0)

int32_t rax = *(arg1 + 0x44)
*(arg1 + 0x40) = 0

if (rax s< 0 && rax != 0)
    sub_140775b10(arg1 + 0x38, 0)

int32_t rax_1 = *(arg1 + 0x54)
*(arg1 + 0x50) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_140775b10(arg1 + 0x48, 0)

int32_t result = *(arg1 + 0x64)
*(arg1 + 0x60) = 0

if (result s< 0 && result != 0)
    result = sub_140775b10(arg1 + 0x58, 0)

int64_t* rcx_4 = *(arg1 + 0x18)

if (rcx_4 != 0)
    *(arg1 + 0x18) = 0
    result = (**rcx_4)(rcx_4, 1)

int64_t* rcx_5 = *(arg1 + 0x20)

if (rcx_5 == 0)
    return result

*(arg1 + 0x20) = 0
return (**rcx_5)(rcx_5, 1)
