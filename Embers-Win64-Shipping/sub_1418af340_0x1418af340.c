// 函数: sub_1418af340
// 地址: 0x1418af340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = *arg3
void* rax_2 = arg3[1]
arg1[2] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[3] = 0
arg1[4] = 0
arg1[5] = arg4
arg1[6] = 0
void* rax_3 = j_sub_140a82f30(0xc0)
void* rdi

if (rax_3 == 0)
    rdi = nullptr
else
    rdi = sub_140d921f0(rax_3)

void*** rax_5 = j_sub_140a82f30(0x18)
void*** rbx = rax_5

if (rax_5 == 0)
    rbx = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx = &data_142feadf8
    rbx[2] = rdi

void* const var_28 = rdi
void*** var_20 = rbx

if (&arg1[3] == &var_28)
label_1418af456:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rbx)[1](rbx, 1)
else
    arg1[3] = rdi
    int64_t* rdi_1 = arg1[4]
    var_28 = nullptr
    
    if (rbx == rdi_1)
        goto label_1418af456
    
    void*** var_20_1 = nullptr
    arg1[4] = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx = var_20_1
        goto label_1418af456

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg1
