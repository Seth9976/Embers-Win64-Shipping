// 函数: sub_142c193a0
// 地址: 0x142c193a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98

if ((*(*arg2 + 0xb8) & 1) == 0 && (*(arg1 + 4) & 0x40) == 0)
    void* rax_2
    rax_2.b = 0
    __security_check_cookie(rax_1 ^ &var_98)
    return rax_2

void* rcx_3 = zx.q(*(arg1 + 0x11)) + 8
void* rax_5 = (zx.q(*(arg1 + 0x10)) << 8) + arg1
int64_t* var_58 = arg2
void* var_50 = arg1
void* var_48 = rcx_3 + rax_5
uint8_t var_1c = *(arg1 + 4) u>> 6 & 1
int32_t var_20 = 0
void* rcx_5 = *(arg2[1] + 0x18)
void* var_78 = arg1 + 8
int64_t var_70 = arg2[3]
int32_t rax_10 = *(rcx_5 + 0x30)

if (rax_10 == 0xffffffff)
    rax_10 = sub_142bf77e0(rcx_5)

int32_t var_68 = rax_10
sub_142c17810(&var_78, &var_58)
uint64_t rax_11
rax_11.b = 1
__security_check_cookie(rax_1 ^ &var_98)
return rax_11
