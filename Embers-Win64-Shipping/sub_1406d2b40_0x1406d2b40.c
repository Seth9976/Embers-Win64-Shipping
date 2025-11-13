// 函数: sub_1406d2b40
// 地址: 0x1406d2b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t var_38 = 0
int32_t var_30 = 0
int512_t zmm2 = sub_141d49a40(sub_140a1ae20(), arg1, &var_38, 0, 0, 0, nullptr, 1)
int64_t var_48
int64_t* arg_18 = &var_48
var_48 = 0
int64_t rsi = var_38
int32_t var_40 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_48, var_30, 0)
    memcpy(var_48, rsi, var_30 * 2)
else
    int32_t var_3c_1 = 0

arg_18 = &var_48
int64_t var_28
int64_t* result = sub_140686770(&var_28, &var_48, zmm2)
int64_t* result_1 = result
arg_10 = 1
int64_t rcx_4 = var_48

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

if (arg2 != result_1)
    int64_t rcx_5 = *arg2
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg2 = *result_1
    *result_1 = 0
    arg2[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg2 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_6 = var_28

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_38

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
