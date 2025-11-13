// 函数: sub_141d8a020
// 地址: 0x141d8a020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405a46b0(&data_1439aa970, arg1)
void** result = (*(*(arg1 + 0x10) + 0x40))(arg1 + 0x10)

if (result.b != 0)
    int32_t var_10_1 = 0
    result = sub_140a84c80(0, 0x30, 0)
    void** result_1 = result
    
    if (result != 0)
        result_1[1] = arg1
        *result_1 = &data_142da2598
        *(result_1 + 0x10) = sub_141d8a000.o
        result_1[5] = sub_140a387b0()
        result = &data_142da25f0
        *result_1 = &data_142da25f0
    
    if (result_1 != 0)
        sub_140599630(&data_1439aa970, 1)
        void arg_8
        (*(*result_1 + 0x30))(result_1, &arg_8)
        int64_t rdi_1 = sx.q(data_1439aa978)
        int32_t rax_3 = (rdi_1 + 1).d
        bool cond:0_1 = rax_3 s<= data_1439aa97c
        data_1439aa978 = rax_3
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_1439aa970)
        
        result = (rdi_1 << 4) + data_1439aa970
        *result = result_1
        result[1].d = 3

return result
