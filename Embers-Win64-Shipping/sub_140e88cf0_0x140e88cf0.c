// 函数: sub_140e88cf0
// 地址: 0x140e88cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0x439)

if (result != arg2)
    if (*(arg1 + 0x43a) != 0 && arg2 == 0 && result != 0 && *(arg1 + 0x438) == arg2)
        int64_t* rax
        
        if (arg3 == 0)
            int64_t* rcx = *(data_143e20d18 + 8)
            void arg_20
            rax = (*(*rcx + 0x18))(rcx, &arg_20)
        else
            int64_t arg_8
            rax = &arg_8
            arg_8 = *arg3
        
        result = (*(*(arg1 + 0x118) + 0xd8))(arg1 + 0x118, rax, 0, 0)
    
    *(arg1 + 0x439) = arg2

return result
