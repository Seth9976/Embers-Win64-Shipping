// 函数: sub_140975150
// 地址: 0x140975150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x70) != 0)
    return 

int64_t arg_8 = 0
void arg_18
int64_t* rax_1
int512_t zmm1_1
rax_1, zmm1_1 = sub_140b58170(&arg_18, "OnlineSubsystem", 1)
j_sub_140b3db50()

if (sub_140b404d0(&data_143de7d78, *rax_1, zmm1_1).b == 0)
    return 

void arg_20
int64_t rbx_2 = *sub_140b58170(&arg_20, "OnlineSubsystem", 1)
j_sub_140b3db50()
int64_t* rax_3 = sub_140b3da90(&data_143de7d78, rbx_2)
int64_t r8_1 = *rax_3

if ((*(r8_1 + 0x70))(rax_3, 0, r8_1).b == 0)
    return 

int64_t arg_10 = 0
uint64_t rax = sub_14093f850(&arg_10)

if (rax == 0)
    return 

int64_t r8_2 = *rax
int64_t* var_28
(*(r8_2 + 0x90))(rax, &var_28, r8_2)
int64_t* rcx_5 = var_28

if (rcx_5 != 0)
    (*(*rcx_5 + 0x18))(rcx_5, arg1 + 0x58)

int64_t* var_20

if (var_20 == 0)
    return 

var_20[1].d -= 1

if (var_20[1].d != 1)
    return 

(**var_20)(var_20)
int32_t rdi_1 = *(var_20 + 0xc)
*(var_20 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*var_20 + 8))(var_20, zx.q(rdi_1))
