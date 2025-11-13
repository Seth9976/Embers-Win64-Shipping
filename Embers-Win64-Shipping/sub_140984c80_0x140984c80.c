// 函数: sub_140984c80
// 地址: 0x140984c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_74 = 0x80
void** const var_e8 = &data_142e20cf8
void** const var_c0 = &data_142e20cf0
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x20)
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x12)
int32_t var_a4
__builtin_memset(&var_a4, 0, 0x30)
int32_t var_70 = 0xffffffff
int32_t var_6c = 0
int64_t var_60 = 0
int32_t var_58 = 0
int64_t var_50
__builtin_memset(&var_50, 0, 0x18)
int32_t var_38 = 0x270f
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

void*** rax_3 = *(arg2 + 0x38)
void** const* rdx_2 = &var_e8

if (rax_3 != 0)
    rdx_2 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_4 != 0
*(arg2 + 0x20) = rcx_1 + rax_4
int64_t var_f8
int64_t* rax_5 = sub_140963360(&var_f8, rdx_2)

if (arg3 != rax_5)
    int64_t rcx_4 = *arg3
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *arg3 = *rax_5
    *rax_5 = 0
    arg3[1].d = rax_5[1].d
    *(arg3 + 0xc) = *(rax_5 + 0xc)
    rax_5[1] = 0

int64_t rcx_6 = var_f8

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t result = sub_14091b530(&var_e8)
__security_check_cookie(rax_1 ^ &var_118)
return result
