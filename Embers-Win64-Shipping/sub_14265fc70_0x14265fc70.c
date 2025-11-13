// 函数: sub_14265fc70
// 地址: 0x14265fc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140d3a3a0(&arg_8, arg2)
int64_t rsi = sx.q(*(arg1 + 0x90))
int32_t rax = (rsi + 1).d
*(arg1 + 0x90) = rax

if (rax s> *(arg1 + 0x94))
    sub_1405a4d70(arg1 + 0x88)

*(*(arg1 + 0x88) + (rsi << 3)) = arg_8
int64_t result

if (*(arg1 + 0xa0) == 0)
    result.b = 0
else
    int64_t* rcx_3 = *(arg1 + 0x98)
    
    if (rcx_3 == 0)
        result.b = 0
    else if ((*(*rcx_3 + 0x28))(rcx_3).b == 0)
        result.b = 0
    else
        int64_t* rcx_4
        
        if (*(arg1 + 0xa0) == 0)
            rcx_4 = nullptr
        else
            rcx_4 = *(arg1 + 0x98)
        
        (*(*rcx_4 + 0x48))(rcx_4, arg1 - 0xe0, arg2, arg3)
        result.b = 1

return result
