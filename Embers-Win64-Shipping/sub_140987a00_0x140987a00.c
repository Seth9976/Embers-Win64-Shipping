// 函数: sub_140987a00
// 地址: 0x140987a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_88 = &data_142e259e0
void** const var_60 = &data_142e259e0
int32_t var_14 = 0
uint64_t var_98 = 0
int64_t var_90 = 0
int64_t var_80
__builtin_memset(&var_80, 0, 0x20)
int128_t var_58
__builtin_memset(&var_58, 0, 0x41)

if (&var_98 != arg2)
    int32_t rbx_1 = arg2[1].d
    int64_t rdi_1 = *arg2
    var_90.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_98, rbx_1, 0)
        memcpy(var_98, rdi_1, rbx_1 * 2)

sub_14094ded0(&var_88, arg3)
sub_14094ded0(&var_60, arg3 + 0x28)
uint64_t var_38
sub_140597df0(&var_38, arg3 + 0x50)
uint64_t var_28
sub_140597df0(&var_28, arg3 + 0x60)
int32_t var_14_1 = *(arg3 + 0x74)
char var_18 = *(arg3 + 0x70)
(*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143ced748), &var_98)
void** result = sub_14094bfc0(&var_88)
uint64_t rcx_9 = var_98

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
