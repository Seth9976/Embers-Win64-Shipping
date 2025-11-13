// 函数: sub_140b71320
// 地址: 0x140b71320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

timeBeginPeriod(1)
sub_140b673e0()
j_sub_140b3db50()
void**** result = sub_140a84c80(0, 0x20, 0)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142e7ecd8
    result_1[1] = sub_140b70e50
    result_1[3] = sub_140a387b0()
    result = &data_142e7ed30
    *result_1 = &data_142e7ed30

if (result_1 != 0)
    sub_140599630(&data_143de8088, 1)
    void arg_8
    (*result_1)[6](result_1, &arg_8)
    int64_t rsi_1 = sx.q(data_143de8090)
    int32_t rax_2 = (rsi_1 + 1).d
    data_143de8090 = rax_2
    
    if (rax_2 s> data_143de8094)
        sub_1405a4f90(&data_143de8088)
    
    result = (rsi_1 << 4) + data_143de8088
    *result = result_1
    result[1].d = 2

return result
