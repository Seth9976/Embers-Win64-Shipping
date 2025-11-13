// 函数: sub_142bdb510
// 地址: 0x142bdb510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg3
memset(arg1, 0, 0xd8)
int64_t r14 = *arg4
*(arg1 + 0x18) = r14
int32_t result_1
*(arg1 + 8) = sub_142b99a90(r14, 0x40, 0, sx.d(arg2[1]), 0, &result_1)
int32_t result = result_1

if (result == 0)
    int64_t* rax_1 = sub_142b99a90(r14, 0x10, 0, sx.d(*arg2), 0, &result_1)
    int64_t* rdx = rax_1
    *(arg1 + 0x10) = rax_1
    result = result_1
    
    if (result == 0)
        int32_t i = 0
        int64_t rbx_1 = *(arg1 + 8)
        *arg1 = sx.d(arg2[1])
        int32_t rcx_3 = sx.d(*arg2)
        arg1[1] = rcx_3
        uint64_t r11_1 = 0
        
        if (rcx_3 != 0)
            do
                int32_t r9_3 = sx.d(*(*(arg2 + 0x18) + (zx.q(i) << 1))) + 1
                int32_t r8_1 = r9_3 - r11_1.d
                int64_t* r11_3 = (r11_1 << 6) + rbx_1
                rdx[1].d = r8_1
                *rdx = r11_3
                
                if (r8_1 != 0)
                    void* rax_3 = r11_3
                    r11_3[2] = rdx
                    *r11_3 = (zx.q(r9_3) << 6) - 0x40 + rbx_1
                    
                    if (r8_1 u> 1)
                        uint64_t j_1 = zx.q(r8_1 - 1)
                        uint64_t j
                        
                        do
                            *(rax_3 + 0x40) = rax_3
                            void* rcx_9 = rax_3 + 0x40
                            *(rax_3 + 8) = rcx_9
                            rax_3 = rcx_9
                            *(rcx_9 + 0x10) = rdx
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    *(rax_3 + 8) = r11_3
                
                rdx = &rdx[2]
                r11_1 = zx.q(r9_3)
                i += 1
            while (i u< arg1[1])
        
        int32_t i_1 = 0
        void* rax_4 = *(arg1 + 8)
        int64_t rcx_10 = *(arg2 + 8)
        void* var_58_1 = rax_4
        
        if (*arg1 u> 0)
            int32_t* rbx_2 = rax_4 + 0x18
            
            do
                uint64_t i_3 = zx.q(i_1)
                int32_t rcx_13 = ((*(rbx_2 - 0x18) - rax_4) s>> 6).d
                int32_t r8_4 = ((*(rbx_2 - 0x10) - rax_4) s>> 6).d
                
                if ((*(i_3 + *(arg2 + 0x10)) & 1) == 0)
                    *rbx_2 = 1
                
                int64_t rax_6 = sx.q(rcx_13)
                int32_t* r14_2 = (i_3 << 3) + rcx_10
                char r9_4 = 4
                int32_t r12_2 = *r14_2 - *(rcx_10 + (rax_6 << 3))
                int32_t r13_2 = r14_2[1] - *(rcx_10 + (rax_6 << 3) + 4)
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(r12_2)
                uint64_t r10_3 = zx.q((temp2_1 ^ temp1_1) - temp1_1)
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(r13_2)
                uint64_t r11_6 = zx.q((temp4_1 ^ temp3_1) - temp3_1)
                
                if ((r11_6 * 3).d << 2 s< r10_3.d)
                    r9_4 = ((r12_2 s>> 0x1f).b & 0xfc) + 2
                else if ((r10_3 * 3).d << 2 s< r11_6.d)
                    r9_4 = ((r13_2 s>> 0x1f).b & 2) - 1
                
                int64_t rax_13 = sx.q(r8_4)
                char r8_5 = 4
                rbx_2[2].b = r9_4
                int32_t r11_8 = *(rcx_10 + (rax_13 << 3)) - *r14_2
                int32_t rbp_3 = *(rcx_10 + (rax_13 << 3) + 4) - r14_2[1]
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(r11_8)
                uint64_t r10_6 = zx.q((temp7_1 ^ temp6_1) - temp6_1)
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(rbp_3)
                uint64_t r14_5 = zx.q((temp9_1 ^ temp8_1) - temp8_1)
                
                if ((r14_5 * 3).d << 2 s< r10_6.d)
                    r8_5 = ((r11_8 s>> 0x1f).b & 0xfc) + 2
                else if ((r10_6 * 3).d << 2 s< r14_5.d)
                    r8_5 = ((rbp_3 s>> 0x1f).b & 2) - 1
                
                int32_t rax_20 = *rbx_2
                *(rbx_2 + 9) = r8_5
                
                if ((rax_20.b & 1) != 0)
                    *rbx_2 = rax_20 | 2
                else if (r9_4 == r8_5)
                    int32_t rax_22
                    
                    if (r8_5 == 4)
                        rax_22 = sub_142b989d0(r12_2, r13_2, r11_8, rbp_3)
                    
                    if (r8_5 != 4 || rax_22 != 0)
                        *rbx_2 |= 2
                
                rax_4 = var_58_1
                i_1 += 1
                rbx_2 = &rbx_2[0x10]
            while (i_1 u< *arg1)
            
            rbp = arg3
        
        int32_t i_4 = *arg1
        void* rcx_19 = *(arg1 + 8)
        *(arg1 + 0x28) = arg4
        *(arg1 + 0x20) = arg2
        void* rdx_6 = *(arg2 + 8)
        
        if (i_4 != 0)
            int64_t* rcx_20 = rcx_19 + 0x28
            int32_t i_2
            
            do
                *(rcx_20 - 0xc) = 0
                rdx_6 += 8
                *rcx_20 = 0
                rcx_20 = &rcx_20[8]
                rcx_20[-7].d = *(rdx_6 - 8)
                *(rcx_20 - 0x34) = *(rdx_6 - 4)
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        sub_142bdaf70(arg1)
        result = sub_142bdc890(&arg1[0xc], rbp + 0x18, rbp + 0x28, rbp + 0x38, r14)
        result_1 = result
        
        if (result == 0)
            return sub_142bdc890(&arg1[0x1e], rbp + 0x48, rbp + 0x58, rbp + 0x68, r14)

return result
