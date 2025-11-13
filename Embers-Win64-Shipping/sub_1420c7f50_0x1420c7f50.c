// 函数: sub_1420c7f50
// 地址: 0x1420c7f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "Advertising", 1)
j_sub_140b3db50()
int64_t* rax_1 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_1
int64_t* result = (*(rdx_1 + 0x48))(rax_1, rdx_1)

if (result == 0)
    return result

jump(*(*result + 0x60))
