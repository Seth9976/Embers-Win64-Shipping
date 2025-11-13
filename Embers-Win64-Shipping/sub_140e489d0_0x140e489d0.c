// 函数: sub_140e489d0
// 地址: 0x140e489d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1405b6730(arg1, arg1[1].d - *(arg1 + 0x34), 0)

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
            int64_t rcx_2 = result * 3
            i = *(rdx_5 + (rcx_2 << 3) + 0x10)
            
            if (*(rdx_5 + (rcx_2 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    while (i_1 != 0xffffffff)
        int64_t rbp_1 = sx.q(arg3[1].d)
        int32_t rax_1 = (rbp_1 + 1).d
        arg3[1].d = rax_1
        
        if (rax_1 s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        result = *arg3
        int64_t rdx_7 = result + (rbp_1 << 3)
        
        if (rdx_7 != 0)
            result = *arg1
            *rdx_7 = *(result + sx.q(i_1) * 0x18 + 8)
        
        i_1 = i
        
        if (i == 0xffffffff)
            break
        
        int64_t rdx_8 = *arg1
        
        do
            result = sx.q(i_1)
            int64_t rcx_6 = result * 3
            i = *(rdx_8 + (rcx_6 << 3) + 0x10)
            
            if (*(rdx_8 + (rcx_6 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)

if (arg4 != 0)
    int32_t rax_3 = arg3[1].d
    int64_t* r10_1 = *arg3
    int32_t result_2 = rax_3 - 1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_3)
    result = zx.q((temp1_1 - temp0_1) s>> 1)
    
    if (result.d s> 0)
        int64_t* rcx_7 = r10_1
        uint64_t i_3 = zx.q(result.d)
        uint64_t i_2
        
        do
            result = sx.q(result_2)
            int64_t* rdx_10 = &r10_1[result]
            
            if (rcx_7 != rdx_10)
                int64_t zmm1_1 = *rcx_7
                *rcx_7 = *rdx_10
                *rdx_10 = zmm1_1
            
            rcx_7 = &rcx_7[1]
            result_2 -= 1
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

return result
