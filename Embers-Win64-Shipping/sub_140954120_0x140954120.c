// 函数: sub_140954120
// 地址: 0x140954120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6
int64_t performanceCount
int64_t rax

if (arg1[0x490] != 0)
    __saved_zmm6 = arg3
    rax, arg2 = QueryPerformanceCounter(&performanceCount)
    arg3.q = float.d(performanceCount)
    arg3.q = arg3.q f* data_143d796f8
    arg3.q = arg3.q f+ 16777216.0
    
    if (not(arg3.q f<= *(arg1 + 0x498)))
        rax, arg2 = sub_140599090(&data_143989b20)
        *(arg1 + 0x498) = _mm_cvtps_pd(data_143989b10) f+ arg3.q

if (arg1[0x480] != 0)
    int64_t rcx_1 = *(arg1 + 8)
    
    if ((rcx_1 & sx.q(*(arg1 + 0x484))) == 0 && rcx_1 s> 0)
        rax, arg2 = QueryPerformanceCounter(&performanceCount)
        
        if (not(float.d(performanceCount) f* data_143d796f8 f+ 16777216.0 f<= *(arg1 + 0x488)))
            *arg1 = 1
            return 

if (*arg1 != 0)
    return 

if (arg1[0x468] == 0)
    *arg1 = sub_140972140(arg1, arg2) == 0
    return 

int32_t rcx_3 = *(arg1 + 0x470)

if (rcx_3 != 0)
    int32_t rax_2 = *(arg1 + 0x46c) + 1
    
    if (rax_2 s< rcx_3)
        *(arg1 + 0x46c) = rax_2
        return 

int64_t* rcx_4 = *(arg1 + 0x10)
*(arg1 + 0x46c) = 0
rax.b = (*(*rcx_4 + 0x438))(rcx_4) == 0
*arg1 = rax.b

while (*arg1 == 0)
    int64_t* rcx_5 = *(arg1 + 0x10)
    
    if ((*(*rcx_5 + 0x438))(rcx_5) == 0)
        break
    
    int64_t* rcx_6 = *(arg1 + 0x10)
    int64_t* rax_6 = (*(*rcx_6 + 0x438))(rcx_6)
    int64_t r9_1 = *rax_6
    
    if ((*(r9_1 + 0x70))(rax_6, *(arg1 + 0x460), 0, r9_1, __saved_zmm6).b != 0)
        void* rcx_9 = *(arg1 + 0x18)
        int32_t rdx_1 = *(*(arg1 + 0x460) + 0x10)
        
        if (*(rcx_9 + 0x3f) == 0)
            *(arg1 + 0x470) = rdx_1
            return 
        
        *(rcx_9 + 0x14) += rdx_1
        
        if (rdx_1 s> 0xa)
            continue
    else
        int64_t* rcx_8 = *(arg1 + 0x20)
        
        if (rcx_8 != 0)
            rax = (*(*rcx_8 + 0xb8))(rcx_8)
            
            if (rax.d u> 0x19)
                continue
            else
                if (not(test_bit(0x2400081, rax.d)))
                    continue
                
                *arg1 = 1
                return 
    
    *arg1 = 1
    break
