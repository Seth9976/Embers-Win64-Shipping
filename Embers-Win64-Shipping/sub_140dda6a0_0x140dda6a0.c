// 函数: sub_140dda6a0
// 地址: 0x140dda6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[2] = *arg3
void* rax_3 = arg3[1]
arg1[3] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

sub_140d9c460(&arg1[4], arg1)
int64_t* rax_5
int64_t rcx_1
int32_t rbp
int64_t* rdi

if (*arg1 != arg1[2])
    void*** var_38
    rax_5 = sub_140d9c460(&var_38, &arg1[2])
    int64_t* var_40
    rdi = var_40
    rbp = 2
    rcx_1 = *rax_5
else
    rdi = arg1[5]
    rcx_1 = arg1[4]
    int64_t var_48 = rcx_1
    int64_t* var_40_1 = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rax_5 = &var_48
    rbp = 1

arg1[6] = rcx_1
void* rax_6 = rax_5[1]
arg1[7] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp2_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

if ((rbp.b & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp4_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 2
sub_140dcee30(*arg1 + 0x180, &arg_8, arg1, sub_140e19400)
void* rcx_9 = arg1[2]

if (*arg1 != rcx_9)
    sub_140dcee30(rcx_9 + 0x180, &arg_8, arg1, sub_140e19400)

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
        int32_t temp7_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

return arg1
