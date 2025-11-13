// 函数: sub_140bd9190
// 地址: 0x140bd9190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t arg_18 = arg3
int64_t arg_10 = arg2
bool rdx = sub_140b5b8a0(arg3.d, 0) == 0
int16_t* var_48
int16_t* var_38
int16_t* rcx_30

if ((arg_18:4.d != 0 | rdx) == 0)
    int32_t rcx_24
    rcx_24.b = sub_140b5b8a0(arg_20.d, 0) == 0
    
    if ((arg_20:4.d != 0 | rcx_24.b) == 0)
        sub_140b63b70(&arg_10, arg1)
    else
        int32_t rcx_25
        rcx_25.b = sub_140b5b8a0(arg_10.d, 0) == 0
        
        if ((arg_10:4.d != 0 | rcx_25.b) == 0)
            sub_140b63b70(&arg_20, arg1)
        else
            int64_t* rax_19 = sub_140b63b70(&arg_10, &var_48)
            int16_t* const rbx_4 = &data_142d40450
            
            if (rax_19[1].d != 0)
                *rax_19
            
            int64_t* rax_20 = sub_140b63b70(&arg_20, &var_38)
            
            if (rax_20[1].d != 0)
                rbx_4 = *rax_20
            
            sub_140a2e390(arg1, u"%s.%s", rbx_4)
            int16_t* rcx_29 = var_38
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            rcx_30 = var_48
        label_140bd94d7:
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
    
    return arg1

int16_t* var_68
sub_140b63b70(&arg_18, &var_68)
int16_t* r8 = var_68
int16_t* rcx_2 = r8
int32_t var_60
void* rdx_2 = &r8[sx.q(var_60)]

if (r8 != rdx_2)
    while (*rcx_2 != 0x2e)
        rcx_2 = &rcx_2[1]
        
        if (rcx_2 == rdx_2)
            goto label_140bd920c

int16_t* rcx_14
int16_t* var_58
wchar16* rdx_9
int16_t* const rbx_3

if (r8 != rdx_2 && ((rcx_2 - r8) s>> 1).d != 0xffffffff)
label_140bd927e:
    int32_t rcx_7
    rcx_7.b = sub_140b5b8a0(arg_20.d, 0) == 0
    int32_t* rcx_8 = &arg_10
    
    if ((arg_20:4.d != 0 | rcx_7.b) == 0)
        int64_t* rax_11 = sub_140b63b70(rcx_8, &var_48)
        rbx_3 = &data_142d40450
        
        if (rax_11[1].d != 0)
            *rax_11
        
        int64_t* rax_12 = sub_140b63b70(&arg_18, &var_38)
        
        if (rax_12[1].d != 0)
            rbx_3 = *rax_12
        
        rdx_9 = u"%s.%s"
        goto label_140bd9374
    
    int64_t* rax_8 = sub_140b63b70(rcx_8, &var_38)
    int16_t* const rbx_2 = &data_142d40450
    int16_t* const rsi_2
    
    if (rax_8[1].d == 0)
        rsi_2 = &data_142d40450
    else
        rsi_2 = *rax_8
    
    int64_t* rax_9 = sub_140b63b70(&arg_18, &var_48)
    
    if (rax_9[1].d != 0)
        *rax_9
    
    int64_t* rax_10 = sub_140b63b70(&arg_20, &var_58)
    
    if (rax_10[1].d != 0)
        rbx_2 = *rax_10
    
    int16_t* const var_78_1 = rsi_2
    sub_140a2e390(arg1, u"%s.%s.%s", rbx_2)
    int16_t* rcx_12 = var_58
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int16_t* rcx_13 = var_48
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    rcx_14 = var_38
else
label_140bd920c:
    int16_t* rax_2 = r8
    
    if (r8 != rdx_2)
        while (*rax_2 != 0x3a)
            rax_2 = &rax_2[1]
            
            if (rax_2 == rdx_2)
                goto label_140bd922f
    
    if (r8 != rdx_2 && ((rax_2 - r8) s>> 1).d != 0xffffffff)
        goto label_140bd927e
    
label_140bd922f:
    int32_t rcx_5
    rcx_5.b = sub_140b5b8a0(arg_20.d, 0) == 0
    int64_t* rcx_6 = &arg_10
    
    if ((arg_20:4.d != 0 | rcx_5.b) == 0)
        int64_t* rax_15 = sub_140b63b70(rcx_6, &var_48)
        rbx_3 = &data_142d40450
        
        if (rax_15[1].d != 0)
            *rax_15
        
        int64_t* rax_16 = sub_140b63b70(&arg_18, &var_38)
        
        if (rax_16[1].d != 0)
            rbx_3 = *rax_16
        
        rdx_9 = u"%s:%s"
    label_140bd9374:
        sub_140a2e390(arg1, rdx_9, rbx_3)
        int16_t* rcx_17 = var_38
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        rcx_14 = var_48
    else
        int64_t* rax_4 = sub_140b63b70(rcx_6, &var_58)
        int16_t* const rbx_1 = &data_142d40450
        int16_t* const rsi_1
        
        if (rax_4[1].d == 0)
            rsi_1 = &data_142d40450
        else
            rsi_1 = *rax_4
        
        int64_t* rax_13 = sub_140b63b70(&arg_18, &var_48)
        
        if (rax_13[1].d != 0)
            *rax_13
        
        int64_t* rax_14 = sub_140b63b70(&arg_20, &var_38)
        
        if (rax_14[1].d != 0)
            rbx_1 = *rax_14
        
        int16_t* const var_78_2 = rsi_1
        sub_140a2e390(arg1, u"%s.%s:%s", rbx_1)
        int16_t* rcx_21 = var_38
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        int16_t* rcx_22 = var_48
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        rcx_14 = var_58

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

rcx_30 = var_68
goto label_140bd94d7
