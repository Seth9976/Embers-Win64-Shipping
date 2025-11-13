// 函数: sub_140758f00
// 地址: 0x140758f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    uint32_t r10_2 = (arg3 u>> 4).d
    int32_t r9_2 = (0x9e3779b9 - r10_2) ^ r10_2 << 8
    int32_t rcx_2 = neg.d(r9_2 + r10_2) ^ r9_2 u>> 0xd
    int32_t r10_5 = (r10_2 - r9_2 - rcx_2) ^ rcx_2 u>> 0xc
    int32_t r9_5 = (r9_2 - r10_5 - rcx_2) ^ r10_5 << 0x10
    int32_t rcx_5 = (rcx_2 - r9_5 - r10_5) ^ r9_5 u>> 5
    int32_t r10_8 = (r10_5 - r9_5 - rcx_5) ^ rcx_5 u>> 3
    int32_t r9_8 = (r9_5 - r10_8 - rcx_5) ^ r10_8 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i =
        *(r8 + (((sx.q(rcx_5 - r9_8 - r10_8) ^ zx.q(r9_8) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_1 = sx.q(i) * 9
            
            if (*(r8_1 + (rdx_1 << 3)) == arg3)
                *arg2 = i
                return arg2
            
            i = *(r8_1 + (rdx_1 << 3) + 0x40)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
