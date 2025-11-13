// 函数: sub_1417b4fb0
// 地址: 0x1417b4fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_2

if ((*(arg3 + 0x28) & 1) == 0)
    rcx_2 = *arg2
else
    int64_t* arg_18
    int64_t* rax_2 = (**arg1)(arg1, &arg_18)
    
    if (arg2 != rax_2)
        int64_t* rcx = *arg2
        *arg2 = *rax_2
        *rax_2 = 0
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
    
    int64_t* rcx_1 = arg_18
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
    
    rcx_2 = *arg2

jump(*(*rcx_2 + 0x60))
