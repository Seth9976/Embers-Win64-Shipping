// 函数: sub_140777770
// 地址: 0x140777770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = data_14396f098
int16_t rax_1 = data_14396f0a0
int32_t rdi = -1
int64_t var_38 = arg2
int16_t var_28 = rax_1
int32_t var_26 = 0xffffffff
int64_t var_20 = 0
int64_t var_18 = 0
int32_t* rax_3 = (*(*(arg1 + 0x418) + 0x30))(arg1 + 0x418, &var_38)

if (rax_3 != 0)
    rdi = *rax_3

int32_t arg_18 = rdi
int32_t* result

if (rdi == 0xffffffff)
    (*(*(arg1 + 0x418) + 8))(arg1 + 0x418, &var_38, 0, 0, &arg_18)
    *(sx.q(arg_18) + *(arg1 + 0x438)) = (zx.d(arg3) ^ 1) - 1
    result = sub_140834b50(arg1 + 0x418)
else
    result = sx.q(rdi) + *(arg1 + 0x438)
    *result = (zx.d(arg3) ^ 1) - 1
    *(arg1 + 0x4c8) |= 1

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
