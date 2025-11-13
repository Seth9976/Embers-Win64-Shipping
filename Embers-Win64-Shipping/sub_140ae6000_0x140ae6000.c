// 函数: sub_140ae6000
// 地址: 0x140ae6000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140a6d3f0(arg1, arg1[1].d - *(arg1 + 0x34), 0)

if (arg1[9].d != 0)
    int32_t result_1 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    result = sx.q(result_1)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(arg1[9].d) - 1) & result) << 2))
    int32_t i_1 = i
    int32_t i_6 = i
    int32_t i_5 = i
    
    if (i != 0xffffffff)
        int64_t rdx_5 = *arg1
        
        do
            result = sx.q(i_1)
            int64_t rcx_3 = result * 6
            i = *(rdx_5 + (rcx_3 << 3) + 0x28)
            i_5 = i
            i_6 = i
            
            if (*(rdx_5 + (rcx_3 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    while (i_1 != 0xffffffff)
        int64_t r14_1 = sx.q(arg3[1].d)
        void* const r13_1 = 0x18
        int64_t i_3 = sx.q(i_1)
        i_1 = i_6
        void* rdx_8 = i_3 * 0x30 + *arg1
        int32_t rax_1 = *(rdx_8 + 0x20)
        int32_t rcx_4 = rax_1 - 1
        
        if (rax_1 == 0)
            rcx_4 = 0
        
        int32_t rax_2 = (r14_1 + 1).d
        arg3[1].d = rax_2
        
        if (rcx_4 s<= 0)
            r13_1 = 8
        
        if (rax_2 s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
            i_1 = i_5
        
        result = sub_140596d10((r14_1 << 4) + *arg3, r13_1 + rdx_8)
        
        if (i == 0xffffffff)
            break
        
        int64_t rdx_11 = *arg1
        
        do
            result = sx.q(i_1)
            int64_t rcx_10 = result * 6
            i = *(rdx_11 + (rcx_10 << 3) + 0x28)
            i_6 = i
            
            if (*(rdx_11 + (rcx_10 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)
        
        i_5 = i

if (arg4 != 0)
    int32_t rax_3 = arg3[1].d
    int128_t* r9 = *arg3
    int32_t r8_1 = rax_3 - 1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_3)
    result = zx.q((temp1_1 - temp0_1) s>> 1)
    
    if (result.d s> 0)
        int128_t* rcx_11 = r9
        uint64_t i_4 = zx.q(result.d)
        uint64_t i_2
        
        do
            result = &r9[sx.q(r8_1)]
            
            if (rcx_11 != result)
                int128_t zmm1_1 = *rcx_11
                *rcx_11 = *result
                *result = zmm1_1
            
            rcx_11 = &rcx_11[1]
            r8_1 -= 1
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

return result
