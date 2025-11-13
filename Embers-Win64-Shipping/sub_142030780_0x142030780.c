// 函数: sub_142030780
// 地址: 0x142030780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142030a40(arg1, arg2, arg3)
(*(*arg1 + 0x840))(arg1, data_143f40498)
void* const rdx_1

if (arg1[0x47] == 0)
    rdx_1 = nullptr
else
    void* rax_1 = sub_1424bf010()
    
    if (rax_1 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = arg1[0x47]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rdx_1 = nullptr

if (rdx_1 != 0)
    if (arg1[0x47] != 0)
        sub_1424bf010()
    
    sub_1424bfe50()
else
    arg1[0x47] = sub_1424bfe50()

sub_142003490()
void arg_8
sub_1405d4d00(&data_143a2df80, &arg_8, arg1, sub_14201b398)
sub_142003490()
void*** rax_5 = sub_140a84c80(0, 0x30, 0)

if (rax_5 != 0)
    *rax_5 = &data_142dc0378
    sub_140d3a3a0(&rax_5[1], arg1)
    rax_5[2] = sub_14201b3bc
    rax_5[4] = sub_140a387b0()
    *rax_5 = &data_142dc03d0

if (rax_5 != 0)
    sub_140599630(&data_143a2df98, 1)
    (*rax_5)[6](rax_5, &arg_8)
    int64_t rbp_1 = sx.q(data_143a2dfa0.d)
    int32_t rax_8 = (rbp_1 + 1).d
    data_143a2dfa0.d = rax_8
    
    if (rax_8 s> data_143a2dfa0:4.d)
        sub_1405a4f90(&data_143a2df98)
    
    void** rax_11 = (rbp_1 << 4) + data_143a2df98
    *rax_11 = rax_5
    rax_11[1].d = 3

sub_142003490()
void*** rax_12 = sub_140a84c80(0, 0x30, 0)

if (rax_12 != 0)
    *rax_12 = &data_142e33878
    sub_140d3a3a0(&rax_12[1], arg1)
    rax_12[2] = sub_14201b3a4
    rax_12[4] = sub_140a387b0()
    *rax_12 = &data_142e338d0

if (rax_12 != 0)
    sub_140599630(&data_143a2dfb0, 1)
    (*rax_12)[6](rax_12, &arg_8)
    int64_t rbp_2 = sx.q(data_143a2dfb8.d)
    int32_t rax_15 = (rbp_2 + 1).d
    data_143a2dfb8.d = rax_15
    
    if (rax_15 s> data_143a2dfb8:4.d)
        sub_1405a4f90(&data_143a2dfb0)
    
    void** rax_18 = (rbp_2 << 4) + data_143a2dfb0
    *rax_18 = rax_12
    rax_18[1].d = 3

sub_142003490()
sub_1405d4d00(&data_143a2dfc8, &arg_8, arg1, sub_14201b3b0)
sub_142003490()
void** result = sub_140a84c80(0, 0x30, 0)
void** result_1 = result

if (result != 0)
    *result_1 = &data_142e33878
    sub_140d3a3a0(&result_1[1], arg1)
    result_1[2] = sub_14201b3c8
    result_1[4] = sub_140a387b0()
    result = &data_142e338d0
    *result_1 = &data_142e338d0

if (result_1 != 0)
    sub_140599630(&data_143a2dfe0, 1)
    (*(*result_1 + 0x30))(result_1, &arg_8)
    int64_t rdi_1 = sx.q(data_143a2dfe8.d)
    int32_t rax_21 = (rdi_1 + 1).d
    data_143a2dfe8.d = rax_21
    
    if (rax_21 s> data_143a2dfe8:4.d)
        sub_1405a4f90(&data_143a2dfe0)
    
    result = (rdi_1 << 4) + data_143a2dfe0
    *result = result_1
    result[1].d = 3

return result
