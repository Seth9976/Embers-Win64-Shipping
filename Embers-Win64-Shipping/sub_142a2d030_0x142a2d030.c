// 函数: sub_142a2d030
// 地址: 0x142a2d030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
uint32_t result_1 = (arg1[1].d * 0xfc + 4) u>> 8

if (*(arg1 + 0xc) s< 0)
    sub_142a23140(arg1)

int64_t r8 = *arg1
uint64_t rcx_1 = zx.q(result_1) << 0x38

if (r8 u>= rcx_1)
    rbp = 1
    result_1 = arg1[1].d - result_1
    r8 -= rcx_1

uint64_t result = zx.q(result_1)
uint32_t rdx = zx.d(*(result + &data_143603f00))
*(arg1 + 0xc) -= rdx
*arg1 = r8 << rdx.b
arg1[1].d = result_1 << rdx.b

if (rbp != 0)
    uint32_t rdx_1 = zx.d(*(sx.q(sub_142a2cc70(arg1)) + 0x143cc7050))
    int32_t rcx_7 = zx.d(*arg2) - 1
    char r9_1
    
    if (rcx_7 * 2 s> 0xff)
        result = zx.q((0xfe - rcx_7) * 2)
        
        if (rdx_1 s<= result.d)
            if ((rdx_1.b & 1) == 0)
                rdx_1 = (rdx_1 u>> 1) + 0xfe - rcx_7
            else
                result = zx.q((rdx_1 + 1) u>> 1)
                rdx_1 = 0xfe - rcx_7 - result.d
        
        r9_1 = -1 - rdx_1.b
    else
        result = zx.q(rcx_7 * 2)
        
        if (rdx_1 s> result.d)
            r9_1 = rdx_1.b + 1
        else if ((rdx_1.b & 1) == 0)
            r9_1 = ((rdx_1 u>> 1) + rcx_7).b + 1
        else
            result = zx.q((rdx_1 + 1) u>> 1)
            r9_1 = rcx_7.b - result.b + 1
    
    *arg2 = r9_1

return result
