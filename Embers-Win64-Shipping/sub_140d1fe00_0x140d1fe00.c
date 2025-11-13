// 函数: sub_140d1fe00
// 地址: 0x140d1fe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t result = 0
int16_t* var_38 = nullptr
int32_t rdx = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t r8 = 0

if (arg2 == 0)
    int64_t arg_10 = 0
    int64_t var_28
    void arg_18
    int16_t** rax_3
    rax_3, r8 = sub_140b63b70(sub_140d25240(&arg_18, arg1, sub_140cddea0(), 0), &var_28)
    
    if (&var_38 != rax_3)
        int16_t* rcx_5 = var_38
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        var_38 = *rax_3
        *rax_3 = nullptr
        var_30 = rax_3[1].d
        int32_t var_2c_1 = *(rax_3 + 0xc)
        rax_3[1] = 0
    
    int64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
else
    int32_t rbx_2
    
    if (*arg2 == 0)
        rbx_2 = 0
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        rbx_2 = rbx_1.d + 1
    
    if (rbx_2 != 0)
        sub_1405947f0(&var_38, rbx_2)
        r8 = var_2c
        rdx = var_30
    
    int32_t rax = rdx + rbx_2
    var_30 = rax
    
    if (rax s> r8)
        sub_140594770(&var_38)
    
    if (rbx_2 != 0)
        memcpy(var_38, arg2, rbx_2 * 2)

int64_t var_40 = 0
r8.b = 1
sub_140d2b810(&arg_8, &var_38, r8.b, 0, 0)
int16_t* const rbx_4 = &data_142d40450
int16_t* const rcx_9 = &data_142d40450

if (var_30 != 0)
    rcx_9 = var_38

if (sub_140a54510(rcx_9, u"None") == 0)
    sub_140af98a0("Unknown", 0x23a, u"Attempted to find a package named 'None' - InName: %s", arg2)
    sub_140afbb40()
else
    if (var_30 != 0)
        rbx_4 = var_38
    
    result = sub_140d2ee50(sub_140cddea0(), arg_8, rbx_4, 0)

int16_t* rcx_11 = var_38

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return result
