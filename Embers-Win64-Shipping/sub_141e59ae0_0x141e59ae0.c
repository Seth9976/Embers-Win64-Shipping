// 函数: sub_141e59ae0
// 地址: 0x141e59ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax
int64_t rdx
rax, rdx = sub_141e5df80()
int64_t* rcx = *(rax + 0x428)

if (rcx == 0)
    void arg_8
    int64_t rbx_1 = *sub_140b58260(&arg_8, u"AssetRegistry", (rcx + 1).d)
    j_sub_140b3db50()
    int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t rdx_2 = *rax_2
    int64_t* rax_3
    rax_3, rdx = (*(rdx_2 + 0x48))(rax_2, rdx_2)
    rcx = rax_3
    *(rax + 0x428) = rax_3

rdx.b = 1
jump(*(*rcx + 0x208))
