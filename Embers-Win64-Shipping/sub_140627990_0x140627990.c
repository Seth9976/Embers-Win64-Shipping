// 函数: sub_140627990
// 地址: 0x140627990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg3 == 0)
    int64_t* rax = *arg1
    int16_t* const r13_1 = &data_142d40450
    int16_t* rcx
    
    if (rax[1].d == 0)
        rcx = &data_142d40450
    else
        rcx = *rax
    
    int32_t rax_1 = sub_140a54570(rcx, &data_1437020ab)
    int64_t rsi_1 = 0
    int64_t var_48 = 0
    int32_t rdx = 0
    int32_t var_40_1 = 0
    int32_t rcx_1 = 0
    int32_t var_3c_1 = 0
    int64_t rbx_1 = -1
    int64_t var_38
    int32_t r12_2
    int32_t r14_5
    
    if (rax_1 == 0)
        if (arg2 != 0 && *arg2 != 0)
            int64_t r14_6 = -1
            
            do
                r14_6 += 1
            while (arg2[r14_6] != 0)
            
            if (r14_6.d + 1 s> 0)
                sub_1405947f0(&var_48, r14_6.d + 1)
                rcx_1 = var_3c_1
                rdx = var_40_1
            
            int32_t rax_9 = r14_6.d + 1 + rdx
            var_40_1 = rax_9
            
            if (rax_9 s> rcx_1)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, arg2, (r14_6.d + 1) * 2)
        
        int64_t* rax_10 = sub_140b187e0(&var_38, &var_48)
        int64_t* r12_3 = arg1[1]
        
        if (r12_3 != rax_10)
            int64_t rcx_19 = *r12_3
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            *r12_3 = *rax_10
            *rax_10 = 0
            r12_3[1].d = rax_10[1].d
            *(r12_3 + 0xc) = *(rax_10 + 0xc)
            rax_10[1] = 0
        
        int64_t rcx_21 = var_38
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        int64_t rcx_22 = var_48
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        if (*arg1[2] == 0)
        label_140627cd2:
            int64_t* rbx_4 = arg1[3]
            int64_t* rsi_2 = arg1[1]
            int64_t rdi_2 = sx.q(rbx_4[1].d)
            int32_t rax_17 = (rdi_2 + 1).d
            rbx_4[1].d = rax_17
            
            if (rax_17 s> *(rbx_4 + 0xc))
                sub_1405a4f90(rbx_4)
            
            sub_140596d10((rdi_2 << 4) + *rbx_4, rsi_2)
        else
            var_48 = 0
            r14_5 = 0
            var_40_1.q = 0
            r12_2 = 0
            
            if (arg2 != 0 && *arg2 != 0)
                do
                    rbx_1 += 1
                while (arg2[rbx_1] != 0)
                
            label_140627c50:
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_48, rbx_1.d + 1)
                    r12_2 = var_3c_1
                    rsi_1 = var_48
                    r14_5 = var_40_1
                
                r14_5 += rbx_1.d + 1
                
                if (r14_5 s> r12_2)
                    sub_140594770(&var_48)
                    r12_2 = var_3c_1
                    rsi_1 = var_48
                
                UnDecorator::getReferenceType(rsi_1, arg2, (rbx_1.d + 1) * 2)
                goto label_140627c9e
            
        label_140627c9e:
            int64_t* rbx_3 = arg1[3]
            int64_t rdi_1 = sx.q(rbx_3[1].d)
            int32_t rax_14 = (rdi_1 + 1).d
            rbx_3[1].d = rax_14
            
            if (rax_14 s> *(rbx_3 + 0xc))
                sub_1405a4f90(rbx_3)
            
            result = (rdi_1 << 4) + *rbx_3
            *result = rsi_1
            *(result + 8) = r14_5
            *(result + 0xc) = r12_2
    else
        if (arg2 != 0 && *arg2 != 0)
            int64_t r14_1 = -1
            
            do
                r14_1 += 1
            while (arg2[r14_1] != 0)
            
            if (r14_1.d + 1 s> 0)
                sub_1405947f0(&var_48, r14_1.d + 1)
                rcx_1 = var_3c_1
                rdx = var_40_1
            
            int32_t rax_2 = rdx + r14_1.d + 1
            var_40_1 = rax_2
            
            if (rax_2 s> rcx_1)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, arg2, (r14_1.d + 1) * 2)
        
        int64_t* rax_3 = sub_140b187e0(&var_38, &var_48)
        int64_t* r12_1 = arg1[1]
        
        if (r12_1 != rax_3)
            int64_t rcx_6 = *r12_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            *r12_1 = *rax_3
            *rax_3 = 0
            r12_1[1].d = rax_3[1].d
            *(r12_1 + 0xc) = *(rax_3 + 0xc)
            rax_3[1] = 0
        
        int64_t rcx_8 = var_38
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = var_48
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int16_t** r14_4 = *arg1
        int16_t** rax_7 = sub_140a35790(sub_140b19c30(&var_48, arg1[1], 0), &var_38)
        int16_t* rdx_6
        
        if (r14_4[1].d == 0)
            rdx_6 = &data_142d40450
        else
            rdx_6 = *r14_4
        
        if (rax_7[1].d != 0)
            r13_1 = *rax_7
        
        result = sub_140a54510(r13_1, rdx_6)
        int64_t rcx_13 = var_38
        r14_4.b = result.d == 0
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = var_48
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        if (r14_4.b != 0)
            if (*arg1[2] == 0)
                goto label_140627cd2
            
            var_48 = 0
            r14_5 = 0
            var_40_1.q = 0
            r12_2 = 0
            
            if (arg2 == 0 || *arg2 == 0)
                goto label_140627c9e
            
            do
                rbx_1 += 1
            while (arg2[rbx_1] != 0)
            
            goto label_140627c50

result.b = 1
return result
