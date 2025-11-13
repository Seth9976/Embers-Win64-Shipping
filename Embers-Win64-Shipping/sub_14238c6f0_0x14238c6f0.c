// 函数: sub_14238c6f0
// 地址: 0x14238c6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_12

if (arg1[1].d != *(arg1 + 0x34))
    int64_t rbx_1 = *arg3
    int32_t rdi_1 = (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d)
    int32_t rdx_2 = rdi_1 u>> 0xd ^ neg.d(rdi_1)
    int32_t rcx_3 = (0x9e3779b9 - rdx_2 - rdi_1) ^ rdx_2 << 8
    int32_t rdi_4 = (rdi_1 - rcx_3 - rdx_2) ^ rcx_3 u>> 0xd
    int32_t rdx_5 = (rdx_2 - rcx_3 - rdi_4) ^ rdi_4 u>> 0xc
    int32_t rcx_6 = (rcx_3 - rdx_5 - rdi_4) ^ rdx_5 << 0x10
    int32_t rdi_7 = (rdi_4 - rcx_6 - rdx_5) ^ rcx_6 u>> 5
    int32_t rdx_8 = (rdx_5 - rcx_6 - rdi_7) ^ rdi_7 u>> 3
    int32_t rcx_9 = (rcx_6 - rdx_8 - rdi_7) ^ rdx_8 << 0xa
    int32_t rax_18 = arg3[2].d
    int16_t* rdx_9
    
    if (rax_18 == 0)
        rdx_9 = &data_142d40450
    else
        rdx_9 = arg3[1]
    
    int32_t rcx_11 = rax_18 - 1
    
    if (rax_18 == 0)
        rcx_11 = 0
    
    int32_t rax_19 = sub_1405969c0(rcx_11, rdx_9)
    void* rdx_10 = arg1[8]
    void* r8 = &arg1[7]
    int32_t rdi_12 = (((rdi_7 - rcx_9 - rdx_8) ^ rcx_9 u>> 0xf) - rax_19) ^ rax_19 u>> 0xd
    int32_t rbx_5 = (0x9e3779b9 - rdi_12 - rax_19) ^ rdi_12 << 8
    int32_t r9_4 = (rax_19 - rbx_5 - rdi_12) ^ rbx_5 u>> 0xd
    int32_t rdi_15 = (rdi_12 - rbx_5 - r9_4) ^ r9_4 u>> 0xc
    int32_t rbx_8 = (rbx_5 - rdi_15 - r9_4) ^ rdi_15 << 0x10
    int32_t r9_7 = (r9_4 - rbx_8 - rdi_15) ^ rbx_8 u>> 5
    int32_t rdi_18 = (rdi_15 - rbx_8 - r9_7) ^ r9_7 u>> 3
    int32_t rbx_11 = (rbx_8 - rdi_18 - r9_7) ^ rdi_18 << 0xa
    
    if (rdx_10 != 0)
        r8 = rdx_10
    
    rbx_12 = *(r8
        + (((sx.q(r9_7 - rbx_11 - rdi_18) ^ zx.q(rbx_11) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_12 == 0xffffffff)
label_14238c88b:
    *arg2 = 0xffffffff
else
    int64_t rax_36 = *arg1
    
    while (true)
        int64_t rdi_19 = sx.q(rbx_12) * 0x28
        
        if (sub_140d16af0(rdi_19 + rax_36, arg3) != 0)
            *arg2 = rbx_12
            break
        
        rax_36 = *arg1
        rbx_12 = *(rdi_19 + rax_36 + 0x20)
        
        if (rbx_12 == 0xffffffff)
            goto label_14238c88b

return arg2
