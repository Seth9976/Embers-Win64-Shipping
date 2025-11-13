// 函数: sub_140bcd5d0
// 地址: 0x140bcd5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
bool z

if (0 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0
    z = true
else
    int64_t rax
    rax.b = *(arg1 + 0x14)
    z = false

if (not(z))
    bool z_1
    
    do
        sub_140b73230(zx.o(0))
        
        if (0 == *(arg1 + 0x14))
            *(arg1 + 0x14) = 0
            z_1 = true
        else
            int64_t rax_1
            rax_1.b = *(arg1 + 0x14)
            z_1 = false
    while (not(z_1))

uint64_t result = zx.q(arg1[1].d)

if (result.d == 1)
    void* rax_2 = *arg1
    int32_t r13_1 = *(rax_2 + 0x10)
    *(rax_2 + 0x10) -= 1
    result = zx.q(r13_1 - 1)
    
    if (result.d == 0)
        int64_t rsi_1 = sx.q(*(arg2 + 0x38))
        int32_t rax_3 = (rsi_1 + 1).d
        *(arg2 + 0x38) = rax_3
        
        if (rax_3 s> *(arg2 + 0x3c))
            sub_1405a4d70(arg2 + 0x30)
        
        result = *arg1
        *(*(arg2 + 0x30) + (rsi_1 << 3)) = result
else if (result.d != 0)
    uint64_t result_1 = result
    int64_t* r14_1 = *arg1
    
    if (r14_1 u> &r14_1[result])
        result_1 = 0
    
    uint64_t result_2 = result_1
    
    if (result_1 != 0)
        do
            void* r12_1 = *r14_1
            int32_t rax_5 = *(r12_1 + 0x10)
            *(r12_1 + 0x10) -= 1
            
            if (rax_5 == 1)
                int64_t rbp_1 = sx.q(*(arg2 + 0x38))
                int32_t rax_6 = (rbp_1 + 1).d
                *(arg2 + 0x38) = rax_6
                
                if (rax_6 s> *(arg2 + 0x3c))
                    sub_1405a4d70(arg2 + 0x30)
                    result_1 = result_2
                
                *(*(arg2 + 0x30) + (rbp_1 << 3)) = r12_1
            
            r14_1 = &r14_1[1]
            rdi += 1
        while (rdi u< result_1)
        
        r14_1 = *arg1
    
    int64_t rsi_2 = sx.q(*(arg2 + 0x28))
    int32_t var_30_1 = *(arg1 + 0xc)
    int32_t rax_9 = (rsi_2 + 1).d
    *(arg2 + 0x28) = rax_9
    
    if (rax_9 s> *(arg2 + 0x2c))
        sub_1405a4f90(arg2 + 0x20)
    
    result = *(arg2 + 0x20)
    *(result + rsi_2 * 0x10) = r14_1.o

if (*(arg2 + 0x40) != 0)
    bool cond:1_1 = *(arg2 + 0x38) == 0
    *(arg2 + 0x40) = 0
    
    if (not(cond:1_1))
        do
            int64_t rdx_3 = sx.q(*(arg2 + 0x38))
            int64_t* rcx_6 = *(*(arg2 + 0x30) + (rdx_3 << 3) - 8)
            *(arg2 + 0x38) = (rdx_3 - 1).d
            result = sub_140bc7180(rcx_6)
        while (*(arg2 + 0x38) != 0)
    
    *(arg2 + 0x40) = 1

return result
