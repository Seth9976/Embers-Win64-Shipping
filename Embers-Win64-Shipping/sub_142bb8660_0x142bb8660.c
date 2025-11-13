// 函数: sub_142bb8660
// 地址: 0x142bb8660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t i_3 = 4

if (arg2 u<= 4)
    i_3 = arg2

int32_t var_88[0x4]

if (i_3 != 0)
    uint64_t i_2 = zx.q(i_3)
    int32_t (* rbx_1)[0x4] = &var_88
    uint64_t i
    
    do
        *rbx_1 = sub_142b96160(*(arg3 - &var_88 + rbx_1)) s>> 0x10
        rbx_1 = &(*rbx_1)[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

void* r14 = *(arg1 + 0x2e0)
int32_t result

if (r14 != 0)
    uint64_t rax_4 = zx.q(*(r14 + 4))
    
    if (i_3 u> rax_4.d)
        i_3 = rax_4.d
    
    uint64_t rbx_2 = 0
    int32_t var_78[0x10]
    
    if (rax_4.d != 0)
        do
            int32_t r9_1 = -1
            int64_t rax_6 = (rbx_2 + 7) * 3
            int32_t rbp_1 = -1
            int32_t* rsi_2 = *(r14 + (rax_6 << 3) + 8)
            void* r8 = r14 + (rax_6 << 3)
            int32_t* r11_1 = *(r8 + 0x10)
            int32_t r10_1
            
            if (rbx_2.d u>= i_3)
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(rsi_2[sx.q(zx.d(*r8) - 1)] - *rsi_2)
                r10_1 = (temp2_1 - temp1_1) s>> 1
            else
                r10_1 = var_88[rbx_2]
            
            uint32_t i_1 = zx.d(*r8)
            uint64_t rcx_2 = 0
            
            if (i_1 != 0)
                int32_t* rdx_1 = rsi_2
                
                do
                    int32_t r8_1 = *rdx_1
                    
                    if (r10_1 == r8_1)
                        goto label_142bb8779
                    
                    if (r10_1 s< r8_1)
                        rbp_1 = rcx_2.d
                        break
                    
                    r9_1 = rcx_2.d
                    rdx_1 = &rdx_1[1]
                    rcx_2 = zx.q(rcx_2.d + 1)
                while (rcx_2.d u< i_1)
            
            if (i_1 == 0 || r9_1 s< 0)
                rax_4 = zx.q(*r11_1)
            else if (rbp_1 s>= 0)
                int32_t* rcx_3 = sx.q(rbp_1) << 2
                int64_t rax_16 = sx.q(r9_1)
                rax_4 = sub_142b93dd0(r10_1 - rsi_2[rax_16], *(rcx_3 + r11_1) - r11_1[rax_16], 
                    *(rcx_3 + rsi_2) - rsi_2[rax_16])
            else
                rcx_2 = sx.q(i_1 - 1)
            label_142bb8779:
                rax_4 = zx.q(r11_1[rcx_2])
            
            var_78[rbx_2] = rax_4.d
            rbx_2 = zx.q(rbx_2.d + 1)
        while (rbx_2.d u< *(r14 + 4))
    
    result = sub_142bbbd60(arg1, *(r14 + 4), &var_78, rax_4)
    
    if (result == 0)
        if (i_3 == 0)
            *(arg1 + 8) &= 0xffff7fff
        else
            *(arg1 + 8) |= 0x8000
        
        result = 0
else
    result = (r14 + 6).d

__security_check_cookie(rax_1 ^ &var_a8)
return result
