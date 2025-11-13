// 函数: sub_140cc08a0
// 地址: 0x140cc08a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int32_t rax = 0
int32_t var_3c = 0
int32_t rdi = 0
int16_t* var_48 = nullptr
int32_t var_40 = 0
int16_t* var_38
int32_t rbx_3

if ((arg4 & 2) != 0)
    int16_t i_1 = *arg2
    int32_t rbx_4 = 0
    
    if (i_1 != 0)
        int64_t rcx_3 = 0
        int16_t i = i_1
        
        while (i != 0x2c)
            i = arg2[rcx_3 + 1]
            rcx_3 += 1
            rbx_4 += 1
            
            if (i == 0)
                break
    
    var_38 = nullptr
    int16_t* r15_1 = nullptr
    int64_t var_30_1 = 0
    int32_t r12_1 = 0
    
    if (i_1 != 0 && rbx_4 s> 0)
        if (rbx_4 + 1 s> 0)
            sub_1405947f0(&var_38, rbx_4 + 1)
            r12_1 = var_30_1:4.d
            rdi = var_30_1.d
            r15_1 = var_38
        
        rdi = rdi + 1 + rbx_4
        var_30_1.d = rdi
        
        if (rdi s> r12_1)
            sub_140594770(&var_38)
            r12_1 = var_30_1:4.d
            rdi = var_30_1.d
            r15_1 = var_38
        
        UnDecorator::getReferenceType(r15_1, arg2, rbx_4 * 2)
        r15_1[sx.q(rdi) - 1] = 0
        int16_t* rcx_7 = var_48
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    var_48 = r15_1
    rbx_3 = rbx_4 + 1
    int32_t var_3c_1 = r12_1
    var_40 = rdi
else
    if (arg2 != 0)
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
            sub_1405947f0(&var_48, rbx_2)
            rax = var_3c
            rdi = var_40
        
        rdi += rbx_2
        var_40 = rdi
        
        if (rdi s> rax)
            sub_140594770(&var_48)
            rdi = var_40
        
        if (rbx_2 != 0)
            memcpy(var_48, arg2, rbx_2 * 2)
            rdi = var_40
    
    if (arg2 == 0 || rdi == 0)
        rbx_3 = 0
    else
        rbx_3 = rdi - 1

if (rdi == 0 || rdi == 1)
    result = &arg2[sx.q(rbx_3)]
else
    sub_140d304e0(&var_48, 0)
    int16_t* rdx_6 = var_48
    int16_t* const rbx_5 = &data_142d40450
    int32_t rcx_12
    
    if (*rdx_6 != 0x22)
        rcx_12 = var_40
    label_140cc0ab4:
        
        if (rcx_12 != 0)
            rbx_5 = rdx_6
        
        sub_140cbaea0(arg3, rbx_5)
        result = &arg2[sx.q(rbx_3)]
    else
        int16_t* const rcx_9 = &data_142d40450
        var_38 = nullptr
        
        if (var_40 != 0)
            rcx_9 = rdx_6
        
        int64_t var_30_2 = 0
        
        if (j_sub_140b08930(rcx_9, &var_38, nullptr) != 0)
            int16_t* rcx_11 = var_48
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            rdx_6 = var_38
            rcx_12 = var_30_2.d
            var_48 = rdx_6
            int32_t var_40_1 = rcx_12
            int32_t var_3c_2 = var_30_2:4.d
            goto label_140cc0ab4
        
        int16_t* rcx_10 = var_38
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)

int16_t* rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return result
