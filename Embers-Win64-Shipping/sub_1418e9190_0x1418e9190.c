// 函数: sub_1418e9190
// 地址: 0x1418e9190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rax_3 = (*(*arg2 + 8))(arg2)

if (arg3 != 0)
    int64_t r8 = *arg3
    
    if ((*(r8 + 0x18))(arg3, arg5, r8) == 0)
        sub_1418c8680(*(arg1 + 0x58))
        sub_1418c9280(*(*(*(arg1 + 0x58) + 0x1a50) + 0x240), arg3[5], 0x41200000)

int32_t rax_5 = *(rax_3 + 0x60)

if (*(rax_3 + 0xc4) == 1)
    void* rcx_6 = *(arg1 + 0x58)
    int64_t rdx_1 = *(rax_3 + 0x80)
    int32_t var_78 = *(rax_3 + 0xe0)
    int64_t var_74_1 = 0
    void var_68
    data_143efb830(*(rcx_6 + 8), rdx_1, &var_78, &var_68, var_78)
    int32_t var_58
    rax_5 = divs.dp.d(sx.q(var_58 << 3), sub_1418e1eb0(*(rax_3 + 0x88)))

*arg6 = rax_5
*arg7 = *(rax_3 + 0x64)
void* rax_12 = *(rax_3 + 0xd0)
*arg4 = zx.q(*(rax_12 + 0x24)) + *(*(rax_12 + 0x28) + 0x18)
void* rcx_10 = *(rax_3 + 0xd0)
int64_t result = sub_1418c2300(*(rcx_10 + 0x28), zx.q(*(rcx_10 + 0x1c)), zx.q(*(rcx_10 + 0x18)))
__security_check_cookie(rax_1 ^ &var_98)
return result
