// 函数: sub_140941b10
// 地址: 0x140941b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_140b58170(&arg_10, "OnlineSubsystem", 1)
j_sub_140b3db50()

if (sub_140b404d0(&data_143de7d78, *rax, zmm1) == 0)
    return 0

int64_t rbx_1 = *sub_140b58170(&arg_10, "OnlineSubsystem", 1)
j_sub_140b3db50()
int64_t* rax_3 = sub_140b3da90(&data_143de7d78, rbx_1)
int64_t r8 = *rax_3
return (*(r8 + 0x70))(rax_3, *arg1, r8)
