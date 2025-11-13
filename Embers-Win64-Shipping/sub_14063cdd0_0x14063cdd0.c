// 函数: sub_14063cdd0
// 地址: 0x14063cdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
arg1[1].d
int32_t result
int64_t rcx

if ((*(*rax + 0xd8))().b == 0)
    sub_140b214e0(arg1)
    sub_140a20b00(arg1, &data_142d63b88, 1)
    int16_t* var_68 = nullptr
    int64_t r14_1 = 0
    int32_t var_60_1 = 0
    int32_t r12_1 = 0
    int64_t arg_10 = 0
    int16_t* var_a8 = nullptr
    int32_t var_a0_1 = 0
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    sub_1405947f0(&var_78, 2)
    int32_t rax_2 = var_70_1 + 2
    var_70_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_78)
    
    int64_t rbx_1 = var_78
    UnDecorator::getReferenceType(rbx_1, &data_142d5a024, 4)
    sub_14060a620(arg1, &var_78, &var_68, &var_a8, 1, 0)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    sub_140a20b00(&var_68, &data_142d63b88, 1)
    
    while (true)
        int16_t* const rcx_9 = &data_142d40450
        
        if (var_a0_1 != 0)
            rcx_9 = var_a8
        
        if (sub_140a54570(rcx_9, &data_1437020ab) == 0)
            int16_t* rcx_40 = var_a8
            
            if (rcx_40 != 0)
                sub_140a74f90(rcx_40)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
            
            int16_t* rcx_42 = var_68
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            rcx = *arg1
            goto label_14063d372
        
        int16_t* var_58 = nullptr
        int32_t var_50_1 = 0
        sub_1405947f0(&var_58, 2)
        int32_t rdi_1 = var_50_1 + 2
        
        if (rdi_1 s> 0)
            sub_140594770(&var_58)
        
        int16_t* r13_1 = var_58
        UnDecorator::getReferenceType(r13_1, &data_142d5a024, 4)
        int16_t* const rdx_4 = &data_142d40450
        
        if (rdi_1 != 0)
            rdx_4 = r13_1
        
        int32_t rax_3 = sub_140a23cf0(&var_a8, rdx_4, 1, 0, 0xffffffff)
        
        if (rax_3 s>= 0)
            int32_t r8_2 = var_a0_1
            int16_t* r9_2 = var_a8
            int64_t var_98
            int64_t rsi_1
            int64_t var_90_1
            int32_t rbx_2
            int16_t* r14_2
            
            if (r8_2 == 0)
                r14_2 = &data_142d40450
                rsi_1 = 0
                var_98 = 0
                r12_1 = 0
                var_90_1 = 0
                rbx_2 = 0
            label_14063d002:
                
                if (*r14_2 != 0 && rbx_2 s> 0)
                    sub_1405947f0(&var_98, rbx_2 + 1)
                    r12_1 = var_90_1.d + 1 + rbx_2
                    var_90_1.d = r12_1
                    
                    if (r12_1 s> var_90_1:4.d)
                        sub_140594770(&var_98)
                        r12_1 = var_90_1.d
                    
                    rsi_1 = var_98
                    UnDecorator::getReferenceType(rsi_1, r14_2, rbx_2 * 2)
                    *(rsi_1 + (sx.q(r12_1) << 1) - 2) = 0
                    r8_2 = var_a0_1
                    r9_2 = var_a8
            else
                rbx_2 = r8_2 - 1
                r14_2 = r9_2
                
                if (rax_3 s< rbx_2)
                    rbx_2 = rax_3
                
                var_98 = 0
                rsi_1 = 0
                var_90_1 = 0
                r12_1 = 0
                
                if (r9_2 != 0)
                    goto label_14063d002
            
            if (arg_10 != 0)
                sub_140a74f90(arg_10)
                r8_2 = var_a0_1
                r9_2 = var_a8
            
            arg_10 = rsi_1
            var_98 = 0
            int64_t var_90_2 = 0
            int32_t rdi_2
            
            if (rdi_1 == 0)
                rdi_2 = 0
            else
                rdi_2 = rdi_1 - 1
            
            int32_t rax_5 = rdi_2 + rax_3
            int32_t rbx_3 = r8_2 - 1
            
            if (r8_2 == 0)
                rbx_3 = 0
            
            int32_t rcx_18
            
            if (rax_5 s>= 0)
                rcx_18 = rbx_3
                
                if (rax_5 s< rbx_3)
                    rcx_18 = rax_5
            else
                rcx_18 = 0
            
            int64_t r10_1 = sx.q(rcx_18)
            
            if (sx.q(rax_5) + 0x7fffffff s< r10_1)
                rbx_3 = rcx_18
            else if (sx.q(rax_5) + 0x7fffffff s< sx.q(rbx_3))
                rbx_3 = rax_5 + 0x7fffffff
            
            int16_t* var_88 = nullptr
            int16_t* rax_7 = &data_142d40450
            int64_t var_80_1 = 0
            
            if (r8_2 != 0)
                rax_7 = r9_2
            
            int16_t* r14_3 = nullptr
            int32_t rbx_4 = rbx_3 - rcx_18
            int32_t rdi_3 = 0
            int32_t rsi_2 = 0
            void* r15_2 = &rax_7[r10_1]
            
            if (r15_2 != 0 && *r15_2 != 0 && rbx_4 s> 0)
                sub_1405947f0(&var_88, rbx_4 + 1)
                rsi_2 = var_80_1:4.d
                rdi_3 = var_80_1.d + 1 + rbx_4
                var_80_1.d = rdi_3
                
                if (rdi_3 s> rsi_2)
                    sub_140594770(&var_88)
                    rsi_2 = var_80_1:4.d
                    rdi_3 = var_80_1.d
                
                r14_3 = var_88
                UnDecorator::getReferenceType(r14_3, r15_2, rbx_4 * 2)
                r14_3[sx.q(rdi_3) - 1] = 0
                r9_2 = var_a8
            
            var_88 = nullptr
            int64_t var_80_2 = 0
            
            if (r9_2 != 0)
                sub_140a74f90(r9_2)
            
            var_a8 = r14_3
            r14_1 = arg_10
            var_a0_1 = rsi_2
            var_a0_1 = rdi_3
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        var_78 = 0
        int32_t var_70_2 = 0
        sub_1405947f0(&var_78, 2)
        int32_t rbx_5 = var_70_2 + 2
        
        if (rbx_5 s> 0)
            sub_140594770(&var_78)
        
        int64_t rdi_5 = var_78
        sub_1405a7220(rdi_5, 2, &data_142d63b88, 2, 0x3f)
        int64_t rsi_3
        
        if (r12_1 s> 1)
            int32_t rax_9
            int32_t rbx_6
            
            if (rbx_5 == 0)
                rbx_6 = 0
                rax_9 = 0
            else
                rbx_6 = rbx_5 - 1
                rax_9 = rbx_6
            
            int64_t var_48 = 0
            sub_1405a4c70(&var_48, rax_9 + r12_1, 0)
            memcpy(var_48, r14_1, r12_1 * 2)
            sub_140a20ba0(&var_48, rdi_5, rbx_6)
            rsi_3 = var_48
            rbx_5 = r12_1
            var_48 = 0
            int32_t var_40_1
            var_40_1.q = 0
        else
            rsi_3 = rdi_5
            int64_t var_70_3 = 0
            rdi_5 = 0
        
        int32_t r8_10 = rbx_5 - 1
        
        if (rbx_5 == 0)
            r8_10 = 0
        
        sub_140a20ba0(&var_68, rsi_3, r8_10)
        
        if (rsi_3 != 0)
            sub_140a74f90(rsi_3)
        
        if (rdi_5 != 0)
            sub_140a74f90(rdi_5)
        
        int64_t* rax_10 = __crt_deferred_errno_cache::get(&data_143db7b00)
        int16_t* const rdx_18 = &data_142d40450
        
        if (var_60_1 != 0)
            rdx_18 = var_68
        
        int64_t r8_11 = *rax_10
        
        if ((*(r8_11 + 0xe0))(rax_10, rdx_18, r8_11) == 0)
            int64_t* rax_12 = __crt_deferred_errno_cache::get(&data_143db7b00)
            int16_t* const rdx_19 = &data_142d40450
            
            if (var_60_1 != 0)
                rdx_19 = var_68
            
            int64_t r8_12 = *rax_12
            
            if ((*(r8_12 + 0xd8))(rax_12, rdx_19, r8_12).b == 0)
                int16_t* rcx_35 = var_a8
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                if (r14_1 != 0)
                    sub_140a74f90(r14_1)
                
                int16_t* rcx_37 = var_68
                
                if (rcx_37 != 0)
                    sub_140a74f90(rcx_37)
                
                int64_t rcx_39 = *arg1
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                result.b = 0
                break
else
    rcx = *arg1
label_14063d372:
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    result.b = 1
return result
