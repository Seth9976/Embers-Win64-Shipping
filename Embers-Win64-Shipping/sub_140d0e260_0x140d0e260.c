// 函数: sub_140d0e260
// 地址: 0x140d0e260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(*arg2 + 8)

if (*(arg1 + 0x78) != 0 && (*(*rsi + 0x68))(rsi) != 0)
    int64_t* rcx_1 = *(arg1 + 0x78)
    char rax_4 = (*(*rcx_1 + 0x280))(rcx_1, rsi, zx.q(*arg3))
    *arg3 = rax_4
    return rax_4

void* rcx_2 = *(arg1 + 0x78)

if (rcx_2 != 0)
    char rax_5 = rsi[5].b
    
    if ((rax_5 & 3) != 0)
        int64_t arg_8
        
        if ((rax_5 & 1) == 0)
            uint32_t rsi_1 = zx.d(*arg3)
            void arg_10
            
            if (sub_140be1e00(rcx_2, zx.q(rsi_1)) == 0)
                arg_8 = 0
                arg_8 = 0
            else
                arg_8 = *sub_140bdece0(*(arg1 + 0x78), &arg_10, zx.q(rsi_1))
            int64_t* rcx_11 = *(*arg2 + 8)
            return (*(*rcx_11 + 0x140))(rcx_11, &arg_8)
        
        arg_8 = 0
        int64_t* rcx_3 = *(*arg2 + 8)
        (*(*rcx_3 + 0x140))(rcx_3, &arg_8)
        int64_t* rcx_4 = *(arg1 + 0x78)
        
        if (((rcx_4[1].d u>> 0xa).b & 1) != 0)
            (*(*rsi + 0x170))(rsi, rcx_4)
            rcx_4 = *(arg1 + 0x78)
        
        int64_t rcx_6 = sx.q(sub_140bddcb0(rcx_4, arg_8, 1))
        void* rax_12 = *(arg1 + 0x78)
        
        if (rcx_6.d != 0xffffffff)
            char rax_15 = *(*(rax_12 + 0x40) + rcx_6 * 0x10 + 8)
            *arg3 = rax_15
            return rax_15
        
        char rax_13 = sub_140bdeca0(rax_12)
        *arg3 = rax_13
        return rax_13

int64_t* r9 = *(*arg2 + 8)
int64_t* rcx_12 = r9[1]
char* rdx_7 = *rcx_12

if (&rdx_7[1] u> rcx_12[1])
    jump(*(*r9 + 0x150))

*arg3 = *rdx_7
int64_t* rax_24 = r9[1]
*rax_24 += 1
return rax_24
