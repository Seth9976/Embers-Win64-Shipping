// 函数: sub_141a7cce0
// 地址: 0x141a7cce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48 = data_143f2b0a0
char var_44 = 1
int64_t var_40 = 0
int64_t var_38 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
int128_t var_28 = var_48.o
int64_t var_18 = var_38
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t var_58
int64_t* result = sub_141a506f0(arg1, &var_58, &var_28)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_4 = *arg3
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_6 = var_58

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
