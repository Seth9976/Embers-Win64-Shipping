// 函数: sub_142ac4c70
// 地址: 0x142ac4c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg10 s> 0)
    return 0

if (arg2 u> 1 || arg4 u> 0xb || arg5 s< 1 || arg5 s> arg8 || arg6 - 1 u> 6 || arg7 u> 0x5265bff
        || arg8 - 0x1c u> 3 || arg9 - 0x1c u> 3)
    *arg10 = 1
    return 0xffffffff

int32_t rsi_1 = *(arg1 + 0x64)

if (*(arg1 + 0x68) == 0 || arg3 s< *(arg1 + 0x60) || arg2 != 1)
    return zx.q(rsi_1)

char r12_1 = *(arg1 + 0x48)
char r15_1 = *(arg1 + 0x58)
arg10.b = r12_1 s> r15_1
int32_t rdi_1 = 0
int32_t rcx_2

if (*(arg1 + 0x50) != 2)
    rcx_2 = 0
else
    rcx_2 = neg.d(rsi_1)

int32_t rax_9 = sub_142ac43d0(arg4.b, arg8.b, arg9.b, arg5.b, arg6, arg7, rcx_2, *(arg1 + 0x6c), 
    r12_1, *(arg1 + 0x4a), *(arg1 + 0x49), *(arg1 + 0x4c))
int32_t rcx_4
rcx_4.b = rax_9 s>= 0

if (zx.d(arg10.b) != rcx_4)
    int32_t rax_11 = *(arg1 + 0x54)
    
    if (rax_11 == 0)
        rdi_1 = *(arg1 + 0x74)
    else if (rax_11 == 2)
        rdi_1 = neg.d(rsi_1)
    
    rdi_1 = sub_142ac43d0(arg4.b, arg8.b, arg9.b, arg5.b, arg6, arg7, rdi_1, *(arg1 + 0x70), r15_1, 
        *(arg1 + 0x5a), *(arg1 + 0x59), *(arg1 + 0x5c))

if (r12_1 s> r15_1)
    if (rax_9 s>= 0 || rdi_1 s< 0)
        rsi_1 += *(arg1 + 0x74)
else if (rax_9 s>= 0 && rdi_1 s< 0)
    rsi_1 += *(arg1 + 0x74)

return zx.q(rsi_1)
