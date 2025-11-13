// 函数: sub_140ca6bb0
// 地址: 0x140ca6bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x25] == 0)
    return 

void* rsi_1 = *(*arg2 + 8)
sub_140bdef80(arg1)
char rax_2 = *(rsi_1 + 0x28)

if ((rax_2 & 3) != 0 && (rax_2 & 0x10) == 0)
    int64_t rax_4 = (*(*arg1 + 0x380))(arg1)
    return sub_140ca6840(arg1[0x25], arg2, arg1[0x24], rax_4) __tailcall

if (*(rsi_1 + 0x30) != 0)
    int64_t* rcx_3 = arg1[8]
    int64_t rax_7
    
    if (rcx_3 == 0)
        rax_7 = 0
    else
        rax_7 = (*(*rcx_3 + 0x148))(rcx_3)
    
    int64_t* rcx_4 = arg1[0x25]
    sub_140ca4a60(rcx_4, arg2, arg1[0x24], rcx_4, rax_7)
    return 

int64_t* rcx_5 = arg1[0x25]
(*(*rcx_5 + 0x280))(rcx_5, arg2, arg1[0x24])
