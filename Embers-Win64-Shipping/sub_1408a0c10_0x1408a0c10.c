// 函数: sub_1408a0c10
// 地址: 0x1408a0c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = *(arg1 + 0x20)

if (((*(arg1 + 0x98) u>> 1).b & 1) == 0)
    *rax_1 = 0
    **(arg1 + 0x40) = 0
    int32_t* rax_5 = *(arg1 + 0x58)
    *rax_5 = 0
    return rax_5

int64_t rdx = *(arg1 + 0x80)
int32_t r8 = (*(arg1 + 0x88)).d
*rax_1 = rdx
**(arg1 + 0x40) = rdx
int32_t* rax_3 = *(arg1 + 0x58)
*rax_3 = r8
return rax_3
