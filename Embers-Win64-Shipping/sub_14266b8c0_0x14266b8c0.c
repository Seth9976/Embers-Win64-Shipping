// 函数: sub_14266b8c0
// 地址: 0x14266b8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* rax_2 = arg1[6]
int64_t* r13 = arg1
uint64_t result

if (rax_2 != 0)
    int32_t rax_3 = *(rax_2 + 0xc)
    void* const rax_9
    
    if (rax_3 s>= data_143e1d9b4)
        rax_9 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_5 = temp1_1 + rdx_1
        arg2 = sx.q(rax_5 s>> 0x10)
        arg3 = *(data_143e1d9a0 + (arg2 << 3))
        rax_9 = arg3 + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
    
    result = zx.q(*(rax_9 + 8) u>> 0x1d)

if (rax_2 == 0 || (result.b & 1) != 0)
    int64_t rax_12 = (*(*r13 + 0x150))(r13, arg2, arg3)
    void* rax_13 = sub_14269be10()
    void* rbx_1 = rax_13
    
    if (rax_13 == 0)
        rbx_1 = nullptr
    else
        void* rax_14 = sub_14269be10()
        
        if (rax_14 == 0)
            rbx_1 = nullptr
        else
            int64_t rcx_5 = sx.q(*(rax_14 + 0x38))
            
            if (rcx_5.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rcx_5 << 3)) != rax_14 + 0x30)
                rbx_1 = nullptr
    
    int32_t var_b8 = 5
    char var_60_1 = 0
    void* var_b0
    sub_1405ab0f0(&var_b0, rax_12, rbx_1)
    char var_60_2 = 1
    result = sub_1405b0c60(&var_b8)
    int64_t var_a8
    int32_t var_98
    char var_94
    int64_t var_80
    
    if (var_94 == 0)
        void* var_88
        void* rdi_2 = var_88
        int32_t r14_1 = var_98
        int64_t r15
        int64_t var_28_1 = r15
        
        while (true)
            if (rdi_2 != 0)
                int32_t rax_16 = *(rdi_2 + 0xc)
                void* const rax_22
                
                if (rax_16 s>= data_143e1d9b4)
                    rax_22 = nullptr
                else
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rax_16)
                    uint32_t rdx_5 = zx.d(temp2_1)
                    int32_t rax_18 = temp3_1 + rdx_5
                    rax_22 = *(data_143e1d9a0 + (sx.q(rax_18 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_18.w) - rdx_5) * 0x18
                
                result = zx.q(*(rax_22 + 8) u>> 0x1d)
                
                if ((result.b & 1) == 0)
                    r13 = arg1
                    r13[6] = rdi_2
                    break
            
            int32_t var_78
            int32_t r8_2 = var_78
            r14_1 += 1
            int32_t var_a0
            int32_t rdx_7 = var_a0
            void* r13_1 = var_b0
            result = zx.q(r8_2 + rdx_7)
            
            if (r14_1 s>= result.d)
            label_14266bbd1:
                int64_t var_88_1 = 0
                char var_94_1 = 1
            else
                int64_t r12_1 = sx.q(r14_1) << 3
                
                while (true)
                    if (r14_1 s>= rdx_7)
                        rdi_2 = *(var_80 + (sx.q(r14_1 - rdx_7) << 3))
                    else
                        rdi_2 = *(r12_1 + var_a8)
                    
                    int32_t var_90 = var_90 + 1
                    
                    if (rdi_2 != 0)
                        void* rax_29 = sub_141dc9840(rdi_2)
                        
                        if (rax_29 != 0)
                            void* const rax_36
                            
                            if ((var_b8.b & 1) != 0)
                                int32_t rax_30 = *(rdi_2 + 0xc)
                                
                                if (rax_30 s>= data_143e1d9b4)
                                    rax_36 = nullptr
                                else
                                    int16_t temp4_1
                                    int32_t temp5_1
                                    temp4_1:temp5_1 = sx.q(rax_30)
                                    uint32_t rdx_9 = zx.d(temp4_1)
                                    int32_t rax_32 = temp5_1 + rdx_9
                                    rax_36 = *(data_143e1d9a0 + (sx.q(rax_32 s>> 0x10) << 3))
                                        + sx.q(zx.d(rax_32.w) - rdx_9) * 0x18
                            
                            if ((var_b8.b & 1) == 0 || ((*(rax_36 + 8) u>> 0x1d).b & 1) == 0)
                                int32_t rcx_19 = var_b8
                                
                                if (((rcx_19 u>> 1).b & 1) == 0)
                                    goto label_14266bafb
                                
                                uint64_t rax_40 = sub_1405949a0()
                                
                                if (rax_40.b != 0)
                                    rcx_19 = var_b8
                                label_14266bafb:
                                    
                                    if (((rcx_19 u>> 2).b & 1) == 0)
                                    label_14266bb77:
                                        result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_29)
                                        
                                        if (result == r13_1)
                                            if (rax_29 == *(r13_1 + 0x30))
                                                break
                                            
                                            void* rax_41 = sub_1425bd0d0()
                                            void* rdx_11 = *(rdi_2 + 0x10)
                                            result = sx.q(*(rax_41 + 0x38))
                                            
                                            if (result.d s> *(rdx_11 + 0x38))
                                                break
                                            
                                            uint64_t result_1 = result
                                            result = *(rdx_11 + 0x30)
                                            
                                            if (*(result + (result_1 << 3)) != rax_41 + 0x30)
                                                break
                                    else
                                        if ((*(rax_29 + 0x1f4) & 0x20) == 0
                                                || (*(rax_29 + 0x1f6) & 8) != 0)
                                            rax_40 = zx.q(*(rax_29 + 0x1f5))
                                        
                                        if (((*(rax_29 + 0x1f4) & 0x20) != 0
                                                && (*(rax_29 + 0x1f6) & 8) == 0) || (rax_40.b & 0x40) != 0
                                                || rax_40.b s< 0)
                                            r15.b = 1
                                        else
                                            r15.b = 0
                                        
                                        void* rcx_21 = *(rax_29 + 0xb8)
                                        char* rsi_1 = *(rax_29 + 0x248)
                                        
                                        if (rcx_21 != 0)
                                            rax_40 = sub_1424359b0(rcx_21)
                                        
                                        if (rcx_21 == 0 || rax_40 == 0 || rsi_1 == rax_40)
                                            rcx_21.b = 1
                                        else
                                            rcx_21.b = 0
                                        
                                        if (rsi_1 == 0 || *rsi_1 == 2)
                                            rax_40.b = 1
                                        else
                                            rax_40.b = 0
                                        
                                        if (rcx_21.b != 0 || rax_40.b != 0)
                                            rax_40.b = 1
                                        
                                        if (r15.b != 0 && rax_40.b != 0)
                                            goto label_14266bb77
                        
                        r8_2 = var_78
                        rdx_7 = var_a0
                    
                    r14_1 += 1
                    result = zx.q(r8_2 + rdx_7)
                    r12_1 += 8
                    
                    if (r14_1 s>= result.d)
                        goto label_14266bbd1
                
                void* var_88_2 = rdi_2
                var_98 = r14_1
                
                if (var_94 == 0)
                    continue
            
            r13 = arg1
            break
    
    if (var_60_2 != 0)
        char var_60_3 = 0
        int64_t var_68
        result = sub_142441560(var_b0, var_68)
        
        if (var_80 != 0)
            result = sub_140a74f90(var_80)
        
        if (var_a8 != 0)
            result = sub_140a74f90(var_a8)
    
    if (r13[6] == 0)
        sub_141dde490(&var_b8, 0x420c0000, 0x43100000)
        sub_141defed0(&var_b8, sub_14269be10())
        result = (*(*r13 + 0x2d0))(r13, &var_b8, 0)
        r13[6] = result
        
        if (result != 0)
            *(result + 8) |= 0x40
        
        int64_t var_50
        
        if (var_50 != 0)
            result = sub_140a74f90(var_50)
        
        int64_t rcx_30 = var_98.q
        
        if (rcx_30 != 0)
            result = sub_140a74f90(rcx_30)

__security_check_cookie(rax_1 ^ &var_e8)
return result
