// 函数: sub_14106b7a0
// 地址: 0x14106b7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f04540
sub_140a4fc50(arg1[2])
int64_t* rcx_1 = data_143db18d0

if (rcx_1 == 0)
    sub_140a53c40()
    rcx_1 = data_143db18d0

(*(*rcx_1 + 0x60))(rcx_1, arg1[0x12])

if (arg1[8].b != 0)
    int64_t* rcx_2 = arg1[9]
    (*(*rcx_2 + 8))(rcx_2)
    int64_t* rcx_3 = arg1[9]
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x28))(rcx_3, 1)

sub_14106aa70(&arg1[0xf])
DeleteCriticalSection(&arg1[0xa])
DeleteCriticalSection(&arg1[3])
*arg1 = &data_142dd6680

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
