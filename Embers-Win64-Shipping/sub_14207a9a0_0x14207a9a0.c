// 函数: sub_14207a9a0
// 地址: 0x14207a9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432afe88
void arg_8
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_140b58260(&arg_8, u"AssetRegistry", 1)
j_sub_140b3db50()

if (sub_140b404d0(&data_143de7d78, *rax, zmm1) != 0)
    int64_t rbx_1 = *sub_140b58260(&arg_8, u"AssetRegistry", 1)
    j_sub_140b3db50()
    int64_t* rax_3 = sub_140b3da90(&data_143de7d78, rbx_1)
    int64_t rdx_2 = *rax_3
    int64_t* rax_4 = (*(rdx_2 + 0x48))(rax_3, rdx_2)
    int64_t rdx_3 = *rax_4
    sub_1405a46b0((*(rdx_3 + 0x1a0))(rax_4, rdx_3), arg1)
    int64_t rdx_5 = *rax_4
    sub_1405a46b0((*(rdx_5 + 0x1a8))(rax_4, rdx_5), arg1)
    int64_t rdx_7 = *rax_4
    sub_1405a46b0((*(rdx_7 + 0x1b0))(rax_4, rdx_7), arg1)

sub_140b97850(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
