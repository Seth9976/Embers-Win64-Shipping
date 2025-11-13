// 函数: sub_142be3ca0
// 地址: 0x142be3ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x2e8)
uint64_t rdi = zx.q(arg3)
int64_t* rbp = *(arg1 + 0xa0)
int32_t rax
int32_t rcx
int16_t* r8

if (arg2 == 0)
    rax = *(arg1 + 0x4c0)
    r8 = 0x15a
    rcx = *(arg1 + 0x42c)
else
    rax = *(arg1 + 0x4c4)
    r8 = 0x1ba
    rcx = *(arg1 + 0x430)

int32_t r13 = rcx + rax
int16_t rcx_1 = *(r8 + arg1)
int32_t var_44
uint32_t result

if (rcx_1 == 0)
label_142be3d70:
    result = 0
    *arg4 = 0
    *arg6 = 0
else
    uint64_t r12_1 = zx.q(rcx_1)
    uint32_t result_1
    
    if (rdi.d u>= r12_1.d)
        int32_t rcx_7 = rax - 4 + (r12_1 << 2).d
        var_44 = rcx_7
        
        if (rcx_7 + 4 u> r13)
            goto label_142be3d70
        
        uint32_t result_3 = sub_142b97060(rbp, rcx_7, arg5)
        result_1 = result_3
        
        if (result_3 != 0)
            goto label_142be3d70
        
        int16_t rax_7 = sub_142b96f00(rbp, &result_1)
        bool cond:1_1 = result_1 != 0
        *arg6 = rax_7
        
        if (cond:1_1)
            goto label_142be3d70
        
        int32_t rdx_6 = var_44 + 4 + ((rdi.d - r12_1.d) << 1)
        
        if (rdx_6 + 2 u<= r13)
            result = sub_142b97060(rbp, rdx_6, arg5)
            result_1 = result
            
            if (result == 0)
                result = sub_142b96f00(rbp, &result_1)
                *arg4 = result.w
        else
            result = 0
            *arg4 = 0
    else
        int32_t rdx = rax + (rdi << 2).d
        
        if (rdx + 4 u> r13)
            goto label_142be3d70
        
        uint32_t result_2 = sub_142b97060(rbp, rdx, arg5)
        result_1 = result_2
        
        if (result_2 != 0)
            goto label_142be3d70
        
        int16_t rax_2 = sub_142b96f00(rbp, &result_1)
        bool cond:2_1 = result_1 != 0
        *arg6 = rax_2
        
        if (cond:2_1)
            goto label_142be3d70
        
        result = sub_142b96f00(rbp, &result_1)
        bool cond:3_1 = result_1 == 0
        *arg4 = result.w
        
        if (not(cond:3_1))
            goto label_142be3d70

if (rsi != 0)
    uint32_t var_48 = zx.d(*arg6)
    var_44 = sx.d(*arg4)
    int64_t rax_12
    
    if (arg2 == 0)
        int64_t rax_11 = *rsi
        
        if (rax_11 != 0)
            rax_11(arg1, zx.q(rdi.d), &var_48)
        
        rax_12 = rsi[1]
    else
        int64_t rax_5 = rsi[3]
        
        if (rax_5 != 0)
            rax_5(arg1, zx.q(rdi.d), &var_48)
        
        rax_12 = rsi[4]
    
    if (rax_12 != 0)
        rax_12(arg1, zx.q(rdi.d), &var_44)
    
    *arg6 = var_48.w
    result = zx.d(var_44.w)
    *arg4 = result.w

return result
