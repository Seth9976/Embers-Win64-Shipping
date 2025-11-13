// 函数: sub_142026eb0
// 地址: 0x142026eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
int64_t var_38 = r15
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* r14 = arg2
int64_t* rdi = arg1
void* rax_3 = (*(*arg1 + 0x150))()
int32_t rcx = arg3[1].d
void* rsi = rax_3

if (rcx s<= 1)
    goto label_142027165

int16_t* rdx

if (rcx == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

int64_t var_b0
sub_140b58260(&var_b0, rdx, 1)
char var_a8
sub_142018c50(&var_a8, rsi, sub_142574150(), 5)
char var_84
void* result
void* var_a0
void** var_98
int64_t var_70
int64_t var_58
char var_50

if (var_84 != 0)
label_142027125:
    
    if (var_50 != 0)
        char var_50_1 = 0
        sub_142441560(var_a0, var_58)
        
        if (var_70 != 0)
            sub_140a74f90(var_70)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
    
    rsi = rax_3
label_142027165:
    char rax_30 = (*(*rdi + 0x7d8))(rdi, r14)
    
    if (rax_30 != 0)
        result = sub_140d3c6e0(r14 + 0x230)
    
    if (rax_30 == 0 || result == 0)
        result = sub_1424b2440(rdi, r14)
        
        if (result == 0)
            result = sub_142437e30(rsi, 0, 1)
else
    void* result_2
    void* result_1 = result_2
    int32_t var_88
    int32_t r14_1 = var_88
    
    while (true)
        if (result_1 != 0 && *(result_1 + 0x248) == var_b0)
            if (var_50 != 0)
                char var_50_2 = 0
                sub_142441560(var_a0, var_58)
                
                if (var_70 != 0)
                    sub_140a74f90(var_70)
                
                if (var_98 != 0)
                    sub_140a74f90(var_98)
            
            result = result_1
            break
        
        int32_t var_68
        int32_t r8_1 = var_68
        r14_1 += 1
        int32_t var_90
        int32_t rdx_2 = var_90
        
        if (r14_1 s>= r8_1 + rdx_2)
        label_142027111:
            int64_t var_78 = 0
            char var_84_1 = 1
        else
            int64_t r12_1 = sx.q(r14_1) << 3
            
            while (true)
                if (r14_1 s>= rdx_2)
                    result_1 = *(var_70 + (sx.q(r14_1 - rdx_2) << 3))
                else
                    result_1 = *(var_98 + r12_1)
                
                int32_t var_80 = var_80 + 1
                
                if (result_1 != 0)
                    void* rax_12 = sub_141dc9840(result_1)
                    
                    if (rax_12 != 0)
                        void* const rax_19
                        
                        if ((var_a8 & 1) != 0)
                            int32_t rax_13 = *(result_1 + 0xc)
                            
                            if (rax_13 s>= data_143e1d9b4)
                                rax_19 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_13)
                                uint32_t rdx_4 = zx.d(temp0_1)
                                int32_t rax_15 = temp1_1 + rdx_4
                                rax_19 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_15.w) - rdx_4) * 0x18
                        
                        if ((var_a8 & 1) == 0 || ((*(rax_19 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_10 = var_a8.d
                            
                            if (((rcx_10 u>> 1).b & 1) == 0)
                                goto label_14202703b
                            
                            uint64_t rax_23 = sub_1405949a0()
                            
                            if (rax_23.b != 0)
                                rcx_10 = var_a8.d
                            label_14202703b:
                                
                                if (((rcx_10 u>> 2).b & 1) == 0)
                                label_1420270b7:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_12) == var_a0)
                                        if (rax_12 == *(var_a0 + 0x30))
                                            break
                                        
                                        void* rax_25 = sub_1425bd0d0()
                                        void* rdx_6 = *(result_1 + 0x10)
                                        int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                                        
                                        if (rax_26.d s> *(rdx_6 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_6 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
                                            break
                                else
                                    if ((*(rax_12 + 0x1f4) & 0x20) == 0
                                            || (*(rax_12 + 0x1f6) & 8) != 0)
                                        rax_23 = zx.q(*(rax_12 + 0x1f5))
                                    
                                    if (((*(rax_12 + 0x1f4) & 0x20) != 0
                                            && (*(rax_12 + 0x1f6) & 8) == 0) || (rax_23.b & 0x40) != 0
                                            || rax_23.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_12 = *(rax_12 + 0xb8)
                                    char* rsi_1 = *(rax_12 + 0x248)
                                    
                                    if (rcx_12 != 0)
                                        rax_23 = sub_1424359b0(rcx_12)
                                    
                                    if (rcx_12 == 0 || rax_23 == 0 || rsi_1 == rax_23)
                                        rcx_12.b = 1
                                    else
                                        rcx_12.b = 0
                                    
                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                        rax_23.b = 1
                                    else
                                        rax_23.b = 0
                                    
                                    if (rcx_12.b != 0 || rax_23.b != 0)
                                        rax_23.b = 1
                                    
                                    if (r15.b != 0 && rax_23.b != 0)
                                        goto label_1420270b7
                    
                    r8_1 = var_68
                    rdx_2 = var_90
                
                r14_1 += 1
                r12_1 += 8
                
                if (r14_1 s>= r8_1 + rdx_2)
                    goto label_142027111
            
            void* result_3 = result_1
            int32_t var_88_1 = r14_1
            
            if (var_84 == 0)
                continue
        
        r14 = arg2
        rdi = arg1
        goto label_142027125
__security_check_cookie(rax_1 ^ &var_e8)
return result
