// 函数: sub_1419e20a0
// 地址: 0x1419e20a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* var_d0 = arg2
void* const rsi = arg2
int32_t var_d8 = 0
int32_t r13 = 0
int64_t rax_2
int32_t zmm6_1
rax_2, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)

if (rax_2 != 0)
    void* rax_3
    int64_t rax_4
    void* rdx_1
    
    if (rsi != 0)
        rax_3 = sub_140d41340()
        rdx_1 = *(rsi + 0x10)
        rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rsi == 0 || rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        rsi = nullptr
        var_d0 = nullptr
    
    int32_t rax_6 = arg3[1].d
    int64_t var_b8 = *arg3
    int32_t var_ac_1 = zmm6_1
    int32_t var_b0_1 = rax_6
    char var_a8
    sub_1419de390(&var_a8, rax_2, sub_1419e88d0(), 5)
    void* var_a0
    int64_t var_98
    char var_84
    int64_t var_70
    
    if (var_84 == 0)
        void* var_78
        void* rdi_1 = var_78
        int64_t* r15
        int64_t* arg_18 = r15
        
        while (true)
            int32_t rax_8 = *(rdi_1 + 0xc)
            void* const rax_14
            
            if (rax_8 s>= data_143e1d9b4)
                rax_14 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_8)
                uint32_t rdx_4 = zx.d(temp0_1)
                int32_t rax_10 = temp1_1 + rdx_4
                rax_14 = *(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_10.w) - rdx_4) * 0x18
            
            if (((*(rax_14 + 8) u>> 0x1d).b & 1) == 0)
                int64_t* var_c8 = nullptr
                int32_t var_c0_1 = 0
                sub_1419e24e0(rdi_1, rsi, &var_c8)
                r15 = var_c8
                int64_t rbx_1 = 0
                int64_t* rsi_1 = r15
                void* rcx_8 = &r15[sx.q(var_c0_1)]
                uint64_t r14_4 = (rcx_8 - r15 + 7) u>> 3
                
                if (r15 u> rcx_8)
                    r14_4 = 0
                
                if (r14_4 != 0)
                    do
                        int32_t var_d4
                        sub_140865c40(rdi_1 + 0x220, &var_d4, *rsi_1)
                        int64_t rax_18 = sx.q(var_d4)
                        int32_t rax_23
                        
                        if (rax_18.d == 0xffffffff)
                            rax_23 = 0
                        else
                            void* rax_20 = *(rdi_1 + 0x220) + rax_18 * 0x18
                            
                            if (rax_20 == 0 || rax_20 == -8)
                                rax_23 = 0
                            else
                                void* rcx_10 = *(rax_20 + 8)
                                
                                if (rcx_10 == 0)
                                    rax_23 = 0
                                else
                                    int64_t* rcx_11 = *(rcx_10 + 8)
                                    
                                    if (rcx_11 == 0)
                                        rax_23 = 0
                                    else
                                        rax_23 = (*(*rcx_11 + 0x18))(rcx_11, &var_b8)
                        
                        r13 += rax_23
                        rsi_1 = &rsi_1[1]
                        rbx_1 += 1
                    while (rbx_1 != r14_4)
                    
                    var_d8 = r13
                
                if (r15 != 0)
                    sub_140a74f90(r15)
            
            int32_t var_68
            int32_t r8_5 = var_68
            int32_t var_90
            int32_t rdx_10 = var_90
            int32_t var_88
            int32_t r14_6 = var_88 + 1
            
            if (r14_6 s>= r8_5 + rdx_10)
            label_1419e2435:
                r13 = var_d8
                int64_t var_78_1 = 0
                char var_84_1 = 1
                break
            
            void** r12_1 = sx.q(r14_6) << 3
            
            while (true)
                if (r14_6 s>= rdx_10)
                    rdi_1 = *(var_70 + (sx.q(r14_6 - rdx_10) << 3))
                else
                    rdi_1 = *(r12_1 + var_98)
                
                int32_t var_80 = var_80 + 1
                
                if (rdi_1 != 0)
                    void* rax_30 = sub_141dc9840(rdi_1)
                    
                    if (rax_30 != 0)
                        void* const rax_37
                        
                        if ((var_a8 & 1) != 0)
                            int32_t rax_31 = *(rdi_1 + 0xc)
                            
                            if (rax_31 s>= data_143e1d9b4)
                                rax_37 = nullptr
                            else
                                int16_t temp3_1
                                int32_t temp4_1
                                temp3_1:temp4_1 = sx.q(rax_31)
                                uint32_t rdx_12 = zx.d(temp3_1)
                                int32_t rax_33 = temp4_1 + rdx_12
                                rax_37 = *(data_143e1d9a0 + (sx.q(rax_33 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_33.w) - rdx_12) * 0x18
                        
                        if ((var_a8 & 1) == 0 || ((*(rax_37 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_20 = var_a8.d
                            
                            if (((rcx_20 u>> 1).b & 1) == 0)
                                goto label_1419e235c
                            
                            uint64_t rax_41 = sub_1405949a0()
                            
                            if (rax_41.b != 0)
                                rcx_20 = var_a8.d
                            label_1419e235c:
                                
                                if (((rcx_20 u>> 2).b & 1) == 0)
                                label_1419e23d8:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_30) == var_a0)
                                        if (rax_30 == *(var_a0 + 0x30))
                                            break
                                        
                                        void* rax_43 = sub_1425bd0d0()
                                        void* rdx_14 = *(rdi_1 + 0x10)
                                        int64_t rax_44 = sx.q(*(rax_43 + 0x38))
                                        
                                        if (rax_44.d s> *(rdx_14 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_14 + 0x30) + (rax_44 << 3)) != rax_43 + 0x30)
                                            break
                                else
                                    if ((*(rax_30 + 0x1f4) & 0x20) == 0
                                            || (*(rax_30 + 0x1f6) & 8) != 0)
                                        rax_41 = zx.q(*(rax_30 + 0x1f5))
                                    
                                    if (((*(rax_30 + 0x1f4) & 0x20) != 0
                                            && (*(rax_30 + 0x1f6) & 8) == 0) || (rax_41.b & 0x40) != 0
                                            || rax_41.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_22 = *(rax_30 + 0xb8)
                                    char* rsi_2 = *(rax_30 + 0x248)
                                    
                                    if (rcx_22 != 0)
                                        rax_41 = sub_1424359b0(rcx_22)
                                    
                                    if (rcx_22 == 0 || rax_41 == 0 || rsi_2 == rax_41)
                                        rcx_22.b = 1
                                    else
                                        rcx_22.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_41.b = 1
                                    else
                                        rax_41.b = 0
                                    
                                    if (rcx_22.b != 0 || rax_41.b != 0)
                                        rax_41.b = 1
                                    
                                    if (r15.b != 0 && rax_41.b != 0)
                                        goto label_1419e23d8
                    
                    r8_5 = var_68
                    rdx_10 = var_90
                
                r14_6 += 1
                r12_1 = &r12_1[1]
                
                if (r14_6 s>= r8_5 + rdx_10)
                    goto label_1419e2435
            
            r13 = var_d8
            void* var_78_2 = rdi_1
            var_88 = r14_6
            
            if (var_84 != 0)
                break
            
            rsi = var_d0
    
    char var_50
    
    if (var_50 != 0)
        char var_50_1 = 0
        int64_t var_58
        sub_142441560(var_a0, var_58)
        
        if (var_70 != 0)
            sub_140a74f90(var_70)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)

__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(r13)
