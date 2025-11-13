// 函数: sub_142ac08a0
// 地址: 0x142ac08a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_3

if (arg3 != 0xff && (arg4 == 1 || arg4 == 4 || (arg3 == 1 && arg4 - 5 u<= 1)))
    rax_3 = (*(*arg1 + 0x28))()

int64_t rbp

if (arg3 == 0xff || (arg4 != 1 && arg4 != 4 && (arg3 != 1 || arg4 - 5 u> 1)) || rax_3 != 0)
    rbp.b = 0
else
    rbp.b = 1

char rax_5
int32_t rcx_1
rax_5, rcx_1 = (*(*arg1 + 0x30))(arg1)
char rax_7

if (rax_5 != 0 && arg3 != 0xff)
    rax_7, rcx_1 = (*(*arg1 + 0x38))(arg1)

char r8

if (rax_5 == 0 || (arg3 != 0xff && (rax_7 == 0 || rbp.b == 0)))
    r8 = 0
else
    r8 = 1

int32_t rcx_4 = sbb.d(rcx_1, rcx_1, r8 != 0) & 0x200
int32_t rdx_1 = rcx_4 | 0x100

if (arg2 == 0)
    rdx_1 = rcx_4

int32_t r15_1 = rdx_1 | arg5

if (arg5 == 6)
    r15_1 = rdx_1

bool rsi

if (arg2 == 0 || r8 != 0)
    rsi = false
else if (arg3 != 0xff)
    rsi = rbp.b
else
    rsi = arg4 != 2

int32_t result = (*(*arg1 + 0x10))(arg1, zx.q(r15_1))
int32_t r12_1 = zx.d(rsi) + result

if ((*(arg7 + 8) & 1) == 0)
    *(arg7 + 8) &= 0x1f
else
    result = 2
    *(arg7 + 8) = 2

int32_t rbx_1 = 0

if (r12_1 s> 0)
    result = 0x2d
    
    do
        if (rsi == 0)
            result = (*(*arg1 + 8))(arg1, zx.q(r15_1), zx.q(rbx_1))
        else if (rbx_1 != 0)
            result = (*(*arg1 + 8))(arg1, zx.q(r15_1), zx.q(rbx_1 - 1))
        
        if (rbp.b != 0 && result.w == 0x2d)
            result = 0x2b
        
        if (arg6 != 0 && result.w == 0x25)
            result = 0x2030
        
        int16_t arg_10 = result.w
        sub_142a48d70(arg7, &arg_10, 0, 1)
        rbx_1 += 1
        result = 0x2d
    while (rbx_1 s< r12_1)

return result
