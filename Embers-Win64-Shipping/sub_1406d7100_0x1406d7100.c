// 函数: sub_1406d7100
// 地址: 0x1406d7100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = zx.o(0)
var_38.q = 0
var_38:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t var_28
int64_t* arg_10 = &var_28
var_28 = 0
int32_t rbx_1 = var_38:8.d
int64_t rsi = var_38.q
int32_t var_20 = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(&var_28, rbx_1, 0)
    memcpy(var_28, rsi, rbx_1 * 2)
else
    int32_t var_1c_1 = 0

int64_t var_18
int64_t* result = sub_1406cdc60(&var_18, &var_28)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_6 = *arg3
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_8 = var_18

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_38.q

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
