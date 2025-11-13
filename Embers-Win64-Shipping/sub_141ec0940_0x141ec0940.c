// 函数: sub_141ec0940
// 地址: 0x141ec0940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rbx = arg2

if (arg2 == 0)
    rbx = sub_14255d000()
else
    void* rax_2 = sub_14255d000()
    
    if (rax_2 == 0)
        rbx = sub_14255d000()
    else
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rbx = sub_14255d000()

char var_98
int32_t* result
void* r8_3
result, r8_3 = sub_141eb4fa0(&var_98, (*(*arg1 + 0x150))(arg1), rbx, 5)
void* var_90
int64_t** var_88
char i
int64_t var_60

if (i == 0)
    int64_t* var_68
    int64_t* rdi_1 = var_68
    int64_t r15
    int64_t var_28_1 = r15
    
    do
        void* rbx_1 = rdi_1[0x4b]
        
        if (rbx_1 == 0)
            r8_3.b = 1
            sub_141dbe590(rdi_1, 0, r8_3.b)
        else
            void* rax_8 = sub_14256a090()
            void* rdx_2 = *(rbx_1 + 0x10)
            int64_t rax_9 = sx.q(*(rax_8 + 0x38))
            
            if (rax_9.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                int64_t* rbx_2 = rdi_1[0x4b]
                
                if (rbx_2 != 0)
                    r8_3.b = 1
                    sub_141dbe590(rbx_2, 0, r8_3.b)
                
                r8_3.b = 1
                sub_141dbe590(rdi_1, 0, r8_3.b)
        
        int32_t var_58
        int32_t r8_4 = var_58
        int32_t var_80
        int32_t rdx_3 = var_80
        int32_t var_78
        int32_t rsi_2 = var_78 + 1
        result = zx.q(r8_4 + rdx_3)
        
        if (rsi_2 s>= result.d)
        label_141ec0bee:
            int64_t var_68_1 = 0
            char var_74 = 1
            break
        
        int64_t r12_1 = sx.q(rsi_2) << 3
        
        while (true)
            if (rsi_2 s>= rdx_3)
                rdi_1 = *(var_60 + (sx.q(rsi_2 - rdx_3) << 3))
            else
                rdi_1 = *(var_88 + r12_1)
            
            int32_t var_70 = var_70 + 1
            
            if (rdi_1 != 0)
                void* rax_16
                rax_16, r8_3 = sub_141dc9840(rdi_1)
                
                if (rax_16 != 0)
                    void* rax_23
                    
                    if ((var_98 & 1) != 0)
                        int32_t rax_17 = *(rdi_1 + 0xc)
                        
                        if (rax_17 s>= data_143e1d9b4)
                            rax_23 = nullptr
                        else
                            int16_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rax_17)
                            uint32_t rdx_5 = zx.d(temp0_1)
                            int32_t rax_19 = temp1_1 + rdx_5
                            rax_23 = *(data_143e1d9a0 + (sx.q(rax_19 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_19.w) - rdx_5) * 0x18
                    
                    if ((var_98 & 1) == 0 || ((*(rax_23 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_12 = var_98.d
                        
                        if (((rcx_12 u>> 1).b & 1) == 0)
                            goto label_141ec0b19
                        
                        uint64_t rax_27 = sub_1405949a0()
                        
                        if (rax_27.b != 0)
                            rcx_12 = var_98.d
                        label_141ec0b19:
                            
                            if (((rcx_12 u>> 2).b & 1) == 0)
                            label_141ec0b96:
                                result =
                                    Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                    rax_16)
                                
                                if (result == var_90)
                                    if (rax_16 == *(var_90 + 0x30))
                                        break
                                    
                                    void* rax_28 = sub_1425bd0d0()
                                    void* rdx_7 = rdi_1[2]
                                    result = sx.q(*(rax_28 + 0x38))
                                    
                                    if (result.d s> *(rdx_7 + 0x38))
                                        break
                                    
                                    int32_t* result_1 = result
                                    result = *(rdx_7 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_28 + 0x30)
                                        break
                            else
                                if ((*(rax_16 + 0x1f4) & 0x20) == 0 || (*(rax_16 + 0x1f6) & 8) != 0)
                                    rax_27 = zx.q(*(rax_16 + 0x1f5))
                                
                                if (((*(rax_16 + 0x1f4) & 0x20) != 0
                                        && (*(rax_16 + 0x1f6) & 8) == 0) || (rax_27.b & 0x40) != 0
                                        || rax_27.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_14 = *(rax_16 + 0xb8)
                                char* r14_1 = *(rax_16 + 0x248)
                                
                                if (rcx_14 != 0)
                                    rax_27 = sub_1424359b0(rcx_14)
                                
                                if (rcx_14 == 0 || rax_27 == 0 || r14_1 == rax_27)
                                    rcx_14.b = 1
                                else
                                    rcx_14.b = 0
                                
                                if (r14_1 == 0 || *r14_1 == 2)
                                    rax_27.b = 1
                                else
                                    rax_27.b = 0
                                
                                if (rcx_14.b != 0 || rax_27.b != 0)
                                    rax_27.b = 1
                                
                                if (r15.b != 0 && rax_27.b != 0)
                                    goto label_141ec0b96
                
                r8_4 = var_58
                rdx_3 = var_80
            
            rsi_2 += 1
            result = zx.q(r8_4 + rdx_3)
            r12_1 += 8
            
            if (rsi_2 s>= result.d)
                goto label_141ec0bee
        
        int64_t* var_68_2 = rdi_1
        var_78 = rsi_2
    while (i == 0)

char var_40

if (var_40 != 0)
    char var_40_1 = 0
    int64_t var_48
    result = sub_142441560(var_90, var_48)
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    if (var_88 != 0)
        result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_b8)
return result
