// 函数: sub_142ba1990
// 地址: 0x142ba1990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp
int32_t r15

if (arg3 != 0)
    rbp = *(arg2 + 0xc)
    r15 = *(arg2 + 0x14)
else
    rbp = *(arg2 + 8)
    r15 = *(arg2 + 0x10)

int64_t result = sx.q(arg3)
void* rsi_1 = result * 0x1c58 + arg1

if (*(rsi_1 + 0x1c8c) != rbp || *(rsi_1 + 0x1c90) != r15)
    int32_t i = 0
    *(rsi_1 + 0x1c8c) = rbp
    *(rsi_1 + 0x1c90) = r15
    *(rsi_1 + 0x3c) = rbp
    *(rsi_1 + 0x40) = r15
    
    if (*(rsi_1 + 0x114) u> 0)
        do
            int64_t rbx_1 = zx.q(i) * 0x1c
            int32_t rcx_1 = sub_142b93e80(*(rbx_1 + rsi_1 + 0x118), rbp) + r15
            *(rbx_1 + rsi_1 + 0x11c) = rcx_1
            *(rbx_1 + rsi_1 + 0x120) = rcx_1
            int32_t rax_2 = sub_142b93e80(*(rbx_1 + rsi_1 + 0x124), rbp)
            *(rbx_1 + rsi_1 + 0x130) &= 0xfffffffe
            int32_t rcx_3 = rax_2 + r15
            *(rbx_1 + rsi_1 + 0x128) = rcx_3
            *(rbx_1 + rsi_1 + 0x12c) = rcx_3
            result =
                zx.q(sub_142b93e80(*(rbx_1 + rsi_1 + 0x118) - *(rbx_1 + rsi_1 + 0x124), rbp) + 0x30)
            
            if (result.d u<= 0x60)
                int32_t rcx_8 = (*(rbx_1 + rsi_1 + 0x11c) + 0x20) & 0xffffffc0
                *(rbx_1 + rsi_1 + 0x120) = rcx_8
                int32_t r14_2 = sub_142b91790(rcx_8, rbp) - *(rbx_1 + rsi_1 + 0x124)
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r14_2)
                int32_t rax_9 = sub_142b93e80((temp1_1 ^ temp0_1) - temp0_1, rbp)
                int32_t rax_10
                
                if (rax_9 s>= 0x20)
                    rax_10 = (rax_9 + 0x20) & 0xffffffc0
                else
                    rax_10 = 0
                
                int32_t rcx_11 = neg.d(rax_10)
                
                if (r14_2 s>= 0)
                    rcx_11 = rax_10
                
                result = zx.q(*(rbx_1 + rsi_1 + 0x120) - rcx_11)
                *(rbx_1 + rsi_1 + 0x130) |= 1
                *(rbx_1 + rsi_1 + 0x12c) = result.d
            
            i += 1
        while (i u< *(rsi_1 + 0x114))

return result
