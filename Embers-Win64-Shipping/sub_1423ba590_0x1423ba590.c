// 函数: sub_1423ba590
// 地址: 0x1423ba590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14333d520
sub_1423c0530()

if (sub_140d31640() != 0)
    void*** arg_10 = arg1
    EnterCriticalSection(&data_143f5a7c8)
    int32_t arg_8
    sub_1423b8450(&data_143f5a7f0, &arg_8, &arg_10, nullptr)
    LeaveCriticalSection(&data_143f5a7c8)
    return arg1

char rax_3 = (*arg1)[1](arg1)

if (rax_3 != 2)
    int64_t rsi_1 = sx.q(data_143f5a7c0.d)
    char var_10_1 = rax_3
    int32_t rax_4 = (rsi_1 + 1).d
    data_143f5a7c0.d = rax_4
    
    if (rax_4 s> data_143f5a7c0:4.d)
        sub_1405a4f90(&data_143f5a7b8)
    
    *(data_143f5a7b8 + rsi_1 * 0x10) = arg1.o

return arg1
