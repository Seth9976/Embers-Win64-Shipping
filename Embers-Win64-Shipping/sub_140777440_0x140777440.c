// 函数: sub_140777440
// 地址: 0x140777440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void arg_10
int64_t* rax
int64_t zmm6_1
rax, zmm6_1 = sub_140b58260(&arg_10, rdx, 1)
int32_t var_36 = 0xffffffff
int32_t rdi = -1
int64_t var_40 = data_14396f0b8
int16_t var_38 = data_14396f0c0
int64_t var_30 = 0
int64_t var_28 = 0
int64_t rax_3 = *(arg1 + 0x418)
int64_t var_48 = *rax
int32_t* rax_4 = (*(rax_3 + 0x30))(arg1 + 0x418, &var_48)

if (rax_4 != 0)
    rdi = *rax_4

int32_t arg_8 = rdi
int64_t* result

if (rdi == 0xffffffff)
    (*(*(arg1 + 0x418) + 8))(arg1 + 0x418, &var_48, 0, 0, &arg_8)
    *(sx.q(arg_8) + *(arg1 + 0x438)) = zmm6_1
    result = sub_140834b50(arg1 + 0x418)
else
    result = sx.q(rdi) + *(arg1 + 0x438)
    *result = zmm6_1
    *(arg1 + 0x4c8) |= 1

if (var_30 == 0)
    return result

return sub_140a74f90(var_30)
