// 函数: sub_141a651c0
// 地址: 0x141a651c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_78 = &arg1[0x31]
int32_t result_1
sub_141a4b0f0(&arg1[0x31], &result_1, arg3)
int64_t result = sx.q(result_1)
int64_t rdx_1

if (result.d == 0xffffffff)
    rdx_1 = 0
else
    int64_t rcx_1 = result * 9
    result = arg1[0x31]
    rdx_1 = result + (rcx_1 << 3)

void* rcx_2 = rdx_1 + 0x10

if (rdx_1 == 0)
    rcx_2 = nullptr

if (rcx_2 != 0)
    void* rax = *(rcx_2 + 0x20)
    int64_t* rdi
    rdi.b = 1
    void* r14_1 = rcx_2
    
    if (rax != 0)
        r14_1 = rax
    
    int64_t r15_1 = 0
    int64_t rcx_3 = sx.q(*(rcx_2 + 0x28)) << 3
    uint64_t rcx_4 = rcx_3 u>> 3
    
    if (r14_1 u> r14_1 + rcx_3)
        rcx_4 = 0
    
    if (rcx_4 == 0)
        result = sub_141a60dc0(var_78, arg3)
    else
        do
            uint64_t rax_3 = *r14_1
            uint64_t var_88 = rax_3
            
            if (rax_3.d != 0xffffffff || (rax_3 u>> 0x20).d != 0)
                rax_3.b = 0
            else
                rax_3.b = 1
            
            int64_t var_48
            
            if (rax_3.b != 0)
                bool cond:2_1 = arg4[2].b == 0
                int32_t rax_4 = arg3[2]
                int64_t var_68 = *arg3
                int32_t var_60_1 = rax_4
                char var_38_1 = 0
                
                if (not(cond:2_1))
                    int64_t rax_5 = *arg4
                    var_48 = rax_5
                    
                    if (rax_5 != 0)
                        int64_t var_40_1 = arg4[1]
                    
                    char var_38_2 = 1
                
                result = sub_141a64790(&arg1[0xa], arg2, &var_68, &var_48)
                goto label_141a6536c
            
            sub_1405ba670(arg1, &result_1, &var_88)
            int64_t result_2 = sx.q(result_1)
            
            if (result_2.d == 0xffffffff)
                result = 0
            else
                result = result_2 * 0x148 + *arg1
            
            void* const rcx_7 = result + 8
            
            if (result == 0)
                rcx_7 = nullptr
            
            if (rcx_7 != 0)
                bool cond:3_1 = arg4[2].b == 0
                int32_t rax_8 = arg3[2]
                int64_t var_58 = *arg3
                int32_t var_50_1 = rax_8
                char var_38_3 = 0
                
                if (not(cond:3_1))
                    int64_t rax_9 = *arg4
                    var_48 = rax_9
                    
                    if (rax_9 != 0)
                        int64_t var_40_2 = arg4[1]
                    
                    char var_38_4 = 1
                
                result = sub_141a64b50(rcx_7, arg2, &var_58, &var_48)
            label_141a6536c:
                
                if (result.b == 0 || rdi.b == 0)
                    rdi.b = 0
                else
                    rdi.b = 1
            
            r14_1 += 8
            r15_1 += 1
        while (r15_1 != rcx_4)
        
        if (rdi.b != 0)
            result = sub_141a60dc0(var_78, arg3)
    
    if (arg4[2].b != 0)
        arg4[2].b = 0
else if (arg4[2].b != 0)
    arg4[2].b = 0

return result
