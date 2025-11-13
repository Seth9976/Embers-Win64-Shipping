// 函数: sub_1405bb370
// 地址: 0x1405bb370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rdi = arg1
void* const result

if (arg1[0x50].d == 1)
label_1405bb3c6:
    void* result_7 = sub_140d3c6e0(rdi + 0x284)
    void* const result_1 = result_7
    
    if (result_7 != 0)
    label_1405bb438:
        void* rax_10 = sub_142486290()
        void* rdx_2 = *(result_1 + 0x10)
        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
        
        if (rax_11.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
            result_1 = nullptr
    else if ((*(rdi + 0x29c) | rdi[0x53].d | *(rdi + 0x294) | rdi[0x52].d) == 0)
        result_1 = nullptr
    else
        int32_t rax_7 = 0
        
        if (0 == data_1439a9d84)
            data_1439a9d84 = 0
        else
            rax_7 = data_1439a9d84
        
        if (rax_7 != *(rdi + 0x28c) || *(rdi + 0x284) != 0xffffffff)
            void* rax_8 = sub_140ccdeb0(&rdi[0x52])
            sub_140d3a3a0(rdi + 0x284, rax_8)
            
            if (rax_8 != 0 || data_143e1d7b4 == 0)
                int32_t rax_9 = 0
                
                if (0 == data_1439a9d84)
                    data_1439a9d84 = 0
                else
                    rax_9 = data_1439a9d84
                
                *(rdi + 0x28c) = rax_9
            
            void* result_8 = sub_140d3c6e0(rdi + 0x284)
            result_1 = result_8
            
            if (result_8 != 0)
                goto label_1405bb438
            
            result_1 = nullptr
        else
            result_1 = nullptr
    
    result = result_1
else
    while (true)
        int64_t* rax_2 = rdi[0x62]
        
        if (rax_2 == 0)
            void* r13_1 = rdi + 0x284
            int64_t r15
            int64_t var_28_1 = r15
            void* result_2
            
            if (sub_140d3c6e0(r13_1) == 0)
                if ((*(r13_1 + 0x18) | *(r13_1 + 0x14) | *(r13_1 + 0x10) | *(r13_1 + 0xc)) == 0)
                label_1405bb511:
                    void* rax_22 = sub_141c281a0()
                    void* rbx_3 = rax_22
                    void* var_100_1 = rax_22
                    int64_t rax_24 = (*(*rdi + 0x150))(rdi)
                    
                    if (rbx_3 == 0)
                        rbx_3 = nullptr
                    else
                        void* rax_25 = sub_141c281a0()
                        
                        if (rax_25 == 0)
                            rbx_3 = nullptr
                        else
                            int64_t rcx_10 = sx.q(*(rax_25 + 0x38))
                            
                            if (rcx_10.d s> *(rbx_3 + 0x38)
                                    || *(*(rbx_3 + 0x30) + (rcx_10 << 3)) != rax_25 + 0x30)
                                rbx_3 = nullptr
                    
                    int32_t var_90 = 5
                    char var_38_1 = 0
                    void* var_88
                    sub_1405ab0f0(&var_88, rax_24, rbx_3)
                    char var_38_2 = 1
                    sub_1405b0c60(&var_90)
                    int64_t var_80
                    char i
                    int64_t var_58
                    int64_t var_40
                    
                    while (i == 0)
                        void* result_6
                        result_2 = result_6
                        int32_t rax_27 = *(result_2 + 0xc)
                        void* const rax_33
                        
                        if (rax_27 s>= data_143e1d9b4)
                            rax_33 = nullptr
                        else
                            int16_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rax_27)
                            uint32_t rdx_7 = zx.d(temp0_1)
                            int32_t rax_29 = temp1_1 + rdx_7
                            rax_33 = *(data_143e1d9a0 + (sx.q(rax_29 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_29.w) - rdx_7) * 0x18
                        
                        if (((*(rax_33 + 8) u>> 0x1d).b & 1) == 0)
                            if (var_38_2 != 0)
                                char var_38_4 = 0
                                sub_142441560(var_88, var_40)
                                
                                if (var_58 != 0)
                                    sub_140a74f90(var_58)
                                
                                if (var_80 != 0)
                                    sub_140a74f90(var_80)
                            
                            goto label_1405bb70c
                        
                        sub_1405b0c60(&var_90)
                    
                    if (var_38_2 != 0)
                        char var_38_3 = 0
                        sub_142441560(var_88, var_40)
                        
                        if (var_58 != 0)
                            sub_140a74f90(var_58)
                        
                        if (var_80 != 0)
                            sub_140a74f90(var_80)
                    
                    void* rax_36 = sub_142486290()
                    void* rbx_4 = rax_36
                    void* var_f8_1 = rax_36
                    int64_t rax_38 = (*(*rdi + 0x150))(rdi)
                    
                    if (rbx_4 == 0)
                        rbx_4 = nullptr
                    else
                        void* rax_39 = sub_142486290()
                        
                        if (rax_39 == 0)
                            rbx_4 = nullptr
                        else
                            int64_t rcx_22 = sx.q(*(rax_39 + 0x38))
                            
                            if (rcx_22.d s> *(rbx_4 + 0x38)
                                    || *(*(rbx_4 + 0x30) + (rcx_22 << 3)) != rax_39 + 0x30)
                                rbx_4 = nullptr
                    
                    int32_t var_f0 = 5
                    char var_98_1 = 0
                    void* var_e8
                    sub_1405ab0f0(&var_e8, rax_38, rbx_4)
                    char var_98_2 = 1
                    sub_1405b0c60(&var_f0)
                    void** var_e0
                    char i_1
                    int64_t var_b8
                    int64_t var_a0
                    
                    if (i_1 == 0)
                        void* result_4
                        void* result_3 = result_4
                        int32_t var_d0
                        int32_t rsi_2 = var_d0
                        
                        do
                            int32_t rax_41 = *(result_3 + 0xc)
                            void* const rax_47
                            
                            if (rax_41 s>= data_143e1d9b4)
                                rax_47 = nullptr
                            else
                                int16_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(rax_41)
                                uint32_t rdx_13 = zx.d(temp2_1)
                                int32_t rax_43 = temp3_1 + rdx_13
                                rax_47 = *(data_143e1d9a0 + (sx.q(rax_43 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_43.w) - rdx_13) * 0x18
                            
                            if (((*(rax_47 + 8) u>> 0x1d).b & 1) == 0)
                                if (var_98_2 != 0)
                                    char var_98_4 = 0
                                    sub_142441560(var_e8, var_a0)
                                    
                                    if (var_b8 != 0)
                                        sub_140a74f90(var_b8)
                                    
                                    if (var_e0 != 0)
                                        sub_140a74f90(var_e0)
                                
                                result = result_3
                                goto label_1405bb736
                            
                            int32_t var_b0
                            int32_t r8_6 = var_b0
                            rsi_2 += 1
                            int32_t var_d8
                            int32_t rdx_16 = var_d8
                            void* r13_2 = var_e8
                            
                            if (rsi_2 s>= r8_6 + rdx_16)
                            label_1405bb90d:
                                int64_t var_c0 = 0
                                char var_cc = 1
                                break
                            
                            int64_t r12_1 = sx.q(rsi_2) << 3
                            
                            while (true)
                                if (rsi_2 s>= rdx_16)
                                    result_3 = *(var_b8 + (sx.q(rsi_2 - rdx_16) << 3))
                                else
                                    result_3 = *(var_e0 + r12_1)
                                
                                int32_t var_c8 = var_c8 + 1
                                
                                if (result_3 != 0)
                                    void* rax_56 = sub_141dc9840(result_3)
                                    
                                    if (rax_56 != 0)
                                        void* const rax_63
                                        
                                        if ((var_f0.b & 1) != 0)
                                            int32_t rax_57 = *(result_3 + 0xc)
                                            
                                            if (rax_57 s>= data_143e1d9b4)
                                                rax_63 = nullptr
                                            else
                                                int16_t temp4_1
                                                int32_t temp5_1
                                                temp4_1:temp5_1 = sx.q(rax_57)
                                                uint32_t rdx_18 = zx.d(temp4_1)
                                                int32_t rax_59 = temp5_1 + rdx_18
                                                rax_63 =
                                                    *(data_143e1d9a0 + (sx.q(rax_59 s>> 0x10) << 3))
                                                    + sx.q(zx.d(rax_59.w) - rdx_18) * 0x18
                                        
                                        if ((var_f0.b & 1) == 0
                                                || ((*(rax_63 + 8) u>> 0x1d).b & 1) == 0)
                                            int32_t rcx_41 = var_f0
                                            
                                            if (((rcx_41 u>> 1).b & 1) == 0)
                                                goto label_1405bb830
                                            
                                            uint64_t rax_67 = sub_1405949a0()
                                            
                                            if (rax_67.b != 0)
                                                rcx_41 = var_f0
                                            label_1405bb830:
                                                
                                                if (((rcx_41 u>> 2).b & 1) == 0)
                                                label_1405bb8b0:
                                                    
                                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                            rax_56) == r13_2)
                                                        if (rax_56 == *(r13_2 + 0x30))
                                                            break
                                                        
                                                        void* rax_69 = sub_1425bd0d0()
                                                        void* rdx_20 = *(result_3 + 0x10)
                                                        int64_t rax_70 = sx.q(*(rax_69 + 0x38))
                                                        
                                                        if (rax_70.d s> *(rdx_20 + 0x38))
                                                            break
                                                        
                                                        if (*(*(rdx_20 + 0x30) + (rax_70 << 3))
                                                                != rax_69 + 0x30)
                                                            break
                                                else
                                                    if ((*(rax_56 + 0x1f4) & 0x20) == 0
                                                            || (*(rax_56 + 0x1f6) & 8) != 0)
                                                        rax_67 = zx.q(*(rax_56 + 0x1f5))
                                                    
                                                    if (((*(rax_56 + 0x1f4) & 0x20) != 0
                                                            && (*(rax_56 + 0x1f6) & 8) == 0)
                                                            || (rax_67.b & 0x40) != 0
                                                            || rax_67.b s< 0)
                                                        r15.b = 1
                                                    else
                                                        r15.b = 0
                                                    
                                                    void* rcx_43 = *(rax_56 + 0xb8)
                                                    char* r14_1 = *(rax_56 + 0x248)
                                                    
                                                    if (rcx_43 != 0)
                                                        rax_67 = sub_1424359b0(rcx_43)
                                                    
                                                    if (rcx_43 == 0 || rax_67 == 0
                                                            || r14_1 == rax_67)
                                                        rcx_43.b = 1
                                                    else
                                                        rcx_43.b = 0
                                                    
                                                    if (r14_1 == 0 || *r14_1 == 2)
                                                        rax_67.b = 1
                                                    else
                                                        rax_67.b = 0
                                                    
                                                    if (rcx_43.b != 0 || rax_67.b != 0)
                                                        rax_67.b = 1
                                                    
                                                    if (r15.b != 0 && rax_67.b != 0)
                                                        goto label_1405bb8b0
                                    
                                    r8_6 = var_b0
                                    rdx_16 = var_d8
                                
                                rsi_2 += 1
                                r12_1 += 8
                                
                                if (rsi_2 s>= r8_6 + rdx_16)
                                    goto label_1405bb90d
                            
                            void* result_5 = result_3
                            int32_t var_d0_1 = rsi_2
                        while (i_1 == 0)
                    
                    if (var_98_2 != 0)
                        char var_98_3 = 0
                        sub_142441560(var_e8, var_a0)
                        
                        if (var_b8 != 0)
                            sub_140a74f90(var_b8)
                        
                        if (var_e0 != 0)
                            sub_140a74f90(var_e0)
                else
                    int32_t rax_18 = 0
                    
                    if (0 == data_1439a9d84)
                        data_1439a9d84 = 0
                    else
                        rax_18 = data_1439a9d84
                    
                    if (rax_18 == *(r13_1 + 8) && *r13_1 == 0xffffffff)
                        goto label_1405bb511
                    
                    void* rax_19 = sub_140ccdeb0(r13_1 + 0xc)
                    sub_140d3a3a0(r13_1, rax_19)
                    
                    if (rax_19 != 0 || data_143e1d7b4 == 0)
                        int32_t rax_20 = 0
                        
                        if (0 == data_1439a9d84)
                            data_1439a9d84 = 0
                        else
                            rax_20 = data_1439a9d84
                        
                        *(r13_1 + 8) = rax_20
                    
                    if (sub_140d3c6e0(r13_1) == 0)
                        goto label_1405bb511
            
            void* result_9 = sub_140d3c6e0(r13_1)
            result_2 = result_9
            
            if (result_9 != 0)
            label_1405bb9cb:
                void* rax_80 = sub_142486290()
                void* rdx_23 = *(result_2 + 0x10)
                int64_t rax_81 = sx.q(*(rax_80 + 0x38))
                
                if (rax_81.d s> *(rdx_23 + 0x38)
                        || *(*(rdx_23 + 0x30) + (rax_81 << 3)) != rax_80 + 0x30)
                    result_2 = nullptr
            else if ((*(r13_1 + 0x18) | *(r13_1 + 0x14) | *(r13_1 + 0x10) | *(r13_1 + 0xc)) == 0)
                result_2 = nullptr
            else
                int32_t rax_77 = 0
                
                if (0 == data_1439a9d84)
                    data_1439a9d84 = 0
                else
                    rax_77 = data_1439a9d84
                
                if (rax_77 != *(r13_1 + 8) || *r13_1 != 0xffffffff)
                    void* rax_78 = sub_140ccdeb0(r13_1 + 0xc)
                    sub_140d3a3a0(r13_1, rax_78)
                    
                    if (rax_78 != 0 || data_143e1d7b4 == rax_78.b)
                        int32_t rax_79 = 0
                        
                        if (0 == data_1439a9d84)
                            data_1439a9d84 = 0
                        else
                            rax_79 = data_1439a9d84
                        
                        *(r13_1 + 8) = rax_79
                    
                    void* result_10 = sub_140d3c6e0(r13_1)
                    result_2 = result_10
                    
                    if (result_10 != 0)
                        goto label_1405bb9cb
                    
                    result_2 = nullptr
                else
                    result_2 = nullptr
            
        label_1405bb70c:
            result = result_2
            break
        
        rdi = rax_2
        
        if (rax_2[0x50].d == 1)
            goto label_1405bb3c6

label_1405bb736:
__security_check_cookie(rax_1 ^ &var_128)
return result
