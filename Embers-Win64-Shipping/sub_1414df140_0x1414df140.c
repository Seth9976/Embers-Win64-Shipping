// 函数: sub_1414df140
// 地址: 0x1414df140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_14139bef0(arg2)
int32_t rcx_1 = *(arg1 + 0xb8)
void* r9 = *(arg1 + 0x10)
int64_t* r8 = *(arg1 + 8)
uint128_t zmm6

if (rcx_1 == 1)
    return sub_141394df0(rax, arg2, r8, r9, zmm6, 0)

if (rcx_1 != 2)
    return sub_141395b30(rax, arg2, r8, r9, 0)

return sub_141395490(rax, arg2, r8, r9, zmm6, 0)
