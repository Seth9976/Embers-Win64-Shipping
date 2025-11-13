// 函数: sub_14262d620
// 地址: 0x14262d620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t var_118 = 0x10
int64_t* rdx = *(arg1 + 0x48)
int64_t rbx = 0
int32_t var_104 = 0
int32_t var_e8
void var_d8
uint8_t result

if ((sub_142612a90(arg3, *rdx, arg1, arg2, arg4, &var_e8, &var_d8, &var_104, var_118) u>> 0x1f).b
        == 0)
    int64_t rcx_1 = sx.q(var_104)
    int32_t r10_1 = -1
    int32_t r11_1 = -1
    int32_t r12_1 = arg1[5].d
    int64_t r15_1 = *(arg1 + 0x48)
    int32_t r9_1 = r12_1 - 1
    
    if (r9_1 s>= 0)
        int32_t rcx_2 = rcx_1.d - 1
        int32_t var_fc_1 = rcx_2
        int64_t* r14_1 = r15_1 + (sx.q(r9_1) << 3)
        int32_t temp0_1
        
        do
            char r8_1 = 0
            int32_t rdx_2 = rcx_2
            
            if (rcx_2 s>= 0)
                int64_t rdi_1 = *r14_1
                void* rsi_1 = &var_158 + (rcx_1 << 3) + 0x78
                int32_t temp3_1
                
                do
                    int64_t temp1_1 = *rsi_1
                    rsi_1 -= 8
                    int32_t rax_5 = rdx_2
                    
                    if (rdi_1 != temp1_1)
                        rax_5 = r11_1
                    
                    if (rdi_1 == temp1_1)
                        r8_1 = 1
                    
                    r11_1 = rax_5
                    int32_t rax_6 = r9_1
                    
                    if (rdi_1 != temp1_1)
                        rax_6 = r10_1
                    
                    temp3_1 = rdx_2
                    rdx_2 -= 1
                    r10_1 = rax_6
                while (temp3_1 - 1 s>= 0)
                
                if (r8_1 != 0)
                    break
                
                rcx_2 = var_fc_1
            
            r14_1 -= 8
            temp0_1 = r9_1
            r9_1 -= 1
        while (temp0_1 - 1 s>= 0)
        
        if (r10_1 != 0xffffffff && r11_1 != 0xffffffff)
            int32_t rcx_3 = r12_1
            int32_t rdx_4 = rcx_1.d - r11_1
            int64_t rdi_2 = sx.q(rdx_4)
            
            if (r10_1 + 1 s< r12_1)
                rcx_3 = r10_1 + 1
            
            int32_t r12_2 = r12_1 - rcx_3
            
            if (r12_1 - rcx_3 s< 0)
                r12_2 = 0
            
            int32_t rsi_3 = *(arg1 + 0x54) - rdx_4
            
            if (r12_2 + rdx_4 s<= *(arg1 + 0x54))
                rsi_3 = r12_2
            
            if (rsi_3 != 0)
                memmove(r15_1 + (rdi_2 << 3), r15_1 + (sx.q(rcx_3) << 3), rsi_3 << 3)
            
            if (rdi_2 s> 0)
                void* rcx_5 = &var_158 + (rcx_1 << 3) + 0x78
                
                do
                    int64_t rax_10 = *rcx_5
                    rcx_5 -= 8
                    *(r15_1 + (rbx << 3)) = rax_10
                    rbx += 1
                while (rbx s< rdi_2)
            
            r12_1 = rsi_3 + rdx_4
    
    int64_t* rdx_6 = *(arg1 + 0x48)
    arg1[5].d = r12_1
    float var_100 = *(arg1 + 4)
    sub_142610360(arg3, *rdx_6, &var_e8, &var_100)
    result = 1
    float zmm1_1 = var_100
    *arg1 = var_e8
    int32_t var_e0
    *(arg1 + 8) = var_e0
    *(arg1 + 4) = zmm1_1
else
    result = 0

__security_check_cookie(rax_1 ^ &var_158)
return result
