// 函数: sub_1405997a0
// 地址: 0x1405997a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143efaed8 != 0 || sub_1418b0630().b == 0)
    return 

void*** rax_1 = j_sub_140a82f30(0xc0)
void*** rdi_1 = rax_1

if (rax_1 == 0)
    rdi_1 = nullptr
else
    *rdi_1 = &data_142d408b0
    rdi_1[1] = 0
    rdi_1[2] = 0
    rdi_1[3] = 2
    rdi_1[4] = 0
    rdi_1[5] = 0
    rdi_1[6].d = 0xffffffff
    __builtin_memset(&rdi_1[8], 0, 0x31)
    rdi_1[0xf] = 0
    InitializeCriticalSection(&rdi_1[0x10])
    SetCriticalSectionSpinCount(&rdi_1[0x10], 0xfa0)
    rdi_1[0x15].b = 0
    *(rdi_1 + 0xbc) = 0

int64_t* rax = j_sub_140a82f30(0x18)
int64_t* rbx_1 = rax

if (rax == 0)
    rbx_1 = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rdi_1

int64_t* var_10_1 = rbx_1
data_143efaed8 = rdi_1
int64_t* rdi_2 = data_143efaee0
int64_t var_18_1 = 0

if (rbx_1 == rdi_2)
label_1405998f5:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    data_143efaee0 = rbx_1
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp3_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
        
        rbx_1 = nullptr
        goto label_1405998f5
