// 函数: sub_140d74800
// 地址: 0x140d74800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

int16_t* rdi_1 = *arg1[2]
int16_t* var_28 = nullptr
int32_t rax_3 = 0
int32_t var_1c_1 = 0
int16_t* r14_1 = nullptr
int32_t var_20_1 = 0
int32_t rbp_1 = 0

if (rdi_1 != 0 && *rdi_1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi_1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rax_3 = var_1c_1
        rbp_1 = var_20_1
        r14_1 = var_28
    
    rbp_1 += rbx_1.d + 1
    
    if (rbp_1 s> rax_3)
        sub_140594770(&var_28)
        r14_1 = var_28
    
    UnDecorator::getReferenceType(r14_1, rdi_1, (rbx_1.d + 1) * 2)

int32_t rdi_2
rdi_2.b = *arg1[3] != 0
int32_t rbx_3
rbx_3.b = *arg1[4] != 0
int64_t* rax_6 = sub_140d89620(*arg1, &var_28, arg2)
int16_t* rdx_5 = &data_142d40450

if (rbp_1 != 0)
    rdx_5 = r14_1

int32_t rax_7 = sub_140a23cf0(rax_6, rdx_5, rbx_3, rdi_2, 0xffffffff)
int16_t* rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (rax_7 != 0xffffffff)
    int32_t rbx_5 = rax_7 + *(*arg1 + 0x30)
    void*** rax_10 = j_sub_140a82f30(0x38)
    void*** rax_14
    
    if (rax_10 == 0)
        rax_14 = nullptr
    else
        int32_t rbp_2
        
        if (rbp_1 == 0)
            rbp_2 = 0
        else
            rbp_2 = rbp_1 - 1
        
        void* rdx_6 = *arg1
        int32_t arg_c = rbx_5 + rbp_2
        var_28 = *(rdx_6 + 0x10)
        void* rax_13 = *(rdx_6 + 0x18)
        var_20_1.q = rax_13
        
        if (rax_13 != 0)
            *(rax_13 + 8) += 1
            rdx_6 = *arg1
        
        rax_14 = sub_140d72170(rax_10, *(rdx_6 + 8), &var_28, rbx_5.q)
    
    void* r8_5 = &rax_14[5]
    
    if (rax_14 == 0)
        r8_5 = nullptr
    
    **arg1[5] = r8_5
else
    **arg1[5] = 0

*arg1[1] = 0

if (r14_1 != 0)
    sub_140a74f90(r14_1)
