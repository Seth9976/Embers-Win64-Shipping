// 函数: sub_142b059a0
// 地址: 0x142b059a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x10)
void* r13 = nullptr
uint64_t r15
r15.b = 0
int64_t arg_10 = rdi
void* result

if (*arg2 s<= 0)
    while (true)
        int64_t r12_1 = *(arg1 + 0x18)
        void* rbp_1 = *(arg1 + 0x10)
        
        if (r12_1 u> rbp_1 && *(arg1 + 0x28) u> *(arg1 + 0x20))
            void* rdx = *(arg1 + 8)
            char rax_2 = *(rdx + 0x40)
            int16_t rdx_4
            
            if (rax_2 == 0)
                r13 = rbp_1
                rdx_4 = sub_142b05e90(arg1, arg2)
                r15.b = *(arg1 + 0x10) - rbp_1.b
            else
                int64_t rsi_1 = sx.q(rax_2)
                void* rdi_2 = r12_1 - rbp_1
                
                if (3 - rsi_1 u< rdi_2)
                    rdi_2 = 3 - rsi_1
                
                void arg_8
                memcpy(&arg_8, rdx + 0x41, rsi_1.d)
                memcpy(&arg_8 + rsi_1, rbp_1, rdi_2.d)
                *(arg1 + 0x10) = &arg_8
                r13 = &arg_8
                *(arg1 + 0x18) = &arg_8 + rdi_2 + rsi_1
                r15 = zx.q((rdi_2 + rsi_1).d)
                int16_t rax_5 = sub_142b05e90(arg1, arg2)
                *(arg1 + 0x18) = r12_1
                rdx_4 = rax_5
                *(arg1 + 0x10) += rbp_1 - rsi_1 - &arg_8
                
                if (*arg2 == 0xb)
                    *(*(arg1 + 8) + 0x40) = r15.b
                    memcpy(*(arg1 + 8) + 0x41, &arg_8, sx.d(r15.b))
                    result = *(arg1 + 0x18)
                    *(arg1 + 0x10) = result
                    goto label_142b05b86
                
                rdi = arg_10
                *(*(arg1 + 8) + 0x40) = 0
            
            if (*arg2 s> 0)
                goto label_142b05b5f
            
            if (rdx_4 u>= 0xfffe)
                int32_t rax_9 = 0xc
                
                if (rdx_4 == 0xfffe)
                    rax_9 = 0xa
                
                *arg2 = rax_9
            else
                **(arg1 + 0x20) = rdx_4
                *(arg1 + 0x20) += 2
                int32_t* rax_8 = *(arg1 + 0x30)
                
                if (rax_8 != 0)
                    *rax_8 = rbp_1.d - rdi.d
                    *(arg1 + 0x30) += 4
            
            if (*arg2 s<= 0)
                continue
        
        if (*arg2 s> 0)
            break
        
        result = *(arg1 + 0x10)
        
        if (*(arg1 + 0x18) u> result)
            result = *(arg1 + 0x20)
            
            if (*(arg1 + 0x28) u<= result)
                *arg2 = 0xf
        
        return result

label_142b05b5f:
result = *(arg1 + 8)
*(result + 0x40) = r15.b

if (r15.b s> 0)
    result = memcpy(*(arg1 + 8) + 0x41, r13, sx.d(r15.b))

if (*arg2 == 0xb)
label_142b05b86:
    *arg2 = 0

return result
