// 函数: sub_141e7e340
// 地址: 0x141e7e340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL rax_1

if (data_143f39ba8 s<= 0)
    rax_1 = TryEnterCriticalSection(arg1 + 0xf8)

if (data_143f39ba8 s> 0 || rax_1 == 0)
    sub_141f79600(arg2)
else
    int32_t var_28
    sub_140865c40(arg1 + 0x10, &var_28, arg3)
    int64_t rax_2 = sx.q(var_28)
    
    if (rax_2.d == 0xffffffff)
    label_141e7e3e0:
        LeaveCriticalSection(arg1 + 0xf8)
        sub_141f79600(arg2)
    else
        void* rbp_1 = *(arg1 + 0x10) + rax_2 * 0x18
        
        if (rbp_1 == 0)
            goto label_141e7e3e0
        
        void* rbp_2 = *(rbp_1 + 8)
        
        if (rbp_2 == 0)
            goto label_141e7e3e0
        
        int32_t* rcx_2 = *(rbp_2 + 0x20)
        void* rdx_2 = &rcx_2[sx.q(*(rbp_2 + 0x28))]
        
        if (rcx_2 == rdx_2)
            goto label_141e7e3e0
        
        while (*rcx_2 != arg4)
            rcx_2 = &rcx_2[1]
            
            if (rcx_2 == rdx_2)
                goto label_141e7e3e0
        
        int64_t rax_6 = sx.q(*(rbp_2 + 0x18))
        int32_t rbx_1 = 0
        
        if (rax_6.d s<= 0)
            goto label_141e7e3e0
        
        int64_t rcx_5 = 0
        int32_t* rax_8 = *(rbp_2 + 0x10) + 0x18
        
        while (*rax_8 != arg4)
            rbx_1 += 1
            rcx_5 += 1
            rax_8 = &rax_8[8]
            
            if (rcx_5 s>= rax_6)
                goto label_141e7e3e0
        
        LeaveCriticalSection(arg1 + 0xf8)
        var_28.q = *(arg3 + 0x18)
        int64_t rax_10 = *(rbp_2 + 0x10)
        int64_t rcx_8 = sx.q(rbx_1) << 5
        sub_141f81d00(arg2, *(rcx_8 + rax_10), *(rcx_8 + rax_10 + 0x14), arg3, &var_28, arg4)

return arg2
