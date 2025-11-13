// 函数: sub_14283fc30
// 地址: 0x14283fc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t rax_1 = __security_cookie ^ &var_28
var_28 = arg2[0].q
int32_t r10 = var_28.d
int32_t r8 = 0x7c0
int32_t rdx_1 = r10 & 0x7fffffff
float var_20 = _mm_shuffle_ps(arg2, arg2, 0xaa)[0]
int32_t r9

if ((rdx_1 & 0x7f800000) == 0x7f800000)
    r9 = 0x7c0
    
    if ((rdx_1 & 0x7fffff) != 0)
        r9 = ((((rdx_1 u>> 6 | rdx_1) u>> 5 | rdx_1) u>> 6 | rdx_1) & 0x3f) | 0x7c0
    else if (r10 s< 0)
        r9 = 0
else if (r10 s< 0)
    r9 = 0
else if (rdx_1 u<= 0x477e0000)
    uint32_t rdx_4
    
    if (rdx_1 u>= 0x38800000)
        rdx_4 = rdx_1 - 0x38000000
    else
        rdx_4 = ((rdx_1 & 0x7fffff) | 0x800000) u>> (0x71 - (rdx_1 u>> 0x17).b)
    
    r9 = (rdx_4 + 0xffff + (rdx_4 u>> 0x11 & 1)) u>> 0x11 & 0x7ff
else
    r9 = 0x7bf

int32_t rcx_1 = var_28:4.d
int32_t rdx_6 = rcx_1 & 0x7fffffff

if ((rdx_6 & 0x7f800000) != 0x7f800000)
    if (rcx_1 s< 0)
        r8 = 0
    else if (rdx_6 u<= 0x477e0000)
        uint32_t rdx_9
        
        if (rdx_6 u>= 0x38800000)
            rdx_9 = rdx_6 - 0x38000000
        else
            rdx_9 = ((rdx_6 & 0x7fffff) | 0x800000) u>> (0x71 - (rdx_6 u>> 0x17).b)
        
        r8 = (rdx_9 + 0xffff + (rdx_9 u>> 0x11 & 1)) u>> 0x11 & 0x7ff
    else
        r8 = 0x7bf
else if ((rdx_6 & 0x7fffff) != 0)
    r8 = 0x7c0 | ((((rdx_6 u>> 6 | rdx_6) u>> 5 | rdx_6) u>> 6 | rdx_6) & 0x3f)
else if (rcx_1 s< 0)
    r8 = 0

int32_t rdx_11 = var_20 & 0x7fffffff
int32_t r10_2 = var_20 & 0x80000000
int32_t result = rdx_11 & 0x7f800000
int32_t rcx_3

if (result == 0x7f800000)
    rcx_3 = 0x3e0
    
    if ((rdx_11 & 0x7fffff) != 0)
        result = (((rdx_11 u>> 5 | rdx_11) u>> 0xa | rdx_11) u>> 3 | rdx_11) & 0x1f
        rcx_3 = 0x3e0 | result
    else if (r10_2 != 0)
        rcx_3 = 0
else if (r10_2 != 0)
    rcx_3 = 0
else if (rdx_11 u<= 0x477c0000)
    uint32_t rdx_14
    
    if (rdx_11 u>= 0x38800000)
        rdx_14 = rdx_11 - 0x38000000
    else
        rdx_14 = ((rdx_11 & 0x7fffff) | 0x800000) u>> (0x71 - (rdx_11 u>> 0x17).b)
    
    result = rdx_14 u>> 0x12 & 1
    rcx_3 = (rdx_14 + 0x1ffff + result) u>> 0x12 & 0x3ff
else
    rcx_3 = 0x3df

*arg1 = ((r8 & 0x7ff) | rcx_3 << 0xb) << 0xb | (r9 & 0x7ff)
__security_check_cookie(rax_1 ^ &var_28)
return result
