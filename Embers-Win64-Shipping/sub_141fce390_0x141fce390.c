// 函数: sub_141fce390
// 地址: 0x141fce390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x38)
uint64_t rdi = 0
uint64_t var_48 = 0
int32_t rsi = 0
int32_t var_3c = 0
int32_t rbp = 0

if (rax == 0)
    int64_t* rcx_1 = *(*(arg1 + 0x30) + 8) + 0x450
    
    if (&var_48 != rcx_1)
        rsi = rcx_1[1].d
        int64_t r15_1 = *rcx_1
        
        if (rsi != 0)
            sub_1405a4c70(&var_48, rsi, 0)
            rdi = var_48
            memcpy(rdi, r15_1, rsi * 2)
            rbp = var_3c
else
    int64_t* rax_2 = *(rax + 8) + 0x450
    
    if (&var_48 != rax_2)
        rdi = *rax_2
        *rax_2 = 0
        rsi = rax_2[1].d
        rbp = *(rax_2 + 0xc)
        rax_2[1] = 0

void var_38
sub_1421677e0(*(*(arg1 + 0x50) + 0x58), &var_38, *(arg1 + 0x48))
int64_t* arg_8
int64_t** rax_4 = sub_1422c1380(*(arg1 + 0x20), &arg_8, *(arg1 + 0x48), &var_38, 1)

if (arg1 + 0x38 != rax_4)
    int64_t** rbx_1 = *(arg1 + 0x38)
    *(arg1 + 0x38) = *rax_4
    *rax_4 = nullptr
    
    if (rbx_1 != 0)
        void* r15_2 = rbx_1[1]
        
        if (r15_2 != 0)
            sub_141fa6880(r15_2)
            j_sub_140a74f90(r15_2)
        
        sub_141fa8b80(rbx_1, *rbx_1)
        j_sub_140a74f90(rbx_1)

int64_t* rbx_2 = arg_8

if (rbx_2 != 0)
    void* r15_3 = rbx_2[1]
    
    if (r15_3 != 0)
        sub_141fa6880(r15_3)
        j_sub_140a74f90(r15_3)
    
    sub_141fa8b80(rbx_2, *rbx_2)
    j_sub_140a74f90(rbx_2)

uint64_t* result = &var_48
int64_t* rbx_4 = *(*(arg1 + 0x38) + 8) + 0x450

if (rbx_4 != &var_48)
    int64_t rcx_16 = *rbx_4
    
    if (rcx_16 != 0)
        result = sub_140a74f90(rcx_16)
    
    *rbx_4 = rdi
    rdi = 0
    rbx_4[1].d = rsi
    *(rbx_4 + 0xc) = rbp

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_30 + 8))(var_30, 1)

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
