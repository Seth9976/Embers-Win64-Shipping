// 函数: sub_1418f8550
// 地址: 0x1418f8550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa0) != 0)
    return 

int64_t r8_1 = *(arg1 + 0x80)

if (r8_1 != 0)
    sub_1418be030(*(arg1 + 0x10) + 0x3b0, 4, r8_1)
    __builtin_memset(arg1 + 0x80, 0, 0x14)

int64_t* rdi_1 = *(arg1 + 0x98)

if (rdi_1 == arg1 + 0x80)
    return 

int64_t r8_2 = *rdi_1

if (r8_2 != 0)
    sub_1418be030(*(arg1 + 0x10) + 0x3b0, 4, r8_2)
    __builtin_memset(rdi_1, 0, 0x14)
