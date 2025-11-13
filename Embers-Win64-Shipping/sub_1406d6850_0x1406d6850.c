// 函数: sub_1406d6850
// 地址: 0x1406d6850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = zx.o(0)
var_58.q = 0
var_58:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int128_t var_68 = zx.o(0)
var_68.q = 0
var_68:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t var_48
int64_t* arg_10 = &var_48
int64_t* arg_18 = &var_48
var_48 = 0
int32_t rbx_1 = var_68:8.d
int64_t rsi = var_68.q
int32_t var_40 = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(&var_48, rbx_1, 0)
    memcpy(var_48, rsi, rbx_1 * 2)
else
    int32_t var_3c_1 = 0

int64_t var_38
arg_18 = &var_38
var_38 = 0
int32_t rbx_2 = var_58:8.d
int64_t rsi_1 = var_58.q
int32_t var_30 = rbx_2

if (rbx_2 != 0)
    sub_1405a4c70(&var_38, rbx_2, 0)
    memcpy(var_38, rsi_1, rbx_2 * 2)
else
    int32_t var_2c_1 = 0

int64_t var_28
int64_t* result = sub_1406ccf30(&var_28, &var_38, &var_48)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_9 = *arg3
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_11 = var_28

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_68.q

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_58.q

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
