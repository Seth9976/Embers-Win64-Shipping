// 函数: sub_140e73a40
// 地址: 0x140e73a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg2 + 0x50))
int32_t performanceCount

if (rax.d s< 0xb)
    int64_t rcx = rax * 3
    int64_t* rdi_2 = arg1 + 0x2c8 + (rcx << 3)
    
    if (*(arg1 + (rcx << 3) + 0x2d0) != 0)
        *(arg1 + (rcx << 3) + 0x2d0) = 0
    
    *(arg1 + (rcx << 3) + 0x2d8) = 0
    QueryPerformanceCounter(&performanceCount)
    
    if (&performanceCount != rdi_2)
        *rdi_2 = float.d(performanceCount.q) f* data_143d796f8 f+ 16777216.0
        rdi_2[1].b = 1
    
    rdi_2[2] = *(arg2 + 0x18)

int64_t rdi_3 = sx.q(*(arg2 + 0x50))

if (*(arg1 + 0x98) != *(arg1 + 0xc4))
    void* rcx_2 = *(arg1 + 0xd0)
    void* r8_1 = arg1 + 0xc8
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0xd8)) - 1) & rdi_3) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x90)
        
        do
            int64_t rdx_3 = sx.q(i) * 5
            void* rcx_4 = r8_2 + (rdx_3 << 2)
            
            if (*(r8_2 + (rdx_3 << 2)) == rdi_3.d)
                if (i == 0xffffffff || rcx_4 == 0)
                    break
                
                *(rcx_4 + 4) = *(arg2 + 0x18)
                return i
            
            i = *(rcx_4 + 0xc)
        while (i != 0xffffffff)

int32_t var_18
sub_140a9e570(arg1 + 0x90, &var_18)
int32_t performanceCount_1 = performanceCount
int32_t rax_2 = var_18
int32_t* var_10
var_10[1] = performanceCount
var_10[2] = performanceCount_1
*var_10 = rdi_3.d
var_10[3] = 0xffffffff
sub_140e60eb0(arg1 + 0x90, &performanceCount, rdi_3.d, var_10, rax_2, nullptr)
int64_t rax_4 = *(arg1 + 0x90)
*(rax_4 + sx.q(performanceCount) * 0x14 + 4) = *(arg2 + 0x18)
return rax_4
