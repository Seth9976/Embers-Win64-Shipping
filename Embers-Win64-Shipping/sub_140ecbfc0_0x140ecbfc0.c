// 函数: sub_140ecbfc0
// 地址: 0x140ecbfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg4 + 0x48)

if (rbx != 0)
    rbx[1].d += 1

int64_t rsi
rsi.b = *(arg4 + 0x38) == data_143e1e008

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rsi.b == 0)
label_140ecc182:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rbx_1 = *(arg1 + 0x4c0)
    int64_t* rsi_1 = nullptr
    
    if (rbx_1 != 0)
        int32_t rax_3 = rbx_1[1].d
        
        if (rax_3 != 0)
            rbx_1[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rsi_1 = *(arg1 + 0x4b8)
    
    int64_t* rax_5 = (*(*rsi_1 + 0x48))(rsi_1, arg1 - 8)
    
    if (rax_5 == 0)
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        goto label_140ecc182
    
    void* rax_6 = rax_5[1]
    int64_t var_18 = *rax_5
    void* var_10_1 = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    if ((*(*rsi_1 + 0xb0))(rsi_1, &var_18) == 0)
        (*(*(arg1 - 8) + 0x20))(arg1 - 8)
    
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
