// 函数: sub_140f473c0
// 地址: 0x140f473c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg2

if (*(arg1 + 0x5c0) == 0)
    arg2.b = 0
else
    int64_t* rcx = *(arg1 + 0x5b8)
    
    if (rcx == 0)
        arg2.b = 0
    else
        char rax_2
        rax_2, arg2 = (*(*rcx + 0x28))(rcx)
        
        if (rax_2 == 0)
            arg2.b = 0
        else
            arg2.b = 1

char rcx_1 = data_1439ae51d

if (arg2.b != 0)
    rcx_1 = data_1439ae51c

*result = rcx_1
return result
