// 函数: sub_141999f30
// 地址: 0x141999f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe0) != 0)
    return 0

int32_t rax = *(arg1 + 0xa4)
int64_t rdx

if (rax == 0)
    rdx = *(arg1 + 8)
else if (*(arg1 + 0xa8) != 0 && *(arg1 + 0xac) == 0 && *(arg1 + 0xb5) == 0)
    rdx = *(arg1 + 8)
else if (rax == 0 || *(arg1 + 0xa8) == 0 || *(arg1 + 0xac) == 0 || *(arg1 + 0xb5) != 0)
    rdx = *(arg1 + 8)
else
    rdx = *(arg1 + 8)

int64_t* rcx = data_143f0f180
int32_t result = (*(*rcx + 0x268))(rcx, rdx)
int64_t rdx_1 = *(arg1 + 0x10)

if (rdx_1 == *(arg1 + 8))
    return result

int64_t* rcx_1 = data_143f0f180
return (*(*rcx_1 + 0x268))(rcx_1, rdx_1) + result
