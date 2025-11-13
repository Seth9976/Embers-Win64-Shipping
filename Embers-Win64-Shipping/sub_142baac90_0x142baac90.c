// 函数: sub_142baac90
// 地址: 0x142baac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r14 = *arg2
int32_t rbp = *(arg1 + 0x1d8)
int16_t rcx

if (r14 u< *(arg1 + 0x84))
    rcx = *(arg1 + 0x1c0)

if (r14 u< *(arg1 + 0x84) && rcx u< *(arg1 + 0x44))
    int32_t rax_4
    uint64_t r12_1
    
    if (*(arg1 + 0x1fc) == 0 || *(arg1 + 0x1fe) == 0)
        int64_t rdx_6 = *(arg1 + 0x88)
        r12_1 = zx.q(r14) << 3
        uint64_t rcx_8 = zx.q(rcx)
        int64_t rax_8 = *(arg1 + 0x48)
        rax_4 = (*(arg1 + 0x330))(arg1, zx.q(*(rdx_6 + r12_1) - *(rax_8 + (rcx_8 << 3))), 
            zx.q(*(rdx_6 + r12_1 + 4) - *(rax_8 + (rcx_8 << 3) + 4)))
    else
        int32_t rdx = *(arg1 + 0x180)
        r12_1 = zx.q(r14) << 3
        int32_t* rsi_2 = *(arg1 + 0x98) + r12_1
        int32_t* r15_1 = *(arg1 + 0x58) + (zx.q(rcx) << 3)
        
        if (rdx != *(arg1 + 0x184))
            rax_4 = (*(arg1 + 0x330))(arg1, zx.q(sub_142b93e80(*rsi_2 - *r15_1, rdx)), 
                zx.q(sub_142b93e80(rsi_2[1] - r15_1[1], *(arg1 + 0x184))))
        else
            rax_4 = sub_142b93e80(
                (*(arg1 + 0x330))(arg1, zx.q(*rsi_2 - *r15_1), zx.q(rsi_2[1] - r15_1[1])), 
                *(arg1 + 0x180))
    
    int32_t rdx_8 = *(arg1 + 0x1e8)
    int32_t rsi_3 = rax_4
    
    if (rdx_8 s> 0)
        int32_t rcx_10 = *(arg1 + 0x1ec)
        
        if (rsi_3 s< rcx_10 + rdx_8 && rsi_3 s> rcx_10 - rdx_8)
            bool cond:3_1 = rsi_3 s>= 0
            rsi_3 = rcx_10
            
            if (not(cond:3_1))
                rsi_3 = neg.d(rsi_3)
    
    char rax_12 = *(arg1 + 0x218)
    uint32_t rax_13 = zx.d(rax_12)
    int32_t rbx_2
    
    if ((rax_12 & 4) == 0)
        rbx_2 = 0
        int32_t rcx_12 = *(arg1 + ((zx.q(rax_13) & 3) << 2) + 0x1ac)
        
        if (rsi_3 s< 0)
            int32_t rax_15 = rsi_3 - rcx_12
            
            if (rax_15 s> 0)
                rax_15 = 0
            
            rbx_2 = rax_15
        else
            int32_t rax_17 = rcx_12 + rsi_3
            
            if (rax_17 s>= 0)
                rbx_2 = rax_17
    else
        rbx_2 =
            (*(arg1 + 0x320))(arg1, zx.q(rsi_3), zx.q(*(arg1 + ((zx.q(rax_13) & 3) << 2) + 0x1ac)))
    
    if ((*(arg1 + 0x218) & 8) != 0)
        if (rsi_3 s< 0)
            int32_t rbp_1 = neg.d(rbp)
            
            if (rbx_2 s> rbp_1)
                rbx_2 = rbp_1
        else if (rbx_2 s< rbp)
            rbx_2 = rbp
    
    int32_t* r9_1 = *(arg1 + 0x50) + (zx.q(*(arg1 + 0x1c0)) << 3)
    int64_t rax_20 = *(arg1 + 0x90)
    (*(arg1 + 0x340))(arg1, arg1 + 0x78, zx.q(r14), 
        zx.q(rbx_2 - (*(arg1 + 0x328))(arg1, zx.q(*(rax_20 + r12_1) - *r9_1), 
            zx.q(*(rax_20 + r12_1 + 4) - r9_1[1]))))
else if (*(arg1 + 0x315) != 0)
    *(arg1 + 0x18) = 0x86

bool cond:0 = (*(arg1 + 0x218) & 0x10) == 0
int16_t result = *(arg1 + 0x1c0)
*(arg1 + 0x1c2) = result
*(arg1 + 0x1c4) = r14

if (not(cond:0))
    *(arg1 + 0x1c0) = r14

return result
