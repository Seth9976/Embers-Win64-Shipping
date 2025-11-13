// 函数: sub_14065f0f0
// 地址: 0x14065f0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int32_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_3 = *(arg2 + 0x38)
char* rsi = &arg_10
int64_t r14 = var_48
int64_t var_38 = 0

if (rax_3 != 0)
    rsi = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_4 != 0
*(arg2 + 0x20) = rcx_2 + rax_4
int32_t var_30 = var_40

if (var_40 != 0)
    sub_1405a4c70(&var_38, var_40, 0)
    memcpy(var_38, r14, var_40 * 2)
else
    int32_t var_2c_1 = 0

int64_t var_28
int64_t* result = sub_14063b040(arg1, &var_28, &var_38, rsi)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_7 = *arg3
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_9 = var_28

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_48

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
