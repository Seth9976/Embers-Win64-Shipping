// 函数: sub_1423611b0
// 地址: 0x1423611b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rbx_1 = arg3[1]
    int32_t rsi_1 = *arg3
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    int32_t r10_3 = (rsi_1 - rbx_1) ^ rbx_1 u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_3 - rbx_1) ^ r10_3 << 8
    int32_t rcx_3 = (rbx_1 - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - rcx_3) ^ rcx_3 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - rcx_3) ^ r10_6 << 0x10
    int32_t rcx_6 = (rcx_3 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - rcx_6) ^ rcx_6 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - rcx_6) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i =
        *(r8 + (((sx.q(rcx_6 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_1 = *arg1
        
        do
            int64_t rcx_13 = sx.q(i) << 5
            
            if (*(rcx_13 + rdx_1) == rsi_1 && *(rcx_13 + rdx_1 + 4) == rbx_1)
                *arg2 = i
                return arg2
            
            i = *(rcx_13 + rdx_1 + 0x18)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
