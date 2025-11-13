// 函数: sub_141d3cf90
// 地址: 0x141d3cf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)
int64_t rax_1 = (*(*rcx + 0x10))(rcx)
void* rdx = *(arg1 + 0x20)
void* rcx_1 = arg1 + 0x30
int64_t arg_8 = arg2

if (rdx != 0)
    rcx_1 = rdx

int64_t rdx_1 = *rcx_1
return (*(arg1 + 0x10))((*(rdx_1 + 8))(rcx_1, rdx_1), &arg_8, rax_1)
