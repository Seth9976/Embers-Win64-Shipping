// 函数: sub_142bdb8c0
// 地址: 0x142bdb8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rbx = *(arg1 + 8)
int32_t result_2 = 0
int64_t r12 = *(arg1 + 0x18)
uint64_t result = *(arg1 + 0x28)
void* r14_2 = (zx.q(*arg1) << 6) + rbx
int32_t r15 = *((sx.q(arg2) + 1) * 0xcc + result)
void* rdx_1 = rbx

if (rbx u< r14_2)
    do
        int32_t rcx = *(rdx_1 + 0x1c)
        result = zx.q(result_2 + 1)
        rdx_1 += 0x40
        
        if ((rcx & 0x10) == 0)
            result = zx.q(result_2)
        
        result_2 = result.d
    while (rdx_1 u< r14_2)
    
    if (result.d != 0)
        void* result_1
        
        if (result.d u> 0x10)
            int32_t var_c8
            result = sub_142b99a90(r12, 8, 0, result_2, 0, &var_c8)
            result_1 = result
            
            if (var_c8 == 0)
                goto label_142bdb98e
        else
            void var_b8
            result_1 = &var_b8
        label_142bdb98e:
            void* r9 = rbx
            uint64_t rbp_1 = 0
            
            do
                if ((*(r9 + 0x1c) & 0x10) != 0)
                    void* rcx_3 = result_1 + (rbp_1 << 3)
                    
                    if (rcx_3 u> result_1)
                        void* rdx_2
                        
                        do
                            void* r8_1 = *(rcx_3 - 8)
                            rdx_2 = rcx_3 - 8
                            
                            if (*(r8_1 + 0x30) s<= *(r9 + 0x30))
                                break
                            
                            *rcx_3 = r8_1
                            rcx_3 = rdx_2
                        while (rdx_2 u> result_1)
                    
                    *rcx_3 = r9
                    rbp_1 = zx.q(rbp_1.d + 1)
                
                r9 += 0x40
            while (r9 u< r14_2)
            
            int32_t* rsi_1 = rbx + 0x18
            int64_t i_1 = ((r14_2 - rbx - 1) u>> 6) + 1
            int64_t i
            
            do
                char rcx_4 = (rsi_1[1]).b
                
                if ((rcx_4 & 0x10) == 0)
                    int32_t rax_5 = *rsi_1
                    
                    if ((rax_5.b & 2) == 0)
                        goto label_142bdba2a
                    
                    char rdx_3 = rsi_1[2].b
                    
                    if (rdx_3 != 4 && rdx_3 == *(rsi_1 + 9)
                            && ((rcx_4 & 0x40) != 0 || (rax_5.b & 4) != 0))
                        *rsi_1 = rax_5 & 0xfffffffd
                    label_142bdba2a:
                        uint64_t rax_7 = 0
                        int32_t j
                        
                        if (rbp_1.d != 0)
                            j = rsi_1[6]
                            
                            while (*(*(result_1 + (rax_7 << 3)) + 0x30) s<= j)
                                rax_7 = zx.q(rax_7.d + 1)
                                
                                if (rax_7.d u>= rbp_1.d)
                                    break
                        
                        int32_t rax_11
                        void* rbx_1
                        
                        if (rbp_1.d == 0 || rax_7.d == 0)
                            rbx_1 = *result_1
                            rax_11 =
                                sub_142b93e80(rsi_1[6] - *(rbx_1 + 0x30), r15) + *(rbx_1 + 0x38)
                        else
                            int32_t rdx_5 = rbp_1.d
                            rbx_1 = *(result_1 + (zx.q(rax_7.d - 1) << 3))
                            
                            if (rbp_1.d != 0)
                                uint64_t r8_2
                                
                                do
                                    r8_2 = zx.q(rdx_5 - 1)
                                    
                                    if (*(*(result_1 + (r8_2 << 3)) + 0x30) s< j)
                                        break
                                    
                                    rdx_5 = r8_2.d
                                while (r8_2.d != 0)
                            
                            if (rbp_1.d == 0 || rdx_5 == rbp_1.d)
                                rbx_1 = *(result_1 + (zx.q(rdx_5 - 1) << 3))
                                rax_11 = sub_142b93e80(j - *(rbx_1 + 0x30), r15) + *(rbx_1 + 0x38)
                            else
                                void* rcx_6 = *(result_1 + (zx.q(rdx_5) << 3))
                                int32_t rax_10 = *(rbx_1 + 0x30)
                                
                                if (j != rax_10)
                                    int32_t r8_3 = *(rcx_6 + 0x30)
                                    
                                    if (j != r8_3)
                                        rax_11 = sub_142b93dd0(j - rax_10, 
                                            *(rcx_6 + 0x38) - *(rbx_1 + 0x38), r8_3 - rax_10)
                                            + *(rbx_1 + 0x38)
                                    else
                                        rax_11 = *(rcx_6 + 0x38)
                                else
                                    rax_11 = *(rbx_1 + 0x38)
                        rsi_1[1] |= 0x20
                        rsi_1[8] = rax_11
                
                rsi_1 = &rsi_1[0x10]
                i = i_1
                i_1 -= 1
            while (i != 1)
            result = &var_b8
            
            if (result_1 != &var_b8)
                result = sub_142b99980(r12, result_1)

__security_check_cookie(rax_1 ^ &var_f8)
return result
