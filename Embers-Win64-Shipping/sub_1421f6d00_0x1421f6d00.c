// 函数: sub_1421f6d00
// 地址: 0x1421f6d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x20, 0)

if (rax != 0)
    *rax = &data_142ddc5f8
    rax[1] = sub_1421f7020
    rax[3] = sub_140a387b0()
    *rax = &data_142ddc650

void arg_8

if (rax != 0)
    sub_140599630(&data_143a30680, 1)
    (*rax)[6](rax, &arg_8)
    int64_t rdi_1 = sx.q(data_143a30688)
    int32_t rax_3 = (rdi_1 + 1).d
    bool cond:0_1 = rax_3 s<= data_143a3068c
    data_143a30688 = rax_3
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_143a30680)
    
    void**** rax_6 = (rdi_1 << 4) + data_143a30680
    *rax_6 = rax
    rax_6[1].d = 2

void*** rax_7 = sub_140a84c80(0, 0x20, 0)

if (rax_7 != 0)
    *rax_7 = &data_142ddc6a8
    rax_7[1] = sub_1421f6fa0
    rax_7[3] = sub_140a387b0()
    *rax_7 = &data_142ddc700

if (rax_7 != 0)
    sub_140599630(&data_143a306e0, 1)
    (*rax_7)[6](rax_7, &arg_8)
    int64_t rdi_2 = sx.q(data_143a306e8)
    int32_t rax_10 = (rdi_2 + 1).d
    bool cond:1_1 = rax_10 s<= data_143a306ec
    data_143a306e8 = rax_10
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_143a306e0)
    
    void**** rax_13 = (rdi_2 << 4) + data_143a306e0
    *rax_13 = rax_7
    rax_13[1].d = 2

void*** rax_14 = sub_140a84c80(0, 0x20, 0)

if (rax_14 != 0)
    *rax_14 = &data_142d43dd8
    rax_14[1] = sub_1421f6af0
    rax_14[3] = sub_140a387b0()
    *rax_14 = &data_142d43e30

if (rax_14 != 0)
    sub_140599630(&data_143a306f8, 1)
    (*rax_14)[6](rax_14, &arg_8)
    int64_t rdi_3 = sx.q(data_143a30700)
    int32_t rax_17 = (rdi_3 + 1).d
    bool cond:2_1 = rax_17 s<= data_143a30704
    data_143a30700 = rax_17
    
    if (not(cond:2_1))
        sub_1405a4f90(&data_143a306f8)
    
    void** rax_20 = (rdi_3 << 4) + data_143a306f8
    *rax_20 = rax_14
    rax_20[1].d = 2

void*** result = sub_140a84c80(0, 0x20, 0)
void** result_1 = result

if (result != 0)
    *result = &data_142d43dd8
    result_1[1] = sub_1421f6af0
    result = sub_140a387b0()
    result_1[3] = result
    *result_1 = &data_142d43e30

if (result_1 != 0)
    sub_140599630(&data_143a30788, 1)
    (*(*result_1 + 0x30))(result_1, &arg_8)
    int64_t rdi_4 = sx.q(data_143a30790)
    int32_t rax_22 = (rdi_4 + 1).d
    bool cond:3_1 = rax_22 s<= data_143a30794
    data_143a30790 = rax_22
    
    if (not(cond:3_1))
        sub_1405a4f90(&data_143a30788)
    
    result = (rdi_4 << 4) + data_143a30788
    *result = result_1
    result[1].d = 2

return result
