// 函数: sub_141d36da0
// 地址: 0x141d36da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)
int64_t rax_1 = (*(*rcx + 0x10))(rcx)
void* r8 = arg2[2]
void* rcx_1 = &arg2[4]

if (r8 != 0)
    rcx_1 = r8

int64_t rdx = *rcx_1
int64_t result = (*arg2)((*(rdx + 8))(rcx_1, rdx, r8), rax_1)

if (*arg2 == 0)
    return result

void* rax_3 = arg2[2]
void* rcx_3 = &arg2[4]

if (rax_3 != 0)
    rcx_3 = rax_3

return (*(*rcx_3 + 0x10))(rcx_3)
