// 函数: sub_1418c8030
// 地址: 0x1418c8030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x30)
EnterCriticalSection(arg1 + 0x30)

if (*(arg1 + 0x88) != 0)
    void* rbp_1 = nullptr
    int32_t i = 0
    
    if (*(arg1 + 0x18) s> 0)
        int64_t* r15_1 = nullptr
        
        do
            void* rsi_1 = *(r15_1 + *(arg1 + 0x10))
            sub_1418c4d80(rsi_1)
            
            if ((*(rsi_1 + 0x2d) & 0x20) == 0 && *(rsi_1 + 0x2c) == 0)
                rbp_1 = rsi_1
            
            i += 1
            r15_1 = &r15_1[1]
        while (i s< *(arg1 + 0x18))
    
    if (*(arg1 + 0x18) s<= 0 || rbp_1 == 0)
        rbp_1 = sub_1418bc9e0(arg1 + 8, 0)
    
    sub_1418bc690(rbp_1)
    void* i_1 = *(arg1 + 0x80)
    int64_t r12_1 = *(rbp_1 + 0x40)
    
    for (void* r14_3 = (sx.q(*(arg1 + 0x88)) << 4) + i_1; i_1 != r14_3; i_1 += 0x10)
        data_143efba78(r12_1, *i_1, 0, zx.q(*(i_1 + 8)))
    
    sub_1418bdd70(rbp_1)
    sub_1418ef260(*(arg1 + 0x68), rbp_1, 0, 0)
    *(arg1 + 0x88) = 0
    
    if (*(arg1 + 0x8c) != 0)
        sub_1405a5410(arg1 + 0x80, 0)

if (arg1 != -0x30)
    LeaveCriticalSection(arg1 + 0x30)

void* rsi_2 = *(arg1 + 0x70)
uint32_t rcx_10 = zx.d(*(rsi_2 + 0x2c))
uint64_t result = zx.q(rcx_10 - 1)

if (result.b u<= 1)
    if (rcx_10.b != 1)
        data_143efbaa8(*(rsi_2 + 0x40))
        *(rsi_2 + 0x2c) = 1
        rsi_2 = *(arg1 + 0x70)
    
    sub_1418bdd70(rsi_2)
    int64_t performanceCount
    
    if (data_143efaf6c == 0)
        void* rdx_4 = *(arg1 + 0x70)
        int64_t* rcx_19 = *(arg1 + 0x68)
        int32_t r8_4
        int64_t* r9_3
        
        if (arg2 == 0)
            r9_3 = nullptr
            r8_4 = 0
        else
            r9_3 = &performanceCount
            performanceCount = *(arg2 + 0x18)
            r8_4 = 1
        
        sub_1418ef260(rcx_19, rdx_4, r8_4, r9_3)
    else
        int64_t rbp_2 = 0
        int64_t* rsi_3 = *(arg1 + 0xb0)
        uint64_t r14_5 = sx.q(*(arg1 + 0xb8)) << 3 u>> 3
        
        if (rsi_3 u> &rsi_3[sx.q(*(arg1 + 0xb8))])
            r14_5 = 0
        
        if (r14_5 != 0)
            do
                sub_1418bb120(*(arg1 + 0x70), 1, *rsi_3)
                rbp_2 += 1
                rsi_3 = &rsi_3[1]
            while (rbp_2 != r14_5)
        
        void* rdx_2 = *(arg1 + 0x70)
        int32_t r8_2
        int64_t* r9_2
        
        if (arg2 == 0)
            r9_2 = &performanceCount
            r8_2 = 1
            performanceCount = *(*(arg1 + 0x90) + 0x18)
        else
            int64_t var_38
            r9_2 = &var_38
            var_38 = *(arg2 + 0x18)
            r8_2 = 2
            int64_t var_30_1 = *(*(arg1 + 0x90) + 0x18)
        
        sub_1418ef260(*(arg1 + 0x68), rdx_2, r8_2, r9_2)
        int64_t rbp_3 = sx.q(*(arg1 + 0xa0))
        int32_t rax_8 = (rbp_3 + 1).d
        *(arg1 + 0xa0) = rax_8
        
        if (rax_8 s> *(arg1 + 0xa4))
            sub_1405a4d70(arg1 + 0x98)
        
        *(*(arg1 + 0x98) + (rbp_3 << 3)) = *(arg1 + 0x90)
        *(arg1 + 0x90) = 0
        bool cond:0_1 = *(arg1 + 0xbc) == 0
        *(arg1 + 0xb8) = 0
        
        if (not(cond:0_1))
            sub_1405c5570(arg1 + 0xb0, 0)
    
    QueryPerformanceCounter(&performanceCount)
    result = *(arg1 + 0x70)
    *(result + 0x48) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

*(arg1 + 0x70) = 0

if (data_143efaf6c != 0)
    int64_t* rcx_21 = *(arg1 + 0x90)
    
    if (rcx_21 != 0)
        result = (**rcx_21)(rcx_21, 1)
        *(arg1 + 0x90) = 0

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(arg1 + 0x30) __tailcall
