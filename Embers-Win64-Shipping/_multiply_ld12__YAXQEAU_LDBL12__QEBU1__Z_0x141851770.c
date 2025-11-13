// 函数: ?multiply_ld12@@YAXQEAU_LDBL12@@QEBU1@@Z
// 地址: 0x141851770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x118)
char rax_2

if (*(arg1 + 0x368) == 0)
    int64_t* rcx_1 = *(arg1 + 0x538)
    rax_2 = (*(*rcx_1 + 8))(rcx_1)

int64_t r15

if (*(arg1 + 0x368) != 0 || rax_2 != 0)
    r15.b = 0
else
    r15.b = 1

int64_t performanceCount
void* lpCriticalSection

if (*(arg1 + 0x368) != 0)
    lpCriticalSection = arg1 + 0x7d8
    EnterCriticalSection(lpCriticalSection)
    
    if (*(lpCriticalSection + 0x38) != 0)
        bool cond:0_1 = *(lpCriticalSection + 0x39) != 0
        *(lpCriticalSection + 0x38) = 0
        
        if (not(cond:0_1))
            QueryPerformanceCounter(&performanceCount)
            *(lpCriticalSection + 0x30) += performanceCount - *(lpCriticalSection + 0x28)
    
    LeaveCriticalSection(lpCriticalSection)
else if (r15.b != 0)
    lpCriticalSection = arg1 + 0x7d8
    EnterCriticalSection(lpCriticalSection)
    
    if (*(lpCriticalSection + 0x38) == 0)
        bool cond:1_1 = *(lpCriticalSection + 0x39) != 0
        *(lpCriticalSection + 0x38) = 1
        
        if (not(cond:1_1))
            QueryPerformanceCounter(&performanceCount)
            *(lpCriticalSection + 0x28) = performanceCount
    
    LeaveCriticalSection(lpCriticalSection)
*(arg1 + 0x368) = r15.b
int64_t r14 = 0
int64_t* rsi_1 = *(arg1 + 0x5f8)
char r13 = r15.b
uint64_t r12_1 = sx.q(*(arg1 + 0x600)) << 3 u>> 3

if (rsi_1 u> &rsi_1[sx.q(*(arg1 + 0x600))])
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* rcx_7 = *rsi_1
        (*(*rcx_7 + 8))(rcx_7, zx.q(r15.b))
        r14 += 1
        rsi_1 = &rsi_1[1]
    while (r14 != r12_1)
    
    r13 = *(arg1 + 0x368)

EnterCriticalSection(arg1 + 0x658)

if (*(arg1 + 0x691) != r13)
    bool cond:2_1 = *(arg1 + 0x690) == 0
    *(arg1 + 0x691) = r13
    
    if (not(cond:2_1))
        QueryPerformanceCounter(&performanceCount)
        int64_t performanceCount_1 = performanceCount
        
        if (r13 == 0)
            *(arg1 + 0x680) = performanceCount_1
        else
            *(arg1 + 0x688) += performanceCount_1 - *(arg1 + 0x680)
            *(arg1 + 0x680) = 0

LeaveCriticalSection(arg1 + 0x658)
char r14_1 = *(arg1 + 0x368)
EnterCriticalSection(arg1 + 0x698)

if (*(arg1 + 0x6d1) != r14_1)
    bool cond:3_1 = *(arg1 + 0x6d0) == 0
    *(arg1 + 0x6d1) = r14_1
    
    if (not(cond:3_1))
        QueryPerformanceCounter(&performanceCount)
        int64_t performanceCount_2 = performanceCount
        
        if (r14_1 == 0)
            *(arg1 + 0x6c0) = performanceCount_2
        else
            *(arg1 + 0x6c8) += performanceCount_2 - *(arg1 + 0x6c0)
            *(arg1 + 0x6c0) = 0

LeaveCriticalSection(arg1 + 0x698)
char r14_2 = *(arg1 + 0x368)
EnterCriticalSection(arg1 + 0x6d8)

if (*(arg1 + 0x711) != r14_2)
    bool cond:4_1 = *(arg1 + 0x710) == 0
    *(arg1 + 0x711) = r14_2
    
    if (not(cond:4_1))
        QueryPerformanceCounter(&performanceCount)
        int64_t performanceCount_3 = performanceCount
        
        if (r14_2 == 0)
            *(arg1 + 0x700) = performanceCount_3
        else
            *(arg1 + 0x708) += performanceCount_3 - *(arg1 + 0x700)
            *(arg1 + 0x700) = 0

LeaveCriticalSection(arg1 + 0x6d8)
char r14_3 = *(arg1 + 0x368)
EnterCriticalSection(arg1 + 0x718)

if (*(arg1 + 0x751) != r14_3)
    bool cond:5_1 = *(arg1 + 0x750) == 0
    *(arg1 + 0x751) = r14_3
    
    if (not(cond:5_1))
        QueryPerformanceCounter(&performanceCount)
        int64_t performanceCount_4 = performanceCount
        
        if (r14_3 == 0)
            *(arg1 + 0x740) = performanceCount_4
        else
            *(arg1 + 0x748) += performanceCount_4 - *(arg1 + 0x740)
            *(arg1 + 0x740) = 0

LeaveCriticalSection(arg1 + 0x718)
char r14_4 = *(arg1 + 0x368)
EnterCriticalSection(arg1 + 0x758)

if (*(arg1 + 0x791) != r14_4)
    bool cond:6_1 = *(arg1 + 0x790) == 0
    *(arg1 + 0x791) = r14_4
    
    if (not(cond:6_1))
        QueryPerformanceCounter(&performanceCount)
        int64_t performanceCount_5 = performanceCount
        
        if (r14_4 == 0)
            *(arg1 + 0x780) = performanceCount_5
        else
            *(arg1 + 0x788) += performanceCount_5 - *(arg1 + 0x780)
            *(arg1 + 0x780) = 0

LeaveCriticalSection(arg1 + 0x758)
char rsi_7 = *(arg1 + 0x368)
EnterCriticalSection(arg1 + 0x818)

if (*(arg1 + 0x851) != rsi_7)
    bool cond:7_1 = *(arg1 + 0x850) == 0
    *(arg1 + 0x851) = rsi_7
    
    if (not(cond:7_1))
        QueryPerformanceCounter(&performanceCount)
        
        if (rsi_7 == 0)
            *(arg1 + 0x840) = performanceCount
        else
            *(arg1 + 0x848) += performanceCount - *(arg1 + 0x840)
            *(arg1 + 0x840) = 0

LeaveCriticalSection(arg1 + 0x818)

if (arg1 != -0x118)
    LeaveCriticalSection(arg1 + 0x118)

return zx.q(r15.b)
