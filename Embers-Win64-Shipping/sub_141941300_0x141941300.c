// 函数: sub_141941300
// 地址: 0x141941300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
int32_t entry_r8
sub_14193d4e0(arg1, &var_18, entry_r8)
int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rdx_1 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx_1 = var_18

int64_t r8 = *rax
int64_t result = (*(r8 + 0x118))(rax, rdx_1, r8)
bool cond:1 = var_18 == 0
arg1[0x28] = result

if (cond:1)
    return result

return sub_140a74f90(var_18) __tailcall
