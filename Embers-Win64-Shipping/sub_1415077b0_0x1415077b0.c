// 函数: sub_1415077b0
// 地址: 0x1415077b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_10 = arg2
int32_t i = 0

if (*(arg1 + 0x28) s<= 0)
    return 

int64_t r12_1 = 0
int16_t* r15_1 = nullptr

do
    if (*(r15_1 + *(arg1 + 0x30)) u> 0)
        int32_t* r14_2 = *(arg1 + 0x20) + r12_1
        
        if (*r14_2 == *arg2)
            int64_t rsi_1 = sx.q(arg3[1].d)
            int32_t rax_1 = (rsi_1 + 1).d
            arg3[1].d = rax_1
            
            if (rax_1 s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            *(*arg3 + (rsi_1 << 3)) = *r14_2
            int64_t rbp_1 = sx.q(*(arg1 + 0x48))
            int32_t rax_3 = (rbp_1 + 1).d
            *(arg1 + 0x48) = rax_3
            
            if (rax_3 s> *(arg1 + 0x4c))
                sub_1405a4cf0(arg1 + 0x40)
            
            *(*(arg1 + 0x40) + (rbp_1 << 2)) = i
            int64_t rcx_6 = (*r14_2 u>> 0x21 ^ *r14_2) * -0xae502812aa7333
            int64_t rdx_5 = (rcx_6 u>> 0x21 ^ rcx_6) * -0x3b314601e57a13ad
            
            if (i u< *(arg1 + 8))
                uint64_t rcx_9 = (zx.q((rdx_5 u>> 0x21).w) ^ zx.q(rdx_5.w)) & zx.q(*(arg1 + 4))
                int64_t rax_9 = *(arg1 + 0x10)
                int32_t j = *(rax_9 + (rcx_9 << 2))
                
                if (j == i)
                    *(rax_9 + (rcx_9 << 2)) = *(*(arg1 + 0x18) + (zx.q(i) << 2))
                else if (j != 0xffffffff)
                    int64_t r8 = *(arg1 + 0x18)
                    
                    do
                        uint64_t rdx_7 = zx.q(j) << 2
                        j = *(rdx_7 + r8)
                        
                        if (j == i)
                            *(rdx_7 + r8) = *(r8 + (zx.q(i) << 2))
                            break
                    while (j != 0xffffffff)
            
            arg2 = arg_10
            *(r15_1 + *(arg1 + 0x30)) = 0
            *(r12_1 + *(arg1 + 0x20)) = 0
    
    i += 1
    r15_1 = &r15_1[1]
    r12_1 += 8
while (i s< *(arg1 + 0x28))
