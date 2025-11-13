// 函数: sub_14180d240
// 地址: 0x14180d240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t* rdi = rbx
int32_t result

if (rbx != 0)
    result = rbx[1].d
    
    if (result != 0)
        rbx[1].d = result + 1
        result.b = 1
    
    if (result.b == 0)
        rbx = nullptr
        rdi = nullptr

if (rdi == 0)
label_14180d38a:
    int64_t* rbx_3 = arg2[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rdi_2 = arg3[1]
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rbx_4 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rbx_4 == 1)
                (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_4))
    
    result.b = 0
else
    if (*(arg1 + 8) == 0)
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp5_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        goto label_14180d38a
    
    int64_t var_28 = *arg3
    void* rax_1 = arg3[1]
    void* var_20_1 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    int64_t var_18 = *arg2
    void* rax_3 = arg2[1]
    void* var_10_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    sub_14180d0e0(arg1, &var_18, &var_28)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp8_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp10_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rdi_1 = arg3[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_2 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))
    
    result.b = 1

return result
