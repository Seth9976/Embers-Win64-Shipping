// 函数: sub_14190d1b0
// 地址: 0x14190d1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x20)
void* rcx = arg1 + 0x30

if (rax != 0)
    rcx = rax

int64_t result = (*(arg1 + 0x10))((*(*rcx + 8))(rcx))

if (*(arg1 + 0x10) == 0)
    return result

void* rax_3 = *(arg1 + 0x20)
void* rcx_2 = arg1 + 0x30

if (rax_3 != 0)
    rcx_2 = rax_3

jump(*(*rcx_2 + 0x10))
