// 函数: sub_14063f6e0
// 地址: 0x14063f6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_c8
int64_t rax_2 = __security_cookie ^ &var_c8
uint64_t* rsi_1 = arg2
uint64_t rax = sub_1423de540(data_143f5b298, arg1, 0)

if (rax != 0)
    rsi_1[1].d = 0
    
    if (*(rsi_1 + 0xc) != 0)
        sub_140638c50(rsi_1, 0)
    
    void* rax_3 = sub_14065d100()
    void* rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        void* rax_4 = sub_14065d100()
        
        if (rax_4 == 0)
            rbx_1 = nullptr
        else
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rbx_1 = nullptr
    
    int32_t var_a0 = 5
    char var_48_1 = 0
    void* var_98
    sub_1405ab0f0(&var_98, rax, rbx_1)
    char var_48_2 = 1
    sub_1406277a0(&var_a0)
    int64_t* var_90
    char var_7c
    int64_t var_68
    
    if (var_7c == 0)
        void* var_70
        void* rdi_2 = var_70
        int64_t r15
        int64_t var_38_1 = r15
        
        while (true)
            int64_t rbx_2 = sx.q(rsi_1[1].d)
            int32_t rax_7 = (rbx_2 + 1).d
            rsi_1[1].d = rax_7
            
            if (rax_7 s> *(rsi_1 + 0xc))
                sub_140638870(rsi_1)
            
            *(*rsi_1 + (rbx_2 << 3)) = rdi_2
            int32_t var_88
            int32_t rdx_4 = var_88
            int32_t var_60
            int32_t r8_2 = var_60
            void* r13_1 = var_98
            int32_t var_80
            int32_t r14_2 = var_80 + 1
            
            if (r14_2 s>= rdx_4 + r8_2)
            label_14063f9b1:
                int64_t var_70_1 = 0
                char var_7c_1 = 1
                break
            
            int64_t r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_4)
                    rdi_2 = *(var_68 + (sx.q(r14_2 - rdx_4) << 3))
                else
                    rdi_2 = *(var_90 + r12_1)
                
                int32_t var_78 = var_78 + 1
                
                if (rdi_2 != 0)
                    void* rax_14 = sub_141dc9840(rdi_2)
                    
                    if (rax_14 != 0)
                        void* const rax_21
                        
                        if ((var_a0.b & 1) != 0)
                            int32_t rax_15 = *(rdi_2 + 0xc)
                            
                            if (rax_15 s>= data_143e1d9b4)
                                rax_21 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_15)
                                uint32_t rdx_6 = zx.d(temp0_1)
                                int32_t rax_17 = temp1_1 + rdx_6
                                rax_21 = *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_17.w) - rdx_6) * 0x18
                        
                        if ((var_a0.b & 1) == 0 || ((*(rax_21 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_13 = var_a0
                            
                            if (((rcx_13 u>> 1).b & 1) == 0)
                                goto label_14063f8db
                            
                            uint64_t rax_25 = sub_1405949a0()
                            
                            if (rax_25.b != 0)
                                rcx_13 = var_a0
                            label_14063f8db:
                                
                                if (((rcx_13 u>> 2).b & 1) == 0)
                                label_14063f957:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_14) == r13_1)
                                        if (rax_14 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_26 = sub_1425bd0d0()
                                        void* rdx_8 = *(rdi_2 + 0x10)
                                        rax = sx.q(*(rax_26 + 0x38))
                                        
                                        if (rax.d s> *(rdx_8 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_8 + 0x30) + (rax << 3)) != rax_26 + 0x30)
                                            break
                                else
                                    if ((*(rax_14 + 0x1f4) & 0x20) == 0
                                            || (*(rax_14 + 0x1f6) & 8) != 0)
                                        rax_25 = zx.q(*(rax_14 + 0x1f5))
                                    
                                    if (((*(rax_14 + 0x1f4) & 0x20) != 0
                                            && (*(rax_14 + 0x1f6) & 8) == 0) || (rax_25.b & 0x40) != 0
                                            || rax_25.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_15 = *(rax_14 + 0xb8)
                                    char* rsi_2 = *(rax_14 + 0x248)
                                    
                                    if (rcx_15 != 0)
                                        rax_25 = sub_1424359b0(rcx_15)
                                    
                                    if (rcx_15 == 0 || rax_25 == 0 || rsi_2 == rax_25)
                                        rcx_15.b = 1
                                    else
                                        rcx_15.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_25.b = 1
                                    else
                                        rax_25.b = 0
                                    
                                    if (rcx_15.b != 0 || rax_25.b != 0)
                                        rax_25.b = 1
                                    
                                    if (r15.b != 0 && rax_25.b != 0)
                                        goto label_14063f957
                    
                    r8_2 = var_60
                    rdx_4 = var_88
                
                r14_2 += 1
                r12_1 += 8
                
                if (r14_2 s>= rdx_4 + r8_2)
                    goto label_14063f9b1
            
            void* var_70_2 = rdi_2
            var_80 = r14_2
            
            if (var_7c != 0)
                break
            
            rsi_1 = arg2
    
    if (var_48_2 != 0)
        char var_48_3 = 0
        int64_t var_50
        sub_142441560(var_98, var_50)
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        if (var_90 != 0)
            sub_140a74f90(var_90)

__security_check_cookie(rax_2 ^ &var_c8)
