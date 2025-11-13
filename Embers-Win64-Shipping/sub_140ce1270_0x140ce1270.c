// 函数: sub_140ce1270
// 地址: 0x140ce1270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x78)
(*(*rdi + 0x70))(rdi)
char rax_2 = sub_140cc16a0(&rdi[2], sub_140d41340())
void* rcx_2

if (rax_2 != 0)
    rcx_2 = rdi[2]

int32_t rcx_6

if (rax_2 == 0 || rcx_2 == 0 || (*(*(rcx_2 + 0x10) + 0xd0) & 8) == 0)
    (*(*rdi + 0x108))(rdi)
    rcx_6 = 0
else
    int32_t rbx_1 = *(rcx_2 + 0x58)
    int32_t rax_5 = (*(*rdi + 0x108))(rdi)
    rcx_6 = (rax_5 - 1 + rbx_1) & neg.d(rax_5)

*(rdi + 0x4c) = rcx_6
*(arg1 + 0x3c) = 0x10
*(arg1 + 0x40) |= 0x8000000000000
return 0x8000000000000
