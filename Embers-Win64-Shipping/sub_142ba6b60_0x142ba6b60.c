// 函数: sub_142ba6b60
// 地址: 0x142ba6b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg2
int32_t rbx
int32_t rdi

if (arg3 != 1)
    rdi = *(arg2 + 8)
    rbx = *(arg2 + 0xc)
else
    rdi = *(arg2 + 0x10)
    rbx = *(arg2 + 0x14)

arg1[0xb] = rdi
arg1[0xc] = rbx
arg1[0xd] = 0x80000000
arg1[0xe] = 0
int64_t rcx = sx.q(arg3) * 0x898
void* rax_1 = *(rcx + arg2 + 0x40)
int32_t rcx_1 = *(rcx + arg2 + 0x38)
void* rdx = *(arg2 + 0x20)
int64_t result = sx.q(*(rbp + 0x1c))
*arg4 = rdi
*arg5 = rbx

if (rcx_1 s>= 1)
    int32_t result_3 = sx.d(*(rdx + 0xc))
    int32_t result_2 = result_3
    
    if (result s> 1)
        void* rdx_1 = rdx + 0x3c
        int64_t i_5 = result - 1
        int32_t result_1
        int64_t i
        
        do
            result_1 = sx.d(*rdx_1)
            rdx_1 += 0x30
            result = zx.q(result_1)
            
            if (result_1 s>= result_2)
                result = zx.q(result_2)
            
            result_2 = result.d
            
            if (result_1 s<= result_3)
                result_1 = result_3
            
            result_3 = result_1
            i = i_5
            i_5 -= 1
        while (i != 1)
        
        if (result.d s< result_1)
            *arg1 = sub_142b93e80(result.d, rdi) + rbx
            int32_t rax_4 = sub_142b93e80(result_3, rdi)
            int32_t r10_1 = *arg1
            int32_t r11_2 = r10_1 & 0xffffffe0
            arg1[4] = r11_2
            int32_t rdx_4 = rax_4 + rbx
            arg1[1] = rdx_4
            arg1[2] = r10_1 & 0xffffffc0
            int32_t rcx_5 = rdx_4 & 0xffffffe0
            arg1[3] = (rdx_4 + 0x3f) & 0xffffffc0
            int32_t rax_9 = r11_2 + 0x20
            int32_t r9 = rcx_5 + 0x20
            
            if (rax_9 s> rdx_4)
                rax_9 = rdx_4
            
            arg1[7] = r9
            arg1[5] = rax_9
            
            if (rcx_5 s< r10_1)
                rcx_5 = r10_1
            
            uint64_t r8_3 = zx.q(rdx_4 - r10_1)
            arg1[6] = rcx_5
            arg1[8] = r8_3.d
            
            if (r8_3.d s<= 0x40)
                arg1[5] = r10_1
                arg1[6] = rdx_4
            
            int32_t r9_1 = r9 - r11_2
            int32_t i_4 = arg1[6] - arg1[5]
            int32_t rcx_6 = 0x10
            arg1[9] = i_4
            arg1[0xa] = r9_1
            
            if (r8_3.d s<= 0x80)
                rcx_6 = 8
                
                if (r8_3.d s<= 0x60)
                    rcx_6 = 4
            
            int32_t i_1 = i_4
            int32_t i_2 = r8_3.d - rcx_6
            
            if (i_4 s< i_2)
                i_1 = i_2
            
            int32_t rax_11 = r8_3.d + rcx_6
            int32_t rcx_7 = r9_1
            
            if (r9_1 s> rax_11)
                rcx_7 = rax_11
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q((r8_3 * 3).d)
            int32_t i_3 = (temp2_1 + (temp1_1 & 3)) s>> 2
            
            if (i_1 s< i_3)
                i_1 = i_3
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q((r8_3 * 5).d)
            arg1[9] = i_1
            int32_t rax_18 = (temp4_1 + (temp3_1 & 3)) s>> 2
            
            if (rcx_7 s> rax_18)
                rcx_7 = rax_18
            
            arg1[0xa] = rcx_7
            
            if (i_1 s<= rcx_7)
                int32_t r9_3 = result_3 - result_2
                int32_t var_58_1 = r9_3
                
                do
                    int32_t r8_4 = arg1[8]
                    int32_t rsi_1 = *arg1
                    int32_t rcx_8 = arg1[1]
                    int32_t rbx_2 = rsi_1 + r8_4 - i_1
                    int32_t rbp_1 = rcx_8
                    int32_t rdx_10
                    
                    if (i_1 s< r8_4)
                        rdx_10 = arg1[5]
                        
                        if (rbx_2 s> rdx_10)
                        label_142ba6d90:
                            int32_t rax_22 = rdx_10 - rbx_2
                            rbx_2 = rdx_10
                            rbp_1 += rax_22
                    else
                        rdx_10 = arg1[4]
                        
                        if (rbx_2 s< rdx_10)
                            goto label_142ba6d90
                    int32_t rsi_2
                    
                    if (rbx_2 s>= rsi_1)
                        rsi_2 = rbx_2 - rsi_1
                    else
                        rsi_2 = rsi_1 - rbx_2
                    
                    uint64_t rsi_3
                    
                    if (rbp_1 s>= rcx_8)
                        rsi_3 = zx.q(rsi_2 + rbp_1 - rcx_8)
                    else
                        rsi_3 = zx.q(rsi_2 + rcx_8 - rbp_1)
                    
                    int32_t rdi_1 = sub_142b91790(i_1 - r8_4, r9_3) + rdi
                    sub_142ba6e90(arg1, rdi_1, rbx_2 - sub_142b93e80(result_2, rdi_1), rbx_2, 
                        rbp_1, (rsi_3 * 5).d * 2, rax_1, rcx_1)
                    r9_3 = var_58_1
                    i_1 += 1
                while (i_1 s<= arg1[0xa])
                
                result_3 = result_1
                rbp = arg2
            
            int32_t rdi_2 = arg1[0xb]
            int32_t rsi_4 = arg1[0xc]
            int32_t rbx_4 = rdi_2 - rdi
            *(rbp + 0x1178) = sub_142b93e80(result_2, rbx_4) + rsi_4
            *(rbp + 0x117c) = sub_142b93e80(result_3, rbx_4) + rsi_4
            *arg4 = rdi_2
            result = arg5
            *result = rsi_4

return result
