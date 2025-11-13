// 函数: sub_1418c3650
// 地址: 0x1418c3650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* rbx = *(arg1 + 0x240)
uint64_t rdi = zx.q(arg5)

if (*(rbx + 0x78) != 0)
    sub_1418c86c0(rbx, 0, 0)

void* rax_2 = *(arg3 + 0x20)
void* r14 = *(rbx + 0x70)

if (rax_2 == 0)
    *(arg3 + 0x20) = sub_1418ba820(*(arg1 + 0x140) + 0x3f0, rdi.d, 2, 8)
    *(arg3 + 0x30) = *(arg1 + 0x140)
else if (*(rax_2 + 0x24) u< rdi.d)
    if (rax_2 != 0)
        sub_1418c5270(*(arg1 + 0x140) + 0x3f0, nullptr, arg3 + 0x20)
    
    *(arg3 + 0x20) = sub_1418ba820(*(arg1 + 0x140) + 0x3f0, rdi.d, 2, 8)
    *(arg3 + 0x30) = *(arg1 + 0x140)

void* r8_1 = *(arg3 + 0x20)
*(arg3 + 0x28) = arg4
*(arg3 + 0x2c) = rdi.d
int64_t rdx_1 = *(arg2 + 0x68)
uint64_t var_58 = zx.q(*(arg2 + 0x70) + arg4)
int64_t var_50 = 0
uint64_t var_48 = rdi
int64_t result = data_143efb9f0(*(r14 + 0x40), rdx_1, *(r8_1 + 0x18), 1, &var_58)
__security_check_cookie(rax_1 ^ &var_88)
return result
