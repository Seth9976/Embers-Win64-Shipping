// 函数: sub_1426711e0
// 地址: 0x1426711e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) = arg2
*arg1 = 0
arg1[1].d = 0
arg1[2] = 0
arg1[3] = 0
arg1[4].d = arg4
arg1[5] = 0
arg1[6] = 0
arg1[7].b = 0
int64_t* rax = j_sub_140a82f30(8)
int64_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *rax = arg3

void*** rax_1 = j_sub_140a82f30(0x18)
int64_t* rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rax_1 = &data_14345a2a8
    rax_1[2] = rdi

int64_t* var_28 = rdi
int64_t* var_20 = rbx_1

if (&arg1[2] == &var_28)
label_1426712e2:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    arg1[2] = rdi
    int64_t* rdi_1 = arg1[3]
    var_28 = nullptr
    
    if (rbx_1 == rdi_1)
        goto label_1426712e2
    
    int64_t* var_20_1 = nullptr
    arg1[3] = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx_1 = var_20_1
        goto label_1426712e2

int64_t* rax_6 = j_sub_140a82f30(8)
int64_t* rdi_2 = rax_6

if (rax_6 == 0)
    rdi_2 = nullptr
else
    *rax_6 = arg5

void*** rax_7 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_7

if (rax_7 == 0)
    rbx_2 = nullptr
else
    rax_7[1].d = 1
    *(rax_7 + 0xc) = 1
    *rax_7 = &data_14345a2a8
    rax_7[2] = rdi_2

var_28 = rdi_2
void*** var_20_2 = rbx_2

if (&arg1[5] == &var_28)
label_1426713be:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
else
    arg1[5] = rdi_2
    int64_t* rdi_3 = arg1[6]
    var_28 = nullptr
    
    if (rbx_2 == rdi_3)
        goto label_1426713be
    
    void*** var_20_3 = nullptr
    arg1[6] = rbx_2
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp7_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
        
        rbx_2 = var_20_3
        goto label_1426713be

return arg1
