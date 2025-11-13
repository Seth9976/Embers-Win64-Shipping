// 函数: sub_14066d170
// 地址: 0x14066d170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_140d3c6e0(arg1 + 8) == 0)
    int64_t* rbx_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* rdi_3 = arg3[1]
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t rbx_3 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (rbx_3 == 1)
                (*(*rdi_3 + 8))(rdi_3, zx.q(rbx_3))
    
    result.b = 0
else
    int64_t* rdi = arg3[1]
    int64_t r13_1 = *arg3
    
    if (rdi != 0)
        rdi[1].d += 1
    
    int64_t* rbx = arg2[1]
    int64_t r12_1 = *arg2
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t rax = sub_140d3c6e0(arg1 + 8)
    int64_t r10_1 = *(arg1 + 0x10)
    int64_t var_48 = r13_1
    int64_t* var_40_1 = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    
    int64_t var_38 = r12_1
    int64_t* var_30_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    r10_1(rax, &var_38, &var_48, zx.q(arg4))
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp4_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            result = zx.q(*(rdi + 0xc))
            *(rdi + 0xc) -= 1
            
            if (result.d == 1)
                (*(*rdi + 8))(rdi, 1)
    
    int64_t* rdi_1 = arg2[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* rdi_2 = arg3[1]
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rbx_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_1))
    
    result.b = 1

return result
