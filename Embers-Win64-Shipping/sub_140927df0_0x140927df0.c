// 函数: sub_140927df0
// 地址: 0x140927df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_58 = nullptr
int32_t var_50 = 0
void arg_18
int64_t* rax_1 = sub_140fc6160(sub_140b58260(&arg_18, u"WINDOWS", 1))
int64_t r8 = *rax_1
int64_t var_48

if ((*(r8 + 0x80))(rax_1, &var_58, r8) == 0)
    void arg_20
    int64_t* rax_4 = sub_140fc6160(sub_140b58260(&arg_20, u"WINDOWS", 1))
    int64_t rdi_1 = *rax_4
    sub_140b19e60()
    int64_t* rax_5 = (*(rdi_1 + 0xe0))(rax_4, &var_48, &data_1439a8bd0, &arg_18)
    int64_t* rbx_2 = rax_5[1]
    int64_t* r14_1 = *rax_5
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp1_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    int64_t* rax_9 = (*(*r14_1 + 0x78))(r14_1, &var_48, 0)
    
    if (&var_58 != rax_9)
        int16_t* rcx_9 = var_58
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        var_58 = *rax_9
        *rax_9 = 0
        var_50 = rax_9[1].d
        var_50 = *(rax_9 + 0xc)
        rax_9[1] = 0
    
    int64_t rcx_11 = var_48
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

sub_140af2b60()
char rax_14 = sub_140b21a10(&data_143dbb3f0, u"StableNullID")
int64_t rcx_17
int64_t var_38

if (data_14399fa58 != 0 || rax_14 != 0)
    int64_t* rax_17 = sub_140a35990(sub_140a47930(&var_38), &var_48)
    int16_t* r8_2 = &data_142d40450
    
    if (rax_17[1].d != 0)
        *rax_17
    
    if (var_50 != 0)
        r8_2 = var_58
    
    sub_140a2e390(arg1, u"%s-%s", r8_2)
    int64_t rcx_21 = var_48
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    rcx_17 = var_38
else
    sub_140b291e0(sub_140b214c0(&var_38), &var_48, 0)
    int16_t* const r8_1 = &data_142d40450
    
    if (var_50 != 0)
        r8_1 = var_58
    
    sub_140a2e390(arg1, u"%s-%s", r8_1)
    rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int16_t* rcx_22 = var_58

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

return arg1
