// 函数: sub_1420997a0
// 地址: 0x1420997a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r13 = arg1
void** var_a8 = arg1
int64_t var_50
sub_14208c230(&var_50, arg2)
void** var_98
int64_t var_48

if (var_50 == 0)
    if (*arg3 != 0)
        void* rcx_51 = arg3[2]
        var_98 = arg2
        var_a8 = arg2
        
        if (rcx_51 == 0)
            rcx_51 = &arg3[4]
        
        (*arg3)((*(*rcx_51 + 8))(rcx_51), &var_a8, &var_98)
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    if (*arg3 != 0)
        void* rdx_22 = arg3[2]
        void* rcx_54 = &arg3[4]
        
        if (rdx_22 != 0)
            rcx_54 = rdx_22
        
        int64_t rdx_23 = *rcx_54
        (*(rdx_23 + 0x10))(rcx_54, rdx_23)
else
    void* rax_1 = sub_140d2bce0(&var_50)
    void* rax_2
    int64_t rax_3
    void* rdx
    
    if (rax_1 != 0)
        rax_2 = sub_1425af170()
        rdx = *(rax_1 + 0x10)
        rax_3 = sx.q(*(rax_2 + 0x38))
    
    bool cond:1_1
    void** var_68
    
    if (rax_1 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
        if (data_14399fa10() == 0)
            void* rax_38 = sub_140d30a00(&var_50, 0)
            void* const rbx_6 = rax_38
            void* rax_39
            int64_t rax_40
            void* rdx_19
            
            if (rax_38 != 0)
                rax_39 = sub_1425af170()
                rdx_19 = *(rbx_6 + 0x10)
                rax_40 = sx.q(*(rax_39 + 0x38))
            
            if (rax_38 == 0 || rax_40.d s> *(rdx_19 + 0x38)
                    || *(*(rdx_19 + 0x30) + (rax_40 << 3)) != rax_39 + 0x30)
                rbx_6 = nullptr
            
            if (*arg3 != 0)
                int64_t r8_8
                
                if (rbx_6 == 0)
                    var_a8 = nullptr
                    r8_8 = 0
                else
                    r8_8 = *(rbx_6 + 0x38)
                
                sub_14207a590(arg3, arg2, r8_8)
        else
            void** var_78 = nullptr
            int32_t var_70_1 = 0
            int16_t* var_88 = nullptr
            int32_t var_80_1 = 0
            sub_1405947f0(&var_88, 2)
            int32_t rbx_2 = var_80_1 + 2
            
            if (rbx_2 s> 0)
                sub_140594770(&var_88)
            
            int16_t* r15_1 = var_88
            UnDecorator::getReferenceType(r15_1, &data_142d404c4, 4)
            int16_t* var_60
            int32_t var_58
            
            if (var_50 != 0)
                sub_140b63b70(&var_50, &var_60)
            else
                var_60 = nullptr
                var_58 = 0
            
            int16_t* const r12_1 = &data_142d40450
            int16_t* rdx_4 = &data_142d40450
            
            if (rbx_2 != 0)
                rdx_4 = r15_1
            
            int32_t rax_9 = sub_140a23cf0(&var_60, rdx_4, 0, 0, 0xffffffff)
            int16_t* var_a0
            
            if (rax_9 s>= 0)
                int16_t* rax_10
                int32_t rbx_4
                
                if (var_58 == 0)
                    rax_10 = &data_142d40450
                    rbx_4 = 0
                else
                    rax_10 = var_60
                    rbx_4 = var_58 - 1
                
                var_a0 = rax_10
                void** r12_2 = nullptr
                var_98 = nullptr
                
                if (rax_9 s< rbx_4)
                    rbx_4 = rax_9
                
                int64_t var_90_1 = 0
                int32_t r15_2 = 0
                int32_t r13_1 = 0
                
                if (rax_10 != 0 && *rax_10 != 0 && rbx_4 s> 0)
                    if (rbx_4 + 1 s> 0)
                        sub_1405947f0(&var_98, rbx_4 + 1)
                        r13_1 = var_90_1:4.d
                        r15_2 = var_90_1.d
                        r12_2 = var_98
                    
                    r15_2 += rbx_4 + 1
                    var_90_1.d = r15_2
                    
                    if (r15_2 s> r13_1)
                        sub_140594770(&var_98)
                        r13_1 = var_90_1:4.d
                        r15_2 = var_90_1.d
                        r12_2 = var_98
                    
                    UnDecorator::getReferenceType(r12_2, var_a0, rbx_4 * 2)
                    *(r12_2 + (sx.q(r15_2) << 1) - 2) = 0
                
                void** rcx_15 = var_78
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                var_78 = r12_2
                r12_1 = &data_142d40450
                var_70_1 = r15_2
                r15_1 = var_88
                var_70_1 = r13_1
                r13 = var_a8
            
            int16_t* rcx_16 = var_60
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
            
            if (var_70_1 != 0)
                r12_1 = var_78
            
            sub_140b58260(&var_68, r12_1, 1)
            EnterCriticalSection(&r13[0xd])
            sub_14093f560(&r13[3], &var_a0, var_68)
            int64_t rax_12 = sx.q(var_a0.d)
            
            if (rax_12.d != 0xffffffff)
                int64_t rax_14 = rax_12 * 0x30
                
                if (rax_14 != neg.q(r13[3]))
                    int32_t* r12_3 = rax_14 + r13[3] + 8
                    
                    if (r12_3 != 0)
                        if (*arg3 != 0)
                            int64_t r15_4 = sx.q(r12_3[6])
                            int32_t rax_16 = (r15_4 + 1).d
                            r12_3[6] = rax_16
                            
                            if (rax_16 s> r12_3[7])
                                sub_1405c4fe0(&r12_3[4])
                            
                            int64_t* rcx_24 = (r15_4 << 6) + *(r12_3 + 0x10)
                            *rcx_24 = *arg3
                            rcx_24[2] = 0
                            
                            if (*rcx_24 != 0)
                                void* rax_18 = arg3[2]
                                void* rcx_25 = &arg3[4]
                                
                                if (rax_18 != 0)
                                    rcx_25 = rax_18
                                
                                (**rcx_25)(rcx_25)
                        
                        int32_t rdi_1 = *r12_3
                        
                        if (r13 != -0x68)
                            LeaveCriticalSection(&r13[0xd])
                        
                        void** rcx_27 = var_78
                        
                        if (rcx_27 != 0)
                            sub_140a74f90(rcx_27)
                        
                        if (var_48 != 0)
                            sub_140a74f90(var_48)
                        
                        if (*arg3 != 0)
                            void* rax_20 = arg3[2]
                            void* rcx_29 = &arg3[4]
                            
                            if (rax_20 != 0)
                                rcx_29 = rax_20
                            
                            (*(*rcx_29 + 0x10))(rcx_29)
                        
                        return zx.q(rdi_1)
            
            var_98 = &var_68
            sub_1420740a0(&r13[3], &var_a0, &var_98, nullptr)
            void* r15_7 = sx.q(var_a0.d) * 0x30 + r13[3]
            *(r15_7 + 0xc) = arg2
            
            if (*arg3 != 0)
                int64_t r12_4 = sx.q(*(r15_7 + 0x20))
                int32_t rax_23 = (r12_4 + 1).d
                *(r15_7 + 0x20) = rax_23
                
                if (rax_23 s> *(r15_7 + 0x24))
                    sub_1405c4fe0(r15_7 + 0x18)
                
                int64_t* rcx_34 = (r12_4 << 6) + *(r15_7 + 0x18)
                *rcx_34 = *arg3
                rcx_34[2] = 0
                
                if (*rcx_34 != 0)
                    void* rax_25 = arg3[2]
                    void* rcx_35 = &arg3[4]
                    
                    if (rax_25 != 0)
                        rcx_35 = rax_25
                    
                    (**rcx_35)(rcx_35)
            
            if (r13 != -0x68)
                LeaveCriticalSection(&r13[0xd])
            
            var_80_1 = 0
            var_88 = sub_1420962c0
            var_60 = nullptr
            var_58 = 0
            void*** rax_27 = sub_1405978f0(0x30, &var_60)
            
            if (rax_27 != 0)
                int128_t zmm0_1 = var_88.o
                *rax_27 = &data_1432bc140
                rax_27[1] = var_a8
                *(rax_27 + 0x10) = zmm0_1
                rax_27[5] = sub_140a387b0()
                *rax_27 = &data_1432bc198
            
            int32_t rax_30 = sub_140bcb5c0(&var_78, &var_60, 0, 0, 0xffffffff)
            
            if (rax_30 != 0xffffffff)
                EnterCriticalSection(&r13[0xd])
                sub_14093f560(&r13[3], &var_a0, var_68)
                int64_t rax_31 = sx.q(var_a0.d)
                
                if (rax_31.d != 0xffffffff)
                    int64_t rax_33 = rax_31 * 0x30
                    void* rax_34 = rax_33 + r13[3]
                    
                    if (rax_33 != neg.q(r13[3]) && rax_34 != -8)
                        *(rax_34 + 8) = rax_30
                
                if (r13 != -0x68)
                    LeaveCriticalSection(&r13[0xd])
                
                void** rcx_41 = var_78
                
                if (rcx_41 != 0)
                    sub_140a74f90(rcx_41)
                
                if (var_48 != 0)
                    sub_140a74f90(var_48)
                
                if (*arg3 != 0)
                    void* rax_36 = arg3[2]
                    void* rcx_43 = &arg3[4]
                    
                    if (rax_36 != 0)
                        rcx_43 = rax_36
                    
                    (*(*rcx_43 + 0x10))(rcx_43)
                
                return zx.q(rax_30)
            
            if (*arg3 != 0)
                var_a8 = nullptr
                sub_14207a590(arg3, arg2, 0)
            
            void** rcx_45 = var_78
            
            if (rcx_45 != 0)
                sub_140a74f90(rcx_45)
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        cond:1_1 = *arg3 == 0
    else
        if (*arg3 != 0)
            void* rcx_3 = arg3[2]
            var_a8 = *(rax_1 + 0x38)
            var_68 = arg2
            
            if (rcx_3 == 0)
                rcx_3 = &arg3[4]
            
            (*arg3)((*(*rcx_3 + 8))(rcx_3), &var_68, &var_a8)
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        cond:1_1 = *arg3 == 0
    
    if (not(cond:1_1))
        void* rax_42 = arg3[2]
        void* rcx_50 = &arg3[4]
        
        if (rax_42 != 0)
            rcx_50 = rax_42
        
        (*(*rcx_50 + 0x10))(rcx_50)
return 0xffffffff
