// 函数: sub_140a9ab30
// 地址: 0x140a9ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1
int32_t result

if (arg3 != 0)
    int64_t* rax = arg1[1]
    int16_t* rdx
    
    if (rax[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *rax
    
    if (sub_140a54510(arg2, rdx) != 0)
        int64_t* rax_1 = rsi[2]
        int64_t r12_1 = 0
        int32_t r13_1 = rax_1[1].d
        int64_t rbx_1 = -1
        int32_t r14_1 = 0
        int32_t r15_1 = 0
        int64_t var_78 = 0
        int64_t var_70_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rsi_1 = -1
            
            do
                rsi_1 += 1
            while (arg2[rsi_1] != 0)
            
            if (rsi_1.d + 1 s> 0)
                sub_1405947f0(&var_78, rsi_1.d + 1)
                r15_1 = var_70_1:4.d
                r14_1 = var_70_1.d
                r12_1 = var_78
            
            r14_1 += rsi_1.d + 1
            var_70_1.d = r14_1
            
            if (r14_1 s> r15_1)
                sub_140594770(&var_78)
                r15_1 = var_70_1:4.d
                r14_1 = var_70_1.d
                r12_1 = var_78
            
            UnDecorator::getReferenceType(r12_1, arg2, (rsi_1.d + 1) * 2)
            rsi = arg1
        
        int32_t rax_2 = 1
        
        if (r13_1 == 0)
            r13_1 = 1
        
        if (r14_1 != 0 || r13_1 == 0)
            rax_2 = 0
        
        int64_t var_68 = r12_1
        int32_t rdx_5 = r14_1 + rax_2 + r13_1
        int32_t var_60_1 = r14_1
        int32_t var_5c_1 = r15_1
        
        if (rdx_5 s> r15_1)
            sub_1405947f0(&var_68, rdx_5)
        
        int32_t rax_3 = rax_1[1].d
        int32_t r8_2 = rax_3 - 1
        
        if (rax_3 == 0)
            r8_2 = 0
        
        sub_140a2cf70(&var_68, *rax_1, r8_2)
        
        if (sub_140b16090(&var_68).b != 0)
            var_78 = 0
            int32_t rdx_8 = 0
            var_70_1.d = 0
            int32_t rcx_7 = 0
            var_70_1:4.d = 0
            
            if (arg2 != 0 && *arg2 != 0)
                do
                    rbx_1 += 1
                while (arg2[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_78, rbx_1.d + 1)
                    rcx_7 = var_70_1:4.d
                    rdx_8 = var_70_1.d
                
                int32_t rax_4 = rbx_1.d + 1 + rdx_8
                var_70_1.d = rax_4
                
                if (rax_4 s> rcx_7)
                    sub_140594770(&var_78)
                
                UnDecorator::getReferenceType(var_78, arg2, (rbx_1.d + 1) * 2)
            
            int64_t var_48
            sub_140b187e0(&var_48, &var_78)
            int64_t rcx_12 = var_78
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            int16_t* var_58
            UnDecorator::getVbTableType(&var_58, &var_48)
            int64_t* rsi_3 = *rsi
            int64_t* r14_2 = *rsi_3
            int64_t* rbx_3 = r14_2
            void* rdi_3 = &r14_2[sx.q(rsi_3[1].d) * 2]
            int32_t var_50
            
            if (r14_2 != rdi_3)
                while (true)
                    int16_t* const rdx_13 = &data_142d40450
                    
                    if (var_50 != 0)
                        rdx_13 = var_58
                    
                    int16_t* const rcx_14
                    
                    if (rbx_3[1].d == 0)
                        rcx_14 = &data_142d40450
                    else
                        rcx_14 = *rbx_3
                    
                    if (sub_140a54510(rcx_14, rdx_13) == 0)
                        break
                    
                    rbx_3 = &rbx_3[2]
                    
                    if (rbx_3 == rdi_3)
                        goto label_140a9ad82
            
            if (r14_2 == rdi_3 || ((rbx_3 - r14_2) s>> 4).d == 0xffffffff)
            label_140a9ad82:
                int64_t rbx_6 = sx.q(rsi_3[1].d)
                result = (rbx_6 + 1).d
                rsi_3[1].d = result
                
                if (result s> *(rsi_3 + 0xc))
                    sub_1405a4f90(rsi_3)
                
                int64_t* rbx_8 = (rbx_6 << 4) + *rsi_3
                *rbx_8 = 0
                int16_t* rsi_4 = var_58
                rbx_8[1].d = var_50
                
                if (var_50 != 0)
                    sub_1405a4c70(rbx_8, var_50, 0)
                    memcpy(*rbx_8, rsi_4, var_50 * 2)
                else
                    *(rbx_8 + 0xc) = 0
            
            int16_t* rcx_18 = var_58
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int64_t rcx_19 = var_48
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
        
        int64_t rcx_20 = var_68
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)

result.b = 1
return result
