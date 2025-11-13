// 函数: sub_14202c580
// 地址: 0x14202c580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t r15 = arg2
int32_t var_c8 = 0
int32_t r14 = 0
int64_t rax_2
int32_t zmm6_1
rax_2, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)

if (rax_2 != 0)
    int32_t rax_3 = arg3[1].d
    int64_t var_b8 = *arg3
    int32_t var_ac_1 = zmm6_1
    int32_t var_b0_1 = rax_3
    void* rax_4 = sub_141a23150()
    void* rbx_1 = rax_4
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        void* rax_5 = sub_141a23150()
        
        if (rax_5 == 0)
            rbx_1 = nullptr
        else
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                rbx_1 = nullptr
    
    int32_t var_a8 = 5
    char var_50_1 = 0
    void* var_a0
    sub_1405ab0f0(&var_a0, rax_2, rbx_1)
    char var_50_2 = 1
    sub_1405b0c60(&var_a8)
    void** var_98
    char var_84
    int64_t var_70
    
    if (var_84 == 0)
        void* var_78
        void* rdi_1 = var_78
        
        while (true)
            if (rdi_1 != 0)
                int64_t* rbx_2 = *(rdi_1 + 0x310)
                int64_t rdi_2 = 0
                uint64_t rsi_2 = sx.q(*(rdi_1 + 0x318)) << 3 u>> 3
                
                if (rbx_2 u> &rbx_2[sx.q(*(rdi_1 + 0x318))])
                    rsi_2 = 0
                
                if (rsi_2 != 0)
                    do
                        void* rcx_4 = *rbx_2
                        
                        if (rcx_4 != 0 && *(rcx_4 + 0x440) == r15)
                            r14 += sub_14205e740(rcx_4, &var_b8)
                        
                        rbx_2 = &rbx_2[1]
                        rdi_2 += 1
                    while (rdi_2 != rsi_2)
                    
                    var_c8 = r14
            
            int32_t var_68
            int32_t r8_1 = var_68
            int32_t var_90
            int32_t rdx_4 = var_90
            void* r13_1 = var_a0
            int32_t var_88
            int32_t r14_2 = var_88 + 1
            
            if (r14_2 s>= r8_1 + rdx_4)
            label_14202c897:
                r14 = var_c8
                int64_t var_78_2 = 0
                char var_84_1 = 1
                break
            
            int64_t r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_4)
                    rdi_1 = *(var_70 + (sx.q(r14_2 - rdx_4) << 3))
                else
                    rdi_1 = *(var_98 + r12_1)
                
                int32_t var_80 = var_80 + 1
                
                if (rdi_1 != 0)
                    void* rax_17 = sub_141dc9840(rdi_1)
                    
                    if (rax_17 != 0)
                        void* const rax_24
                        
                        if ((var_a8.b & 1) != 0)
                            int32_t rax_18 = *(rdi_1 + 0xc)
                            
                            if (rax_18 s>= data_143e1d9b4)
                                rax_24 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_18)
                                uint32_t rdx_6 = zx.d(temp0_1)
                                int32_t rax_20 = temp1_1 + rdx_6
                                rax_24 = *(data_143e1d9a0 + (sx.q(rax_20 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_20.w) - rdx_6) * 0x18
                        
                        if ((var_a8.b & 1) == 0 || ((*(rax_24 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_12 = var_a8
                            
                            if (((rcx_12 u>> 1).b & 1) == 0)
                                goto label_14202c7ad
                            
                            uint64_t rax_28 = sub_1405949a0()
                            
                            if (rax_28.b != 0)
                                rcx_12 = var_a8
                            label_14202c7ad:
                                
                                if (((rcx_12 u>> 2).b & 1) == 0)
                                label_14202c829:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_17) == r13_1)
                                        if (rax_17 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_30 = sub_1425bd0d0()
                                        void* rdx_8 = *(rdi_1 + 0x10)
                                        int64_t rax_31 = sx.q(*(rax_30 + 0x38))
                                        
                                        if (rax_31.d s> *(rdx_8 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_8 + 0x30) + (rax_31 << 3)) != rax_30 + 0x30)
                                            break
                                else
                                    if ((*(rax_17 + 0x1f4) & 0x20) == 0
                                            || (*(rax_17 + 0x1f6) & 8) != 0)
                                        rax_28 = zx.q(*(rax_17 + 0x1f5))
                                    
                                    if (((*(rax_17 + 0x1f4) & 0x20) != 0
                                            && (*(rax_17 + 0x1f6) & 8) == 0) || (rax_28.b & 0x40) != 0
                                            || rax_28.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_14 = *(rax_17 + 0xb8)
                                    char* rsi_3 = *(rax_17 + 0x248)
                                    
                                    if (rcx_14 != 0)
                                        rax_28 = sub_1424359b0(rcx_14)
                                    
                                    if (rcx_14 == 0 || rax_28 == 0 || rsi_3 == rax_28)
                                        rcx_14.b = 1
                                    else
                                        rcx_14.b = 0
                                    
                                    if (rsi_3 == 0 || *rsi_3 == 2)
                                        rax_28.b = 1
                                    else
                                        rax_28.b = 0
                                    
                                    if (rcx_14.b != 0 || rax_28.b != 0)
                                        rax_28.b = 1
                                    
                                    if (r15.b != 0 && rax_28.b != 0)
                                        goto label_14202c829
                    
                    r8_1 = var_68
                    rdx_4 = var_90
                
                r14_2 += 1
                r12_1 += 8
                
                if (r14_2 s>= r8_1 + rdx_4)
                    goto label_14202c897
            
            var_88 = r14_2
            r14 = var_c8
            void* var_78_1 = rdi_1
            
            if (var_84 != 0)
                break
            
            r15 = arg2
    
    if (var_50_2 != 0)
        char var_50_3 = 0
        int64_t var_58
        sub_142441560(var_a0, var_58)
        
        if (var_70 != 0)
            sub_140a74f90(var_70)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(r14)
