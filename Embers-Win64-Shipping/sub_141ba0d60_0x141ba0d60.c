// 函数: sub_141ba0d60
// 地址: 0x141ba0d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* r14 = *(arg1 + 0x638)
int64_t* result = &r14[sx.q(*(arg1 + 0x640))]
uint64_t r12_1 = sx.q(*(arg1 + 0x640)) << 3 u>> 3

if (r14 u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* rcx = *r14
        
        if (rcx != 0)
            int64_t var_38
            result = (*(*rcx + 0x260))(rcx, &var_38, arg1)
            int64_t r15_1 = var_38
            int64_t* var_30
            
            if (r15_1 != 0)
                if (var_30 != 0)
                    var_30[1].d += 1
                
                int64_t rdi_1 = sx.q(arg2[1].d)
                int32_t rax_2 = (rdi_1 + 1).d
                arg2[1].d = rax_2
                
                if (rax_2 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                
                result = (rdi_1 << 4) + *arg2
                *result = r15_1
                result[1] = var_30
                
                if (var_30 != 0)
                    result = zx.q(var_30[1].d)
                    var_30[1].d = result.d
                    
                    if (result.d == 0)
                        result = (**var_30)(var_30)
                        int32_t temp2_1 = *(var_30 + 0xc)
                        *(var_30 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            result = (*(*var_30 + 8))(var_30, 1)
            
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    result = (**var_30)(var_30)
                    int32_t temp1_1 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        result = (*(*var_30 + 8))(var_30, 1)
        
        r14 = &r14[1]
        rbp += 1
    while (rbp != r12_1)

return result
