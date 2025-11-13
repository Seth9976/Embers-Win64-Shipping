// 函数: sub_140a3a710
// 地址: 0x140a3a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i_1 = arg2
int64_t rdi
rdi.b = 0
void** result_1 = nullptr
int32_t var_3c = 0
int32_t rdx = 0
int32_t var_40 = 0
int16_t* r14 = arg1

if (i_1 != 0)
    int32_t i
    
    do
        int16_t rbx_1 = *r14
        r14 = &r14[1]
        
        if (sx.w(rbx_1.b) != rbx_1 || rbx_1.b s< 0)
            int16_t* var_38
            sub_140a2e390(&var_38, u"[0x%X]", zx.q(rbx_1))
            int32_t var_30
            int32_t r8_4
            
            if (var_30 == 0)
                r8_4 = 0
            else
                r8_4 = var_30 - 1
            
            result = sub_140a20ba0(&result_1, var_38, r8_4)
            arg1 = var_38
            
            if (arg1 != 0)
                result, arg1 = sub_140a74f90(arg1)
            
            rdi.b = 1
            rdx = var_40
        else
            arg1.b = zx.d(rbx_1) - 0xa u<= 3
            result.b = rbx_1 == 0x2029
            arg1.b |= result.b
            char r8_1 = arg1.b
            
            if (rbx_1 == 0x2028)
                r8_1 = 1
            
            result.b = rbx_1 == 0x85
            
            if ((r8_1 | result.b) != 0)
                if (rdi.b != 0)
                    result, arg1 = sub_140a360c0(&result_1)
                
                rdx = 0
                rdi.b = 0
                var_40 = 0
                
                if (var_3c != 0)
                    result, arg1 = sub_1405947f0(&result_1, 0)
                    rdx = var_40
            else if (rbx_1 != 0)
                int32_t rsi_1 = rdx - 1
                
                if (rdx s<= 0)
                    rsi_1 = 0
                
                int32_t rax_2
                rax_2.b = rdx s<= 0
                int32_t rax_4 = rax_2 + 1 + rdx
                var_40 = rax_4
                
                if (rax_4 s> var_3c)
                    sub_140594770(&result_1)
                
                arg1 = sx.q(rsi_1)
                *(result_1 + (arg1 << 1)) = rbx_1
                result = result_1
                *(result + (arg1 << 1) + 2) = 0
                rdx = var_40
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (rdi.b != 0)
        result = sub_140a360c0(&result_1)
    
    void** result_2 = result_1
    
    if (result_2 != 0)
        return sub_140a74f90(result_2)

return result
