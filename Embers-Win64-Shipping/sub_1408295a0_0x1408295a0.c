// 函数: sub_1408295a0
// 地址: 0x1408295a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3
int32_t* result

if (arg4 == 0)
label_140829685:
    *arg5 = rdi
    result.b = 0
else
    while (true)
        int32_t r10_2 = arg4 & 0x80000001
        
        if (r10_2 s< 0)
            r10_2 = ((r10_2 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(arg4)
        int32_t rax_3 = (temp1_1 - temp0_1) s>> 1
        arg4 = rax_3
        int32_t rbx_1 = rdi + rax_3
        *arg5 = rbx_1
        result = (sx.q(rbx_1) << 5) + arg1
        int32_t rdx_1 = *result
        int32_t rdx_2 = rdx_1 - *arg2
        
        if (rdx_1 == *arg2)
            rdx_2 = result[1] - arg2[1]
        
        bool cond:0_1 = rdx_2 s>= 0
        
        if (rdx_2 == 0)
            void* r8 = *(arg2 + 8)
            int64_t rcx
            int64_t r8_1
            
            if (r8 != 0)
                r8_1 = *(r8 + 0x18)
                rcx = r8_1
                int64_t var_18_2 = rcx
            else
                int64_t var_18_1 = 0
                r8_1 = 0
                rcx = 0
            
            void* rdx_4 = *(result + 8)
            int32_t* result_1
            
            if (rdx_4 != 0)
                result_1 = *(rdx_4 + 0x18)
                result = result_1
                int32_t* result_2 = result_1
            else
                int64_t var_10_1 = 0
                result_1 = nullptr
                result = nullptr
            
            rdx_2 = result_1.d - r8_1.d
            
            if (result_1.d == r8_1.d)
                rdx_2 = (result u>> 0x20).d - (rcx u>> 0x20).d
            
            cond:0_1 = rdx_2 s>= 0
        
        if (not(cond:0_1))
            rdi = rbx_1 + 1
            arg4 = arg4 - 1 + r10_2
        else if (rdx_2 == 0)
            result.b = 1
            break
        
        if (arg4 == 0)
            goto label_140829685

return result
