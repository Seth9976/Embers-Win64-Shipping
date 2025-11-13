// 函数: sub_141ca2090
// 地址: 0x141ca2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "AssetRegistry", 1)
j_sub_140b3db50()
int64_t* rax_1 = sub_140b3da90(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_1
void* rax_2 = (*(rdx_1 + 0x48))(rax_1, rdx_1)
void* rbx_1 = rax_2 - 0x28

if (rax_2 == 0)
    rbx_1 = nullptr

arg1[1] = 0
*arg1 = rbx_1

if (rbx_1 == 0)
    arg1[1] = 0
    return arg1

arg1[1] = sub_140d21950(rbx_1, sub_141cb80c0())
return arg1
