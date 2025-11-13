// 函数: sub_140e77da0
// 地址: 0x140e77da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0xb8)
int64_t* r15 = arg2

if ((result == 0 || result != *arg2) && *(arg1 + 0x58) s> 0)
    int64_t var_48 = *arg2
    void* rax_1 = arg2[1]
    void* var_40_1 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    void var_38
    int64_t* rax_2 = sub_140e63960(arg1, &var_38, &var_48, arg3)
    int64_t* rbx_1 = rax_2[1]
    int64_t r13_1 = *rax_2
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp3_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    if (r13_1 == 0 || rbx_1 == 0 || rbx_1[1].d s<= 0)
        result = sub_140e5ecc0(arg1, 0)
    else
        int64_t* r12_1 = *(arg1 + 0x50)
        void* rbp_3 = &r12_1[sx.q(*(arg1 + 0x58)) * 2]
        int64_t* rdi_2 = r12_1
        int32_t rdi_3
        
        if (r12_1 == rbp_3)
        label_140e77eba:
            rdi_3 = -1
        else
            while (true)
                int64_t rsi_2 = 0
                
                if (rbx_1 != 0)
                    int32_t rax_5 = rbx_1[1].d
                    
                    if (rax_5 != 0)
                        rsi_2 = r13_1
                        rbx_1[1].d = rax_5
                
                if (*rdi_2 == rsi_2)
                    rdi_3 = ((rdi_2 - r12_1) s>> 4).d
                    break
                
                rdi_2 = &rdi_2[2]
                
                if (rdi_2 == rbp_3)
                    goto label_140e77eba
        
        result = sx.q(*(arg1 + 0x58))
        int32_t r8_2 = rdi_3 + 1
        
        if (r8_2 s< result.d)
            int64_t r10_1 = *(arg1 + 0x50)
            int64_t result_2 = result
            int64_t rdx_1 = sx.q(r8_2)
            int64_t* rcx_4 = (rdx_1 << 4) + r10_1
            
            do
                result = *rcx_4
                
                if (*(result + 0x41) != 0)
                    int64_t rax_10 = sx.q(r8_2) * 2
                    int64_t* rdi_5 = *(r10_1 + (rax_10 << 3) + 8)
                    
                    if (rdi_5 != 0)
                        rdi_5[1].d += 1
                    
                    int64_t result_1 = *(arg1 + 0x50)
                    result = result_1
                    int64_t rcx_10 = (sx.q(*(arg1 + 0x58)) << 4) + result_1
                    
                    if (result_1 != rcx_10)
                        do
                            if (*result == *(r10_1 + (rax_10 << 3)))
                                result = (result - result_1) s>> 4
                                
                                if (result.d != 0xffffffff)
                                    result = sub_140e5ecc0(arg1, result.d)
                                
                                break
                            
                            result += 0x10
                        while (result != rcx_10)
                    
                    if (rdi_5 != 0)
                        rdi_5[1].d -= 1
                        
                        if (rdi_5[1].d == 1)
                            result = (**rdi_5)(rdi_5)
                            int32_t temp6_1 = *(rdi_5 + 0xc)
                            *(rdi_5 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                result = (*(*rdi_5 + 8))(rdi_5, 1)
                    
                    break
                
                r8_2 += 1
                rdx_1 += 1
                rcx_4 = &rcx_4[2]
            while (rdx_1 s< result_2)
        
        r15 = arg2
    
    if (rbx_1 != 0)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = r15[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_2 + 8))

return result
