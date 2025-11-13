// 函数: sub_1423174e0
// 地址: 0x1423174e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141f64a80(arg1)
int64_t result_1 = result
int64_t result_3 = result
int32_t i_1 = 0

if (*(arg1 + 0x808) s> 0)
    int64_t* r15_1 = nullptr
    int32_t i
    
    do
        void* rbx_1 = *(r15_1 + *(arg1 + 0x800))
        
        if (rbx_1 != 0)
            if (*(rbx_1 + 0xa0) != 0)
            label_142317563:
                int64_t rdi_1 = sx.q(arg2[1].d)
                int32_t rax = (rdi_1 + 1).d
                arg2[1].d = rax
                
                if (rax s> *(arg2 + 0xc))
                    sub_1405a4d70(arg2)
                
                *(*arg2 + (rdi_1 << 3)) = rbx_1
                int64_t rbx_2 = sx.q(arg3[1].d)
                int64_t var_48
                int64_t var_40
                int64_t rax_4
                
                if (result_3 == 0)
                    int32_t rax_3 = (rbx_2 + 1).d
                    var_40 = 0
                    arg3[1].d = rax_3
                    
                    if (rax_3 s> *(arg3 + 0xc))
                        sub_1405a4d70(arg3)
                    
                    rax_4 = 0
                else
                    int32_t rcx_3 = *(arg3 + 0xc)
                    void* rdi_2 = *(r15_1 + *(result_3 + 0x40))
                    int32_t rax_2 = (rbx_2 + 1).d
                    arg3[1].d = rax_2
                    
                    if (rdi_2 == 0)
                        var_48 = 0
                        
                        if (rax_2 s> rcx_3)
                            sub_1405a4d70(arg3)
                        
                        rax_4 = 0
                    else
                        if (rax_2 s> rcx_3)
                            sub_1405a4d70(arg3)
                        
                        rax_4 = *(rdi_2 + 0x80)
                
                *(*arg3 + (rbx_2 << 3)) = rax_4
                int64_t** j = *(arg1 + 0xd0)
                result = sx.q(*(arg1 + 0xd8))
                
                for (void* rbp = &j[result]; j != rbp; j = &j[1])
                    int64_t* rdi_3 = *j
                    
                    if (rdi_3 != 0)
                        void* rax_5 = sub_142577430()
                        void* rcx_7 = rdi_3[2]
                        result = sx.q(*(rax_5 + 0x38))
                        
                        if (result.d s<= *(rcx_7 + 0x38))
                            int64_t result_2 = result
                            result = *(rcx_7 + 0x30)
                            
                            if (*(result + (result_2 << 3)) == rax_5 + 0x30)
                                result = (*(*rdi_3 + 0x6f8))(rdi_3, arg2, arg3, zx.q(arg4), var_48, 
                                    var_40, result_1)
                
                result_3 = result_1
            else if (arg4 != 0 && *(rbx_1 + 0xc) s< 0)
                goto label_142317563
        
        r15_1 = &r15_1[1]
        i = i_1 + 1
        i_1 = i
    while (i s< *(arg1 + 0x808))

return result
