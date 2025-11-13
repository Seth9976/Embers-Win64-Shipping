// 函数: sub_1407775b0
// 地址: 0x1407775b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int32_t var_26 = 0xffffffff
int32_t rdi = -1
void arg_10
int64_t rcx_1 = *sub_140b58260(&arg_10, rdx, 1)
int64_t var_30 = data_14396f0d8
int16_t var_28 = data_14396f0e0
int64_t var_20 = 0
int64_t var_18 = 0
int64_t rax_3 = *(arg1 + 0x418)
int64_t var_38 = rcx_1
int32_t* rax_4 = (*(rax_3 + 0x30))(arg1 + 0x418, &var_38)

if (rax_4 != 0)
    rdi = *rax_4

int32_t arg_8 = rdi
int128_t* result

if (rdi == 0xffffffff)
    (*(*(arg1 + 0x418) + 8))(arg1 + 0x418, &var_38, 0, 0, &arg_8)
    *(sx.q(arg_8) + *(arg1 + 0x438)) = *arg3
    result = sub_140834b50(arg1 + 0x418)
else
    result = sx.q(rdi) + *(arg1 + 0x438)
    *result = *arg3
    *(arg1 + 0x4c8) |= 1

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
