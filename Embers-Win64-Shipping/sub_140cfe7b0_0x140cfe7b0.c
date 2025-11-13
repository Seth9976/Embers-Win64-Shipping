// 函数: sub_140cfe7b0
// 地址: 0x140cfe7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t r15_1 = *arg3
    int64_t rbp_1 = arg3[1]
    uint32_t r9_2 = (r15_1 u>> 4).d
    uint32_t rcx_1 = (rbp_1 u>> 4).d
    int32_t r10_2 = (0x9e3779b9 - r9_2) ^ r9_2 << 8
    int32_t rbx_3 = neg.d(r10_2 + r9_2) ^ r10_2 u>> 0xd
    int32_t r9_5 = (r9_2 - r10_2 - rbx_3) ^ rbx_3 u>> 0xc
    int32_t r10_5 = (r10_2 - r9_5 - rbx_3) ^ r9_5 << 0x10
    int32_t rbx_6 = (rbx_3 - r10_5 - r9_5) ^ r10_5 u>> 5
    int32_t r9_8 = (r9_5 - r10_5 - rbx_6) ^ rbx_6 u>> 3
    int32_t r10_8 = (r10_5 - r9_8 - rbx_6) ^ r9_8 << 0xa
    int32_t rdx_1 = (0x9e3779b9 - rcx_1) ^ rcx_1 << 8
    int32_t r11_3 = neg.d(rdx_1 + rcx_1) ^ rdx_1 u>> 0xd
    int32_t rcx_4 = (rcx_1 - rdx_1 - r11_3) ^ r11_3 u>> 0xc
    int32_t rdx_4 = (rdx_1 - rcx_4 - r11_3) ^ rcx_4 << 0x10
    int32_t r11_6 = (r11_3 - rdx_4 - rcx_4) ^ rdx_4 u>> 5
    int32_t rcx_7 = (rcx_4 - rdx_4 - r11_6) ^ r11_6 u>> 3
    int32_t rdx_7 = (rdx_4 - rcx_7 - r11_6) ^ rcx_7 << 0xa
    int32_t r11_9 = (r11_6 - rdx_7 - rcx_7) ^ rdx_7 u>> 0xf
    void* rdx_9 = arg1[8]
    void* r8 = &arg1[7]
    int32_t rbx_11 = (((rbx_6 - r10_8 - r9_8) ^ r10_8 u>> 0xf) - r11_9) ^ r11_9 u>> 0xd
    int32_t rdi_3 = (0x9e3779b9 - rbx_11 - r11_9) ^ rbx_11 << 8
    int32_t r11_12 = (r11_9 - rdi_3 - rbx_11) ^ rdi_3 u>> 0xd
    int32_t rbx_14 = (rbx_11 - rdi_3 - r11_12) ^ r11_12 u>> 0xc
    int32_t rdi_6 = (rdi_3 - rbx_14 - r11_12) ^ rbx_14 << 0x10
    int32_t r11_15 = (r11_12 - rdi_6 - rbx_14) ^ rdi_6 u>> 5
    int32_t rbx_17 = (rbx_14 - rdi_6 - r11_15) ^ r11_15 u>> 3
    int32_t rdi_9 = (rdi_6 - rbx_17 - r11_15) ^ rbx_17 << 0xa
    
    if (rdx_9 != 0)
        r8 = rdx_9
    
    int32_t i = *(r8
        + (((sx.q(r11_15 - rdi_9 - rbx_17) ^ zx.q(rdi_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_10 = *arg1
        
        do
            int64_t rcx_12 = sx.q(i) << 5
            
            if (*(rcx_12 + rdx_10) == r15_1 && *(rcx_12 + rdx_10 + 8) == rbp_1)
                *arg2 = i
                return arg2
            
            i = *(rcx_12 + rdx_10 + 0x18)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
