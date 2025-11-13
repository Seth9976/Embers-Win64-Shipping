// 函数: sub_142973270
// 地址: 0x142973270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t result_1 = 0
int64_t* rbp = arg3
uint64_t result

if (arg2 != arg3)
    sub_1428d8e50(arg5)
    int64_t* rax_2 = sub_1428d8ba0(arg5)
    
    if (rax_2 != 0)
        int32_t rbx_2 = rbp[1].d + arg2[1].d + 4
        
        if (sub_142890e60(rax_2, rbx_2) != 0)
            rax_2[1].d = rbx_2
            int32_t i_1 = 0
            
            if (rbx_2 s> 0 && rbx_2 u>= 2)
                int64_t rdi_1 = *rax_2
                
                if (rdi_1 u> rax_2 || rdi_1 + (sx.q(rbx_2 - 1) << 3) u< rax_2)
                    int32_t rax_7 = rbx_2 & 0x80000001
                    
                    if (rax_7 s< 0)
                        rax_7 = ((rax_7 - 1) | 0xfffffffe) + 1
                    
                    int32_t rcx_5 = rbx_2 - rax_7
                    
                    do
                        i_1 += 2
                    while (i_1 s< rcx_5)
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rcx_5 + 1)
                    __builtin_memset(rdi_1, 0, sx.q((temp1_1 - temp0_1) s>> 1) << 4 u>> 3 << 3)
            
            for (int64_t i = sx.q(i_1); i s< sx.q(rbx_2); i += 1)
                *(*rax_2 + (i << 3)) = 0
            
            int32_t rcx_9 = rbp[1].d
            int32_t rax_15 = 0
            int32_t var_d8_1 = 0
            
            if (rcx_9 s> 0)
                void* rdi_2 = 0x10
                void* var_c0_1 = 0x10
                int64_t r12_1 = -0x10
                int64_t r15_1 = -8
                
                do
                    int64_t rdx_5 = *rbp
                    int64_t r8_1 = 0
                    int64_t r9_1 = *(rdx_5 + rdi_2 - 0x10)
                    
                    if (rax_15 + 1 != rcx_9)
                        r8_1 = *(rdx_5 + rdi_2 - 8)
                    
                    int32_t rdx_6 = arg2[1].d
                    int32_t rbp_1 = 0
                    int64_t var_c8_1 = r8_1
                    
                    if (rdx_6 s> 0)
                        void* rbx_3 = rdi_2
                        int64_t rax_18 = r8_1 ^ r9_1
                        
                        do
                            int64_t rax_19 = *arg2
                            int64_t rcx_11 = *(rbx_3 + rax_19 + r12_1)
                            int64_t rdi_3
                            
                            if (rbp_1 + 1 != rdx_6)
                                rdi_3 = *(rbx_3 + rax_19 + r15_1)
                            else
                                rdi_3 = 0
                            
                            int64_t var_68
                            uint64_t var_60
                            sub_142974350(&var_60, &var_68, rdi_3, r8_1)
                            int64_t var_78
                            uint64_t var_70
                            sub_142974350(&var_70, &var_78, rcx_11, r9_1)
                            uint64_t var_a8
                            int64_t var_a0
                            sub_142974350(&var_a8, &var_a0, rdi_3 ^ rcx_11, rax_18)
                            int64_t rax_20 = *rax_2
                            rbp_1 += 2
                            uint64_t r8_5 = var_60
                            int64_t rcx_17 = var_78
                            uint64_t rdi_6 = var_70 ^ r8_5
                            *(rbx_3 + rax_20 - 0x10) ^= rcx_17
                            int64_t rax_21 = *rax_2
                            int64_t rdi_8 = rdi_6 ^ var_68 ^ var_a8
                            var_68 = rdi_8
                            uint64_t rdx_14 = rdi_8 ^ rcx_17 ^ r8_5 ^ var_a8 ^ var_a0
                            *(rbx_3 + rax_21 - 8) ^= rdx_14
                            int64_t rax_22 = *rax_2
                            var_70 = rdx_14
                            *(rbx_3 + rax_22) ^= rdi_8
                            int64_t rax_23 = *rax_2
                            *(rbx_3 + rax_23 + 8) ^= r8_5
                            rbx_3 += 0x10
                            rdx_6 = arg2[1].d
                            r8_1 = var_c8_1
                        while (rbp_1 s< rdx_6)
                        
                        rdi_2 = var_c0_1
                    
                    rdi_2 += 0x10
                    rbp = arg3
                    rax_15 = var_d8_1 + 2
                    r15_1 -= 0x10
                    var_d8_1 = rax_15
                    r12_1 -= 0x10
                    var_c0_1 = rdi_2
                    rcx_9 = rbp[1].d
                while (rax_15 s< rcx_9)
            
            sub_142890ce0(rax_2)
            
            if (sub_142972740(arg1, rax_2, arg4) != 0)
                result_1 = 1
    
    sub_1428d8a60(arg5)
    result = zx.q(result_1)
else
    result = sub_142973930(arg1, arg2, arg4, arg5)

__security_check_cookie(rax_1 ^ &var_f8)
return result
