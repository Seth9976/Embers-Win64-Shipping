// 函数: sub_142724360
// 地址: 0x142724360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
bool cond:0 = (*(arg1 + 0xc4) & 2) == 0
int64_t* rsi = arg1
int64_t* rdi = arg1[0x14]
int64_t* var_a8 = arg1
uint64_t result

if (cond:0)
    void* rbx_3 = sub_14255d000()
    int64_t rax_20 = (*(*rdi + 0x150))(rdi)
    
    if (rbx_3 == 0)
        rbx_3 = nullptr
    else
        void* rax_21 = sub_14255d000()
        
        if (rax_21 == 0)
            rbx_3 = nullptr
        else
            int64_t rcx_9 = sx.q(*(rax_21 + 0x38))
            
            if (rcx_9.d s> *(rbx_3 + 0x38) || *(*(rbx_3 + 0x30) + (rcx_9 << 3)) != rax_21 + 0x30)
                rbx_3 = nullptr
    
    int32_t var_98 = 5
    char var_40_1 = 0
    void* var_90
    sub_1405ab0f0(&var_90, rax_20, rbx_3)
    char var_40_2 = 1
    result = sub_1405b0c60(&var_98)
    int64_t var_88
    char var_74
    int64_t var_60
    
    if (var_74 == 0)
        void* var_68
        void* rdi_2 = var_68
        int64_t r15
        int64_t var_28_1 = r15
        
        while (true)
            if ((*(*rsi + 0x400))(rsi, rdi_2) == 0)
                (*(*rsi + 0x448))(rsi, rdi_2)
            
            int32_t var_58
            int32_t r8_3 = var_58
            int32_t var_80
            int32_t rdx_13 = var_80
            void* r13_1 = var_90
            int32_t var_78
            int32_t r14_2 = var_78 + 1
            result = zx.q(r8_3 + rdx_13)
            
            if (r14_2 s>= result.d)
            label_142724731:
                int64_t var_68_1 = 0
                char var_74_1 = 1
                break
            
            int64_t r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_13)
                    rdi_2 = *(var_60 + (sx.q(r14_2 - rdx_13) << 3))
                else
                    rdi_2 = *(r12_1 + var_88)
                
                int32_t var_70 = var_70 + 1
                
                if (rdi_2 != 0)
                    void* rax_31 = sub_141dc9840(rdi_2)
                    
                    if (rax_31 != 0)
                        void* const rax_38
                        
                        if ((var_98.b & 1) != 0)
                            int32_t rax_32 = *(rdi_2 + 0xc)
                            
                            if (rax_32 s>= data_143e1d9b4)
                                rax_38 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_32)
                                uint32_t rdx_15 = zx.d(temp0_1)
                                int32_t rax_34 = temp1_1 + rdx_15
                                rax_38 = *(data_143e1d9a0 + (sx.q(rax_34 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_34.w) - rdx_15) * 0x18
                        
                        if ((var_98.b & 1) == 0 || ((*(rax_38 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_21 = var_98
                            
                            if (((rcx_21 u>> 1).b & 1) == 0)
                                goto label_14272465b
                            
                            uint64_t rax_42 = sub_1405949a0()
                            
                            if (rax_42.b != 0)
                                rcx_21 = var_98
                            label_14272465b:
                                
                                if (((rcx_21 u>> 2).b & 1) == 0)
                                label_1427246d7:
                                    result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_31)
                                    
                                    if (result == r13_1)
                                        if (rax_31 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_43 = sub_1425bd0d0()
                                        void* rdx_17 = *(rdi_2 + 0x10)
                                        result = sx.q(*(rax_43 + 0x38))
                                        
                                        if (result.d s> *(rdx_17 + 0x38))
                                            break
                                        
                                        uint64_t result_2 = result
                                        result = *(rdx_17 + 0x30)
                                        
                                        if (*(result + (result_2 << 3)) != rax_43 + 0x30)
                                            break
                                else
                                    if ((*(rax_31 + 0x1f4) & 0x20) == 0
                                            || (*(rax_31 + 0x1f6) & 8) != 0)
                                        rax_42 = zx.q(*(rax_31 + 0x1f5))
                                    
                                    if (((*(rax_31 + 0x1f4) & 0x20) != 0
                                            && (*(rax_31 + 0x1f6) & 8) == 0) || (rax_42.b & 0x40) != 0
                                            || rax_42.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_23 = *(rax_31 + 0xb8)
                                    char* rsi_1 = *(rax_31 + 0x248)
                                    
                                    if (rcx_23 != 0)
                                        rax_42 = sub_1424359b0(rcx_23)
                                    
                                    if (rcx_23 == 0 || rax_42 == 0 || rsi_1 == rax_42)
                                        rcx_23.b = 1
                                    else
                                        rcx_23.b = 0
                                    
                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                        rax_42.b = 1
                                    else
                                        rax_42.b = 0
                                    
                                    if (rcx_23.b != 0 || rax_42.b != 0)
                                        rax_42.b = 1
                                    
                                    if (r15.b != 0 && rax_42.b != 0)
                                        goto label_1427246d7
                    
                    r8_3 = var_58
                    rdx_13 = var_80
                
                r14_2 += 1
                result = zx.q(r8_3 + rdx_13)
                r12_1 += 8
                
                if (r14_2 s>= result.d)
                    goto label_142724731
            
            void* var_68_2 = rdi_2
            var_78 = r14_2
            
            if (var_74 != 0)
                break
            
            rsi = var_a8
    
    if (var_40_2 != 0)
        char var_40_3 = 0
        int64_t var_48
        result = sub_142441560(var_90, var_48)
        
        if (var_60 != 0)
            result = sub_140a74f90(var_60)
        
        if (var_88 != 0)
            result = sub_140a74f90(var_88)
else
    sub_1424373a0((*(*rdi + 0x150))(rdi), &var_a8)
    int32_t result_1
    result = zx.q(result_1)
    
    while (true)
        int64_t* rdx_2 = var_a8
        uint64_t rcx_1
        
        if (result.d s< 0 || result.d s>= rdx_2[1].d)
            rcx_1.b = 0
        else
            rcx_1.b = 1
        
        if (rcx_1.b == 0)
            break
        
        uint64_t rax_5
        rax_5, rcx_1 = sub_140d3c6e0(*rdx_2 + (sx.q(result.d) << 3))
        int32_t r9_1 = data_143e1d9b4
        uint64_t rbx_1 = rax_5
        int64_t r10_1 = data_143e1d9a0
        void* const rdx_4
        
        if (rax_5 != 0)
            rcx_1 = zx.q(*(rax_5 + 0xc))
            
            if (rcx_1.d s>= r9_1)
                rdx_4 = nullptr
            else
                uint32_t r8_1 = zx.d(rcx_1.w)
                
                if (rcx_1.d s< 0)
                    rcx_1 = zx.q(rcx_1.d + 0xffff)
                    r8_1 -= 0x10000
                
                rdx_4 = *(r10_1 + (sx.q(rcx_1.d s>> 0x10) << 3)) + sx.q(r8_1) * 0x18
        
        if (rax_5 == 0 || ((*(rdx_4 + 8) u>> 0x1d).b & 1) != 0)
            rax_5.b = 0
        else
            rax_5.b = 1
        
        if (rax_5.b != 0)
            void* rbx_2 = *(rbx_1 + 0x250)
            void* const rdx_6
            
            if (rbx_2 != 0)
                int32_t rax_9 = *(rbx_2 + 0xc)
                
                if (rax_9 s>= r9_1)
                    rdx_6 = nullptr
                else
                    uint32_t rcx_5 = zx.d(rax_9.w)
                    
                    if (rax_9 s< 0)
                        rax_9 += 0xffff
                        rcx_5 -= 0x10000
                    
                    rdx_6 = *(r10_1 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(rcx_5) * 0x18
            
            if (rbx_2 == 0 || ((*(rdx_6 + 8) u>> 0x1d).b & 1) != 0)
                rax_5.b = 0
            else
                rax_5.b = 1
            
            if (rax_5.b != 0)
                char rax_15
                rax_15, rcx_1 = (*(*rsi + 0x400))(rsi, rbx_2)
                
                if (rax_15 == 0)
                    (*(*rsi + 0x448))(rsi, rbx_2)
        
        result = zx.q(result_1 + 1)
        result_1 = result.d

__security_check_cookie(rax_1 ^ &var_c8)
return result
