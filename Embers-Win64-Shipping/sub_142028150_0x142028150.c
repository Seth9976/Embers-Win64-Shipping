// 函数: sub_142028150
// 地址: 0x142028150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t result = __security_cookie ^ &var_c8
int64_t result_1 = result
arg3[1].d = 0
uint64_t* rsi = arg3

if (*(arg3 + 0xc) s<= 0xffffffff)
    result = sub_140638c50(arg3, 0)

if (arg2 != 0)
    result = sub_142452380()
    
    if (result != 0)
        int64_t r8 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(arg2 + 0x38))
            int64_t result_2 = result
            result = *(arg2 + 0x30)
            
            if (*(result + (result_2 << 3)) == r8)
                result = sub_1423de540(data_143f5b298, arg1, 1)
                
                if (result != 0)
                    int32_t var_a0 = 5
                    char var_48_1 = 0
                    void* var_98
                    sub_1405ab0f0(&var_98, result, arg2)
                    char var_48_2 = 1
                    result = sub_1406277a0(&var_a0)
                    int64_t* var_90
                    char var_7c
                    int64_t var_68
                    
                    if (var_7c == 0)
                        void* var_70
                        void* rdi_1 = var_70
                        int64_t r15
                        int64_t var_38_1 = r15
                        
                        while (true)
                            int64_t rbx_1 = sx.q(rsi[1].d)
                            int32_t rax_1 = (rbx_1 + 1).d
                            rsi[1].d = rax_1
                            
                            if (rax_1 s> *(rsi + 0xc))
                                sub_1405a4d70(rsi)
                            
                            *(*rsi + (rbx_1 << 3)) = rdi_1
                            int32_t var_60
                            int32_t r8_2 = var_60
                            int32_t var_88
                            int32_t rdx_3 = var_88
                            void* r13_1 = var_98
                            int32_t var_80
                            int32_t r14_2 = var_80 + 1
                            result = zx.q(r8_2 + rdx_3)
                            
                            if (r14_2 s>= result.d)
                            label_142028411:
                                int64_t var_70_1 = 0
                                char var_7c_1 = 1
                                break
                            
                            int64_t r12_1 = sx.q(r14_2) << 3
                            
                            while (true)
                                if (r14_2 s>= rdx_3)
                                    rdi_1 = *(var_68 + (sx.q(r14_2 - rdx_3) << 3))
                                else
                                    rdi_1 = *(var_90 + r12_1)
                                
                                int32_t var_78 = var_78 + 1
                                
                                if (rdi_1 != 0)
                                    void* rax_7 = sub_141dc9840(rdi_1)
                                    
                                    if (rax_7 != 0)
                                        void* const rax_14
                                        
                                        if ((var_a0.b & 1) != 0)
                                            int32_t rax_8 = *(rdi_1 + 0xc)
                                            
                                            if (rax_8 s>= data_143e1d9b4)
                                                rax_14 = nullptr
                                            else
                                                int16_t temp0_1
                                                int32_t temp1_1
                                                temp0_1:temp1_1 = sx.q(rax_8)
                                                uint32_t rdx_5 = zx.d(temp0_1)
                                                int32_t rax_10 = temp1_1 + rdx_5
                                                rax_14 =
                                                    *(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3))
                                                    + sx.q(zx.d(rax_10.w) - rdx_5) * 0x18
                                        
                                        if ((var_a0.b & 1) == 0
                                                || ((*(rax_14 + 8) u>> 0x1d).b & 1) == 0)
                                            int32_t rcx_13 = var_a0
                                            
                                            if (((rcx_13 u>> 1).b & 1) == 0)
                                                goto label_14202833b
                                            
                                            uint64_t rax_18 = sub_1405949a0()
                                            
                                            if (rax_18.b != 0)
                                                rcx_13 = var_a0
                                            label_14202833b:
                                                
                                                if (((rcx_13 u>> 2).b & 1) == 0)
                                                label_1420283b7:
                                                    result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                        rax_7)
                                                    
                                                    if (result == r13_1)
                                                        if (rax_7 == *(r13_1 + 0x30))
                                                            break
                                                        
                                                        void* rax_19 = sub_1425bd0d0()
                                                        void* rdx_7 = *(rdi_1 + 0x10)
                                                        result = sx.q(*(rax_19 + 0x38))
                                                        
                                                        if (result.d s> *(rdx_7 + 0x38))
                                                            break
                                                        
                                                        int64_t result_3 = result
                                                        result = *(rdx_7 + 0x30)
                                                        
                                                        if (*(result + (result_3 << 3))
                                                                != rax_19 + 0x30)
                                                            break
                                                else
                                                    if ((*(rax_7 + 0x1f4) & 0x20) == 0
                                                            || (*(rax_7 + 0x1f6) & 8) != 0)
                                                        rax_18 = zx.q(*(rax_7 + 0x1f5))
                                                    
                                                    if (((*(rax_7 + 0x1f4) & 0x20) != 0
                                                            && (*(rax_7 + 0x1f6) & 8) == 0)
                                                            || (rax_18.b & 0x40) != 0
                                                            || rax_18.b s< 0)
                                                        r15.b = 1
                                                    else
                                                        r15.b = 0
                                                    
                                                    void* rcx_15 = *(rax_7 + 0xb8)
                                                    char* rsi_1 = *(rax_7 + 0x248)
                                                    
                                                    if (rcx_15 != 0)
                                                        rax_18 = sub_1424359b0(rcx_15)
                                                    
                                                    if (rcx_15 == 0 || rax_18 == 0
                                                            || rsi_1 == rax_18)
                                                        rcx_15.b = 1
                                                    else
                                                        rcx_15.b = 0
                                                    
                                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                                        rax_18.b = 1
                                                    else
                                                        rax_18.b = 0
                                                    
                                                    if (rcx_15.b != 0 || rax_18.b != 0)
                                                        rax_18.b = 1
                                                    
                                                    if (r15.b != 0 && rax_18.b != 0)
                                                        goto label_1420283b7
                                    
                                    r8_2 = var_60
                                    rdx_3 = var_88
                                
                                r14_2 += 1
                                result = zx.q(r8_2 + rdx_3)
                                r12_1 += 8
                                
                                if (r14_2 s>= result.d)
                                    goto label_142028411
                            
                            void* var_70_2 = rdi_1
                            var_80 = r14_2
                            
                            if (var_7c != 0)
                                break
                            
                            rsi = arg3
                    
                    if (var_48_2 != 0)
                        char var_48_3 = 0
                        int64_t var_50
                        result = sub_142441560(var_98, var_50)
                        
                        if (var_68 != 0)
                            result = sub_140a74f90(var_68)
                        
                        if (var_90 != 0)
                            result = sub_140a74f90(var_90)

__security_check_cookie(result_1 ^ &var_c8)
return result
