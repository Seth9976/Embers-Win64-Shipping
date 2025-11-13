// 函数: sub_140a951b0
// 地址: 0x140a951b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg4)

if (*arg3 != result.b)
    int32_t rdx = arg1[1].d
    
    if (rdx s> 1)
        int32_t rsi_1 = rdx - 1
        int32_t rax
        rax.b = rdx s<= 0
        
        if (rdx s<= 0)
            rsi_1 = 0
        
        int32_t rax_2 = rax + 1 + rdx
        arg1[1].d = rax_2
        
        if (rax_2 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        int64_t rcx = sx.q(rsi_1)
        *(*arg1 + (rcx << 1)) = 0x2e
        *(*arg1 + (rcx << 1) + 2) = 0
    
    int64_t r8 = -1
    
    do
        r8 += 1
    while (*(arg2 + (r8 << 1)) != 0)
    
    sub_140a20ba0(arg1, arg2, r8.d)
    int32_t rdx_2 = arg1[1].d
    int32_t rax_5
    rax_5.b = rdx_2 s<= 0
    int32_t rdi_1 = rdx_2 - 1
    
    if (rdx_2 s<= 0)
        rdi_1 = 0
    
    int32_t rax_7 = rax_5 + 1 + rdx_2
    arg1[1].d = rax_7
    
    if (rax_7 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    int64_t rcx_3 = sx.q(rdi_1)
    *(*arg1 + (rcx_3 << 1)) = 0x28
    *(*arg1 + (rcx_3 << 1) + 2) = 0
    (*arg5)(*(arg5 + 8), arg1, arg3)
    int32_t rdx_4 = arg1[1].d
    int32_t rax_11
    rax_11.b = rdx_4 s<= 0
    int32_t rdi_2 = rdx_4 - 1
    
    if (rdx_4 s<= 0)
        rdi_2 = 0
    
    int32_t rax_13 = rax_11 + 1 + rdx_4
    arg1[1].d = rax_13
    
    if (rax_13 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    int64_t rcx_6 = sx.q(rdi_2)
    *(*arg1 + (rcx_6 << 1)) = 0x29
    result = *arg1
    *(result + (rcx_6 << 1) + 2) = 0

return result
