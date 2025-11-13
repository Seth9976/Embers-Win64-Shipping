// 函数: sub_14184e0e0
// 地址: 0x14184e0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
uint64_t var_40 = __security_cookie ^ &var_e8
void* r15 = arg2
uint64_t result

if ((*(arg1 + 0x29) & 1) == 0)
    uint64_t rsi
    rsi.b = 1
    
    if ((arg1[5].b & 2) == 0 || arg3 s>= 0xe)
        int64_t rax_2 = (*(*arg1 + 0x20))()
        int32_t var_68 = arg3
        int64_t r13_1 = rax_2
        int32_t var_60 = 0
        int64_t var_54
        __builtin_memset(&var_54, 0, 0x14)
        int32_t var_64_1 = 0
        int32_t var_5c_1 = 0
        char var_58_1 = 0
        int32_t rcx_1
        int32_t r8_1
        
        if ((arg1[5].b & 1) != 0)
            sub_141825e10(arg1, &var_68, arg4)
            rsi.b = not.b(*(arg1 + 0x29))
            rsi.b &= 1
            rcx_1 = var_5c_1
            r8_1 = var_60
        
        char* var_80
        char* rcx_6
        
        if ((arg1[5].b & 1) != 0 && (arg1[5].b & 1) != 0 && var_68 s< 0xe)
            var_80 = nullptr
            int32_t var_74_1 = 0
            
            if ((var_58_1 & 1) != 0)
                rcx_1 = r8_1
            
            int32_t rbx_2 = rcx_1 + var_64_1
            int32_t var_78_1 = rbx_2
            
            if (rbx_2 s> 0)
                sub_1405daba0(&var_80)
            
            (*(*arg1 + 0x178))(arg1, r13_1)
            (*(*arg1 + 0x150))(arg1, var_80, zx.q(rbx_2))
            char rax_7 = sub_14188b400(&var_80, r15, arg4)
            rcx_6 = var_80
            rsi = zx.q(rax_7)
            *(r15 + 0x2b0) = 1
            goto label_14184e684
        
        int32_t var_98
        int32_t* rax_8
        int512_t zmm1
        rax_8, zmm1 = sub_140b5e500(&var_98, 0x101)
        var_98 = *rax_8
        int32_t var_94_1 = 0
        char* var_a8 = nullptr
        int32_t var_a0_1 = 0
        
        if (rsi.b != 0)
            if ((arg1[5].b & 1) != 0)
                int32_t rcx_9 = var_60
                var_a0_1 = rcx_9
                
                if (rcx_9 s> 0)
                    sub_1405daba0(&var_a8)
                    rcx_9 = var_60
                
                (*(*arg1 + 0x150))(arg1, var_a8, zx.q(rcx_9))
                rsi.b = not.b(*(arg1 + 0x29))
                rsi.b &= 1
            
            if (rsi.b != 0)
                int64_t rdi_1 = var_98.q
                
                if ((arg1[5].b & 1) != 0 && (var_58_1 & 1) != 0)
                    int32_t r8_4 = var_5c_1
                    int128_t* rdx_8 = nullptr
                    char* rbx_3 = var_a8
                    int32_t rsi_1 = var_a0_1
                    var_a8 = nullptr
                    var_a0_1 = 0
                    var_a0_1 = r8_4
                    
                    if (r8_4 s> 0)
                        sub_1405daba0(&var_a8)
                        r8_4 = var_a0_1
                        rdx_8 = var_a8
                    
                    int32_t var_b8_1 = 0
                    char rax_10
                    rax_10, zmm1 = sub_140b02330(rdi_1, rdx_8, r8_4, rbx_3, rsi_1, 0x10)
                    rsi = zx.q(rax_10)
                    
                    if (rbx_3 != 0)
                        zmm1 = sub_140a74f90(rbx_3)
                
                if (rsi.b != 0)
                    if ((arg1[5].b & 1) != 0)
                        char* rcx_15 = var_a8
                        __builtin_memset(&var_80, 0, 0x14)
                        zmm1 = sub_140b3f690(rcx_15, sx.q(var_a0_1), &var_80)
                        char* rcx_16 = var_80
                        uint64_t rcx_17 = rcx_16 - var_54
                        
                        if (rcx_16 == var_54)
                            int32_t var_78
                            int64_t rcx_18 = var_78.q
                            int64_t var_4c
                            rcx_17 = rcx_18 - var_4c
                            int32_t var_70
                            int32_t var_44
                            
                            if (rcx_18 == var_4c)
                                rcx_17 = zx.q(var_70) - zx.q(var_44)
                        
                        rsi.b = rcx_17 == 0
                    
                    if (rsi.b != 0)
                        char rsi_2 = arg1[5].b
                        int64_t* rax_12 = j_sub_140a82f30(0xa8)
                        int64_t* rbx_4 = rax_12
                        
                        if ((rsi_2 & 1) == 0)
                            if (rbx_4 == 0)
                                rbx_4 = nullptr
                            else
                                var_98.q = 0
                                memset(rbx_4, 0, 0x90)
                                sub_140b4c2a0(rbx_4)
                                rbx_4[0x12] = 0
                                *rbx_4 = &data_142d6ad48
                                rbx_4[0x13] = &var_a8
                                rbx_4[0x14] = 0
                                sub_140b552b0(rbx_4, 1)
                                (*(*rbx_4 + 0xd8))(rbx_4, 0)
                        else if (rax_12 == 0)
                            rbx_4 = nullptr
                        else
                            memset(rax_12, 0, 0x90)
                            sub_140b4c2a0(rbx_4)
                            rbx_4[0x12] = 0
                            *rbx_4 = &data_142d6b230
                            rbx_4[0x13] = &var_a8
                            rbx_4[0x14] = 0x7fffffffffffffff
                            sub_140b55290(rbx_4, 1)
                            (*(*rbx_4 + 0xd8))(rbx_4, 0)
                        
                        int512_t zmm1_1 = sub_1418260c0(rbx_4, r15 + 8, zmm1)
                        sub_141824340(rbx_4, r15 + 0xe8, zmm1_1)
                        void* r12_1 = r15 + 0xf8
                        var_98.q = r12_1
                        sub_141825690(rbx_4, r12_1, zmm1_1)
                        int512_t zmm1_2 = sub_1418250a0(rbx_4, r15 + 0x108)
                        rsi.b = not.b(*(rbx_4 + 0x29))
                        char rdx_16 = (**rbx_4)(rbx_4, 1)
                        rsi.b &= 1
                        
                        if (rsi.b != 0)
                            if ((arg1[5].b & 2) != 0)
                                char* rcx_33 = var_a8
                                __builtin_memset(&var_80, 0, 0x14)
                                rdx_16, zmm1_2 = sub_140b3f690(rcx_33, sx.q(var_a0_1), &var_80)
                                int32_t var_70_1
                                int32_t var_44_1 = var_70_1
                                var_54.o = var_80.o
                                
                                if ((arg1[5].b & 2) != 0)
                                    int32_t rax_19 = var_a0_1
                                    char* r15_1 = nullptr
                                    int32_t r12_2 = 0
                                    var_80 = nullptr
                                    int32_t var_74_2 = 0
                                    int32_t rbx_5 = rax_19
                                    int32_t var_5c_2 = rax_19
                                    var_60 = rax_19
                                    int32_t var_78_2 = rax_19
                                    
                                    if (rax_19 s> 0)
                                        sub_1405daba0(&var_80)
                                        rax_19 = var_a0_1
                                        r12_2 = var_74_2
                                        rbx_5 = var_78_2
                                        r15_1 = var_80
                                    
                                    int32_t var_b8_2 = 0
                                    char rax_20
                                    rax_20, rdx_16, zmm1_2 =
                                        sub_140aecc20(rdi_1, r15_1, &var_60, var_a8, rax_19, 0x10)
                                    
                                    if (rax_20 == 0)
                                        var_60 = var_a0_1
                                        char var_58_3 = 0
                                        
                                        if (r15_1 != 0)
                                            rdx_16, zmm1_2 = sub_140a74f90(r15_1)
                                    else
                                        int32_t rdi_2 = var_60
                                        
                                        if (rdi_2 s<= rbx_5)
                                            int64_t rdi_4 = sx.q(var_60)
                                            
                                            if (rdi_4.d s< rbx_5)
                                                int32_t rax_22 = rbx_5 - rdi_4.d
                                                
                                                if (rbx_5 != rdi_4.d)
                                                    rbx_5 -= rax_22
                                                    
                                                    if (rbx_5 != rdi_4.d)
                                                        rdx_16 = memmove(&r15_1[rdi_4], 
                                                            &r15_1[sx.q(rax_22 + rdi_4.d)], 
                                                            rbx_5 - rdi_4.d)
                                        else
                                            int32_t rdi_3 = rdi_2 - rbx_5
                                            int64_t r13_2 = sx.q(rbx_5)
                                            rbx_5 = rdi_3 + r13_2.d
                                            
                                            if (rbx_5 s> r12_2)
                                                sub_1405daba0(&var_80)
                                                r12_2 = var_74_2
                                                r15_1 = var_80
                                            
                                            rdx_16 = memset(&r15_1[r13_2], 0, sx.q(rdi_3))
                                            r13_1 = rax_2
                                        
                                        char* rcx_41 = var_a8
                                        
                                        if (rcx_41 != 0)
                                            rdx_16, zmm1_2 = sub_140a74f90(rcx_41)
                                        
                                        var_a8 = r15_1
                                        var_a0_1 = rbx_5
                                        var_a0_1 = r12_2
                                        char var_58_2 = 1
                                    
                                    r15 = arg2
                                    r12_1 = var_98.q
                            
                            if ((arg1[5].b & 2) != 0)
                                (*(*arg1 + 0x178))(arg1, r13_1)
                                sub_141825e10(arg1, &var_68, zmm1_2)
                                (*(*arg1 + 0x150))(arg1, var_a8, sx.q(var_a0_1))
                                rdx_16 = (*(*arg1 + 0x1b0))(arg1)
                                rsi.b = not.b(*(arg1 + 0x29))
                                rsi.b &= 1
                            
                            if (rsi.b != 0 && (arg1[5].b & 1) != 0)
                                sub_141845210(r12_1, rdx_16)
                                sub_141840c70(r15)
            
            rcx_6 = var_a8
        label_14184e684:
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
        
        uint64_t rbx_7 = zx.q(var_60) + zx.q(var_64_1) + r13_1
        
        if (rsi.b != 0)
            if ((*(*arg1 + 0x20))(arg1) != rbx_7)
                (*(*arg1 + 0x178))(arg1, rbx_7)
            
            goto label_14184e6cc
        
        result.b = 0
        *(arg1 + 0x29) |= 1
    else
        rsi = zx.q(sub_1418959d0(arg1, arg2).b)
    label_14184e6cc:
        
        if (rsi.b == 0 || (*(arg1 + 0x29) & 1) != 0)
            result.b = 0
            *(arg1 + 0x29) |= 1
        else
            result.b = 1
else
    result.b = 0

__security_check_cookie(var_40 ^ &var_e8)
return result
