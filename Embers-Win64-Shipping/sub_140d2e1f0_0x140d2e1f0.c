// 函数: sub_140d2e1f0
// 地址: 0x140d2e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118

if (data_14399fa10() == 0 && ((*(arg1 + 8) u>> 4).b & 1) != 0)
    sub_140ccddc0(arg2)

void* var_d8 = arg1
void* var_d0 = arg2
int64_t var_c8 = 0
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x2c)
int32_t var_74 = 0x80
int32_t var_70 = 0xffffffff
int32_t var_6c = 0
int64_t var_60 = 0
int32_t var_58 = 0
int64_t var_50 = 0

if (arg3 != 0)
    int64_t var_c8_1 = arg3
else if (*(arg1 + 0x20) != arg2)
    int32_t var_e8_1 = 0
    
    if (sub_140d2f0c0(sub_140d41340(), arg2, *(arg1 + 0x18), 0, 0, 0) == 0)
        int64_t var_c8_2 = *(arg1 + 0x18)

if (arg4 != 0)
    int64_t var_a8_1 = arg4
else
    int64_t var_a8 = *(arg1 + 0x10)

int32_t rcx_2 = var_b0
int32_t var_bc = arg6
int32_t r9
int32_t var_c0 = r9

if (arg5 == 2)
    rcx_2 = 0x400000

int32_t var_ac = arg5
int32_t var_b0_1 = rcx_2
void* result = sub_140d2e350(&var_d8)
sub_1405ae080(&var_a0)
__security_check_cookie(rax_1 ^ &var_118)
return result
