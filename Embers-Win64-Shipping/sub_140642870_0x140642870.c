// 函数: sub_140642870
// 地址: 0x140642870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_e8
int64_t rax_2 = __security_cookie ^ &var_e8
uint64_t* rsi_1 = arg2
uint64_t rax
int32_t zmm6_1
rax, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 0)
uint64_t var_c0_1 = rax
uint64_t rbx_1 = rax

if (rax != 0)
    rsi_1[1].d = 0
    
    if (*(rsi_1 + 0xc) != 0)
        sub_140638c50(rsi_1, 0)
    
    void* rax_3 = sub_142452380()
    int32_t var_b8 = 5
    char var_60_1 = 0
    void* var_b0
    sub_1405ab0f0(&var_b0, rbx_1, rax_3)
    char var_60_2 = 1
    float zmm0_1
    rax, zmm0_1 = sub_1406277a0(&var_b8)
    int64_t** var_a8
    char var_94
    int64_t var_80
    
    if (var_94 == 0)
        int64_t* var_88
        int64_t* rdi_1 = var_88
        int64_t r15
        int64_t var_38_1 = r15
        
        while (true)
            (*(*rdi_1 + 0x5d8))(rdi_1)
            
            if (not(*(rbx_1 + 0x520) - zmm0_1 f<= zmm6_1))
                int64_t rbx_2 = sx.q(rsi_1[1].d)
                int32_t rax_5 = (rbx_2 + 1).d
                rsi_1[1].d = rax_5
                
                if (rax_5 s> *(rsi_1 + 0xc))
                    sub_1405a4d70(rsi_1)
                
                *(*rsi_1 + (rbx_2 << 3)) = var_88
            
            int32_t var_78
            int32_t r8_2 = var_78
            int32_t var_a0
            int32_t rdx_3 = var_a0
            void* r13_1 = var_b0
            int32_t var_98
            int32_t r14_2 = var_98 + 1
            
            if (r14_2 s>= r8_2 + rdx_3)
            label_140642b41:
                int64_t var_88_1 = 0
                char var_94_1 = 1
                break
            
            int64_t r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_3)
                    rdi_1 = *(var_80 + (sx.q(r14_2 - rdx_3) << 3))
                else
                    rdi_1 = *(var_a8 + r12_1)
                
                int32_t var_90 = var_90 + 1
                
                if (rdi_1 != 0)
                    void* rax_12
                    rax_12, zmm0_1 = sub_141dc9840(rdi_1)
                    
                    if (rax_12 != 0)
                        void* const rax_19
                        
                        if ((var_b8.b & 1) != 0)
                            int32_t rax_13 = *(rdi_1 + 0xc)
                            
                            if (rax_13 s>= data_143e1d9b4)
                                rax_19 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_13)
                                uint32_t rdx_5 = zx.d(temp0_1)
                                int32_t rax_15 = temp1_1 + rdx_5
                                rax_19 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_15.w) - rdx_5) * 0x18
                        
                        if ((var_b8.b & 1) == 0 || ((*(rax_19 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_13 = var_b8
                            
                            if (((rcx_13 u>> 1).b & 1) == 0)
                                goto label_140642a6b
                            
                            uint64_t rax_23 = sub_1405949a0()
                            
                            if (rax_23.b != 0)
                                rcx_13 = var_b8
                            label_140642a6b:
                                
                                if (((rcx_13 u>> 2).b & 1) == 0)
                                label_140642ae7:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_12) == r13_1)
                                        if (rax_12 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_24
                                        rax_24, zmm0_1 = sub_1425bd0d0()
                                        void* rdx_7 = rdi_1[2]
                                        rax = sx.q(*(rax_24 + 0x38))
                                        
                                        if (rax.d s> *(rdx_7 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_7 + 0x30) + (rax << 3)) != rax_24 + 0x30)
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
                                    
                                    void* rcx_15 = *(rax_12 + 0xb8)
                                    char* rsi_2 = *(rax_12 + 0x248)
                                    
                                    if (rcx_15 != 0)
                                        rax_23 = sub_1424359b0(rcx_15)
                                    
                                    if (rcx_15 == 0 || rax_23 == 0 || rsi_2 == rax_23)
                                        rcx_15.b = 1
                                    else
                                        rcx_15.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_23.b = 1
                                    else
                                        rax_23.b = 0
                                    
                                    if (rcx_15.b != 0 || rax_23.b != 0)
                                        rax_23.b = 1
                                    
                                    if (r15.b != 0 && rax_23.b != 0)
                                        goto label_140642ae7
                    
                    r8_2 = var_78
                    rdx_3 = var_a0
                
                r14_2 += 1
                r12_1 += 8
                
                if (r14_2 s>= r8_2 + rdx_3)
                    goto label_140642b41
            
            var_88 = rdi_1
            var_98 = r14_2
            
            if (var_94 != 0)
                break
            
            rsi_1 = arg2
            rbx_1 = var_c0_1
    
    if (var_60_2 != 0)
        char var_60_3 = 0
        int64_t var_68
        sub_142441560(var_b0, var_68)
        
        if (var_80 != 0)
            sub_140a74f90(var_80)
        
        if (var_a8 != 0)
            sub_140a74f90(var_a8)

__security_check_cookie(rax_2 ^ &var_e8)
