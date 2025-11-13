// 函数: sub_142196bf0
// 地址: 0x142196bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[0x14].d - arg2[0x15].d)
int64_t rsi

if (result.d == 0xe2 || result.d == 0x182)
    rsi.b = 0
    
    if ((*(arg2 + 0x29) & 1) == 0)
        int64_t r10_1 = arg2[0x15]
        
        if (r10_1 s< arg2[0x14])
            bool cond:0_1 = (*(sx.q((r10_1 s>> 3).d) + arg2[0x12]) & 1 << (r10_1.b & 7)) != 0
            arg2[0x15] = r10_1 + 1
            rsi.b = cond:0_1
        else
            sub_140b55370(arg2)
    
    *arg3 = rsi.b
    rsi.b = 0
    
    if ((*(arg2 + 0x29) & 1) == 0)
        int64_t r9_2 = arg2[0x15]
        
        if (r9_2 s< arg2[0x14])
            bool cond:2_1 = (*(sx.q((r9_2 s>> 3).d) + arg2[0x12]) & 1 << (r9_2.b & 7)) != 0
            arg2[0x15] = r9_2 + 1
            rsi.b = cond:2_1
        else
            sub_140b55370(arg2)
    
    *arg4 = rsi.b
    int64_t* rcx_9 = arg2[1]
    int64_t* rdx_6 = *rcx_9
    
    if (&rdx_6[1] u<= rcx_9[1])
        *arg6 = *rdx_6
        int64_t* rax_11 = arg2[1]
        *rax_11 += 8
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b540d0(arg2, arg6, arg5)
    else
        (*(*arg2 + 0x150))(arg2, arg6, 8)
    
    (*(*arg2 + 0x150))(arg2, arg7, 0x14)
    
    if (result.d == 0x182)
        (*(*arg2 + 0x150))(arg2, arg8, 0x14)
    
    result.b = not.b(*(arg2 + 0x29))
    result.b &= 1
else
    if (result.d == 1)
        rsi.b = 0
        
        if ((*(arg2 + 0x29) & result.b) == 0)
            int64_t r9 = arg2[0x15]
            
            if (r9 s< arg2[0x14])
                bool cond:3_1 = (*(sx.q((r9 s>> 3).d) + arg2[0x12]) & 1 << (r9.b & 7)) != 0
                arg2[0x15] = r9 + 1
                rsi.b = cond:3_1
            else
                sub_140b55370(arg2)
        
        *arg3 = rsi.b
    
    if (result.d != 1 || (*(arg2 + 0x29) & 1) != 0 || rsi.b == 0 || *(*(arg1 + 8) + 8) != 0)
        result.b = 0
    else
        result.b = 1
return result
