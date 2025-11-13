// 函数: sub_14200b360
// 地址: 0x14200b360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* r15 = arg1
int64_t* rax_2 = sub_1423dd380(arg1)
int64_t rdx = *rax_2
(*(rdx + 0x2a0))(rax_2, rdx)
(*(*r15 + 0x470))(r15)
int32_t i = 0
int32_t i_1 = 0

if (r15[0x188].d s> 0)
    int64_t r13_1 = 0
    int64_t var_b0_1 = 0
    int64_t r14
    int64_t var_28_1 = r14
    
    do
        void* rdi_1 = *(*(r15[0x187] + r13_1) + 0x278)
        
        if (rdi_1 != 0)
            sub_14242e4f0(rdi_1)
            (*(*r15 + 0x488))(r15, rdi_1, 0)
            sub_1423f1a00(r15, rdi_1)
            void* rax_6 = sub_142452380()
            int32_t var_98 = 5
            char var_40_1 = 0
            void* var_90
            sub_1405ab0f0(&var_90, rdi_1, rax_6)
            char var_40_2 = 1
            sub_1405b0c60(&var_98)
            int64_t* var_88
            char j
            int64_t var_60
            uint64_t rdx_4
            
            if (j == 0)
                void* const var_68
                void* const rdi_2 = var_68
                
                do
                    sub_141dd6120(rdi_2, 4)
                    int32_t var_58
                    int32_t r8_2 = var_58
                    int32_t var_80
                    rdx_4 = zx.q(var_80)
                    void* r13_2 = var_90
                    int32_t var_78
                    int32_t r15_2 = var_78 + 1
                    
                    if (r15_2 s>= r8_2 + rdx_4.d)
                    label_14200b628:
                        var_68 = nullptr
                        j = 1
                        break
                    
                    int64_t r12_1 = sx.q(r15_2) << 3
                    
                    while (true)
                        if (r15_2 s>= rdx_4.d)
                            rdi_2 = *(var_60 + (sx.q(r15_2 - rdx_4.d) << 3))
                        else
                            rdi_2 = *(var_88 + r12_1)
                        
                        int32_t var_70 = var_70 + 1
                        
                        if (rdi_2 != 0)
                            void* rax_13
                            rax_13, rdx_4 = sub_141dc9840(rdi_2)
                            
                            if (rax_13 != 0)
                                void* const rax_20
                                
                                if ((var_98.b & 1) != 0)
                                    int32_t rax_14 = *(rdi_2 + 0xc)
                                    
                                    if (rax_14 s>= data_143e1d9b4)
                                        rax_20 = nullptr
                                    else
                                        int16_t temp0_1
                                        int32_t temp1_1
                                        temp0_1:temp1_1 = sx.q(rax_14)
                                        uint32_t rdx_6 = zx.d(temp0_1)
                                        int32_t rax_16 = temp1_1 + rdx_6
                                        rax_20 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                                            + sx.q(zx.d(rax_16.w) - rdx_6) * 0x18
                                
                                if ((var_98.b & 1) == 0 || ((*(rax_20 + 8) u>> 0x1d).b & 1) == 0)
                                    int32_t rcx_16 = var_98
                                    
                                    if (((rcx_16 u>> 1).b & 1) == 0)
                                        goto label_14200b552
                                    
                                    uint64_t rax_24 = sub_1405949a0()
                                    
                                    if (rax_24.b != 0)
                                        rcx_16 = var_98
                                    label_14200b552:
                                        
                                        if (((rcx_16 u>> 2).b & 1) == 0)
                                        label_14200b5ce:
                                            
                                            if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                    rax_13) == r13_2)
                                                if (rax_13 == *(r13_2 + 0x30))
                                                    break
                                                
                                                void* rax_26 = sub_1425bd0d0()
                                                rdx_4 = *(rdi_2 + 0x10)
                                                int64_t rax_27 = sx.q(*(rax_26 + 0x38))
                                                
                                                if (rax_27.d s> *(rdx_4 + 0x38))
                                                    break
                                                
                                                if (*(*(rdx_4 + 0x30) + (rax_27 << 3))
                                                        != rax_26 + 0x30)
                                                    break
                                        else
                                            if ((*(rax_13 + 0x1f4) & 0x20) == 0
                                                    || (*(rax_13 + 0x1f6) & 8) != 0)
                                                rax_24 = zx.q(*(rax_13 + 0x1f5))
                                            
                                            if (((*(rax_13 + 0x1f4) & 0x20) != 0
                                                    && (*(rax_13 + 0x1f6) & 8) == 0)
                                                    || (rax_24.b & 0x40) != 0 || rax_24.b s< 0)
                                                r14.b = 1
                                            else
                                                r14.b = 0
                                            
                                            void* rcx_18 = *(rax_13 + 0xb8)
                                            char* rsi_1 = *(rax_13 + 0x248)
                                            
                                            if (rcx_18 != 0)
                                                rax_24 = sub_1424359b0(rcx_18)
                                            
                                            if (rcx_18 == 0 || rax_24 == 0 || rsi_1 == rax_24)
                                                rcx_18.b = 1
                                            else
                                                rcx_18.b = 0
                                            
                                            if (rsi_1 == 0 || *rsi_1 == 2)
                                                rax_24.b = 1
                                            else
                                                rax_24.b = 0
                                            
                                            if (rcx_18.b != 0 || rax_24.b != 0)
                                                rax_24.b = 1
                                            
                                            if (r14.b != 0 && rax_24.b != 0)
                                                goto label_14200b5ce
                            
                            r8_2 = var_58
                            rdx_4 = zx.q(var_80)
                        
                        r15_2 += 1
                        r12_1 += 8
                        
                        if (r15_2 s>= r8_2 + rdx_4.d)
                            goto label_14200b628
                    
                    var_68 = rdi_2
                    var_78 = r15_2
                while (j == 0)
                
                r13_1 = var_b0_1
                r15 = arg1
            
            if (var_40_2 != 0)
                char var_40_3 = 0
                int64_t var_48
                sub_142441560(var_90, var_48)
                
                if (var_60 != 0)
                    sub_140a74f90(var_60)
                
                if (var_88 != 0)
                    sub_140a74f90(var_88)
            
            int64_t* rcx_24 = *(rdi_1 + 0x188)
            
            if (rcx_24 != 0)
                (*(*rcx_24 + 0x288))(rcx_24)
            
            rdx_4.b = 2
            sub_142435600(rdi_1, rdx_4.b)
            sub_14242eb30(rdi_1, 1, 1, 0)
            i = i_1
        
        i += 1
        r13_1 += 8
        i_1 = i
        var_b0_1 = r13_1
    while (i s< r15[0x188].d)

void* result = sub_1423eae90(r15)
__security_check_cookie(rax_1 ^ &var_d8)
return result
