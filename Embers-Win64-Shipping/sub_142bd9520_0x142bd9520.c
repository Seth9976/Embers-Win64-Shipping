// 函数: sub_142bd9520
// 地址: 0x142bd9520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
uint64_t result

if (arg2[1] == 0 || *arg2 == 0)
    result = 0
else
    int32_t j_2
    int32_t result_1 = sub_142bdb510(&j_2, arg2, arg1, arg3)
    
    if (result_1 == 0)
        void* var_100
        int32_t rdi_1 = *(var_100 + 0xcc)
        int64_t r12
        r12.b = 0
        int32_t r13_1 = *(var_100 + 0x198)
        int32_t var_138_1 = rdi_1
        int32_t rax_2 = sub_142b93e80(*(arg3 + 0x1a4), r13_1)
        int32_t rbx_2 = (rax_2 + 0x20) & 0xffffffc0
        
        if (rbx_2 != 0 && rax_2 != rbx_2)
            r12.b = 1
            uint32_t rax_3 = sub_142b93dd0(r13_1, rbx_2, rax_2)
            
            if (rbx_2 s< rax_2)
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = muls.dp.d(0xae147ae1, rdi_1)
                int32_t rdx_3 = temp0_1 s>> 4
                rdi_1 += rdx_3 + (rdx_3 u>> 0x1f)
            
            sub_142bdada0(var_100, rdi_1, rax_3, 0, 0)
        
        int32_t j_1 = j_2
        int16_t var_5c_1 = 0x101
        bool var_5a_1 = arg4 - 2 u<= 1
        bool var_59_1 = ((arg4 - 2) & 0xfffffffd) == 0
        bool var_58_1 = arg4 != 1
        
        for (int32_t i = 0; i s< 2; i += 1)
            void* var_108
            int32_t* rdx_6 = *(var_108 + 8)
            void* var_120
            
            if (j_1 != 0)
                void* rax_9 = var_120 + 0x30
                int32_t j
                
                do
                    *(rax_9 - 0x14) = 0
                    *(rax_9 - 8) = 0
                    int32_t rcx_8
                    
                    if (i != 0)
                        *rax_9 = rdx_6[1]
                        rcx_8 = *rdx_6
                    else
                        *rax_9 = *rdx_6
                        rcx_8 = rdx_6[1]
                    
                    *(rax_9 + 4) = rcx_8
                    rdx_6 = &rdx_6[2]
                    rax_9 += 0x40
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            sub_142bdae30(&j_2)
            void var_f8
            sub_142bdc2a0(&var_f8 + sx.q(i) * 0x48, var_100, i, &j_2)
            sub_142bdb360(&j_2, i)
            
            if (i == 1)
                sub_142bdb230(&arg3[0x34], &j_2)
            
            sub_142bdbd80(&j_2, i)
            sub_142bdb8c0(&j_2, i)
            sub_142bdbb40(&j_2, i)
            int32_t rdx_13 = 0
            j_1 = j_2
            int64_t r9_2 = *(var_108 + 8)
            int64_t r10_1 = *(var_108 + 0x10)
            
            if (j_1 != 0)
                void* rcx_19 = var_120 + 0x38
                
                do
                    int32_t rax_12 = *rcx_19
                    uint64_t r8_4 = zx.q(rdx_13)
                    
                    if (i != 0)
                        *(r9_2 + (r8_4 << 3) + 4) = rax_12
                    else
                        *(r9_2 + (r8_4 << 3)) = rax_12
                    
                    if ((*(rcx_19 - 0x1c) & 0x10) != 0)
                        char rax_13 = 0x40
                        
                        if (i == 0)
                            rax_13 = 0x20
                        
                        *(r8_4 + r10_1) |= rax_13
                    
                    j_1 = j_2
                    rcx_19 += 0x40
                    rdx_13 += 1
                while (rdx_13 u< j_1)
            
            if (r12.b != 0)
                sub_142bdada0(var_100, var_138_1, r13_1, 0, 0)
                j_1 = j_2
    
    sub_142bdb140(&j_2)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_168)
return result
