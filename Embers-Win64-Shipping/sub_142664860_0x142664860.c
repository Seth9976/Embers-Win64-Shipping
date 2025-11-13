// 函数: sub_142664860
// 地址: 0x142664860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* r14 = arg1
char* rsi
rsi.b = 0
char var_a8 = 0
char var_98
int32_t* result = sub_142640410(&var_98, (*(*arg1 + 0x150))(), sub_14269c200(), 5)
void* var_90
void** var_88
char i
int64_t var_60

if (i == 0)
    void* var_68
    void* rdi_1 = var_68
    int64_t r15
    int64_t var_28_1 = r15
    
    do
        if (rdi_1 != 0)
            int32_t rax_5 = *(rdi_1 + 0xc)
            void* const rax_11
            
            if (rax_5 s>= data_143e1d9b4)
                rax_11 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_5)
                uint32_t rdx_2 = zx.d(temp0_1)
                int32_t rax_7 = temp1_1 + rdx_2
                rax_11 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_7.w) - rdx_2) * 0x18
            
            if (((*(rax_11 + 8) u>> 0x1d).b & 1) == 0 && (*(rdi_1 + 0x3f8) & 1) == 0)
                (*(*r14 + 0x310))(r14, rdi_1)
                rsi.b = 1
                var_a8 = 1
        
        int32_t var_58
        int32_t r8_2 = var_58
        int32_t var_80
        int32_t rdx_5 = var_80
        int32_t var_78
        int32_t r14_2 = var_78 + 1
        result = zx.q(r8_2 + rdx_5)
        
        if (r14_2 s>= result.d)
        label_142664b01:
            r14 = arg1
            int64_t var_68_1 = 0
            char var_74 = 1
            break
        
        int64_t r12_1 = sx.q(r14_2) << 3
        
        while (true)
            if (r14_2 s>= rdx_5)
                rdi_1 = *(var_60 + (sx.q(r14_2 - rdx_5) << 3))
            else
                rdi_1 = *(var_88 + r12_1)
            
            int32_t var_70 = var_70 + 1
            
            if (rdi_1 != 0)
                void* rax_20 = sub_141dc9840(rdi_1)
                
                if (rax_20 != 0)
                    void* const rax_27
                    
                    if ((var_98 & 1) != 0)
                        int32_t rax_21 = *(rdi_1 + 0xc)
                        
                        if (rax_21 s>= data_143e1d9b4)
                            rax_27 = nullptr
                        else
                            int16_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(rax_21)
                            uint32_t rdx_7 = zx.d(temp2_1)
                            int32_t rax_23 = temp3_1 + rdx_7
                            rax_27 = *(data_143e1d9a0 + (sx.q(rax_23 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_23.w) - rdx_7) * 0x18
                    
                    if ((var_98 & 1) == 0 || ((*(rax_27 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_13 = var_98.d
                        
                        if (((rcx_13 u>> 1).b & 1) == 0)
                            goto label_142664a2b
                        
                        uint64_t rax_31 = sub_1405949a0()
                        
                        if (rax_31.b != 0)
                            rcx_13 = var_98.d
                        label_142664a2b:
                            
                            if (((rcx_13 u>> 2).b & 1) == 0)
                            label_142664aa7:
                                result =
                                    Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                    rax_20)
                                
                                if (result == var_90)
                                    if (rax_20 == *(var_90 + 0x30))
                                        break
                                    
                                    void* rax_32 = sub_1425bd0d0()
                                    void* rdx_9 = *(rdi_1 + 0x10)
                                    result = sx.q(*(rax_32 + 0x38))
                                    
                                    if (result.d s> *(rdx_9 + 0x38))
                                        break
                                    
                                    int32_t* result_1 = result
                                    result = *(rdx_9 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_32 + 0x30)
                                        break
                            else
                                if ((*(rax_20 + 0x1f4) & 0x20) == 0 || (*(rax_20 + 0x1f6) & 8) != 0)
                                    rax_31 = zx.q(*(rax_20 + 0x1f5))
                                
                                if (((*(rax_20 + 0x1f4) & 0x20) != 0
                                        && (*(rax_20 + 0x1f6) & 8) == 0) || (rax_31.b & 0x40) != 0
                                        || rax_31.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_15 = *(rax_20 + 0xb8)
                                rsi = *(rax_20 + 0x248)
                                
                                if (rcx_15 != 0)
                                    rax_31 = sub_1424359b0(rcx_15)
                                
                                if (rcx_15 == 0 || rax_31 == 0 || rsi == rax_31)
                                    rcx_15.b = 1
                                else
                                    rcx_15.b = 0
                                
                                if (rsi == 0 || *rsi == 2)
                                    rax_31.b = 1
                                else
                                    rax_31.b = 0
                                
                                if (rcx_15.b != 0 || rax_31.b != 0)
                                    rax_31.b = 1
                                
                                if (r15.b != 0 && rax_31.b != 0)
                                    goto label_142664aa7
                
                r8_2 = var_58
                rdx_5 = var_80
            
            r14_2 += 1
            result = zx.q(r8_2 + rdx_5)
            r12_1 += 8
            
            if (r14_2 s>= result.d)
                goto label_142664b01
        
        var_78 = r14_2
        r14 = arg1
        void* var_68_2 = rdi_1
    while (i == 0)
    
    rsi = zx.q(var_a8)

char var_40

if (var_40 != 0)
    char var_40_1 = 0
    int64_t var_48
    result = sub_142441560(var_90, var_48)
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    if (var_88 != 0)
        result = sub_140a74f90(var_88)

if (rsi.b == 1)
    result = (*(*r14 + 0x330))(r14)

__security_check_cookie(rax_1 ^ &var_c8)
return result
