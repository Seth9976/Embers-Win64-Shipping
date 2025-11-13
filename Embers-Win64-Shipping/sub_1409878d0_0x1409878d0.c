// 函数: sub_1409878d0
// 地址: 0x1409878d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_50 = &data_142e259e0
int32_t var_58 = 0xffffffff
uint64_t var_68 = 0
int64_t var_60 = 0
int128_t var_48
__builtin_memset(&var_48, 0, 0x40)

if (&var_68 != arg2)
    int32_t rbx_1 = arg2[1].d
    int64_t rdi_1 = *arg2
    var_60.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_68, rbx_1, 0)
        memcpy(var_68, rdi_1, rbx_1 * 2)

var_58 = *arg3
sub_14094ded0(&var_50, &arg3[2])
int64_t var_28
sub_14094d8f0(&var_28, &arg3[0xc])
int64_t var_18
sub_14094d8f0(&var_18, &arg3[0x10])
(*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143ced708), &var_68)
void** result = sub_14094be10(&var_58)
uint64_t rcx_8 = var_68

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
