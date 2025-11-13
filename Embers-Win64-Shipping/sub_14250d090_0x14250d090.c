// 函数: sub_14250d090
// 地址: 0x14250d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rcx_1 = *(arg2 + 0x20)
int64_t var_28 = var_38
int64_t rax_2
rax_2.b = rcx_1 != 0
*(arg2 + 0x20) = rax_2 + rcx_1
int32_t var_30
int32_t var_20 = var_30
int64_t var_18
int64_t* result = sub_1420b7860(&var_18, &var_28)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_3 = *arg3
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
