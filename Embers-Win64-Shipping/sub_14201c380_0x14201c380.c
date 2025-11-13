// 函数: sub_14201c380
// 地址: 0x14201c380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void var_18
int64_t* rax_1 = sub_141befe60(arg3, &var_18)
void* rdi_1 = rax_1[1]
int64_t rbp_1 = *rax_1

if (rdi_1 != 0)
    *(rdi_1 + 8) += 1

int32_t var_28
sub_140de7870(arg1 + 0x1b0, &var_28)
int32_t rax_2 = var_28
int32_t* var_20
*var_20 = arg2
*(var_20 + 8) = rbp_1
*(var_20 + 0x10) = rdi_1
var_20[6] = 0xffffffff
void arg_18
sub_142024f60(arg1 + 0x1b0, &arg_18, *var_20, var_20, rax_2, nullptr)
int64_t* var_10

if (var_10 == 0)
    return 

var_10[1].d -= 1

if (var_10[1].d != 1)
    return 

(**var_10)(var_10)
int32_t temp1_1 = *(var_10 + 0xc)
*(var_10 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*var_10 + 8))(var_10, 1)
