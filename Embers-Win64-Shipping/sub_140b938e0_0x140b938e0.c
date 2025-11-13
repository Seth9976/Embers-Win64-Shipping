// 函数: sub_140b938e0
// 地址: 0x140b938e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1405b6470(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r11 = sx.q(arg1[9].d)

if (r11.d != 0)
    void* rdx_2 = arg1[8]
    void* r8 = &arg1[7]
    uint32_t r10_2 = (arg2 u>> 4).d
    int32_t r9_1 = (0x9e3779b9 - r10_2) ^ r10_2 << 8
    int32_t rcx_2 = neg.d(r9_1 + r10_2) ^ r9_1 u>> 0xd
    int32_t r10_5 = (r10_2 - r9_1 - rcx_2) ^ rcx_2 u>> 0xc
    int32_t r9_4 = (r9_1 - r10_5 - rcx_2) ^ r10_5 << 0x10
    int32_t rcx_5 = (rcx_2 - r9_4 - r10_5) ^ r9_4 u>> 5
    int32_t r10_8 = (r10_5 - r9_4 - rcx_5) ^ rcx_5 u>> 3
    int32_t r9_7 = (r9_4 - r10_8 - rcx_5) ^ r10_8 << 0xa
    result = r11 - 1
    
    if (rdx_2 != 0)
        r8 = rdx_2
    
    int32_t i = *(r8 + (((sx.q(rcx_5 - r9_7 - r10_8) ^ zx.q(r9_7) u>> 0xf) & result) << 2))
    int32_t i_1 = i
    
    if (i != 0xffffffff)
        int64_t rdx_3 = *arg1
        
        do
            result = sx.q(i_1)
            int64_t rcx_11 = result * 3
            i = *(rdx_3 + (rcx_11 << 3) + 0x10)
            
            if (*(rdx_3 + (rcx_11 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    while (i_1 != 0xffffffff)
        int64_t r14_1 = sx.q(arg3[1].d)
        int32_t rax_16 = (r14_1 + 1).d
        arg3[1].d = rax_16
        
        if (rax_16 s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        result = *arg3
        int64_t rdx_5 = result + (r14_1 << 3)
        
        if (rdx_5 != 0)
            result = *arg1
            *rdx_5 = *(result + sx.q(i_1) * 0x18 + 8)
        
        i_1 = i
        
        if (i == 0xffffffff)
            break
        
        int64_t rdx_6 = *arg1
        
        do
            result = sx.q(i_1)
            int64_t rcx_15 = result * 3
            i = *(rdx_6 + (rcx_15 << 3) + 0x10)
            
            if (*(rdx_6 + (rcx_15 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)

if (arg4 != 0)
    int64_t rcx_16 = sx.q(arg3[1].d)
    int64_t r9_8 = *arg3
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rcx_16.d)
    result = zx.q((temp1_1 - temp0_1) s>> 1)
    int64_t r10_9 = sx.q(result.d)
    
    if (result.d s> 0)
        int64_t rdx_8 = 0
        int64_t* r8_2 = r9_8 + ((rcx_16 - 1) << 3)
        
        do
            result = *r8_2
            r8_2 = &r8_2[-1]
            int64_t rcx_17 = *(r9_8 + (rdx_8 << 3))
            *(r9_8 + (rdx_8 << 3)) = result
            rdx_8 += 1
            r8_2[1] = rcx_17
        while (rdx_8 s< r10_9)

return result
