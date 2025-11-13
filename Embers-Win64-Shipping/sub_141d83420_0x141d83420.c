// 函数: sub_141d83420
// 地址: 0x141d83420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x150))() != 0 && sub_142436920((*(*arg1 + 0x150))(arg1)) != 0)
    void* rax_7 = sub_142436920((*(*arg1 + 0x150))(arg1))
    *(rax_7 + 0x6c) &= 0xfffffffb

int64_t* rcx_4 = arg1[9]
uint64_t var_38 = 0
int64_t var_30 = 0
int64_t var_18
(*(*rcx_4 + 0x20))(rcx_4, &var_18, &arg1[0xb], &var_38)
int64_t* rcx_5 = arg1[9]
int64_t var_28
sub_140b11c80(&var_28, (**rcx_5)(rcx_5))
int64_t rsi = var_28
var_38 = 0
int32_t var_20
var_30.d = var_20

if (var_20 != 0)
    sub_1405a4c70(&var_38, var_20, 0)
    memcpy(var_38, rsi, var_20 * 2)
else
    var_30:4.d = 0

int64_t var_40 = 0
int64_t result = sub_141c714a0((*(*arg1 + 0x150))(arg1), 1, &var_18, &var_38, 0)
int64_t rcx_11 = var_28

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_18

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
