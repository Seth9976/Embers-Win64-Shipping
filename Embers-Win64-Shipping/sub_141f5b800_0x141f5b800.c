// 函数: sub_141f5b800
// 地址: 0x141f5b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = 0
int64_t arg_8 = arg2
int32_t r8 = arg2.d
int32_t rcx

if (*(arg1 + 0x430) != 0)
    int32_t i = *(arg1 + 0x518)
    int32_t r9_1 = 0
    int32_t r10_1 = arg2:4.d
    int64_t rbx_1 = *(arg1 + 0x510)
    
    while (i s> 0)
        int32_t rcx_2 = i & 0x80000001
        
        if (rcx_2 s< 0)
            rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i)
        int32_t i_1 = (temp3_1 - temp2_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + r9_1
        int64_t rcx_6 = sx.q(rax_4) * 2
        int32_t rax_5 = *(rbx_1 + (rcx_6 << 3))
        int32_t rax_6 = rax_5 - r8
        
        if (rax_5 == r8)
            rax_6 = *(rbx_1 + (rcx_6 << 3) + 4) - r10_1
        
        if (rax_6 s< 0)
            r9_1 = rax_4 + rcx_2
    
    int64_t rax_9
    int32_t r8_1
    
    if (r9_1 s< *(arg1 + 0x518))
        rax_9 = sx.q(r9_1) << 4
        r8_1 = r8 - *(rax_9 + rbx_1)
        
        if (r8 == *(rax_9 + rbx_1))
            r8_1 = r10_1 - *(rax_9 + rbx_1 + 4)
    
    int64_t* rax_11
    
    if (r9_1 s>= *(arg1 + 0x518) || r8_1 s< 0 || r9_1 == 0xffffffff)
        rax_11 = nullptr
    else
        rax_11 = rax_9 + 8 + rbx_1
    
    int64_t* rbx_2 = &arg_8
    
    if (rax_11 != 0)
        rbx_2 = rax_11
    
    int64_t rbx_3 = *rbx_2
    void* rax_12 = sub_142310d00(*(arg1 + 0x430), rbx_3)
    
    if (rax_12 == 0)
        if (sub_141f5e0e0(arg1, rbx_3) == 0xffffffff)
            rcx = 0
        else
            rcx = rbx_3.d
            rdi = (rbx_3 u>> 0x20).d
    else
        int64_t rax_13 = *(rax_12 + 0x30)
        rcx = rax_13.d
        rdi = (rax_13 u>> 0x20).d
else
    rcx = 0

bool rax_16 = sub_140b5b8a0(rcx, 0) == 0
rcx.b = rdi != 0
return rax_16 | rcx.b
