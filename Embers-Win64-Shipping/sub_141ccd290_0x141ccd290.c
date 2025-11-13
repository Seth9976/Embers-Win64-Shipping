// 函数: sub_141ccd290
// 地址: 0x141ccd290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (arg3[1].d s> 1)
    int32_t rdx = 0
    int32_t r9 = 0
    int64_t rbx_1 = 0
    int32_t rdi_1 = 0
    int16_t* var_68 = nullptr
    int32_t var_60_1 = 0
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    
    while (true)
        int32_t rax_1 = arg3[1].d
        int32_t rcx = rax_1 - 1
        
        if (rax_1 == 0)
            rcx = 0
        
        if (rdi_1 s>= rcx)
            break
        
        int16_t rsi_1 = *(*arg3 + (rbx_1 << 1))
        
        if (rsi_1 != 0x28)
            if ((0xffdf & rsi_1) != 0)
                int32_t r14_2 = r9 - 1
                
                if (r9 s<= 0)
                    r14_2 = 0
                
                int32_t rax_10
                rax_10.b = r9 s<= 0
                int32_t rax_12 = rax_10 + 1 + r9
                var_60_1 = rax_12
                int32_t var_5c
                
                if (rax_12 s> var_5c)
                    sub_140594770(&var_68)
                
                int64_t rcx_5 = sx.q(r14_2)
                var_68[rcx_5] = rsi_1
                var_68[rcx_5 + 1] = 0
                rdx = var_50_1
                r9 = var_60_1
            
            rdi_1 += 1
            rbx_1 += 1
        else
            while (true)
                int32_t rax_3 = arg3[1].d
                rdi_1 += 1
                rbx_1 += 1
                int32_t rcx_1 = rax_3 - 1
                
                if (rax_3 == 0)
                    rcx_1 = 0
                
                if (rdi_1 s>= rcx_1)
                    break
                
                int16_t rsi_2 = *(*arg3 + (rbx_1 << 1))
                
                if (rsi_2 == 0x29)
                    break
                
                if (rsi_2 != 0)
                    int32_t r14_1 = rdx - 1
                    
                    if (rdx s<= 0)
                        r14_1 = 0
                    
                    int32_t rax_5
                    rax_5.b = rdx s<= 0
                    int32_t rax_7 = rax_5 + 1 + rdx
                    var_50_1 = rax_7
                    
                    if (rax_7 s> var_4c_1)
                        sub_140594770(&var_58)
                    
                    int64_t rcx_3 = sx.q(r14_1)
                    *(var_58 + (rcx_3 << 1)) = rsi_2
                    *(var_58 + (rcx_3 << 1) + 2) = 0
                    rdx = var_50_1
            
            r9 = var_60_1
            rdi_1 += 1
            rbx_1 += 1
    
    int16_t* const r15_1 = &data_142d40450
    int16_t* const rcx_6 = &data_142d40450
    
    if (r9 != 0)
        rcx_6 = var_68
    
    if (sub_140a54510(rcx_6, u"ReliabilityHandlerComponent") != 0)
        int32_t rax_16 = sub_140a23cf0(&var_68, &data_142d404c4, 1, 0, 0xffffffff)
        int64_t r9_2
        int16_t* var_48
        void arg_10
        
        if (rax_16 == 0xffffffff)
            j_sub_140b3db50()
            
            if (var_60_1 != 0)
                r15_1 = var_68
            
            int64_t rbx_9 = *sub_140b58260(&arg_10, r15_1, 1)
            j_sub_140b3db50()
            int64_t* rax_37
            rax_37, r9_2 = sub_140b407e0(&data_143de7d78, rbx_9)
            
            if (rax_37 != 0)
                int64_t r9_3 = *rax_37
                int64_t* rax_38
                rax_38, r9_2 = (*(r9_3 + 0x40))(rax_37, &var_48, &var_58, r9_3)
                
                if (arg2 != rax_38)
                    *arg2 = *rax_38
                    *rax_38 = 0
                    int64_t rcx_33 = rax_38[1]
                    int64_t* rbx_10 = arg2[1]
                    
                    if (rcx_33 != rbx_10)
                        rax_38[1] = 0
                        arg2[1] = rcx_33
                        
                        if (rbx_10 != 0)
                            rbx_10[1].d -= 1
                            
                            if (rbx_10[1].d == 1)
                                r9_2 = (**rbx_10)(rbx_10)
                                int32_t temp3_1 = *(rbx_10 + 0xc)
                                *(rbx_10 + 0xc) -= 1
                                
                                if (temp3_1 == 1)
                                    r9_2 = (*(*rbx_10 + 8))(rbx_10, 1)
                
                int64_t* var_40
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        r9_2 = (**var_40)(var_40)
                        int32_t temp1_1 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            r9_2 = (*(*var_40 + 8))(var_40, 1)
        else
            int32_t rbx_2 = var_60_1 - 1
            
            if (var_60_1 == 0)
                rbx_2 = 0
            
            int32_t rcx_8
            
            if (rax_16 + 1 s>= 0)
                rcx_8 = rbx_2
                
                if (rax_16 + 1 s< rbx_2)
                    rcx_8 = rax_16 + 1
            else
                rcx_8 = 0
            
            int64_t r9_1 = sx.q(rcx_8)
            
            if (sx.q(rax_16 + 1) + 0x7fffffff s< r9_1)
                rbx_2 = rcx_8
            else if (sx.q(rax_16 + 1) + 0x7fffffff s< sx.q(rbx_2))
                rbx_2 = rax_16 - -0x80000000
            
            int16_t* const rax_19 = &data_142d40450
            
            if (var_60_1 != 0)
                rax_19 = var_68
            
            int16_t* r14_3 = nullptr
            int32_t rdi_2 = 0
            var_48 = nullptr
            int32_t rbx_3 = rbx_2 - rcx_8
            int64_t* var_40_1 = nullptr
            int32_t rsi_3 = 0
            void* r12_1 = &rax_19[r9_1]
            
            if (r12_1 != 0 && *r12_1 != 0 && rbx_3 s> 0)
                if (rbx_3 + 1 s> 0)
                    sub_1405947f0(&var_48, rbx_3 + 1)
                    rsi_3 = var_40_1:4.d
                    rdi_2 = var_40_1.d
                    r14_3 = var_48
                
                rdi_2 += rbx_3 + 1
                var_40_1.d = rdi_2
                
                if (rdi_2 s> rsi_3)
                    sub_140594770(&var_48)
                    rsi_3 = var_40_1:4.d
                    rdi_2 = var_40_1.d
                    r14_3 = var_48
                
                UnDecorator::getReferenceType(r14_3, r12_1, rbx_3 * 2)
                r14_3[sx.q(rdi_2) - 1] = 0
            
            var_48 = r14_3
            var_40_1.d = rdi_2
            int32_t rax_21
            rax_21.b = rdi_2 == 0
            var_40_1:4.d = rsi_3
            int32_t rdx_8 = rdi_2 + 0xa + rax_21
            
            if (rdx_8 s> rsi_3)
                sub_1405947f0(&var_48, rdx_8)
            
            sub_140a20ba0(&var_48, u"_Singleton", 0xa)
            int32_t rsi_4 = var_40_1.d
            int16_t* rbx_4 = &data_142d40450
            int16_t* rdi_4 = var_48
            
            if (rsi_4 != 0)
                rbx_4 = rdi_4
            
            void* rax_23 = sub_140d2ee50(sub_141ccf760(), -ffffffffffffffff, rbx_4, 0)
            void* rcx_15 = rax_23
            
            if (rax_23 != 0)
            label_141ccd64b:
                int64_t* rax_31
                rax_31, r9_2 = (*(*rcx_15 + 0x260))(rcx_15, &var_48, &var_58)
                
                if (arg2 != rax_31)
                    *arg2 = *rax_31
                    *rax_31 = 0
                    int64_t rcx_24 = rax_31[1]
                    int64_t* rbx_7 = arg2[1]
                    
                    if (rcx_24 != rbx_7)
                        rax_31[1] = 0
                        arg2[1] = rcx_24
                        
                        if (rbx_7 != 0)
                            rbx_7[1].d -= 1
                            
                            if (rbx_7[1].d == 1)
                                r9_2 = (**rbx_7)(rbx_7)
                                int32_t temp7_1 = *(rbx_7 + 0xc)
                                *(rbx_7 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    r9_2 = (*(*rbx_7 + 8))(rbx_7, 1)
                
                if (var_40_1 != 0)
                    var_40_1[1].d -= 1
                    
                    if (var_40_1[1].d == 1)
                        r9_2 = (**var_40_1)(var_40_1)
                        int32_t temp5_1 = *(var_40_1 + 0xc)
                        *(var_40_1 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            r9_2 = (*(*var_40_1 + 8))(var_40_1, 1)
            else
                int16_t* rbx_5 = &data_142d40450
                
                if (var_60_1 != rax_23.d)
                    rbx_5 = var_68
                
                void* rax_25
                rax_25, r9_2 = sub_140d2f240(sub_141ccf760(), 0, rbx_5, 0, 0, 0)
                
                if (rax_25 != 0)
                    if (rsi_4 != 0)
                        r15_1 = rdi_4
                    
                    uint64_t rbx_6 = *sub_140b58260(&arg_10, r15_1, 1)
                    void* rax_27 = sub_140cde0b0()
                    uint32_t rcx_20
                    rcx_20.b = (rbx_6 u>> 0x20).d == 0
                    
                    if ((rcx_20.b & sub_140b5b8a0(rbx_6.d, 0)) != 0)
                        sub_140d19010(rax_27, 
                            NewObject with empty name can't be used to create default subobjects (inside "
                        "of UObject derived class constructor) as it produces incon")
                    
                    void* rax_29
                    rax_29, r9_2 = sub_140d2dfc0(rax_25, rax_27, rbx_6, 0, 0, 0, 0, 0, 0)
                    rcx_15 = rax_29
                    
                    if (rax_29 != 0)
                        goto label_141ccd64b
            
            if (rdi_4 != 0)
                r9_2 = sub_140a74f90(rdi_4)
        
        if (*arg2 != 0)
            sub_141ccd810(arg1, arg2, arg4, r9_2)
    
    int64_t rcx_39 = var_58
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    int16_t* rcx_40 = var_68
    
    if (rcx_40 != 0)
        sub_140a74f90(rcx_40)

return arg2
