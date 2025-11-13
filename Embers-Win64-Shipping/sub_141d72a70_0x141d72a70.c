// 函数: sub_141d72a70
// 地址: 0x141d72a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = 0
void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    rax[1] = arg1
    *rax = &data_142d3fe58
    rax[2] = sub_141d7d8e0
    rax[4] = sub_140a387b0()
    *rax = &data_142d3feb0

void arg_8

if (rax != 0)
    sub_140599630(&data_14399fce8, 1)
    (*rax)[6](rax, &arg_8)
    int64_t rsi_1 = sx.q(data_14399fcf0)
    int32_t rax_3 = (rsi_1 + 1).d
    bool cond:0_1 = rax_3 s<= data_14399fcf4
    data_14399fcf0 = rax_3
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fce8)
    
    void** rax_6 = (rsi_1 << 4) + data_14399fce8
    *rax_6 = rax
    rax_6[1].d = 3

void** result = sub_140a84c80(0, 0x30, 0)
void** result_1 = result

if (result != 0)
    result_1[1] = arg1
    *result_1 = &data_142d3fe58
    result_1[2] = sub_141d7d1c0
    result_1[4] = sub_140a387b0()
    result = &data_142d3feb0
    *result_1 = &data_142d3feb0

if (result_1 != 0)
    sub_140599630(&data_1439aa970, 1)
    (*(*result_1 + 0x30))(result_1, &arg_8)
    int64_t rdi_1 = sx.q(data_1439aa978)
    int32_t rax_9 = (rdi_1 + 1).d
    bool cond:1_1 = rax_9 s<= data_1439aa97c
    data_1439aa978 = rax_9
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_1439aa970)
    
    result = (rdi_1 << 4) + data_1439aa970
    *result = result_1
    result[1].d = 3

return result
