// 函数: sub_1405b0e50
// 地址: 0x1405b0e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* r14 = *arg2
int64_t* result = &r14[arg2[1]]
uint64_t r15_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r14 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t* rbx_1 = arg1[1]
        int64_t rdi_1 = *r14
        int64_t* result_1 = *rbx_1
        uint64_t r9_1 = sx.q(rbx_1[1].d)
        result = result_1
        void* rdx = &result_1[r9_1]
        
        if (result_1 != rdx)
            do
                if (*result == rdi_1)
                    result = (result - result_1) s>> 3
                    
                    if (result.d != 0xffffffff)
                        int32_t rdx_3 = r9_1.d - result.d - 1
                        
                        if (rdx_3 s>= 1)
                            rdx_3 = 1
                        
                        if (rdx_3 != 0)
                            memcpy(&result_1[sx.q(result.d)], &result_1[sx.q(r9_1.d - rdx_3)], 
                                rdx_3 << 3)
                            r9_1 = zx.q(rbx_1[1].d)
                        
                        rbx_1[1].d = (r9_1 - 1).d
                        result = sub_1405c53d0(rbx_1)
                    
                    break
                
                result = &result[1]
            while (result != rdx)
        
        if (rdi_1 != 0)
            int64_t* rbx_2 = *arg1
            int64_t rsi_1 = sx.q(rbx_2[1].d)
            int32_t rax_3 = (rsi_1 + 1).d
            rbx_2[1].d = rax_3
            
            if (rax_3 s> *(rbx_2 + 0xc))
                sub_1405a4d70(rbx_2)
            
            result = *rbx_2
            result[rsi_1] = rdi_1
        
        r14 = &r14[1]
        rbp += 1
    while (rbp != r15_1)

return result
