// 函数: sub_140e841c0
// 地址: 0x140e841c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* var_28
uint64_t result = (*(*arg1 + 0x28))(arg1, &var_28, &var_18)

if (var_28 != 0)
    result = *arg2
    int64_t* rdi_1 = *(result + 0x398)
    int64_t rcx = *(result + 0x390)
    
    if (rdi_1 != 0)
        *(rdi_1 + 0xc) += 1
    
    if (rcx == 0)
    label_140e842d5:
        
        if (rdi_1 != 0)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)
    else if (rdi_1 != 0)
        result = zx.q(rdi_1[1].d)
        
        if (result.d s> 0)
            int64_t* rbx_1 = rdi_1
            
            if (rdi_1 != 0)
                if (result.d != 0)
                    rdi_1[1].d = result.d + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx_1 = nullptr
            
            void* rbp_1 = var_28
            
            if (rbx_1 == 0)
                rcx = 0
            
            *(rbp_1 + 0x7b0) = rcx
            int64_t* rcx_1 = *(rbp_1 + 0x7b8)
            
            if (rbx_1 != rcx_1)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx_1 = *(rbp_1 + 0x7b8)
                
                if (rcx_1 != 0)
                    int32_t temp7_1 = *(rcx_1 + 0xc)
                    *(rcx_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*rcx_1 + 8))(rcx_1, 1)
                
                *(rbp_1 + 0x7b8) = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp6_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        goto label_140e842d5

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp2_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_20 + 8))(var_20, 1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
