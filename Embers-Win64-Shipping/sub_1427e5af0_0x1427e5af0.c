// 函数: sub_1427e5af0
// 地址: 0x1427e5af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8
int64_t var_38 = r8
int64_t* var_28 = *(arg1 + 0x10)
int64_t var_20 = 0
int64_t var_18 = 0
int64_t entry_rdx
sub_1427e2350(&var_28, entry_rdx)
int32_t result = var_18:4.d

if ((result & 0x7fffffff) == 0 || result s< 0 || var_20 == 0)
    return result

int64_t* rcx_1 = *var_28
return (*(*rcx_1 + 0x10))(rcx_1, var_20)
