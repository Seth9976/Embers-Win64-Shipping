// 函数: sub_140cce820
// 地址: 0x140cce820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(*arg2 + 8)

if (*(arg1 + 0x80) != 0 && (*(*r14 + 0x68))(r14) != 0)
    int64_t* rcx_1 = *(arg1 + 0x78)
    int64_t rax_4 = (*(*rcx_1 + 0x168))(rcx_1, arg3)
    int64_t* rcx_2 = *(arg1 + 0x80)
    int64_t r9 = *rcx_2
    int64_t rax_5 = (*(r9 + 0x280))(rcx_2, r14, rax_4, r9)
    int64_t* rcx_3 = *(arg1 + 0x78)
    int64_t r9_1 = *rcx_3
    return (*(r9_1 + 0x148))(rcx_3, arg3, rax_5, r9_1)

char rax_7 = r14[5].b
int64_t arg_8

if ((rax_7 & 1) == 0)
    if ((rax_7 & 2) == 0)
        int64_t* rcx_16 = *(arg1 + 0x78)
        return (*(*rcx_16 + 0x88))(rcx_16, arg2, arg3, arg4)
    
    arg_8 = 0
    
    if (*(arg1 + 0x80) != 0)
        int64_t* rcx_11 = *(arg1 + 0x78)
        int64_t rax_19 = (*(*rcx_11 + 0x168))(rcx_11, arg3)
        void arg_10
        
        if (sub_140be1e00(*(arg1 + 0x80), rax_19) != 0)
            arg_8 = *sub_140bdece0(*(arg1 + 0x80), &arg_10, rax_19)
    
    int64_t* rcx_15 = *(*arg2 + 8)
    return (*(*rcx_15 + 0x140))(rcx_15, &arg_8)

void* rax_8 = *arg2
int64_t rsi_1 = 0
arg_8 = 0
int64_t* rcx_4 = *(rax_8 + 8)
(*(*rcx_4 + 0x140))(rcx_4, &arg_8)
int64_t* rcx_5 = *(arg1 + 0x80)

if (rcx_5 != 0)
    if (((rcx_5[1].d u>> 0xa).b & 1) != 0)
        (*(*r14 + 0x170))(r14, rcx_5)
        rcx_5 = *(arg1 + 0x80)
    
    int64_t rcx_7 = sx.q(sub_140bddcb0(rcx_5, arg_8, 1))
    void* rax_14 = *(arg1 + 0x80)
    
    if (rcx_7.d != 0xffffffff)
        rsi_1 = *(*(rax_14 + 0x40) + rcx_7 * 0x10 + 8)
    else
        rsi_1 = sub_140bdeca0(rax_14)

int64_t* rcx_10 = *(arg1 + 0x78)
return (*(*rcx_10 + 0x148))(rcx_10, arg3, rsi_1)
