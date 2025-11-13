// 函数: sub_140744650
// 地址: 0x140744650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = data_143cdf974 != 0

if (data_143cdf974 != 0)
    char arg_8
    char* var_20_1 = &arg_8
    arg_8 = 0
    void*** (* var_28)() = sub_14074c7c0
    void* rax_1 = sub_140a756e0(&var_28, &data_14396eb50)
    EnterCriticalSection(&data_143cdfd68)
    
    if (arg2 == 0)
        int64_t rsi_1 = sx.q(*(rax_1 + 0x38))
        int32_t rax_3 = (rsi_1 + 1).d
        *(rax_1 + 0x38) = rax_3
        
        if (rax_3 s> *(rax_1 + 0x3c))
            sub_1405a4f90(rax_1 + 0x30)
        
        int64_t* rsi_3 = (rsi_1 << 4) + *(rax_1 + 0x30)
        *rsi_3 = 0
        int32_t rdi_1 = (data_143cdfda8.q).d
        int64_t r14_1 = data_143cdfda0
        rsi_3[1].d = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(rsi_3, rdi_1, 0)
            memcpy(*rsi_3, r14_1, rdi_1 * 2)
        else
            *(rsi_3 + 0xc) = 0
        
        sub_140a53700(rax_1 + 0x10, &data_143cdfda0)
    else
        sub_14076f920(rax_1, sub_140851500(arg2))
    
    LeaveCriticalSection(&data_143cdfd68)

return arg1
