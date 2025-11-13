// 函数: sub_140a6ce70
// 地址: 0x140a6ce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x130) != 0)
    return 

void* rax = data_143ddb400

if (rax == 0 || *(rax + 0x59) == 0)
    return 

int32_t rbx_1 = 0
int64_t var_48 = 0
int64_t var_40_1 = 0
*(arg1 + 0x130) = 1
char rax_1 = sub_140ab2200()

if (rax_1 == 2)
    rax_1 = 1
label_140a6ced5:
    int16_t* rax_2 = sub_140a4af10(rax_1)
    
    if (var_48 != rax_2)
        if (rax_2 != 0 && *rax_2 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rax_2[rbx_2] != 0)
            
            rbx_1 = rbx_2.d + 1
        
        int32_t rcx_1 = var_40_1:4.d
        
        if (rcx_1 != rbx_1)
            sub_1405947f0(&var_48, rbx_1)
            rcx_1 = var_40_1:4.d
        
        int32_t rax_3 = rbx_1 + var_40_1.d
        var_40_1.d = rax_3
        
        if (rax_3 s> rcx_1)
            sub_140594770(&var_48)
        
        if (rbx_1 != 0)
            memcpy(var_48, rax_2, rbx_1 * 2)
else if (rax_1 != 0)
    goto label_140a6ced5

void* var_38 = arg1
int64_t* var_30_1 = &var_48
void var_18
sub_140a818c0(&var_18, u"EnabledCultures")
sub_140a67400(&var_38, &var_18, arg1 + 0x138)
void var_28
sub_140a818c0(&var_28, u"DisabledCultures")
sub_140a67400(&var_38, &var_28, arg1 + 0x188)
sub_140597000(&var_28)
sub_140597000(&var_18)
int64_t rbx_3 = var_48

if (rbx_3 == 0)
    return 

int64_t* rcx_11 = data_143ddb3f0

if (rcx_11 == 0)
    sub_140a750a0()
    rcx_11 = data_143ddb3f0

(*(*rcx_11 + 0x30))(rcx_11, rbx_3)
