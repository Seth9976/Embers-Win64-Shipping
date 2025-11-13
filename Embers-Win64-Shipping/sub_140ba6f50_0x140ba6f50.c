// 函数: sub_140ba6f50
// 地址: 0x140ba6f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_20
int32_t rbp_1
int32_t r14_1
int64_t r15_1

if (arg1[1].d != *(arg1 + 0x34))
    r15_1 = *arg3
    void* r9_1 = &arg1[7]
    rbp_1 = *(arg3 + 0xc)
    void* r8 = *(r9_1 + 8)
    r14_1 = arg3[1].d
    uint32_t rbx_2 = (r15_1 u>> 4).d
    int32_t r11_2 = (0x9e3779b9 - rbx_2) ^ rbx_2 << 8
    int32_t r10_3 = neg.d(r11_2 + rbx_2) ^ r11_2 u>> 0xd
    int32_t rbx_5 = (rbx_2 - r11_2 - r10_3) ^ r10_3 u>> 0xc
    int32_t r11_5 = (r11_2 - rbx_5 - r10_3) ^ rbx_5 << 0x10
    int32_t r10_6 = (r10_3 - r11_5 - rbx_5) ^ r11_5 u>> 5
    int32_t rbx_8 = (rbx_5 - r11_5 - r10_6) ^ r10_6 u>> 3
    int32_t r11_8 = (r11_5 - rbx_8 - r10_6) ^ rbx_8 << 0xa
    
    if (r8 != 0)
        r9_1 = r8
    
    rax_20 = *(r9_1 + (((sx.q((rbp_1 << 0xe ^ r14_1) << 0xd ^ r11_8 u>> 0xf)
        ^ sx.q(r10_6 - r11_8 - rbx_8)) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_20 == 0xffffffff)
label_140ba7068:
    *arg2 = 0xffffffff
else
    int64_t r8_1 = *arg1
    
    while (true)
        int64_t rdx_3 = sx.q(rax_20) * 3
        
        if (*(r8_1 + (rdx_3 << 3)) == r15_1 && *(r8_1 + (rdx_3 << 3) + 8) == r14_1
                && *(r8_1 + (rdx_3 << 3) + 0xc) == rbp_1)
            *arg2 = rax_20
            break
        
        rax_20 = *(r8_1 + (rdx_3 << 3) + 0x10)
        
        if (rax_20 == 0xffffffff)
            goto label_140ba7068

return arg2
