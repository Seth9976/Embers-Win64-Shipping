// 函数: sub_140b1df20
// 地址: 0x140b1df20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af4b30()
void**** result = sub_140a84c80(0, 0x20, 0)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e769e8
    result_1[2] = sub_140a387b0()
    result = &data_142e76a40
    *result_1 = &data_142e76a40

if (result_1 != 0)
    sub_140599630(&data_1439a04c0, 1)
    void arg_8
    (*result_1)[6](result_1, &arg_8)
    int64_t rsi_1 = sx.q(data_1439a04c8)
    int32_t rax_2 = (rsi_1 + 1).d
    data_1439a04c8 = rax_2
    
    if (rax_2 s> data_1439a04cc)
        sub_1405a4f90(&data_1439a04c0)
    
    result = (rsi_1 << 4) + data_1439a04c0
    *result = result_1
    result[1].d = 2

return result
