// 函数: sub_140f908f0
// 地址: 0x140f908f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t (* var_38)(int64_t* arg1, double arg2[0x2] @ zmm1)

if (*(arg1 + 0x358) != 0)
    void* const rcx = *(arg1 + 0x360)
    
    if (rcx != 0)
        int32_t rax_1 = *(rcx + 8)
        
        if (rax_1 s> 0)
            int64_t (* rdx_1)(int64_t* arg1, double arg2[0x2] @ zmm1) = nullptr
            
            if (rcx != 0)
                if (rax_1 != 0)
                    *(rcx + 8) = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    rcx = nullptr
                
                if (rcx != 0)
                    rdx_1 = *(arg1 + 0x358)
            
            var_38 = rdx_1
            int32_t var_30
            var_30.q = rcx
            sub_140e27040(arg1, &var_38)
            int64_t* rdi_1 = var_30.q
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp4_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* result

if (*(arg1 + 0x2c8) == 0)
label_140f909b0:
    result = sub_140f466a0(arg1 + 0x2b0)
    
    if (*(result + 4) == 0)
        int32_t var_30_1 = 0
        var_38 = sub_140f6a010
        var_38.o = var_38.o
        void var_18
        int64_t* rax_5 = sub_140dd1ff0(&var_18, arg1, &var_38)
        void var_28
        result = sub_140e20c50(arg1, &var_28, *(arg1 + 0x368), rax_5)
        *(arg1 + 0x358) = *result
        void* rdi_2 = result[1]
        int64_t* rcx_9 = *(arg1 + 0x360)
        
        if (rdi_2 != rcx_9)
            if (rdi_2 != 0)
                *(rdi_2 + 0xc) += 1
                rcx_9 = *(arg1 + 0x360)
            
            if (rcx_9 != 0)
                int32_t temp3_1 = *(rcx_9 + 0xc)
                *(rcx_9 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rcx_9 + 8))(rcx_9, 1)
            
            *(arg1 + 0x360) = rdi_2
        
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                result = (**var_20)(var_20)
                int32_t temp2_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    return (*(*var_20 + 8))(var_20, 1)
else
    int64_t* rcx_4 = *(arg1 + 0x2c0)
    
    if (rcx_4 == 0)
        goto label_140f909b0
    
    result = (*(*rcx_4 + 0x28))(rcx_4)
    
    if (result.b == 0)
        goto label_140f909b0

return result
