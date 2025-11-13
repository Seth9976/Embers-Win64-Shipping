// 函数: sub_1429d6190
// 地址: 0x1429d6190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*arg2 & 1) != 0)
    (*(*arg1 + 0x18))()

if ((*arg2 & 2) != 0)
    (*(*arg1 + 0x20))(arg1)

if ((*arg2 & 4) != 0)
    (*(*arg1 + 0x28))(arg1)

if ((*arg2 & 8) != 0)
    (*(*arg1 + 0x30))(arg1)

if ((*arg2 & 0x10) != 0)
    (*(*arg1 + 0x38))(arg1)

if ((*arg2 & 0x20) != 0)
    (*(*arg1 + 0x40))(arg1)

int32_t rdx = 6

if (*(arg1 + 0x1c) == 0)
    rdx = 4

int32_t* rcx_6 = arg1[1] + 0x14
int32_t arg_8
int32_t* rax_7 = &arg_8
arg_8 = rdx

if (*rcx_6 s>= rdx)
    rax_7 = rcx_6

int32_t result = *rax_7
*(arg1[2] + 0x14) = result
return result
