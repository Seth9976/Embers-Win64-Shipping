// 函数: sub_140ff5290
// 地址: 0x140ff5290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x17ce0)

if (*(arg1 + 0x17d00) != 0)
    void* rax_1 = *(arg1 + 0x17d18)
    
    if (rax_1 != 0)
        *(rax_1 + 0x1c) += 1
        void* rax_2 = *(arg1 + 0x17d18)
        *(rax_2 + 0x20) = 1
        *(rax_2 + 0x24) = 1
        *(rax_2 + 0x28) = 1

int64_t rdx = *(rsi + 0xc8)

if (*(arg1 + 0x19b8) != rdx)
    *(arg1 + 0x19b8) = rdx
    int64_t* rcx = *(arg1 + 0x170)
    (*(*rcx + 0x228))(rcx, arg4, 0, 0)

if (*(rsi + 0xc0) != 0)
    (*(*(arg1 - 0x18) + 0x758))(arg1 - 0x18)

sub_140fd68d0(arg1 - 0x18, rsi)
int64_t* rcx_3 = *(arg1 + 0x138)
(*(*rcx_3 + 0x150))(rcx_3, *(arg2 + 0x38), zx.q(arg3))

if (*(arg1 + 0x19b8) != 0)
    int64_t* rcx_4 = *(arg1 + 0x170)
    *(arg1 + 0x19b8) = 0
    (*(*rcx_4 + 0x228))(rcx_4, 0, 0, 0)

return sub_140fdca30(arg1 - 0x18) __tailcall
