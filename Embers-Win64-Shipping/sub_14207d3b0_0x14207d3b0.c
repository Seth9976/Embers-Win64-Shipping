// 函数: sub_14207d3b0
// 地址: 0x14207d3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0x240))
int32_t r9 = 0
int64_t* rax_1

if (r10.d s> 0)
    rax_1 = *(arg1 + 0x238)
    int64_t r8_1 = 0
    
    do
        if (*rax_1 == arg2)
            return rax_1
        
        r8_1 += 1
        rax_1 = &rax_1[1]
    while (r8_1 s< r10)
    
    if (r10.d s> 0)
        int64_t* r8_2 = *(arg1 + 0x238)
        int64_t rcx = 0
        int64_t* rax_2 = r8_2
        
        do
            if (*rax_2 == 0)
                int64_t rax_4 = sx.q(r9)
                r8_2[rax_4] = arg2
                return rax_4
            
            r9 += 1
            rcx += 1
            rax_2 = &rax_2[1]
        while (rcx s< r10)

int64_t rsi_1 = sx.q(*(arg1 + 0x240))
int32_t rax_3 = (rsi_1 + 1).d
*(arg1 + 0x240) = rax_3

if (rax_3 s> *(arg1 + 0x244))
    sub_1405a4d70(arg1 + 0x238)

rax_1 = *(arg1 + 0x238)
rax_1[rsi_1] = arg2
return rax_1
