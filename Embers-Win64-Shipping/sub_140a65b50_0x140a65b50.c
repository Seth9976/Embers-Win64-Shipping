// 函数: sub_140a65b50
// 地址: 0x140a65b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140aaeb20()
int32_t result
int16_t* rbx_4
int16_t* var_68

if (data_143dba230 s<= 0)
label_140a65c12:
    int32_t rax_2 = arg4[1].d
    int32_t rdi_4 = arg3[1].d
    int32_t rbx_3 = rax_2 - 1
    
    if (rax_2 == 0)
        rbx_3 = 0
    
    int32_t rsi_1 = 2
    int32_t rax_4
    
    if (rdi_4 == 0)
        rax_4 = 2
    
    if (rdi_4 != 0 || rbx_3 == 0xffffffff)
        rax_4 = 1
    
    int64_t r14_1 = *arg3
    int32_t rcx_3 = rbx_3 + rax_4
    int16_t* var_88 = nullptr
    int32_t var_7c
    
    if (rdi_4 != 0 || rcx_3 != 0)
        sub_1405a4c70(&var_88, rdi_4 + rcx_3, 0)
        memcpy(var_88, r14_1, rdi_4 * 2)
    else
        var_7c = 0
    
    sub_140a2cf70(&var_88, *arg4, rbx_3)
    int32_t rax_5 = arg5[1].d
    int32_t rbx_5 = rax_5 - 1
    
    if (rax_5 == 0)
        rbx_5 = 0
    
    int32_t rcx_7
    
    if (rdi_4 == 0)
        rcx_7 = 2
    
    if (rdi_4 != 0 || rbx_5 == 0xffffffff)
        rcx_7 = 1
    
    int16_t* var_48 = var_88
    int32_t rdx_7 = rbx_5 + rcx_7 + rdi_4
    var_88 = nullptr
    int32_t var_40_1 = rdi_4
    int32_t var_3c_1 = var_7c
    int32_t var_80_1
    var_80_1.q = 0
    
    if (rdx_7 s> var_7c)
        sub_1405947f0(&var_48, rdx_7)
    
    sub_140a2cf70(&var_48, *arg5, rbx_5)
    int16_t* rbx_6 = var_88
    
    if (rbx_6 != 0)
        int64_t* rcx_10 = data_143ddb3f0
        
        if (rcx_10 == 0)
            zmm1 = sub_140a750a0()
            rcx_10 = data_143ddb3f0
        
        (*(*rcx_10 + 0x30))(rcx_10, rbx_6)
    
    int512_t zmm1_1 = sub_140ab4f00(arg2, &var_48, arg6, zmm1)
    int32_t rbx_7 = data_143db99a0
    int32_t rbx_8
    
    if (rbx_7 == 0)
        rbx_8 = 0
    else
        rbx_8 = rbx_7 - 1
    
    int32_t rdi_5 = arg3[1].d
    int32_t rax_11
    
    if (rdi_5 == 0)
        rax_11 = 2
    
    if (rdi_5 != 0 || rbx_8 == 0xffffffff)
        rax_11 = 1
    
    var_88 = nullptr
    int32_t rcx_12 = rax_11 + rbx_8
    int64_t r14_2 = *arg3
    
    if (rdi_5 != 0 || rcx_12 != 0)
        sub_1405a4c70(&var_88, rdi_5 + rcx_12, 0)
        memcpy(var_88, r14_2, rdi_5 * 2)
    else
        var_7c = 0
    
    sub_140a2cf70(&var_88, data_143db9998, rbx_8)
    int32_t rbx_9 = data_143db99b8
    int32_t rbx_10
    
    if (rbx_9 == 0)
        rbx_10 = 0
    else
        rbx_10 = rbx_9 - 1
    
    int32_t rdx_14
    
    if (rdi_5 == 0)
        rdx_14 = 2
    
    if (rdi_5 != 0 || rbx_10 == 0xffffffff)
        rdx_14 = 1
    
    var_68 = var_88
    int32_t rdx_16 = rdx_14 + rbx_10 + rdi_5
    var_88 = nullptr
    int32_t var_80_2
    var_80_2.q = 0
    
    if (rdx_16 s> var_7c)
        sub_1405947f0(&var_68, rdx_16)
    
    sub_140a2cf70(&var_68, data_143db99b0, rbx_10)
    int32_t rax_15 = arg4[1].d
    int32_t rbx_11 = rax_15 - 1
    
    if (rax_15 == 0)
        rbx_11 = 0
    
    int32_t rcx_19
    
    if (rdi_5 == 0)
        rcx_19 = 2
    
    if (rdi_5 != 0 || rbx_11 == 0xffffffff)
        rcx_19 = 1
    
    int16_t* var_78 = var_68
    int32_t rdx_19 = rbx_11 + rcx_19 + rdi_5
    var_68 = nullptr
    int32_t var_60_1
    var_60_1.q = 0
    
    if (rdx_19 s> var_7c)
        sub_1405947f0(&var_78, rdx_19)
    
    sub_140a2cf70(&var_78, *arg4, rbx_11)
    int32_t rax_19 = arg5[1].d
    int32_t rbx_12 = rax_19 - 1
    
    if (rax_19 == 0)
        rbx_12 = 0
    
    if (rdi_5 != 0 || rbx_12 == 0xffffffff)
        rsi_1 = 1
    
    int32_t rdx_22 = rbx_12 + rsi_1 + rdi_5
    int16_t* var_58 = var_78
    var_78 = nullptr
    int32_t var_50_1 = rdi_5
    int32_t var_4c_1 = var_7c
    int32_t var_70_1
    var_70_1.q = 0
    
    if (rdx_22 s> var_7c)
        sub_1405947f0(&var_58, rdx_22)
    
    sub_140a2cf70(&var_58, *arg5, rbx_12)
    int16_t* rbx_13 = var_78
    
    if (rbx_13 != 0)
        int64_t* rcx_25 = data_143ddb3f0
        
        if (rcx_25 == 0)
            zmm1_1 = sub_140a750a0()
            rcx_25 = data_143ddb3f0
        
        (*(*rcx_25 + 0x30))(rcx_25, rbx_13)
    
    int16_t* rbx_14 = var_68
    
    if (rbx_14 != 0)
        int64_t* rcx_26 = data_143ddb3f0
        
        if (rcx_26 == 0)
            zmm1_1 = sub_140a750a0()
            rcx_26 = data_143ddb3f0
        
        (*(*rcx_26 + 0x30))(rcx_26, rbx_14)
    
    int16_t* rbx_15 = var_88
    
    if (rbx_15 != 0)
        int64_t* rcx_27 = data_143ddb3f0
        
        if (rcx_27 == 0)
            zmm1_1 = sub_140a750a0()
            rcx_27 = data_143ddb3f0
        
        (*(*rcx_27 + 0x30))(rcx_27, rbx_15)
    
    result = sub_140b16090(&var_58)
    
    if (result.b != 0)
        result = sub_140ab4f00(arg2, &var_58, arg6, zmm1_1)
    
    int16_t* rbx_16 = var_58
    
    if (rbx_16 != 0)
        int64_t* rcx_30 = data_143ddb3f0
        
        if (rcx_30 == 0)
            sub_140a750a0()
            rcx_30 = data_143ddb3f0
        
        result = (*(*rcx_30 + 0x30))(rcx_30, rbx_16)
    
    rbx_4 = var_48
