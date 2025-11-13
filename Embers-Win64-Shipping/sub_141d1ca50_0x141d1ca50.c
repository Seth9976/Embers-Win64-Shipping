// 函数: sub_141d1ca50
// 地址: 0x141d1ca50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t rbx_1 = *arg3
    int32_t rdi_1 = sub_140b5ead0(rbx_1.d) + (rbx_1 u>> 0x20).d
    int64_t rbx_3 = arg3[1]
    int32_t rax_2 = sub_140b5ead0(rbx_3.d)
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    int32_t r10_1 = (rbx_3 u>> 0x20).d + rax_2
    int32_t rdi_3 = (rdi_1 - r10_1) ^ r10_1 u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - rdi_3 - r10_1) ^ rdi_3 << 8
    int32_t r10_4 = (r10_1 - r9_3 - rdi_3) ^ r9_3 u>> 0xd
    int32_t rdi_6 = (rdi_3 - r9_3 - r10_4) ^ r10_4 u>> 0xc
    int32_t r9_6 = (r9_3 - rdi_6 - r10_4) ^ rdi_6 << 0x10
    int32_t r10_7 = (r10_4 - r9_6 - rdi_6) ^ r9_6 u>> 5
    int32_t rdi_9 = (rdi_6 - r9_6 - r10_7) ^ r10_7 u>> 3
    int32_t r9_9 = (r9_6 - rdi_9 - r10_7) ^ rdi_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t i =
        *(r8 + (((sx.q(r10_7 - r9_9 - rdi_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_2 = sx.q(i) * 6
            
            if (*(r8_1 + (rdx_2 << 3)) == *arg3 && *(r8_1 + (rdx_2 << 3) + 8) == arg3[1])
                *arg2 = i
                return arg2
            
            i = *(r8_1 + (rdx_2 << 3) + 0x28)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
