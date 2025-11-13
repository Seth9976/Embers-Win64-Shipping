// 函数: sub_142172df0
// 地址: 0x142172df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_2

if (arg1[1].d == *(arg1 + 0x34))
label_142172e6e:
    rcx_2 = nullptr
else
    void* r10_1 = arg1[8]
    void* r11_1 = &arg1[7]
    int64_t r8 = sx.q(*arg2)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(arg1[9].d) - 1) & r8) << 2))
    
    if (rax_1 == 0xffffffff)
    label_142172e6e_1:
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = sx.q(rax_1) * 0x38 + *arg1
            
            if (*rcx_2 == r8.d)
                break
            
            rax_1 = rcx_2[0xc]
            
            if (rax_1 == 0xffffffff)
                goto label_142172e6e_2
        
        if (rax_1 == 0xffffffff)
        label_142172e6e_2:
            rcx_2 = nullptr

void* r15 = &rcx_2[2]

if (rcx_2 == 0)
    r15 = nullptr

int32_t result
int16_t* var_90
char arg_8

if (r15 == 0)
    int32_t var_70 = 0xffffffff
    int64_t var_6c
    __builtin_memset(&var_6c, 0, 0x1c)
    int16_t* rdi_1
    
    if (arg3[1].d == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *arg3
    
    int64_t* rax_11 = sub_140b58260(&arg_8, rdi_1, 1)
    var_90 = arg2
    int64_t var_64_1 = *rax_11
    var_6c:4.d = *arg4
    int32_t var_5c_1 = arg5
    char var_50
    char var_50_2 = (((var_50 & 0xf0) | 0x10) & 0xfc) | (arg7 * 2) | arg6
    int32_t* var_88_1 = &var_70
    sub_14215a980(arg1, &arg_8, &var_90, nullptr)
    result = j_sub_140d3e110(&var_70)
    
    if (result.b != 0)
        return sub_141fa1990(&arg1[0xa], &var_70, arg2)
else
    int64_t rbx_1 = 0
    int64_t var_a0 = 0
    arg_8 = 0
    int64_t var_98_1 = 0
    int16_t* const r12
    r12.b = 0
    int64_t* rax_2 = sub_140b63b70(r15 + 0xc, &var_90)
    int16_t* const rdi = &data_142d40450
    int16_t* rdx_1
    
    if (arg3[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg3
    
    int16_t* const rcx_4
    
    if (rax_2[1].d == 0)
        rcx_4 = &data_142d40450
    else
        rcx_4 = *rax_2
    
    uint32_t rax_3 = sub_140a54510(rcx_4, rdx_1)
    int16_t* rcx_5 = var_90
    rax_3.b = rax_3 != 0
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
        rax_3 = zx.d(rax_3.b)
    
    int64_t var_b0
    int32_t var_a8
    int32_t result_1
    int16_t* var_80
    
    if (rax_3.b != 0)
        sub_140a2e390(&var_80, u"%d", zx.q(*arg2))
        int16_t* const rbx_2 = &data_142d40450
        int32_t var_78
        
        if (var_78 != 0)
            rbx_2 = var_80
        
        int64_t* rax_4 = sub_140b63b70(r15 + 0xc, &var_90)
        
        if (rax_4[1].d != 0)
            *rax_4
        
        int16_t* r8_2
        
        if (arg3[1].d == 0)
            r8_2 = &data_142d40450
        else
            r8_2 = *arg3
        
        int16_t* const var_c8_1 = rbx_2
        sub_140a2e390(&var_b0, u"Path mismatch. Path: %s, Expected: %s, NetGUID: %s", r8_2)
        rbx_1 = var_b0
        var_98_1.d = var_a8
        var_a8.q = 0
        var_b0 = 0
        int16_t* rcx_9 = var_90
        var_a0 = rbx_1
        var_98_1:4.d = result_1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int16_t* rcx_10 = var_80
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        arg_8 = 1
    
    result = *arg4
    
    if (*(r15 + 8) != result)
        sub_140a2e390(&var_90, u"%d", zx.q(*arg2))
        r12 = &data_142d40450
        int32_t var_88
        
        if (var_88 != 0)
            r12 = var_90
        
        int16_t* var_48
        sub_140a2e390(&var_48, u"%d", zx.q(*(r15 + 8)))
        int16_t* const r15_1 = &data_142d40450
        int32_t var_40
        
        if (var_40 != 0)
            r15_1 = var_48
        
        sub_140a2e390(&var_80, u"%d", zx.q(*arg4))
        
        if (arg3[1].d != 0)
            rdi = *arg3
        
        int16_t* const var_c0_1 = r12
        int16_t* const var_c8_2 = r15_1
        sub_140a2e390(&var_b0, Outer mismatch. Path: %s, Outer: %s, Expected: %s, NetGUID: %s", rdi)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        rbx_1 = var_b0
        var_98_1.d = var_a8
        result = result_1
        var_a8.q = 0
        var_b0 = 0
        int16_t* rcx_16 = var_80
        var_a0 = rbx_1
        var_98_1:4.d = result
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        int16_t* rcx_17 = var_48
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        int16_t* rcx_18 = var_90
        
        if (rcx_18 != 0)
            result = sub_140a74f90(rcx_18)
        
        r12.b = 1
    
    if (arg_8 != 0 || r12.b != 0)
        result = sub_142161140(arg1[0x29], 9, &var_a0)
        rbx_1 = var_a0
    
    if (rbx_1 != 0)
        return sub_140a74f90(rbx_1)
return result
