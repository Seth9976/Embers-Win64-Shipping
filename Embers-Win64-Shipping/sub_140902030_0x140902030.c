// 函数: sub_140902030
// 地址: 0x140902030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t rbx_1 = *arg3
    int32_t rax_1 = sub_140b5ead0(rbx_1.d)
    int32_t r11_1 = arg3[1].d
    void* r8 = &arg1[7]
    void* rdx = *(r8 + 8)
    int32_t r10_3 = (rax_1 + (rbx_1 u>> 0x20).d - r11_1) ^ r11_1 u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_3 - r11_1) ^ r10_3 << 8
    int32_t rcx_4 = (r11_1 - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - rcx_4) ^ rcx_4 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - rcx_4) ^ r10_6 << 0x10
    int32_t rcx_7 = (rcx_4 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - rcx_7) ^ rcx_7 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - rcx_7) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i =
        *(r8 + (((sx.q(rcx_7 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_1 = *arg1
        
        do
            int64_t rcx_14 = sx.q(i) << 5
            
            if (*(rcx_14 + rdx_1) == *arg3 && *(rcx_14 + rdx_1 + 8) == r11_1)
                *arg2 = i
                return arg2
            
            i = *(rcx_14 + rdx_1 + 0x18)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
