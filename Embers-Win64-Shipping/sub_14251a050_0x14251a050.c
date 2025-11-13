// 函数: sub_14251a050
// 地址: 0x14251a050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38 = 0xffffffff
int64_t var_34 = 0
int64_t var_28
__builtin_memset(&var_28, 0, 0x18)
int64_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rdx_2 = &var_38

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_3 != 0
*(arg2 + 0x20) = rcx_1 + rax_3
int64_t var_48
int64_t* result = sub_1420b8190(&var_48, rdx_2)
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

int64_t rcx_6 = var_48

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t var_20

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
