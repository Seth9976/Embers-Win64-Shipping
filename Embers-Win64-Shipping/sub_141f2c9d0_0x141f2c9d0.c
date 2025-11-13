// 函数: sub_141f2c9d0
// 地址: 0x141f2c9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140bd9620(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r10 = sx.q(arg1[9].d)

if (r10.d != 0)
    void* rdx_2 = arg1[8]
    void* r8 = &arg1[7]
    result = r10 - 1
    
    if (rdx_2 != 0)
        r8 = rdx_2
    
    int32_t i = *(r8 + (((sx.q((arg2 u>> 0x20).d) ^ sx.q(arg2.d)) & result) << 2))
    int32_t i_1 = i
    int64_t var_38
    int64_t var_30
    
    while (i != 0xffffffff)
        var_38 = arg2
        int64_t rcx_3 = sx.q(i_1) * 3
        int64_t rax_4 = *arg1
        i = *(rax_4 + (rcx_3 << 3) + 0x10)
        var_30 = *(rax_4 + (rcx_3 << 3))
        result = sub_14077a170(&var_30, &var_38)
        
        if (result.b != 0)
            break
        
        i_1 = i
    
    while (i_1 != 0xffffffff)
        int64_t rbp_1 = sx.q(arg3[1].d)
        int32_t rax_6 = (rbp_1 + 1).d
        arg3[1].d = rax_6
        
        if (rax_6 s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        result = *arg3
        int64_t* rdx_5 = result + (rbp_1 << 3)
        
        if (rdx_5 != 0)
            result = *arg1
            *rdx_5 = *(result + sx.q(i_1) * 0x18 + 8)
        
        i_1 = i
        
        if (i == 0xffffffff)
            break
        
        do
            var_30 = arg2
            int64_t rcx_8 = sx.q(i_1) * 3
            int64_t rax_9 = *arg1
            i = *(rax_9 + (rcx_8 << 3) + 0x10)
            var_38 = *(rax_9 + (rcx_8 << 3))
            result = sub_14077a170(&var_38, &var_30)
            
            if (result.b != 0)
                break
            
            i_1 = i
        while (i != 0xffffffff)

if (arg4 != 0)
    int32_t rax_11 = arg3[1].d
    int64_t* r10_1 = *arg3
    int32_t result_1 = rax_11 - 1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_11)
    result = zx.q((temp1_1 - temp0_1) s>> 1)
    
    if (result.d s> 0)
        int64_t* rcx_10 = r10_1
        uint64_t i_3 = zx.q(result.d)
        uint64_t i_2
        
        do
            result = sx.q(result_1)
            int64_t* rdx_8 = &r10_1[result]
            
            if (rcx_10 != rdx_8)
                int64_t zmm1_1 = *rcx_10
                *rcx_10 = *rdx_8
                *rdx_8 = zmm1_1
            
            rcx_10 = &rcx_10[1]
            result_1 -= 1
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

return result
