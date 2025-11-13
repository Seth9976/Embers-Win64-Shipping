// 函数: sub_141ff4860
// 地址: 0x141ff4860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* rax = *arg2
void* rbp = *(rax + 8)

if (*(rbp + 0x40) s>= arg4)
    int64_t* rcx = *(rbp + 0x70)
    
    if (rcx != 0)
        bool rax_2 = (*(*rcx + 0x78))(rcx) == 0
        *arg1 |= rax_2
        int64_t* rcx_1 = *(rbp + 0x70)
        char rax_4
        char rcx_2
        rax_4, rcx_2 = (*(*rcx_1 + 0x98))(rcx_1)
        *(arg1 + 1) = arg3
        *arg1 |= sbb.b(rcx_2, rcx_2, rax_4 != 0) & 2
        rax = *arg2
    
    int64_t* r9 = *(rax + 8)
    int64_t* rcx_3 = r9[1]
    char* rdx = *rcx_3
    
    if (&rdx[1] u> rcx_3[1])
        (*(*r9 + 0x150))(r9, arg1, 1)
    else
        *arg1 = *rdx
        int64_t* rax_7 = r9[1]
        *rax_7 += 1
    
    int64_t* r9_1 = *(*arg2 + 8)
    int64_t* rcx_5 = r9_1[1]
    char* rdx_2 = *rcx_5
    
    if (&rdx_2[1] u> rcx_5[1])
        (*(*r9_1 + 0x150))(r9_1, arg1 + 1, 1)
    else
        *(arg1 + 1) = *rdx_2
        int64_t* rax_12 = r9_1[1]
        *rax_12 += 1

return arg1
