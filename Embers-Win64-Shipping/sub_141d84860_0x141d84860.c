// 函数: sub_141d84860
// 地址: 0x141d84860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t var_a8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* r9 = &var_88
int64_t r8_4 = var_a8

if (rax_4 != 0)
    r9 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdx_4
rdx_4.b = rax_5 != 0
*(arg2 + 0x20) = rdx_4 + rax_5
int64_t var_a0
int64_t* rax_6 = sub_141d79ec0(arg1, &var_a0, r8_4, r9)

if (arg3 != rax_6)
    int64_t rcx_3 = *arg3
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg3 = *rax_6
    *rax_6 = 0
    arg3[1].d = rax_6[1].d
    *(arg3 + 0xc) = *(rax_6 + 0xc)
    rax_6[1] = 0

int64_t rcx_5 = var_a0

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

void* result = sub_1405ae080(&var_88)
__security_check_cookie(rax_1 ^ &var_c8)
return result
