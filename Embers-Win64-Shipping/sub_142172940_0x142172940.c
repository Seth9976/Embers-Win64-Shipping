// 函数: sub_142172940
// 地址: 0x142172940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_2

if (arg1[1].d == *(arg1 + 0x34))
label_1421729be:
    rcx_2 = nullptr
else
    void* r10_1 = arg1[8]
    void* r11_1 = &arg1[7]
    int64_t r8 = sx.q(*arg2)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(arg1[9].d) - 1) & r8) << 2))
    
    if (rax_1 == 0xffffffff)
    label_1421729be_1:
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = sx.q(rax_1) * 0x38 + *arg1
            
            if (*rcx_2 == r8.d)
                break
            
            rax_1 = rcx_2[0xc]
            
            if (rax_1 == 0xffffffff)
                goto label_1421729be_2
        
        if (rax_1 == 0xffffffff)
        label_1421729be_2:
            rcx_2 = nullptr

void* r15 = &rcx_2[2]

if (rcx_2 == 0)
    r15 = nullptr

uint64_t result
int16_t* var_b0
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
    
    int64_t* rax_16 = sub_140b58260(&arg_8, rdi_1, 1)
    var_b0 = arg2
    int64_t var_64_1 = *rax_16
    var_6c:4.d = *arg4
    int32_t var_5c_1 = arg5
    char var_50
    char var_50_2 = (((var_50 & 0xf0) | 0x10) & 0xfc) | (arg7 * 2) | arg6
    int32_t* var_a8_1 = &var_70
    sub_14215a980(arg1, &arg_8, &var_b0, nullptr)
    result = j_sub_140d3e110(&var_70)
    
    if (result.b != 0)
        return sub_141fa1990(&arg1[0xa], &var_70, arg2)
else
    int16_t* rbx_1 = nullptr
    int16_t* var_a0 = nullptr
    arg_8 = 0
    char var_c8_1 = 0
    int64_t var_98_1 = 0
    int64_t* rax_2 = sub_140b63b70(r15 + 0xc, &var_b0)
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
    int16_t* rcx_5 = var_b0
    rax_3.b = rax_3 != 0
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
        rax_3 = zx.d(rax_3.b)
    
    int16_t* var_c0
    int32_t var_b8
    int32_t result_1
    
    if (rax_3.b != 0)
        sub_140a2e390(&var_c0, u"%d", zx.q(*arg2))
        int16_t* const rbx_2 = &data_142d40450
        
        if (var_b8 != 0)
            rbx_2 = var_c0
        
        int64_t* rax_4 = sub_140b63b70(r15 + 0xc, &var_b0)
        
        if (rax_4[1].d != 0)
            *rax_4
        
        int16_t* r8_2
        
        if (arg3[1].d == 0)
            r8_2 = &data_142d40450
        else
            r8_2 = *arg3
        
        int16_t* const var_d8_1 = rbx_2
        sub_140a2e390(&result_1, u"Path mismatch. Path: %s, Expected: %s, NetGUID: %s", r8_2)
        rbx_1 = result_1.q
        int16_t* rcx_9 = var_b0
        int32_t var_88
        var_98_1.d = var_88
        int32_t var_84
        var_98_1:4.d = var_84
        var_88.q = 0
        var_a0 = rbx_1
        result_1.q = 0
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int16_t* rcx_10 = var_c0
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        arg_8 = 1
    
    int32_t var_b4
    int16_t* var_80
    int32_t var_78
    
    if (*(r15 + 8) != *arg4)
        sub_140a2e390(&var_b0, u"%d", zx.q(*arg2))
        int16_t* const r13_1 = &data_142d40450
        int32_t var_a8
        
        if (var_a8 != 0)
            r13_1 = var_b0
        
        sub_140a2e390(&var_80, u"%d", zx.q(*(r15 + 8)))
        int16_t* const rax_9 = &data_142d40450
        
        if (var_78 != 0)
            rax_9 = var_80
        
        result_1.q = rax_9
        int64_t var_48
        sub_140a2e390(&var_48, u"%d", zx.q(*arg4))
        int16_t* r8_6
        
        if (arg3[1].d == 0)
            r8_6 = &data_142d40450
        else
            r8_6 = *arg3
        
        int16_t* const var_d0_1 = r13_1
        int64_t var_d8_2 = result_1.q
        sub_140a2e390(&var_c0, Outer mismatch. Path: %s, Outer: %s, Expected: %s, NetGUID: %s", 
            r8_6)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        rbx_1 = var_c0
        var_98_1.d = var_b8
        var_b8.q = 0
        var_c0 = nullptr
        int64_t rcx_16 = var_48
        var_a0 = rbx_1
        var_98_1:4.d = var_b4
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        int16_t* rcx_17 = var_80
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int16_t* rcx_18 = var_b0
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        var_c8_1 = 1
    
    if (j_sub_140d3e110(r15).b == 0)
        result.b = 0
    else
        sub_141f87aa0(&arg1[0xa], &result_1, *r15)
        result = sx.q(result_1)
        int64_t rcx_21
        
        if (result.d != 0xffffffff)
            rcx_21 = arg1[0xa] + result * 0x14
        
        uint64_t r8_8
        
        if (result.d == 0xffffffff || rcx_21 == 0)
            r8_8 = 0
        else
            r8_8 = zx.q(*(rcx_21 + 8))
        
        if (r8_8.d == *arg2)
            result.b = 0
        else
            sub_140a2e390(&var_80, u"%d", r8_8)
            int16_t* r15_1 = &data_142d40450
            
            if (var_78 != 0)
                r15_1 = var_80
            
            sub_140a2e390(&var_b0, u"%d", zx.q(*arg2))
            
            if (arg3[1].d != 0)
                rdi = *arg3
            
            int16_t* var_d8_3 = r15_1
            sub_140a2e390(&var_c0, u"Netguid mismatch. Path: %s, NetGUID: %s, Expected: %s", rdi)
            
            if (rbx_1 != 0)
                sub_140a74f90(rbx_1)
            
            rbx_1 = var_c0
            int16_t* rcx_26 = var_b0
            var_98_1.d = var_b8
            var_98_1:4.d = var_b4
            var_b8.q = 0
            var_a0 = rbx_1
            var_c0 = nullptr
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            int16_t* rcx_27 = var_80
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            result.b = 1
    
    if (arg_8 != 0 || var_c8_1 != 0 || result.b != 0)
        result = sub_142161140(arg1[0x29], 9, &var_a0)
        rbx_1 = var_a0
    
    if (rbx_1 != 0)
        return sub_140a74f90(rbx_1)
return result
