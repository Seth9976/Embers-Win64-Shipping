// 函数: sub_140a6ccb0
// 地址: 0x140a6ccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
int32_t arg_20 = 0
int32_t r8_1

if (rax s< 0)
    r8_1 = *(arg2 + 0xc)
else
    r8_1 = sx.d(rax) s>> 5

void* rdx

if ((rax.b & 0x11) != 0)
    rdx = nullptr
else if ((rax.b & 2) == 0)
    rdx = *(arg2 + 0x18)
else
    rdx = arg2 + 0xa

sub_142a82c20(arg1, rdx, r8_1, arg4 != 0, nullptr, &arg_20)

if (arg_20 s> 0)
    int64_t result
    result.b = 0
    return result

int32_t rax_1 = sub_142a82ac0(arg1)
int64_t rbp

if (rax_1 == 0)
    rbp.b = 0
else if (rax_1 == 1)
    rbp.b = 1
else if (rax_1 != 2)
    rbp.b = 0
else
    rbp.b = 2

int64_t i_2 = sx.q(sub_142a83510(arg1, &arg_20))
int64_t rbx = sx.q(arg5[1].d)
int32_t rcx_3 = (rbx + i_2).d
arg5[1].d = rcx_3

if (rcx_3 s> *(arg5 + 0xc))
    sub_140a88fc0(arg5)

int64_t i_1 = i_2
memset(*arg5 + rbx * 0xc, 0, i_2 * 0xc)
int32_t rsi = 0

if (i_2.d s> 0)
    int64_t rdi = 0
    int64_t i
    
    do
        int32_t* rbx_1 = *arg5
        int32_t arg_10 = 0
        int32_t var_48 = 0
        int32_t rax_5 = sub_142a83e00(arg1, rsi, &arg_10, &var_48)
        
        if (rax_5 == 0)
            rax_5.b = 0
        else if (rax_5 == 1)
            rax_5.b = 1
        else if (rax_5 != 2)
            rax_5.b = 0
        else
            rax_5.b = 2
        
        *(rbx_1 + rdi + 8) = rax_5.b
        rsi += 1
        *(rbx_1 + rdi) = arg_10 + arg3
        *(rbx_1 + rdi + 4) = var_48
        rdi += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rbp.b)
