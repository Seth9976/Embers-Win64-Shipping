// 函数: sub_1406a97c0
// 地址: 0x1406a97c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg2

if ((*(arg1 + 0x10) & 0x100) != 0)
    rdi = std::ctype<char>::tolower(*(*(arg1 + 0x18) + 8))

void* rbx_1 = *(arg1 + 8)
int64_t rcx_2 = *(rbx_1 + 0x28)

if (rcx_2 == 0)
    int64_t rax_2 = j_sub_140a82f30(0x20)
    rcx_2 = rax_2
    
    if (rax_2 == 0)
        rcx_2 = 0
    else
        __builtin_memset(rax_2, 0, 0x20)
    
    *(rbx_1 + 0x28) = rcx_2

uint32_t rdx = zx.d(rdi)
char* rcx_3 = rcx_2 + (zx.q(rdx) u>> 3)
char result = *rcx_3 | (1 << ((rdx & 7) u% 0x20)).b
*rcx_3 = result
return result
