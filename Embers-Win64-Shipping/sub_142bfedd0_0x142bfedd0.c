// 函数: sub_142bfedd0
// 地址: 0x142bfedd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 8))
uint64_t rsi = zx.q(arg3)
int32_t rbx_1

if (result.d == 0x10000)
    rbx_1 = 0x102
label_142bfee15:
    
    if (arg3 s< 0)
        rsi = -1
        
        do
            rsi += 1
        while (*(rsi + arg2) != 0)
    
    if (rsi.d != 0)
        void* i = *(arg1 + 0x30)
        int32_t var_78
        int32_t var_78_1 = var_78
        
        if (i == 0)
            uint64_t r14_1 = zx.q(rbx_1)
            
            do
                result = j_sub_140a82f30(r14_1 * 2)
                i = result
                
                if (result == 0)
                    return result
                
                int32_t rcx_1 = 0
                
                if (rbx_1 != 0)
                    uint64_t result_1 = result
                    
                    do
                        *result_1 = rcx_1.w
                        result_1 += 2
                        rcx_1 += 1
                    while (rcx_1 u< rbx_1)
                
                sub_142c06430(i, r14_1, 2, sub_142bfd560, arg1)
                bool z_1
                
                if (0 == *(arg1 + 0x30))
                    *(arg1 + 0x30) = i
                    z_1 = true
                else
                    *(arg1 + 0x30)
                    z_1 = false
                
                if (z_1)
                    break
                
                j_sub_140a74f90(i)
                i = *(arg1 + 0x30)
            while (i == 0)
        
        int32_t r14_2 = 0
        int32_t rbx_4 = rbx_1 - 1
        
        if (rbx_1 - 1 s< 0)
        label_142bfef38:
            result.b = 0
        else
            while (true)
                uint64_t rax_2 = zx.q((rbx_4 + r14_2) u>> 1)
                int32_t rbp_2 = rax_2.d
                void var_48
                void* rax_3 = sub_142bfd9f0(arg1, &var_48, zx.d(*(i + (rax_2 << 1))))
                uint64_t count = zx.q(*(rax_3 + 0x10))
                
                if (count.d != rsi.d)
                    result = zx.q(rsi.d - count.d)
                else if (count.d != 0)
                    result = memcmp(arg2, *(rax_3 + 8), count)
                else
                    result = 0
                
                int32_t temp2_1 = result.d
                
                if (temp2_1 s>= 0)
                    if (temp2_1 s<= 0)
                        *arg4 = zx.d(*(i + (rax_2 << 1)))
                        result.b = 1
                        break
                    
                    r14_2 = rbp_2 + 1
                else
                    rbx_4 = rbp_2 - 1
                
                if (r14_2 s> rbx_4)
                    goto label_142bfef38
        
        return result
else if (result.d == 0x20000)
    char* rax = *(arg1 + 0x10)
    result = zx.q(rax[1])
    uint32_t rbx_3 = zx.d(*rax) << 8
    rbx_1 = rbx_3 + result.d
    
    if (rbx_3 != neg.d(result.d))
        goto label_142bfee15
result.b = 0
return result
