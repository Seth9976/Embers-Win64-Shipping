// 函数: sub_140916e20
// 地址: 0x140916e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "OnlineSubsystem", 1)
j_sub_140b3db50()
int64_t* rax_1 = sub_140b3da90(&data_143de7d78, rbx)
void arg_10
int64_t result = (*(*rax_1 + 0x80))(rax_1, *sub_140b58260(&arg_10, u"NULL", 1))
int64_t* rcx_3 = *(arg1 + 8)

if (rcx_3 != 0)
    result = (**rcx_3)(rcx_3, 1)

*(arg1 + 8) = 0
return result
