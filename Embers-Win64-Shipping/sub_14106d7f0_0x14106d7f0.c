// 函数: sub_14106d7f0
// 地址: 0x14106d7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0)
    return 

EnterCriticalSection(arg1)
int32_t rax_1 = arg1->__offset(0x30).d
int32_t rbx_1 = 0

if (rax_1 s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        if (rbx_1 != rax_1 - 1)
            int64_t* rcx_1 = *arg2
            int64_t* arg_10
            (*(*rcx_1 + 0x10))(rcx_1, &arg_10)
            int64_t* rcx_2 = *(rsi_1 + arg1->__offset(0x28).q)
            (*(*rcx_2 + 8))(rcx_2, &arg_10)
            int64_t* rcx_3 = arg_10
            
            if (rcx_3 != 0)
                (**rcx_3)(rcx_3, 1)
        else
            int64_t* rcx = *(rsi_1 + arg1->__offset(0x28).q)
            (*(*rcx + 8))(rcx, arg2)
        
        rax_1 = arg1->__offset(0x30).d
        rbx_1 += 1
        rsi_1 = &rsi_1[1]
    while (rbx_1 s< rax_1)

LeaveCriticalSection(arg1)
