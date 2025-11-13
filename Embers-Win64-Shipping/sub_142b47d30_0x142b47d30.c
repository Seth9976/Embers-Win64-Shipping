// 函数: sub_142b47d30
// 地址: 0x142b47d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142ab9920(arg3) == 0 || ((*(arg3 + 0x4c)).b & 8) != 0)
    return 0

int32_t rax_2 = sub_142b46670(arg2, arg1 + 8)
int16_t rax_3 = *(arg1 + 0x10)
int32_t rax_5

if (rax_3 s< 0)
    rax_5 = *(arg1 + 0x14)
else
    rax_5 = sx.d(rax_3) s>> 5

uint32_t result

if (rax_2 != rax_5)
    result.b = rax_2 == sub_142b467c0(arg2)
else if (sub_142b467c0(arg2) != rax_2)
    sub_142b464f0(arg2, rax_2)
    int64_t r12
    r12.b = 1
    
    if (sub_142b46800(arg2, sub_142b2ca60(0xb)) != 0)
        r12.b = 0xff
        sub_142b46500(arg2)
    label_142b47e63:
        char rbx_1 = *(arg3 + 8)
        *(arg3 + 8) = 0
        int32_t rax_11 = sub_1408e52c0(arg2)
        int64_t r9
        int64_t var_38_1 = r9
        char rax_12 = sub_142b46e20(arg1 + 0x48, arg2, arg3, r12.b)
        *(arg3 + 8) = rbx_1
        
        if (sub_1408e52c0(arg2) == rax_11)
            sub_142b464f0(arg2, neg.d(rax_2))
            return zx.d(rax_12)
        
        *(arg3 + 0x4c) |= 8
        return zx.d(rax_12)
    
    if (sub_142b46800(arg2, sub_142b2ca60(0xc)) != 0)
        sub_142b46500(arg2)
        goto label_142b47e63
    
    int64_t* rcx_12
    
    if (sub_142b46830(arg2, arg1 + 0x110) == 0)
        if (sub_142b46830(arg2, arg1 + 0x150) == 0)
            goto label_142b47e63
        
        result = sub_142b46670(arg2, arg1 + 0x150)
        int16_t rcx_17 = *(arg1 + 0x158)
        int32_t rcx_19
        
        if (rcx_17 s< 0)
            rcx_19 = *(arg1 + 0x15c)
        else
            rcx_19 = sx.d(rcx_17) s>> 5
        
        rcx_12 = arg2
        
        if (result == rcx_19)
            goto label_142b47e5e
        
        sub_142b464f0(rcx_12, neg.d(rax_2))
        result.b = 1
    else
        result = sub_142b46670(arg2, arg1 + 0x110)
        int16_t rcx_9 = *(arg1 + 0x118)
        int32_t rcx_11
        
        if (rcx_9 s< 0)
            rcx_11 = *(arg1 + 0x11c)
        else
            rcx_11 = sx.d(rcx_9) s>> 5
        
        rcx_12 = arg2
        
        if (result == rcx_11)
            r12.b = 0xff
        label_142b47e5e:
            sub_142b464f0(rcx_12, result)
            goto label_142b47e63
        
        sub_142b464f0(rcx_12, neg.d(rax_2))
        result.b = 1
else
    result.b = 1

return result
