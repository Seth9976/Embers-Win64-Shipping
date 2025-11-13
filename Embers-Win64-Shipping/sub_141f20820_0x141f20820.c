// 函数: sub_141f20820
// 地址: 0x141f20820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee9b30(arg1, arg2)
int32_t var_10 = 0
void** result = sub_140a84c80(0, 0x30, 0)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_143271de8
    sub_140d3a3a0(&result_1[1], arg1)
    *(result_1 + 0x10) = sub_141f1d5b0.o
    result_1[5] = sub_140a387b0()
    result = &data_143271e40
    *result_1 = &data_143271e40

if (result_1 != 0)
    sub_140599630(&data_1439a0180, 1)
    void arg_10
    (*result_1)[6](result_1, &arg_10)
    int64_t rdi_1 = sx.q(data_1439a0188)
    int32_t rax_2 = (rdi_1 + 1).d
    bool cond:0_1 = rax_2 s<= data_1439a018c
    data_1439a0188 = rax_2
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_1439a0180)
    
    result = (rdi_1 << 4) + data_1439a0180
    *result = result_1
    result[1].d = 3

return result
