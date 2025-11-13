// 函数: sub_140923c20
// 地址: 0x140923c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (arg3[1].d s<= 1)
    return arg2

void*** rax = j_sub_140a82f30(0x40)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_142e21840
    sub_14091a190(&rbx[2], arg3)

void** rsi_1 = &rbx[3]

if (rbx == -0x10)
    rsi_1 = nullptr

if (rsi_1 == 0)
label_140923d18:
    
    if (rbx != 0)
        rbx[1].d += 1
else
    void* rax_1
    
    if (*rsi_1 != 0)
        rax_1 = rsi_1[1]
    
    if (*rsi_1 != 0 && rax_1 != 0 && *(rax_1 + 8) s> 0)
        goto label_140923d18
    
    if (rbx != 0)
        rbx[1].d += 1
    
    *rsi_1 = &rbx[2]
    int64_t* rcx_1 = rsi_1[1]
    
    if (rbx != rcx_1)
        if (rbx != 0)
            *(rbx + 0xc) += 1
            rcx_1 = rsi_1[1]
        
        if (rcx_1 != 0)
            int32_t temp7_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        rsi_1[1] = rbx
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp6_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx)[1](rbx, 1)
        
        goto label_140923d18

void var_18
void** rax_6
void*** rcx_5

if (arg2 != &var_18)
    *arg2 = &rbx[2]
    void*** rsi_2 = arg2[1]
    
    if (rbx == rsi_2)
        goto label_140923d5b
    
    arg2[1] = rbx
    
    if (rsi_2 == 0)
        goto label_140923d82
    
    rsi_2[1].d -= 1
    
    if (rsi_2[1].d != 1)
        goto label_140923d82
    
    (**rsi_2)(rsi_2)
    int32_t temp5_1 = *(rsi_2 + 0xc)
    *(rsi_2 + 0xc) -= 1
    
    if (temp5_1 != 1)
        goto label_140923d82
    
    rax_6 = *rsi_2
    rcx_5 = rsi_2
    goto label_140923d7f

label_140923d5b:

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d != 1)
        goto label_140923d82
    
    (**rbx)(rbx)
    int32_t temp1_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (temp1_1 != 1)
        goto label_140923d82
    
    rax_6 = *rbx
    rcx_5 = rbx
label_140923d7f:
    rax_6[1](rcx_5, 1)
label_140923d82:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp8_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rbx)[1](rbx, 1)

return arg2
