// 函数: sub_141ec0560
// 地址: 0x141ec0560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rbx

if (((arg1[1].d u>> 4).b & 1) == 0)
    rbx = arg1[4]
else
    rbx = 0

void var_128
memset(&var_128, 0, 0x88)
int32_t var_120 = 0x3f800000
int32_t* result = (*(*arg1 + 0x410))(arg1, rbx, &var_128)
int32_t* result_1 = result
int32_t* result_3 = result

if (result != 0)
    result = sub_14255d000()
    void* rcx_2 = *(result_3 + 0x10)
    int64_t rdx_1 = sx.q(result[0xe])
    
    if (rdx_1.d s<= *(rcx_2 + 0x38))
        result = *(rcx_2 + 0x30)
        
        if (*(result + (rdx_1 << 3)) == &result[0xc])
            void* rax_5 = sub_14255d000()
            char var_98
            void* r8_3
            result, r8_3 = sub_141eb4fa0(&var_98, (*(*arg1 + 0x150))(arg1), rax_5, 5)
            void* var_90
            int64_t var_88
            char var_74
            int64_t var_60
            
            if (var_74 == 0)
                int64_t* var_68
                int64_t* rdi_1 = var_68
                int64_t r15
                int64_t var_28_1 = r15
                
                while (true)
                    int32_t rax_8 = *(rdi_1 + 0xc)
                    void* rax_14
                    
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
                    
                    if (((*(rax_14 + 8) u>> 0x1d).b & 1) == 0 && rdi_1 != result_3)
                        void* rbx_2 = rdi_1[0x4b]
                        
                        if (rbx_2 == 0)
                            r8_3.b = 1
                            sub_141dbe590(rdi_1, 0, r8_3.b)
                        else
                            void* rax_17 = sub_14256a090()
                            void* rdx_6 = *(rbx_2 + 0x10)
                            int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                            
                            if (rax_18.d s> *(rdx_6 + 0x38)
                                    || *(*(rdx_6 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                                int64_t* rbx_3 = rdi_1[0x4b]
                                
                                if (rbx_3 != 0)
                                    r8_3.b = 1
                                    sub_141dbe590(rbx_3, 0, r8_3.b)
                                
                                r8_3.b = 1
                                sub_141dbe590(rdi_1, 0, r8_3.b)
                    
                    int32_t var_58
                    int32_t r8_4 = var_58
                    int32_t var_80
                    int32_t rdx_7 = var_80
                    int32_t var_78
                    int32_t r14_2 = var_78 + 1
                    result = zx.q(r8_4 + rdx_7)
                    
                    if (r14_2 s>= result.d)
                    label_141ec08a6:
                        int64_t var_68_1 = 0
                        char var_74_1 = 1
                        break
                    
                    int64_t r12_1 = sx.q(r14_2) << 3
                    
                    while (true)
                        if (r14_2 s>= rdx_7)
                            rdi_1 = *(var_60 + (sx.q(r14_2 - rdx_7) << 3))
                        else
                            rdi_1 = *(r12_1 + var_88)
                        
                        int32_t var_70 = var_70 + 1
                        
                        if (rdi_1 != 0)
                            void* rax_25
                            rax_25, r8_3 = sub_141dc9840(rdi_1)
                            
                            if (rax_25 != 0)
                                void* rax_32
                                
                                if ((var_98 & 1) != 0)
                                    int32_t rax_26 = *(rdi_1 + 0xc)
                                    
                                    if (rax_26 s>= data_143e1d9b4)
                                        rax_32 = nullptr
                                    else
                                        int16_t temp2_1
                                        int32_t temp3_1
                                        temp2_1:temp3_1 = sx.q(rax_26)
                                        uint32_t rdx_9 = zx.d(temp2_1)
                                        int32_t rax_28 = temp3_1 + rdx_9
                                        rax_32 = *(data_143e1d9a0 + (sx.q(rax_28 s>> 0x10) << 3))
                                            + sx.q(zx.d(rax_28.w) - rdx_9) * 0x18
                                
                                if ((var_98 & 1) == 0 || ((*(rax_32 + 8) u>> 0x1d).b & 1) == 0)
                                    int32_t rcx_19 = var_98.d
                                    
                                    if (((rcx_19 u>> 1).b & 1) == 0)
                                        goto label_141ec07d0
                                    
                                    uint64_t rax_36 = sub_1405949a0()
                                    
                                    if (rax_36.b != 0)
                                        rcx_19 = var_98.d
                                    label_141ec07d0:
                                        
                                        if (((rcx_19 u>> 2).b & 1) == 0)
                                        label_141ec084c:
                                            result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                rax_25)
                                            
                                            if (result == var_90)
                                                if (rax_25 == *(var_90 + 0x30))
                                                    break
                                                
                                                void* rax_37 = sub_1425bd0d0()
                                                void* rdx_11 = rdi_1[2]
                                                result = sx.q(*(rax_37 + 0x38))
                                                
                                                if (result.d s> *(rdx_11 + 0x38))
                                                    break
                                                
                                                int32_t* result_2 = result
                                                result = *(rdx_11 + 0x30)
                                                
                                                if (*(result + (result_2 << 3)) != rax_37 + 0x30)
                                                    break
                                        else
                                            if ((*(rax_25 + 0x1f4) & 0x20) == 0
                                                    || (*(rax_25 + 0x1f6) & 8) != 0)
                                                rax_36 = zx.q(*(rax_25 + 0x1f5))
                                            
                                            if (((*(rax_25 + 0x1f4) & 0x20) != 0
                                                    && (*(rax_25 + 0x1f6) & 8) == 0)
                                                    || (rax_36.b & 0x40) != 0 || rax_36.b s< 0)
                                                r15.b = 1
                                            else
                                                r15.b = 0
                                            
                                            void* rcx_21 = *(rax_25 + 0xb8)
                                            char* rsi = *(rax_25 + 0x248)
                                            
                                            if (rcx_21 != 0)
                                                rax_36 = sub_1424359b0(rcx_21)
                                            
                                            if (rcx_21 == 0 || rax_36 == 0 || rsi == rax_36)
                                                rcx_21.b = 1
                                            else
                                                rcx_21.b = 0
                                            
                                            if (rsi == 0 || *rsi == 2)
                                                rax_36.b = 1
                                            else
                                                rax_36.b = 0
                                            
                                            if (rcx_21.b != 0 || rax_36.b != 0)
                                                rax_36.b = 1
                                            
                                            if (r15.b != 0 && rax_36.b != 0)
                                                goto label_141ec084c
                            
                            r8_4 = var_58
                            rdx_7 = var_80
                        
                        r14_2 += 1
                        result = zx.q(r8_4 + rdx_7)
                        r12_1 += 8
                        
                        if (r14_2 s>= result.d)
                            goto label_141ec08a6
                    
                    int64_t* var_68_2 = rdi_1
                    var_78 = r14_2
                    
                    if (var_74 != 0)
                        break
                    
                    result_3 = result_1
            
            char var_40
            
            if (var_40 != 0)
                char var_40_1 = 0
                int64_t var_48
                result = sub_142441560(var_90, var_48)
                
                if (var_60 != 0)
                    result = sub_140a74f90(var_60)
                
                if (var_88 != 0)
                    result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_158)
return result
