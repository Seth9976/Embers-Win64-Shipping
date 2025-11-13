// 函数: sub_14197bbd0
// 地址: 0x14197bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].b == 0)
    return 

arg1[5].d += 1
int64_t r8_1 = arg1[4]
int64_t r9_1 = *(*arg1 + 8)
int64_t rax_6
int64_t rcx_1

if (r8_1 == 0)
    void* rax_7 = r9_1(arg1, arg2, r8_1)
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    void* rsi_2 = arg1[3]
    int64_t rbp_2 = sx.q(*(rsi_2 + 0x10))
    int32_t rax_8 = (rbp_2 + 1).d
    *(rsi_2 + 0x10) = rax_8
    
    if (rax_8 s> *(rsi_2 + 0x14))
        sub_1405a4d70(rsi_2 + 8)
    
    *(*(rsi_2 + 8) + (rbp_2 << 3)) = rax_7
    void* rax_10 = arg1[3]
    rcx_1 = sx.q(*(rax_10 + 0x10))
    rax_6 = *(rax_10 + 8)
else
    void* rax_2 = r9_1(arg1, arg2, r8_1)
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    void* rsi_1 = arg1[4]
    int64_t rbp_1 = sx.q(*(rsi_1 + 0x68))
    int32_t rax_3 = (rbp_1 + 1).d
    *(rsi_1 + 0x68) = rax_3
    
    if (rax_3 s> *(rsi_1 + 0x6c))
        sub_1405a4d70(rsi_1 + 0x60)
    
    *(*(rsi_1 + 0x60) + (rbp_1 << 3)) = rax_2
    void* rax_5 = arg1[4]
    rcx_1 = sx.q(*(rax_5 + 0x68))
    rax_6 = *(rax_5 + 0x60)

int64_t* rcx_3 = *(rax_6 + (rcx_1 << 3) - 8)
arg1[4] = rcx_3
(*(*rcx_3 + 0x10))()
