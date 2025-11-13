// 函数: sub_14213b820
// 地址: 0x14213b820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int32_t* result = __security_cookie ^ &var_f8
int32_t* result_1 = result
void* r13 = arg3

if (arg2[1].d s>= 2)
    wchar16** rax_1 = *arg2
    int16_t* const rbx_1 = &data_142d40450
    int32_t var_c0 = 0
    wchar16* rdx
    
    if (rax_1[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *rax_1
    
    sub_142136ca0(&var_c0, rdx, (zx.o(0)).q)
    void* rax_2 = *arg2
    int32_t var_c4 = 0
    
    if (*(rax_2 + 0x18) != 0)
        rbx_1 = *(rax_2 + 0x10)
    
    sub_142136bb0(&var_c4, rbx_1)
    rbx_1.b = 0
    char var_b0
    result = sub_142137300(&var_b0, r13, sub_1424752c0(), 5)
    int128_t zmm6 = var_c0
    int32_t r14_1 = var_c4
    void* var_a8
    void** var_a0
    char i
    int64_t var_78
    
    if (i == 0)
        void* var_80
        void* rdi_1 = var_80
        int64_t r15
        int64_t var_38_1 = r15
        char var_c8_1 = 1
        
        do
            zmm6 = sub_142155fe0(rdi_1, zmm6.d, r14_1)
            int32_t var_70
            int32_t r8_2 = var_70
            int32_t var_98
            int32_t rdx_3 = var_98
            int32_t var_90
            int32_t r14_3 = var_90 + 1
            result = zx.q(r8_2 + rdx_3)
            
            if (r14_3 s>= result.d)
            label_14213bab9:
                r14_1 = var_c4
                int64_t var_80_1 = 0
                char var_8c = 1
                break
            
            int64_t r12_1 = sx.q(r14_3) << 3
            
            while (true)
                if (r14_3 s>= rdx_3)
                    rdi_1 = *(var_78 + (sx.q(r14_3 - rdx_3) << 3))
                else
                    rdi_1 = *(var_a0 + r12_1)
                
                int32_t var_88 = var_88 + 1
                
                if (rdi_1 != 0)
                    void* rax_9 = sub_141dc9840(rdi_1)
                    
                    if (rax_9 != 0)
                        void* const rax_16
                        
                        if ((var_b0 & 1) != 0)
                            int32_t rax_10 = *(rdi_1 + 0xc)
                            
                            if (rax_10 s>= data_143e1d9b4)
                                rax_16 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_10)
                                uint32_t rdx_5 = zx.d(temp0_1)
                                int32_t rax_12 = temp1_1 + rdx_5
                                rax_16 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_12.w) - rdx_5) * 0x18
                        
                        if ((var_b0 & 1) == 0 || ((*(rax_16 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_11 = var_b0.d
                            
                            if (((rcx_11 u>> 1).b & 1) == 0)
                                goto label_14213b9e3
                            
                            uint64_t rax_20 = sub_1405949a0()
                            
                            if (rax_20.b != 0)
                                rcx_11 = var_b0.d
                            label_14213b9e3:
                                
                                if (((rcx_11 u>> 2).b & 1) == 0)
                                label_14213ba5f:
                                    result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_9)
                                    
                                    if (result == var_a8)
                                        if (rax_9 == *(var_a8 + 0x30))
                                            break
                                        
                                        void* rax_21 = sub_1425bd0d0()
                                        void* rdx_7 = *(rdi_1 + 0x10)
                                        result = sx.q(*(rax_21 + 0x38))
                                        
                                        if (result.d s> *(rdx_7 + 0x38))
                                            break
                                        
                                        int32_t* result_2 = result
                                        result = *(rdx_7 + 0x30)
                                        
                                        if (*(result + (result_2 << 3)) != rax_21 + 0x30)
                                            break
                                else
                                    if ((*(rax_9 + 0x1f4) & 0x20) == 0
                                            || (*(rax_9 + 0x1f6) & 8) != 0)
                                        rax_20 = zx.q(*(rax_9 + 0x1f5))
                                    
                                    if (((*(rax_9 + 0x1f4) & 0x20) != 0
                                            && (*(rax_9 + 0x1f6) & 8) == 0) || (rax_20.b & 0x40) != 0
                                            || rax_20.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_13 = *(rax_9 + 0xb8)
                                    char* rsi_1 = *(rax_9 + 0x248)
                                    
                                    if (rcx_13 != 0)
                                        rax_20 = sub_1424359b0(rcx_13)
                                    
                                    if (rcx_13 == 0 || rax_20 == 0 || rsi_1 == rax_20)
                                        rcx_13.b = 1
                                    else
                                        rcx_13.b = 0
                                    
                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                        rax_20.b = 1
                                    else
                                        rax_20.b = 0
                                    
                                    if (rcx_13.b != 0 || rax_20.b != 0)
                                        rax_20.b = 1
                                    
                                    if (r15.b != 0 && rax_20.b != 0)
                                        goto label_14213ba5f
                    
                    r8_2 = var_70
                    rdx_3 = var_98
                
                r14_3 += 1
                result = zx.q(r8_2 + rdx_3)
                r12_1 += 8
                
                if (r14_3 s>= result.d)
                    goto label_14213bab9
            
            var_90 = r14_3
            r14_1 = var_c4
            void* var_80_2 = rdi_1
        while (i == 0)
        
        r13 = arg3
        rbx_1 = zx.q(var_c8_1)
    
    char var_58
    
    if (var_58 != 0)
        char var_58_1 = 0
        int64_t var_60
        result = sub_142441560(var_a8, var_60)
        
        if (var_78 != 0)
            result = sub_140a74f90(var_78)
        
        if (var_a0 != 0)
            result = sub_140a74f90(var_a0)
    
    if (rbx_1.b == 0)
        void* rax_24
        float zmm6_1
        rax_24, zmm6_1 =
            sub_1420efae0(r13, sub_1424752c0(), nullptr, nullptr, sub_142427eb0(&var_b0))
        void* rbx_4 = rax_24
        void* rax_25
        int64_t rax_26
        void* rdx_10
        
        if (rax_24 != 0)
            rax_25 = sub_1424752c0()
            rdx_10 = *(rbx_4 + 0x10)
            rax_26 = sx.q(*(rax_25 + 0x38))
        
        if (rax_24 == 0 || rax_26.d s> *(rdx_10 + 0x38)
                || *(*(rdx_10 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
            rbx_4 = nullptr
        
        result = sub_142155fe0(rbx_4, zmm6_1, r14_1)

__security_check_cookie(result_1 ^ &var_f8)
return result
