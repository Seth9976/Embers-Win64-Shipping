// 函数: sub_14250c190
// 地址: 0x14250c190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int64_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_68, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_48 = 0
int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_5 = *(arg2 + 0x20)
int64_t var_58 = var_68
int64_t rcx_4
rcx_4.b = rax_5 != 0
int32_t var_60
int32_t var_50 = var_60
*(arg2 + 0x20) = rcx_4 + rax_5
int64_t var_18
int64_t* result = sub_1420b4b40(&var_18, &var_28, &var_38, &var_58, &var_48)
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

int64_t rcx_9 = var_18

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_48

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_38

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_28

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
