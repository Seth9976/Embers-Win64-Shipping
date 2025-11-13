// 函数: sub_140aa2490
// 地址: 0x140aa2490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_28)
int64_t rax = sub_140aae970()
void*** rax_1 = sub_140a84c80(0, 0x30, 0)

if (rax_1 != 0)
    rax_1[1] = rax
    *rax_1 = &data_142d3fe58
    rax_1[2] = sub_140ab57f0
    rax_1[4] = sub_140a387b0()
    *rax_1 = &data_142d3feb0

if (rax_1 != 0)
    sub_140599630(&data_14399fb80, 1)
    void arg_8
    (*rax_1)[6](rax_1, &arg_8)
    int64_t rdi_1 = sx.q(data_14399fb88)
    int32_t rax_4 = (rdi_1 + 1).d
    bool cond:0_1 = rax_4 s<= data_14399fb8c
    data_14399fb88 = rax_4
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fb80)
    
    void** rax_7 = (rdi_1 << 4) + data_14399fb80
    *rax_7 = rax_1
    rax_7[1].d = 3

return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_28)
