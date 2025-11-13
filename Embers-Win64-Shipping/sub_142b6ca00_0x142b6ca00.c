// 函数: sub_142b6ca00
// 地址: 0x142b6ca00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x30)
int32_t rsi = 0
uint64_t i_4 = zx.q(arg3)
int32_t arg_8 = 0
char rcx = *(rax + 0xfc)
char rdx

if (rcx != 0xc)
    rdx = -1
    
    if (rcx == 0xdb)
        rdx = 1
else
    rdx = *(arg1 + 0x4c)

void* rbx = arg1 + 0x41
char var_28 = arg10
uint32_t result = sub_142b6be20(arg2, rdx, rbx, i_4.d, *arg4, arg5 - *arg4, &arg_8, *(arg1 + 0x3f))
uint32_t result_1 = result

if (result s> 0)
    *arg4 += sx.q(result_1 - i_4.d)
    int32_t rax_5 = arg_8
    
    if (rax_5 u> 0x2fffff)
        char var_30
        var_30.q = arg11
        int32_t* var_38
        var_38.d = arg9
        int32_t var_40
        var_40.q = arg8
        sub_142b6b750(arg1, sx.q(*(arg2 + 0xc)) + arg2 + ((zx.q(rax_5) & 0x3ffff) << 1), 
            (rax_5 u>> 0x12) - 0xc, arg6, arg7, var_40, var_38.d, var_30)
        result.b = 1
    else
        sub_142b6b650(arg1, rax_5 - 0x1f0000, arg6, arg7, arg8, arg9, arg11)
        result.b = 1
else if (result_1 s>= 0)
    result.b = 0
else
    *(arg1 + 0x11b) = i_4.b
    
    if (i_4.d s> 0)
        void* rcx_8 = rbx + 0xb9
        rsi = i_4.d
        uint64_t i_2 = i_4
        uint64_t i
        
        do
            result = zx.d(*rbx)
            rbx += 1
            *rcx_8 = result.b
            rcx_8 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    char* rcx_9 = *arg4
    int32_t r9_4 = neg.d(result_1)
    
    if (rsi s< r9_4)
        void* rdx_6 = arg1 + 0xfa + sx.q(rsi)
        uint64_t i_3 = zx.q(r9_4 - rsi)
        uint64_t i_1
        
        do
            result = zx.d(*rcx_9)
            rcx_9 = &rcx_9[1]
            *rdx_6 = result.b
            rdx_6 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    *arg4 = rcx_9
    result.b = 1
    *(arg1 + 0x11a) = r9_4.b

return result
