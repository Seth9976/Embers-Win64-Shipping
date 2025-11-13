// 函数: sub_141e85740
// 地址: 0x141e85740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg2 + 0x2e8)

if (result != 0 && *(result + 0x18) s> 1)
    int32_t rdx = 0
    void* rcx = *(*(result + 0x10) + 8)
    result = sx.q(*(arg1 + 0x18))
    
    if (result.d s> 0)
        void* result_2 = *(arg1 + 0x10)
        int64_t rcx_1 = 0
        void* result_1 = result
        result = result_2
        
        do
            if (*(rcx + 4) u<= *result)
                int64_t rdi_2 = sx.q(rdx) * 0x90
                
                if (rdi_2 == neg.q(result_2))
                    break
                
                int64_t var_70 = *(arg2 + 0x18)
                int64_t rax_4 = *arg4
                void* var_78 = arg2
                int32_t var_68 = arg3
                int64_t var_58 = rax_4
                int64_t var_48 = 0
                
                if (rax_4 != 0)
                    void* rax_5 = arg4[2]
                    void* rcx_3 = &arg4[4]
                    
                    if (rax_5 != 0)
                        rcx_3 = rax_5
                    
                    (**rcx_3)(rcx_3, &var_48)
                
                char rax_8 = sub_141e73a50(rdi_2 + result_2, &var_78, &var_58, arg5, arg6)
                
                if (*arg4 != 0)
                    void* rdx_3 = arg4[2]
                    void* rcx_5 = &arg4[4]
                    
                    if (rdx_3 != 0)
                        rcx_5 = rdx_3
                    
                    int64_t rdx_4 = *rcx_5
                    (*(rdx_4 + 0x10))(rcx_5, rdx_4)
                
                return zx.q(rax_8)
            
            rdx += 1
            rcx_1 += 1
            result += 0x90
        while (rcx_1 s< result_1)

if (*arg4 != 0)
    void* rax_1 = arg4[2]
    void* rcx_2 = &arg4[4]
    
    if (rax_1 != 0)
        rcx_2 = rax_1
    
    (*(*rcx_2 + 0x10))(rcx_2)

result.b = 0
return result
