// 函数: sub_140d150a0
// 地址: 0x140d150a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d1a980(arg1, arg1[1].d - *(arg1 + 0x34), 0)
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
            int64_t rcx_11 = result * 5
            i = *(rdx_3 + (rcx_11 << 3) + 0x20)
            
            if (*(rdx_3 + (rcx_11 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    while (i_1 != 0xffffffff)
        int64_t r14_1 = sx.q(arg3[1].d)
        int32_t rax_16 = (r14_1 + 1).d
        arg3[1].d = rax_16
        
        if (rax_16 s> *(arg3 + 0xc))
            sub_1405a4df0(arg3)
        
        result = *arg3
        int64_t rdx_5 = result + r14_1 * 0x18
        
        if (rdx_5 != 0)
            int64_t rcx_14 = sx.q(i_1) * 5
            result = *arg1
            *rdx_5 = *(result + (rcx_14 << 3) + 8)
            *(rdx_5 + 0x10) = *(result + (rcx_14 << 3) + 0x18)
        
        i_1 = i
        
        if (i == 0xffffffff)
            break
        
        int64_t rdx_6 = *arg1
        
        do
            result = sx.q(i_1)
            int64_t rcx_15 = result * 5
            i = *(rdx_6 + (rcx_15 << 3) + 0x20)
            
            if (*(rdx_6 + (rcx_15 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)

if (arg4 != 0)
    int32_t rax_18 = arg3[1].d
    int128_t* r10_9 = *arg3
    int32_t r8_1 = rax_18 - 1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_18)
    result = zx.q((temp1_1 - temp0_1) s>> 1)
    
    if (result.d s> 0)
        int128_t* rcx_16 = r10_9
        uint64_t i_3 = zx.q(result.d)
        uint64_t i_2
        
        do
            result = r10_9 + sx.q(r8_1) * 0x18
            
            if (rcx_16 != result)
                int128_t zmm3 = *rcx_16
                int64_t zmm2 = rcx_16[1].q
                *rcx_16 = *result
                rcx_16[1].q = *(result + 0x10)
                *result = zmm3
                *(result + 0x10) = zmm2
            
            rcx_16 += 0x18
            r8_1 -= 1
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

return result
