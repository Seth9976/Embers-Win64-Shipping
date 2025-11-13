// 函数: sub_142c2f8b0
// 地址: 0x142c2f8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98

if ((*(*arg2 + 0xb8) & 1) == 0 && not(test_bit(
        (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
            + zx.d(*(arg1 + 7)), 
        0x1e)))
    uint32_t rax_7
    rax_7.b = 0
    __security_check_cookie(rax_1 ^ &var_98)
    return rax_7

uint64_t rdx_2 = (zx.q(*(arg1 + 0x1c)) << 8) + zx.q(*(arg1 + 0x1d))
int64_t* var_58 = arg2
void* var_50 = arg1
int32_t var_20 = 0
void* var_48 = zx.q(*(arg1 + 0x1f)) + 0xc + ((zx.q(*(arg1 + 0x1e)) + (rdx_2 << 8)) << 8) + arg1
uint8_t rcx_10 = (((zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8)
    + (zx.d(*(arg1 + 4)) << 0x18) + zx.d(*(arg1 + 7))) u>> 0x1e).b & 1
uint8_t var_1c = rcx_10
void* rcx_11 = *(arg2[1] + 0x18)
void* var_78 = arg1 + 0xc
int64_t var_70 = arg2[3]
int32_t rax_21 = *(rcx_11 + 0x30)

if (rax_21 == 0xffffffff)
    rax_21 = sub_142bf77e0(rcx_11)

int32_t var_68 = rax_21
sub_142c2ca60(&var_78, &var_58)
uint64_t rax_22
rax_22.b = 1
__security_check_cookie(rax_1 ^ &var_98)
return rax_22
