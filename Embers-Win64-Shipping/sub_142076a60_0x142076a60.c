// 函数: sub_142076a60
// 地址: 0x142076a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b95cb0(arg1)
arg1[0x17].b = 0
*arg1 = &data_1432afe88
void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"AssetRegistry", 1)
j_sub_140b3db50()
int64_t* rax_1 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_1
int64_t* rax_2 = (*(rdx_1 + 0x48))(rax_1, rdx_1)
int64_t rdx_2 = *rax_2
uint64_t* rax_3 = (*(rdx_2 + 0x1a0))(rax_2, rdx_2)
void*** rax_4 = sub_140a84c80(0, 0x30, 0)

if (rax_4 != 0)
    *rax_4 = &data_142d3fe58
    rax_4[1] = arg1
    rax_4[2] = sub_142096040
    rax_4[4] = sub_140a387b0()
    *rax_4 = &data_142d3feb0

if (rax_4 != 0)
    sub_140599630(rax_3, 1)
    (*rax_4)[6](rax_4, &arg_8)
    int64_t rbp_1 = sx.q(rax_3[1].d)
    int32_t rax_7 = (rbp_1 + 1).d
    rax_3[1].d = rax_7
    
    if (rax_7 s> *(rax_3 + 0xc))
        sub_1405a4f90(rax_3)
    
    void** rax_10 = (rbp_1 << 4) + *rax_3
    *rax_10 = rax_4
    rax_10[1].d = 3

uint64_t* rax_12 = (*(*rax_2 + 0x1a8))(rax_2)
void*** rax_13 = sub_140a84c80(0, 0x30, 0)

if (rax_13 != 0)
    *rax_13 = &data_142d3fe58
    rax_13[1] = arg1
    rax_13[2] = sub_142096100
    rax_13[4] = sub_140a387b0()
    *rax_13 = &data_142d3feb0

if (rax_13 != 0)
    sub_140599630(rax_12, 1)
    (*rax_13)[6](rax_13, &arg_8)
    int64_t rbp_2 = sx.q(rax_12[1].d)
    int32_t rax_16 = (rbp_2 + 1).d
    rax_12[1].d = rax_16
    
    if (rax_16 s> *(rax_12 + 0xc))
        sub_1405a4f90(rax_12)
    
    void** rax_19 = (rbp_2 << 4) + *rax_12
    *rax_19 = rax_13
    rax_19[1].d = 3

uint64_t* rax_21 = (*(*rax_2 + 0x1b0))(rax_2)
void*** rax_22 = sub_140a84c80(0, 0x30, 0)

if (rax_22 != 0)
    rax_22[1] = arg1
    *rax_22 = &data_142d3fe58
    rax_22[2] = sub_1420961c0
    rax_22[4] = sub_140a387b0()
    *rax_22 = &data_142d3feb0

if (rax_22 != 0)
    sub_140599630(rax_21, 1)
    (*rax_22)[6](rax_22, &arg_8)
    int64_t rbp_3 = sx.q(rax_21[1].d)
    int32_t rax_25 = (rbp_3 + 1).d
    rax_21[1].d = rax_25
    
    if (rax_25 s> *(rax_21 + 0xc))
        sub_1405a4f90(rax_21)
    
    void**** rax_28 = (rbp_3 << 4) + *rax_21
    *rax_28 = rax_22
    rax_28[1].d = 3

return arg1
