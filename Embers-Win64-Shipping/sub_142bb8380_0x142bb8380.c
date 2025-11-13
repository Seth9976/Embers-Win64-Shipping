// 函数: sub_142bb8380
// 地址: 0x142bb8380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void* r14 = *(arg1 + 0x2e0)
int32_t r12 = arg2
int32_t result

if (r14 != 0)
    uint64_t rax_2 = zx.q(*(r14 + 4))
    
    if (r12 u> rax_2.d)
        r12 = rax_2.d
    
    uint64_t rbx_1 = 0
    int32_t var_88[0x10]
    
    if (rax_2.d != 0)
        do
            int32_t r9_1 = -1
            int64_t rax_4 = (rbx_1 + 7) * 3
            int32_t rbp_1 = -1
            int32_t* rsi_1 = *(r14 + (rax_4 << 3) + 8)
            void* r8 = r14 + (rax_4 << 3)
            int32_t* r11_1 = *(r8 + 0x10)
            int32_t r10_1
            
            if (rbx_1.d u>= r12)
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rsi_1[sx.q(zx.d(*r8) - 1)] - *rsi_1)
                r10_1 = (temp1_1 - temp0_1) s>> 1
            else
                r10_1 = *(arg3 + (rbx_1 << 2))
            
            uint32_t i = zx.d(*r8)
            uint64_t rcx_1 = 0
            
            if (i != 0)
                int32_t* rdx_1 = rsi_1
                
                do
                    int32_t r8_1 = *rdx_1
                    
                    if (r10_1 == r8_1)
                        goto label_142bb8469
                    
                    if (r10_1 s< r8_1)
                        rbp_1 = rcx_1.d
                        break
                    
                    r9_1 = rcx_1.d
                    rdx_1 = &rdx_1[1]
                    rcx_1 = zx.q(rcx_1.d + 1)
                while (rcx_1.d u< i)
            
            if (i == 0 || r9_1 s< 0)
                rax_2 = zx.q(*r11_1)
            else if (rbp_1 s>= 0)
                int32_t* rcx_2 = sx.q(rbp_1) << 2
                int64_t rax_14 = sx.q(r9_1)
                rax_2 = sub_142b93dd0(r10_1 - rsi_1[rax_14], *(rcx_2 + r11_1) - r11_1[rax_14], 
                    *(rcx_2 + rsi_1) - rsi_1[rax_14])
            else
                rcx_1 = sx.q(i - 1)
            label_142bb8469:
                rax_2 = zx.q(r11_1[rcx_1])
            
            var_88[rbx_1] = rax_2.d
            rbx_1 = zx.q(rbx_1.d + 1)
        while (rbx_1.d u< *(r14 + 4))
    
    result = sub_142bbbd60(arg1, *(r14 + 4), &var_88, rax_2)
    
    if (result == 0)
        if (r12 == 0)
            *(arg1 + 8) &= 0xffff7fff
        else
            *(arg1 + 8) |= 0x8000
        
        result = 0
else
    result = (r14 + 6).d

__security_check_cookie(rax_1 ^ &var_a8)
return result
