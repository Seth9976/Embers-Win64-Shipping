// 函数: sub_140ae5e50
// 地址: 0x140ae5e50
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
    
    if (i != 0xffffffff)
        int64_t rdx_5 = *arg1
        
        do
            result = sx.q(i_1)
            int64_t rcx_3 = result * 6
            i = *(rdx_5 + (rcx_3 << 3) + 0x28)
            
            if (*(rdx_5 + (rcx_3 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    while (i_1 != 0xffffffff)
        int64_t rbp_1 = sx.q(arg3[1].d)
        result = zx.q((rbp_1 + 1).d)
        arg3[1].d = result.d
        
        if (result.d s> *(arg3 + 0xc))
            result = sub_1405c4e40(arg3)
        
        int64_t rbp_2 = rbp_1 << 5
        int64_t* rbp_3 = rbp_2 + *arg3
        
        if (rbp_2 != neg.q(*arg3))
            void* rdi_3 = sx.q(i_1) * 0x30 + *arg1
            sub_140596d10(rbp_3, rdi_3 + 8)
            result = sub_140596d10(&rbp_3[2], rdi_3 + 0x18)
        
        i_1 = i
        
        if (i == 0xffffffff)
            break
        
        int64_t rdx_9 = *arg1
        
        do
            result = sx.q(i_1)
            int64_t rcx_8 = result * 6
            i = *(rdx_9 + (rcx_8 << 3) + 0x28)
            
            if (*(rdx_9 + (rcx_8 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)

if (arg4 != 0)
    int32_t rax_2 = arg3[1].d
    int128_t* r9 = *arg3
    int32_t r8_1 = rax_2 - 1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_2)
    result = zx.q((temp1_1 - temp0_1) s>> 1)
    
    if (result.d s> 0)
        int128_t* rcx_9 = r9
        uint64_t i_3 = zx.q(result.d)
        uint64_t i_2
        
        do
            result = &r9[sx.q(r8_1) * 2]
            
            if (rcx_9 != result)
                int128_t zmm2 = *rcx_9
                int128_t zmm3 = rcx_9[1]
                *rcx_9 = *result
                rcx_9[1] = *(result + 0x10)
                *result = zmm2
                *(result + 0x10) = zmm3
            
            rcx_9 = &rcx_9[2]
            r8_1 -= 1
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

return result
