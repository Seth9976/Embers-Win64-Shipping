// 函数: sub_140d431a0
// 地址: 0x140d431a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_140d446e0(&data_1439ae200, &arg_8, arg1)
int64_t* rax = j_sub_140a82f30(0x88)
int64_t* rdi

if (rax == 0)
    rdi = nullptr
else
    rdi = sub_140d429f0(rax, arg1)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142ebdf90
    rbx[2] = rdi

int64_t* var_18 = rdi
void*** var_10 = rbx

if (&arg1[1] == &var_18)
label_140d43294:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx)[1](rbx, 1)
else
    arg1[1] = rdi
    int64_t* rdi_1 = arg1[2]
    var_18 = nullptr
    
    if (rbx == rdi_1)
        goto label_140d43294
    
    void*** var_10_1 = nullptr
    arg1[2] = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx = var_10_1
        goto label_140d43294

var_18 = arg1
int64_t** var_10_2 = &arg1[1]
return sub_140d42660(&data_1439ae200, &arg_8, &var_18, nullptr)
