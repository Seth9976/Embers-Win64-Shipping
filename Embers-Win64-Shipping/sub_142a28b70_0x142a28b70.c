// 函数: sub_142a28b70
// 地址: 0x142a28b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void var_98
int64_t rax_2 = __security_cookie ^ &var_98
int64_t var_58 = *(arg3 + 0x38)
int64_t i = 0
int64_t var_50_1 = *(arg3 + 0x40)
int64_t var_48_1 = *(arg3 + 0x48)
int64_t rcx = sx.q(arg2)
int32_t var_68 = *(arg3 + 0x10)
int32_t rax_7 = *(arg3 + 0x24)
int32_t r8 = (arg4 << 3).d
int32_t var_64_1 = rax_7
int64_t rdx_1 = (rcx + 2) << 4
int32_t var_60_1 = rax_7
void* rdi_1 = rdx_1 + arg1
int32_t var_78_1 = r8
uint32_t rax = arg5 << 3
uint32_t var_74_1 = rax

do
    int32_t r15_1 = (&var_68)[i]
    int32_t rsi_2 = rax s>> (*(8 - rdx_1 + rdi_1)).b
    int32_t rbx_2 = r8 s>> (*(rdi_1 + 0xc - rdx_1)).b
    
    if (arg6 != 0)
        rsi_2 = (*(arg6 + 0x10))(zx.q(rsi_2), arg6)
        r8 = var_78_1
        rbx_2 = (*(arg6 + 0x18))(zx.q(rbx_2), arg6)
    
    int64_t rax_13 = sx.q(rsi_2 + rbx_2 * r15_1) + (&var_58)[i]
    i += 1
    *rdi_1 = rax_13
    *((rcx << 4) - rdx_1 + 0x28 + rdi_1) = r15_1
    rdi_1 -= -0x80
    rax = var_74_1
while (i s< 3)

__security_check_cookie(rax_2 ^ &var_98)