else
    zmm1 = sub_140b18720(&var_68, arg5, 1)
    int64_t* rbx_1 = data_143dba228
    void* rdi_3 = &rbx_1[sx.q(data_143dba230) * 2]
    
    if (rbx_1 == rdi_3)
    label_140a65be8:
        int16_t* rbx_2 = var_68
        
        if (rbx_2 != 0)
            int64_t* rcx_2 = data_143ddb3f0
            
            if (rcx_2 == 0)
                zmm1 = sub_140a750a0()
                rcx_2 = data_143ddb3f0
            
            (*(*rcx_2 + 0x30))(rcx_2, rbx_2)
        
        goto label_140a65c12
    
    while (true)
        int16_t* const rdx_1 = &data_142d40450
        int32_t var_60
        
        if (var_60 != 0)
            rdx_1 = var_68
        
        int16_t* const rcx_1
        
        if (rbx_1[1].d == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *rbx_1
        
        result = sub_140a54510(rcx_1, rdx_1)
        
        if (result == 0)
            rbx_4 = var_68
            break
        
        rbx_1 = &rbx_1[2]
        
        if (rbx_1 == rdi_3)
            goto label_140a65be8

if (rbx_4 == 0)
    return result

int64_t* rcx_31 = data_143ddb3f0

if (rcx_31 == 0)
    sub_140a750a0()
    rcx_31 = data_143ddb3f0

return (*(*rcx_31 + 0x30))(rcx_31, rbx_4)
