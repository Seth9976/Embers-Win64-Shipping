// 函数: sub_140fc3750
// 地址: 0x140fc3750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
sub_140f03fb0(*(*(arg1 + 0x400) + 0x4d0), &var_28)
int64_t* rax = sub_140ac6680(&var_28)
int16_t* rdi = nullptr
int16_t* var_68 = nullptr
int32_t rbx = rax[1].d
int64_t rbp = *rax
int16_t* rbp_1

if (rbx != 0)
    sub_1405a4c70(&var_68, rbx, 0)
    rdi = var_68
    memcpy(rdi, rbp, rbx * 2)
    rbp_1 = rdi
else
    int32_t var_5c_1 = 0
    rbp_1 = nullptr

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rdi_1))
    
    rdi = var_68

int16_t* const rcx_8 = &data_142d40450
void var_58
int16_t** rdx_5 = *sub_140fb2f00(arg1, &var_58)
int16_t* const rax_5 = &data_142d40450

if (rbx != 0)
    rax_5 = rbp_1

if (rdx_5[1].d != 0)
    rcx_8 = *rdx_5

int32_t result = sub_140a54510(rcx_8, rax_5)
rbp_1.b = result != 0
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        result = (**var_50)(var_50)
        int32_t temp2_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_50 + 8))(var_50, 1)

if (rbp_1.b != 0)
    void var_48
    int64_t* rdi_2 = *sub_140fb2f00(arg1, &var_48)
    int64_t var_38
    int64_t* rax_9 = sub_140fbb830(&var_38, &var_68)
    
    if (rdi_2 != rax_9)
        int64_t rcx_13 = *rdi_2
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        *rdi_2 = *rax_9
        *rax_9 = 0
        rdi_2[1].d = rax_9[1].d
        *(rdi_2 + 0xc) = *(rax_9 + 0xc)
        rax_9[1] = 0
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp4_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    int64_t rcx_17 = var_38
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int64_t* rcx_18 = *(arg1 + 0x390)
    (*(*rcx_18 + 0x240))(rcx_18)
    sub_140fc26e0()
    result = sub_140fbbf00(arg1)
    rdi = var_68

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
