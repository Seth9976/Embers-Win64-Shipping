// 函数: sub_141b61080
// 地址: 0x141b61080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t (** rbx)(int64_t* arg1, int32_t* arg2) = *(arg1 + 0x228)
void*** var_38

if (rbx != 0)
    var_38 = nullptr
    int64_t var_30_1 = 0
    sub_140e11cd0(&var_38)
    sub_141b53be0(rbx, &var_38)
    void*** rcx_2 = var_38
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

void*** rax = j_sub_140a82f30(0xd0)
int64_t var_28
void arg_8
void*** rdi

if (rax == 0)
    rdi = nullptr
else
    var_38 = *(arg1 + 0x228)
    void* rcx_4 = *(arg1 + 0x230)
    char arg_c = 0
    void* var_30_2 = rcx_4
    
    if (rcx_4 != 0)
        *(rcx_4 + 8) += 1
    
    var_28 = *(arg1 + 8)
    void* rax_2 = *(arg1 + 0x10)
    void* var_20_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    rdi = sub_141b49f10(rax, &var_28, &var_38, &arg_8)

void*** rax_4 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rdi

var_38 = rdi
void*** var_30_3 = rbx_1

if (arg1 + 0x238 == &var_38)
label_141b611dd:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
else
    *(arg1 + 0x238) = rdi
    int64_t* rdi_1 = *(arg1 + 0x240)
    var_38 = nullptr
    
    if (rbx_1 == rdi_1)
        goto label_141b611dd
    
    void*** var_30_4 = nullptr
    *(arg1 + 0x240) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx_1 = var_30_4
        goto label_141b611dd

int64_t* rbx_2 = *(arg1 + 0x240)
int64_t rdi_2 = *(arg1 + 0x238)

if (rbx_2 != 0)
    rbx_2[1].d += 1

void* rax_9 = j_sub_140a82f30(0x30)
void* const rdi_3

if (rax_9 == 0)
    rdi_3 = nullptr
else
    var_28 = rdi_2
    int64_t* var_20_2 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    rdi_3 = sub_140dda620(rax_9, &var_28)

if (arg1 + 0x220 != &arg_8)
    void* r14_1 = *(arg1 + 0x220)
    *(arg1 + 0x220) = rdi_3
    
    if (r14_1 != 0)
        j_sub_140a74f90(r14_1)
else if (rdi_3 != 0)
    j_sub_140a74f90(rdi_3)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

*(arg1 + 0x340) = 0xffffffff
*(arg1 + 0x338) = 0

if (*(arg1 + 0x33c) != 0)
    sub_14085a940(arg1 + 0x310, 0)

void* result
result.b = 1
return result
