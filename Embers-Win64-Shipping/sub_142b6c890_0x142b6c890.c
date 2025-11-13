// 函数: sub_142b6c890
// 地址: 0x142b6c890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *arg4
char rax_1 = *(arg1 + 0x3f)
int32_t arg_8 = 0
uint64_t result = sub_142b6bba0(arg2, arg3, 0, 0, r11, ((arg5 - r11) s>> 1).d, &arg_8, rax_1, arg10)
int32_t rdx_1 = result.d
int32_t r8

if (result.d s>= 2)
    r8 = arg_8

if (result.d s>= 2 && ((r8 & 0x1f000000) != 0x1000000 || *(*(arg1 + 0x30) + 0xfc) != 0xdb))
    *arg4 += sx.q(result.d - 2) * 2
    char var_20
    var_20.q = arg11
    int32_t* var_28
    var_28.d = arg9
    int32_t var_30
    var_30.q = arg8
    sub_142b6c020(arg1, arg2, r8, arg6, arg7, var_30, var_28.d, var_20)
    result.b = 1
else if (rdx_1 s>= 0)
    result.b = 0
    
    if (rdx_1 == 1)
        *(arg1 + 0x5f) = rdx_1.b
else
    *(arg1 + 0xd0) = arg3
    result = *arg4
    
    if (0xfffffffe - rdx_1 s> 0)
        void* rdx_3 = arg1 + 0xd4
        uint64_t i_1 = zx.q(0xfffffffe - rdx_1)
        uint64_t i
        
        do
            int16_t rcx_7 = *result
            result += 2
            *rdx_3 = rcx_7
            rdx_3 += 2
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *arg4 = result
    result.b = 1
    *(arg1 + 0x119) = (0xfffffffe - rdx_1).b

return result
