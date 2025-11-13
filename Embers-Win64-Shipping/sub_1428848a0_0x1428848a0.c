// 函数: sub_1428848a0
// 地址: 0x1428848a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rcx = 1

if ((*arg1 & 0x20) == 0)
    return 0xfffffffe

void* rax_1 = *(arg1 + 0x18)

if (rax_1 != 0)
    int32_t rax_2
    rax_2, arg3 = sub_14288d630(rax_1, arg2, 1, arg3)
    rcx = rax_2

void* rax_3 = *(arg1 + 0x20)

if (rax_3 != 0)
    rcx = sub_14288df90(rax_3, arg2, 1, arg3)

int64_t result
result.b = rcx s> 0
return result
