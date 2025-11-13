// 函数: sub_141ff4780
// 地址: 0x141ff4780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0

if (arg2[8].d s>= arg4)
    int64_t* rcx = arg2[0xe]
    
    if (rcx != 0)
        bool rax_2 = (*(*rcx + 0x78))(rcx) == 0
        *arg1 |= rax_2
        int64_t* rcx_1 = arg2[0xe]
        char rax_4
        char rcx_2
        rax_4, rcx_2 = (*(*rcx_1 + 0x98))(rcx_1)
        *(arg1 + 1) = arg3
        *arg1 |= sbb.b(rcx_2, rcx_2, rax_4 != 0) & 2
    
    int64_t* rcx_3 = arg2[1]
    char* rdx = *rcx_3
    
    if (&rdx[1] u> rcx_3[1])
        (*(*arg2 + 0x150))(arg2, arg1, 1)
    else
        *arg1 = *rdx
        int64_t* rax_7 = arg2[1]
        *rax_7 += 1
    
    int64_t* rcx_5 = arg2[1]
    char* rdx_2 = *rcx_5
    
    if (&rdx_2[1] u> rcx_5[1])
        (*(*arg2 + 0x150))(arg2, arg1 + 1, 1)
    else
        *(arg1 + 1) = *rdx_2
        int64_t* rax_11 = arg2[1]
        *rax_11 += 1

return arg1
