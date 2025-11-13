// 函数: sub_142616940
// 地址: 0x142616940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
int64_t r12 = sx.q(arg4)
int64_t rbp = sx.q(*arg5)
int32_t rdi_1 = r12.d - rsi.d
int64_t rbx_1 = rbp * 2
*arg5 = (rbp + 1).d
int64_t rax_2 = rsi << 4
void* _Base = rax_2 + arg1
*(arg6 + (rbx_1 << 3)) = *(rax_2 + arg1)
*(arg6 + (rbx_1 << 3) + 2) = *(_Base + 2)
*(arg6 + (rbx_1 << 3) + 4) = *(_Base + 4)
*(arg6 + (rbx_1 << 3) + 6) = *(_Base + 6)
*(arg6 + (rbx_1 << 3) + 8) = *(_Base + 8)
*(arg6 + (rbx_1 << 3) + 0xa) = *(_Base + 0xa)
int32_t result

if (rdi_1 != 1)
    int64_t r8 = sx.q((rsi + 1).d)
    
    if (r8 s< r12)
        void* rcx_1 = arg1 + 4 + (r8 << 4)
        int64_t i_1 = r12 - r8
        int64_t i
        
        do
            int16_t rax_12 = *(rcx_1 - 4)
            
            if (rax_12 u< *(arg6 + (rbx_1 << 3)))
                *(arg6 + (rbx_1 << 3)) = rax_12
            
            int16_t rax_13 = *(rcx_1 - 2)
            
            if (rax_13 u< *(arg6 + (rbx_1 << 3) + 2))
                *(arg6 + (rbx_1 << 3) + 2) = rax_13
            
            int16_t rax_14 = *rcx_1
            
            if (rax_14 u< *(arg6 + (rbx_1 << 3) + 4))
                *(arg6 + (rbx_1 << 3) + 4) = rax_14
            
            int16_t rax_15 = *(rcx_1 + 2)
            
            if (rax_15 u> *(arg6 + (rbx_1 << 3) + 6))
                *(arg6 + (rbx_1 << 3) + 6) = rax_15
            
            int16_t rax_16 = *(rcx_1 + 4)
            
            if (rax_16 u> *(arg6 + (rbx_1 << 3) + 8))
                *(arg6 + (rbx_1 << 3) + 8) = rax_16
            
            int16_t rax_17 = *(rcx_1 + 6)
            
            if (rax_17 u> *(arg6 + (rbx_1 << 3) + 0xa))
                *(arg6 + (rbx_1 << 3) + 0xa) = rax_17
            
            rcx_1 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int16_t rdx_1 = *(arg6 + (rbx_1 << 3) + 8) - *(arg6 + (rbx_1 << 3) + 2)
    int16_t rax_18 = *(arg6 + (rbx_1 << 3) + 6) - *(arg6 + (rbx_1 << 3))
    bool cond:0_1 = rdx_1 u> rax_18
    
    if (rdx_1 u<= rax_18)
        rdx_1 = rax_18
    
    int32_t r8_1
    r8_1.b = cond:0_1
    
    if (*(arg6 + (rbx_1 << 3) + 0xa) - *(arg6 + (rbx_1 << 3) + 4) u> rdx_1)
        r8_1 = 2
    
    _CoreCrtNonSecureSearchSortCompareFunction_1 _CompareFunction
    
    if (r8_1 != 0)
        _CompareFunction = sub_142605a90
        
        if (r8_1 != 1)
            _CompareFunction = sub_142605ab0
    else
        _CompareFunction = sub_142605a70
    
    qsort(_Base, sx.q(rdi_1), 0x10, _CompareFunction)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1)
    int32_t rdi_2 = rsi.d + ((temp1_1 - temp0_1) s>> 1)
    sub_142616940(arg1, zx.q(arg2), zx.q(rsi.d), zx.q(rdi_2), arg5, arg6)
    result = sub_142616940(arg1, zx.q(arg2), zx.q(rdi_2), zx.q(r12.d), arg5, arg6)
    *(arg6 + (rbx_1 << 3) + 0xc) = rbp.d - *arg5
else
    result = *(_Base + 0xc)
    *(arg6 + (rbx_1 << 3) + 0xc) = result

return result
