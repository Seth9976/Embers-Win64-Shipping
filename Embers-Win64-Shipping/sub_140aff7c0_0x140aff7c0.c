// 函数: sub_140aff7c0
// 地址: 0x140aff7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5426 == 0 && arg3 == 0x40)
    return 

int64_t* rcx = *(arg1 + 0x90)

if (rcx == 0)
    return 

int64_t var_28

if ((*(*rcx + 0x58))(rcx) != 0)
label_140affa13:
    int32_t rdi_4 = 0
    var_28 = 0
    int32_t rdx_12 = 0
    int32_t var_20_7 = 0
    int32_t rcx_18 = 0
    int32_t var_1c_4 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_7 = -1
        
        do
            rbx_7 += 1
        while (arg2[rbx_7] != 0)
        
        if (rbx_7.d + 1 s> 0)
            sub_1405947f0(&var_28, rbx_7.d + 1)
            rcx_18 = var_1c_4
            rdx_12 = var_20_7
        
        int32_t rax_12 = rbx_7.d + 1 + rdx_12
        var_20_7 = rax_12
        
        if (rax_12 s> rcx_18)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, arg2, (rbx_7.d + 1) * 2)
    
    int16_t* var_18 = nullptr
    int32_t var_10_1 = 0
    sub_1405947f0(&var_18, 0x14)
    int32_t rbx_9 = var_10_1 + 0x14
    
    if (rbx_9 s> 0)
        sub_140594770(&var_18)
    
    int16_t* rsi_1 = var_18
    UnDecorator::getReferenceType(rsi_1, u"AUTOMATIONANALYTICS", 0x28)
    int16_t* const rdx_16 = &data_142d40450
    
    if (rbx_9 != 0)
        rdx_16 = rsi_1
    
    if (sub_140a32ae0(&var_28, rdx_16, 1) != 0)
        int32_t rax_13 = var_20_7
        int32_t rdx_17 = rax_13 - 1
        
        if (rax_13 == 0)
            rdx_17 = 0
        
        int32_t rbx_10
        
        if (rbx_9 == 0)
            rbx_10 = 0
        else
            rbx_10 = rbx_9 - 1
        
        int32_t rdx_18 = rdx_17 - rbx_10
        int32_t rcx_26 = rax_13 - 1
        
        if (rax_13 == 0)
            rcx_26 = 0
        
        int32_t r8_8
        
        if (rdx_18 - 1 s>= 0)
            r8_8 = rcx_26
            
            if (rdx_18 s<= rcx_26)
                r8_8 = rdx_18 - 1
        else
            r8_8 = 0
        
        int32_t rcx_27 = rcx_26 - r8_8
        
        if (rax_13 != 0)
            rdi_4 = rax_13 - 1
        
        if (rcx_27 s>= 0)
            if (rcx_27 s< rdi_4)
                rdi_4 = rcx_27
            
            if (rdi_4 != 0)
                if (rax_13 != rdi_4)
                    int64_t rcx_30 = var_28
                    memmove(rcx_30, rcx_30 + (sx.q(rdi_4) << 1), (rax_13 - rdi_4) * 2)
                    rax_13 = var_20_7
                
                int32_t var_20_8 = rax_13 - rdi_4
        
        int64_t* rcx_31 = *(arg1 + 0x90)
        (*(*rcx_31 + 0x50))(rcx_31, &var_28)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
else
    if (arg3 != 2)
        if (arg3 - 3 u> 1)
            goto label_140affa13
        
        if (arg3 != 3)
            goto label_140aff8f8
        
        int64_t* rcx_1 = *(arg1 + 0x90)
        
        if ((*(*rcx_1 + 0x68))(rcx_1) == 0)
            goto label_140aff8f8
        
        goto label_140aff848
    
    int64_t* rcx_7 = *(arg1 + 0x90)
    char rax_3
    
    if ((*(*rcx_7 + 0x60))(rcx_7) != 0)
    label_140aff848:
        rax_3 = 1
    else
    label_140aff8f8:
        rax_3 = 0
    
    if (arg3 - 2 u<= 1)
        if (rax_3 != 0)
            goto label_140aff907
        
        int32_t rdi_1 = 0
        var_28 = 0
        int32_t rcx_2 = 0
        int32_t var_1c_1 = 0
        int32_t var_20_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_28, rbx_1.d + 1)
                rcx_2 = var_1c_1
                rdi_1 = var_20_1
            
            int32_t rax_5 = rbx_1.d + 1 + rdi_1
            int32_t var_20_2 = rax_5
            
            if (rax_5 s> rcx_2)
                sub_140594770(&var_28)
            
            UnDecorator::getReferenceType(var_28, arg2, (rbx_1.d + 1) * 2)
        
        int64_t* rcx_6 = *(arg1 + 0x90)
        (*(*rcx_6 + 0x38))(rcx_6, &var_28, 5)
    else if (rax_3 == 0)
        int32_t rdi_3 = 0
        var_28 = 0
        int32_t rcx_13 = 0
        int32_t var_1c_3 = 0
        int32_t var_20_5 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_5 = -1
            
            do
                rbx_5 += 1
            while (arg2[rbx_5] != 0)
            
            if (rbx_5.d + 1 s> 0)
                sub_1405947f0(&var_28, rbx_5.d + 1)
                rcx_13 = var_1c_3
                rdi_3 = var_20_5
            
            int32_t rax_10 = rbx_5.d + 1 + rdi_3
            int32_t var_20_6 = rax_10
            
            if (rax_10 s> rcx_13)
                sub_140594770(&var_28)
            
            UnDecorator::getReferenceType(var_28, arg2, (rbx_5.d + 1) * 2)
        
        int64_t* rcx_17 = *(arg1 + 0x90)
        (*(*rcx_17 + 0x40))(rcx_17, &var_28, 5)
    else
    label_140aff907:
        int32_t rdi_2 = 0
        var_28 = 0
        int32_t rcx_8 = 0
        int32_t var_1c_2 = 0
        int32_t var_20_3 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (arg2[rbx_3] != 0)
            
            if (rbx_3.d + 1 s> 0)
                sub_1405947f0(&var_28, rbx_3.d + 1)
                rcx_8 = var_1c_2
                rdi_2 = var_20_3
            
            int32_t rax_8 = rbx_3.d + 1 + rdi_2
            int32_t var_20_4 = rax_8
            
            if (rax_8 s> rcx_8)
                sub_140594770(&var_28)
            
            UnDecorator::getReferenceType(var_28, arg2, (rbx_3.d + 1) * 2)
        
        int64_t* rcx_12 = *(arg1 + 0x90)
        (*(*rcx_12 + 0x18))(rcx_12, &var_28, 5)

int64_t rcx_33 = var_28

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)
