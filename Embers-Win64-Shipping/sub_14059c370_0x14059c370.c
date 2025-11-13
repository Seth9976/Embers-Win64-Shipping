// 函数: sub_14059c370
// 地址: 0x14059c370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x20, 0)

if (rax != 0)
    *rax = &data_142d40dc0
    rax[1] = sub_140599070
    rax[3] = sub_140a387b0()
    *rax = &data_142d40e18

void arg_8

if (rax != 0)
    sub_140599630(&data_14399ff28, 1)
    (*rax)[6](rax, &arg_8)
    int64_t rdi_1 = sx.q(data_14399ff30)
    int32_t rax_3 = (rdi_1 + 1).d
    bool cond:0_1 = rax_3 s<= data_14399ff34
    data_14399ff30 = rax_3
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399ff28)
    
    void** rax_6 = (rdi_1 << 4) + data_14399ff28
    *rax_6 = rax
    rax_6[1].d = 2

void*** rax_7 = sub_140a84c80(0, 0x20, 0)

if (rax_7 != 0)
    *rax_7 = &data_142d40dc0
    rax_7[1] = sub_140598880
    rax_7[3] = sub_140a387b0()
    *rax_7 = &data_142d40e18

if (rax_7 != 0)
    sub_140599630(&data_14399ff40, 1)
    (*rax_7)[6](rax_7, &arg_8)
    int64_t rdi_2 = sx.q(data_14399ff48)
    int32_t rax_10 = (rdi_2 + 1).d
    bool cond:1_1 = rax_10 s<= data_14399ff4c
    data_14399ff48 = rax_10
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_14399ff40)
    
    void** rax_13 = (rdi_2 << 4) + data_14399ff40
    *rax_13 = rax_7
    rax_13[1].d = 2

void*** rax_14 = sub_140a84c80(0, 0x20, 0)

if (rax_14 != 0)
    *rax_14 = &data_142d40dc0
    rax_14[1] = sub_140599080
    rax_14[3] = sub_140a387b0()
    *rax_14 = &data_142d40e18

if (rax_14 != 0)
    sub_140599630(&data_14399ff58, 1)
    (*rax_14)[6](rax_14, &arg_8)
    int64_t rdi_3 = sx.q(data_14399ff60)
    int32_t rax_17 = (rdi_3 + 1).d
    bool cond:2_1 = rax_17 s<= data_14399ff64
    data_14399ff60 = rax_17
    
    if (not(cond:2_1))
        sub_1405a4f90(&data_14399ff58)
    
    void** rax_20 = (rdi_3 << 4) + data_14399ff58
    *rax_20 = rax_14
    rax_20[1].d = 2

void*** result = sub_140a84c80(0, 0x20, 0)
void** result_1 = result

if (result != 0)
    *result = &data_142d40dc0
    result_1[1] = sub_140598870
    result = sub_140a387b0()
    result_1[3] = result
    *result_1 = &data_142d40e18

if (result_1 != 0)
    sub_140599630(&data_14399ff70, 1)
    (*(*result_1 + 0x30))(result_1, &arg_8)
    int64_t rdi_4 = sx.q(data_14399ff78)
    int32_t rax_22 = (rdi_4 + 1).d
    bool cond:3_1 = rax_22 s<= data_14399ff7c
    data_14399ff78 = rax_22
    
    if (not(cond:3_1))
        sub_1405a4f90(&data_14399ff70)
    
    result = (rdi_4 << 4) + data_14399ff70
    *result = result_1
    result[1].d = 2

return result
