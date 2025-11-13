// 函数: sub_141d72bf0
// 地址: 0x141d72bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"EmulateStereo") != 0)
    *(arg1 + 0xc) = 1

void* result = nullptr
int16_t* var_c8 = nullptr
int32_t var_c0 = 0
sub_140af2b60()
sub_140b2acc0(&data_143dbb3f0, u"-MovieSceneCaptureType=", &var_c8, 1)
int16_t* var_78 = nullptr
int32_t var_70 = 0
sub_140af2b60()

if ((sub_140b2acc0(&data_143dbb3f0, -MovieSceneCaptureManifest=", &var_78, 1) != 0 && var_70 s> 1)
        || var_c0 s> 1)
    void* r14_1 = nullptr
    int64_t var_b8
    int64_t* var_a0
    void* arg_10
    int64_t arg_18
    
    if (var_70 s> 1)
        uint64_t var_88 = 0
        int16_t* const rsi_1 = &data_142d40450
        int64_t var_80_1 = 0
        int16_t* const rdx_1 = &data_142d40450
        
        if (var_70 != 0)
            rdx_1 = var_78
        
        if (sub_140b1f370(&var_88, rdx_1, 0, 0) == 0)
        label_141d730b9:
            uint64_t rcx_43 = var_88
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
            
            goto label_141d73283
        
        int128_t var_68 = zx.o(0)
        void var_38
        sub_1406cbc00(&var_38, &var_88)
        int64_t* var_30
        
        if (sub_1409173d0(&var_38, &var_68, 0) == 0)
        label_141d7306a:
            
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    (**var_30)(var_30)
                    int32_t temp2_1 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_30 + 8))(var_30, 1)
            
            int64_t* rbx_9 = var_68:8.q
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    (**rbx_9)(rbx_9)
                    int32_t temp3_1 = *(rbx_9 + 0xc)
                    *(rbx_9 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_9 + 8))(rbx_9, 1)
            
            goto label_141d730b9
        
        int64_t* r15_1 = var_68.q
        
        if (r15_1 == 0)
            goto label_141d7306a
        
        int64_t var_d8 = 0
        int32_t var_d0_1 = 0
        sub_1405947f0(&var_d8, 5)
        int32_t rax_4 = var_d0_1 + 5
        var_d0_1 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_d8)
        
        int64_t rbx_1 = var_d8
        UnDecorator::getReferenceType(rbx_1, u"Type", 0xa)
        int64_t* var_48
        sub_140b75db0(r15_1, &var_48, &var_d8)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        int64_t* rcx_9 = var_48
        int64_t* var_40
        
        if (rcx_9 != 0)
            int64_t* rax_5 = sub_140b74df0(rcx_9, &var_a0)
            
            if (&var_c8 != rax_5)
                int16_t* rcx_10 = var_c8
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                var_c8 = *rax_5
                *rax_5 = 0
                var_c0 = rax_5[1].d
                var_c0 = *(rax_5 + 0xc)
                rax_5[1] = 0
            
            int64_t* rcx_12 = var_a0
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            int16_t* const rdx_7 = &data_142d40450
            
            if (var_c0 != 0)
                rdx_7 = var_c8
            
            int64_t* rax_8 = sub_1405968d0(nullptr, rdx_7, 0)
            int64_t* rbx_3 = rax_8
            
            if (rax_8 != 0)
            label_141d72e8a:
                arg_10 = nullptr
                void* rax_13 = sub_140596910(sub_140cde0b0(), rbx_3, 0, 0, 0, 0, 0)
                r14_1 = rax_13
                
                if (rax_13 != 0)
                    var_d8 = 0
                    int32_t var_d0_2 = 0
                    sub_1405947f0(&var_d8, 5)
                    int32_t rcx_19 = var_d0_2 + 5
                    var_d0_2 = rcx_19
                    
                    if (rcx_19 s> 0)
                        sub_140594770(&var_d8)
                    
                    int64_t rsi_2 = var_d8
                    UnDecorator::getReferenceType(rsi_2, u"Data", 0xa)
                    int64_t* var_58
                    sub_140b75db0(r15_1, &var_58, &var_d8)
                    
                    if (rsi_2 != 0)
                        sub_140a74f90(rsi_2)
                    
                    int64_t* rcx_24 = var_58
                    char rax_16
                    
                    if (rcx_24 != 0)
                        rax_16 = sub_141d48f80(*(**rcx_24)(rcx_24), rbx_3, r14_1, 0, 0)
                    
                    int64_t* var_50
                    
                    if (rcx_24 != 0 && rax_16 != 0)
                        var_d8 = 0
                        int32_t var_d0_3 = 0
                        sub_1405947f0(&var_d8, 0xf)
                        int32_t rax_17 = var_d0_3 + 0xf
                        var_d0_3 = rax_17
                        
                        if (rax_17 s> 0)
                            sub_140594770(&var_d8)
                        
                        int64_t rbx_4 = var_d8
                        UnDecorator::getReferenceType(rbx_4, u"AdditionalData", 0x1e)
                        sub_140b75db0(r15_1, &var_a0, &var_d8)
                        
                        if (rbx_4 != 0)
                            sub_140a74f90(rbx_4)
                        
                        int64_t* rcx_31 = var_a0
                        
                        if (rcx_31 != 0)
                            sub_141d77830(r14_1, *(**rcx_31)(rcx_31))
                        
                        int64_t* var_98
                        
                        if (var_98 != 0)
                            var_98[1].d -= 1
                            
                            if (var_98[1].d == 1)
                                (**var_98)(var_98)
                                int32_t temp14_1 = *(var_98 + 0xc)
                                *(var_98 + 0xc) -= 1
                                
                                if (temp14_1 == 1)
                                    (*(*var_98 + 8))(var_98, 1)
                        
                        if (var_50 != 0)
                            var_50[1].d -= 1
                            
                            if (var_50[1].d == 1)
                                (**var_50)(var_50)
                                int32_t temp16_1 = *(var_50 + 0xc)
                                *(var_50 + 0xc) -= 1
                                
                                if (temp16_1 == 1)
                                    (*(*var_50 + 8))(var_50, 1)
                        
                        if (var_40 != 0)
                            var_40[1].d -= 1
                            
                            if (var_40[1].d == 1)
                                (**var_40)(var_40)
                                int32_t temp17_1 = *(var_40 + 0xc)
                                *(var_40 + 0xc) -= 1
                                
                                if (temp17_1 == 1)
                                    (*(*var_40 + 8))(var_40, 1)
                        
                        goto label_141d7306a
                    
                    if (var_50 != 0)
                        var_50[1].d -= 1
                        
                        if (var_50[1].d == 1)
                            (**var_50)(var_50)
                            int32_t temp11_1 = *(var_50 + 0xc)
                            *(var_50 + 0xc) -= 1
                            
                            if (temp11_1 == 1)
                                (*(*var_50 + 8))(var_50, 1)
            else
                arg_18 = 0
                __builtin_memset(&var_b8, 0, 0x18)
                sub_140bd5930(&var_a0, &var_c8)
                
                if (sub_140be4f90((rbx_3 + 2).d, &var_a0, &var_b8, &arg_18) != 0)
                    int16_t** rax_10 = sub_140ca8e90(&var_b8, &var_a0)
                    
                    if (rax_10[1].d != 0)
                        rsi_1 = *rax_10
                    
                    int64_t* rax_11 = sub_1405968d0(nullptr, rsi_1, 0)
                    int64_t* rcx_16 = var_a0
                    rbx_3 = rax_11
                    
                    if (rcx_16 != 0)
                        sub_140a74f90(rcx_16)
                    
                    if (rbx_3 != 0)
                        goto label_141d72e8a
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp6_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp8_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
        
        int64_t* rbx_13 = var_68:8.q
        
        if (rbx_13 != 0)
            rbx_13[1].d -= 1
            
            if (rbx_13[1].d == 1)
                (**rbx_13)(rbx_13)
                int32_t temp9_1 = *(rbx_13 + 0xc)
                *(rbx_13 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rbx_13 + 8))(rbx_13, 1)
        
        uint64_t rcx_52 = var_88
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
    else if (var_c0 s<= 1)
    label_141d73283:
        result = r14_1 + 0x28
        *(arg1 + 8) = *(*(*(r14_1 + 0x28) + 0x28))(result, &arg_10)
        arg_10 = r14_1
        sub_1405a7050(&sub_141d7a3f0()[3], &arg_10)
        void*** rax_48 = sub_140a84c80(0, 0x20, 0)
        
        if (rax_48 != 0)
            *rax_48 = &data_1432318d0
            rax_48[2] = sub_140a387b0()
            *rax_48 = &data_143231928
        
        if (rax_48 != 0)
            sub_140599630(r14_1 + 0x1b8, 1)
            (*rax_48)[6](rax_48, &arg_10)
            int64_t r14_2 = sx.q(*(r14_1 + 0x1c0))
            int32_t rax_51 = (r14_2 + 1).d
            *(r14_1 + 0x1c0) = rax_51
            
            if (rax_51 s> *(r14_1 + 0x1c4))
                sub_1405a4f90(r14_1 + 0x1b8)
            
            void**** rax_54 = (r14_2 << 4) + *(r14_1 + 0x1b8)
            *rax_54 = rax_48
            rax_54[1].d = 2
    else
        int16_t* rsi_3 = &data_142d40450
        int16_t* rbx_14 = &data_142d40450
        
        if (var_c0 != 0)
            rbx_14 = var_c8
        
        int64_t* rax_39 = sub_140d2ee50(sub_140bdf2e0(), nullptr, rbx_14, 0)
        int64_t* rbx_15 = rax_39
        
        if (rax_39 != 0)
        label_141d7324a:
            arg_10 = nullptr
            void* rax_44 = sub_140596910(sub_140cde0b0(), rbx_15, 0, 0, 0, 0, 0)
            r14_1 = rax_44
            
            if (rax_44 != 0)
                goto label_141d73283
        else
            arg_18 = 0
            __builtin_memset(&var_b8, 0, 0x18)
            sub_140bd5930(&var_a0, &var_c8)
            
            if (sub_140be4f90((rbx_15 + 2).d, &var_a0, &var_b8, &arg_18) != 0)
                int64_t* rax_41 = sub_140ca8e90(&var_b8, &var_a0)
                
                if (rax_41[1].d != 0)
                    rsi_3 = *rax_41
                
                int64_t* rax_42 = sub_1405968d0(nullptr, rsi_3, 0)
                int64_t* rcx_57 = var_a0
                rbx_15 = rax_42
                
                if (rcx_57 != 0)
                    sub_140a74f90(rcx_57)
                
                if (rbx_15 != 0)
                    goto label_141d7324a

int16_t* rcx_65 = var_78

if (rcx_65 != 0)
    sub_140a74f90(rcx_65)

int16_t* rcx_66 = var_c8

if (rcx_66 != 0)
    sub_140a74f90(rcx_66)

return result
