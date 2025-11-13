// 函数: sub_141ec01d0
// 地址: 0x141ec01d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rax_3 = (*(*arg1 + 0x150))()
int32_t var_98 = 5
char var_40 = 0
void* var_90
sub_1405ab0f0(&var_90, rax_3, arg2)
char var_40_1 = 1
uint64_t result = sub_1406277a0(&var_98)
int64_t** var_88
char i
int64_t var_60

if (i == 0)
    int64_t* var_68
    int64_t* rdi_1 = var_68
    int64_t r15
    int64_t var_28_1 = r15
    
    do
        int32_t rax_4 = *(rdi_1 + 0xc)
        void* const rax_10
        
        if (rax_4 s>= data_143e1d9b4)
            rax_10 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_4)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_6 = temp1_1 + rdx_2
            rax_10 =
                *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
        
        if (((*(rax_10 + 8) u>> 0x1d).b & 1) == 0)
            void* rax_13 = sub_14255d000()
            void* rdx_4 = rdi_1[2]
            int64_t rax_14 = sx.q(*(rax_13 + 0x38))
            void* r8_2
            
            if (rax_14.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
                void* rbx_1 = rdi_1[0x4b]
                
                if (rbx_1 != 0)
                    void* rax_16 = sub_14256a090()
                    void* rcx_7 = *(rbx_1 + 0x10)
                    int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                    
                    if (rax_17.d s> *(rcx_7 + 0x38)
                            || *(*(rcx_7 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
                        r8_2.b = 1
                        sub_141dbe590(rdi_1[0x4b], 0, r8_2.b)
            
            r8_2.b = 1
            sub_141dbe590(rdi_1, 0, r8_2.b)
        
        int32_t var_58
        int32_t r8_3 = var_58
        int32_t var_80
        int32_t rdx_6 = var_80
        void* r13_1 = var_90
        int32_t var_78
        int32_t rsi_2 = var_78 + 1
        result = zx.q(r8_3 + rdx_6)
        
        if (rsi_2 s>= result.d)
        label_141ec04be:
            int64_t var_68_1 = 0
            char var_74 = 1
            break
        
        int64_t r12_1 = sx.q(rsi_2) << 3
        
        while (true)
            if (rsi_2 s>= rdx_6)
                rdi_1 = *(var_60 + (sx.q(rsi_2 - rdx_6) << 3))
            else
                rdi_1 = *(var_88 + r12_1)
            
            int32_t var_70 = var_70 + 1
            
            if (rdi_1 != 0)
                void* rax_24 = sub_141dc9840(rdi_1)
                
                if (rax_24 != 0)
                    void* const rax_31
                    
                    if ((var_98.b & 1) != 0)
                        int32_t rax_25 = *(rdi_1 + 0xc)
                        
                        if (rax_25 s>= data_143e1d9b4)
                            rax_31 = nullptr
                        else
                            int16_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(rax_25)
                            uint32_t rdx_8 = zx.d(temp2_1)
                            int32_t rax_27 = temp3_1 + rdx_8
                            rax_31 = *(data_143e1d9a0 + (sx.q(rax_27 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_27.w) - rdx_8) * 0x18
                    
                    if ((var_98.b & 1) == 0 || ((*(rax_31 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_17 = var_98
                        
                        if (((rcx_17 u>> 1).b & 1) == 0)
                            goto label_141ec03e9
                        
                        uint64_t rax_35 = sub_1405949a0()
                        
                        if (rax_35.b != 0)
                            rcx_17 = var_98
                        label_141ec03e9:
                            
                            if (((rcx_17 u>> 2).b & 1) == 0)
                            label_141ec0466:
                                result =
                                    Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                    rax_24)
                                
                                if (result == r13_1)
                                    if (rax_24 == *(r13_1 + 0x30))
                                        break
                                    
                                    void* rax_36 = sub_1425bd0d0()
                                    void* rdx_10 = rdi_1[2]
                                    result = sx.q(*(rax_36 + 0x38))
                                    
                                    if (result.d s> *(rdx_10 + 0x38))
                                        break
                                    
                                    uint64_t result_1 = result
                                    result = *(rdx_10 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_36 + 0x30)
                                        break
                            else
                                if ((*(rax_24 + 0x1f4) & 0x20) == 0 || (*(rax_24 + 0x1f6) & 8) != 0)
                                    rax_35 = zx.q(*(rax_24 + 0x1f5))
                                
                                if (((*(rax_24 + 0x1f4) & 0x20) != 0
                                        && (*(rax_24 + 0x1f6) & 8) == 0) || (rax_35.b & 0x40) != 0
                                        || rax_35.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_19 = *(rax_24 + 0xb8)
                                char* r14_1 = *(rax_24 + 0x248)
                                
                                if (rcx_19 != 0)
                                    rax_35 = sub_1424359b0(rcx_19)
                                
                                if (rcx_19 == 0 || rax_35 == 0 || r14_1 == rax_35)
                                    rcx_19.b = 1
                                else
                                    rcx_19.b = 0
                                
                                if (r14_1 == 0 || *r14_1 == 2)
                                    rax_35.b = 1
                                else
                                    rax_35.b = 0
                                
                                if (rcx_19.b != 0 || rax_35.b != 0)
                                    rax_35.b = 1
                                
                                if (r15.b != 0 && rax_35.b != 0)
                                    goto label_141ec0466
                
                r8_3 = var_58
                rdx_6 = var_80
            
            rsi_2 += 1
            result = zx.q(r8_3 + rdx_6)
            r12_1 += 8
            
            if (rsi_2 s>= result.d)
                goto label_141ec04be
        
        int64_t* var_68_2 = rdi_1
        var_78 = rsi_2
    while (i == 0)

if (var_40_1 != 0)
    char var_40_2 = 0
    int64_t var_48
    result = sub_142441560(var_90, var_48)
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    if (var_88 != 0)
        result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_b8)
return result
