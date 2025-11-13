// 函数: sub_1406c11b0
// 地址: 0x1406c11b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

void* rax = *(arg1 + 0xe8)

if (arg2 s>= *(rax + 0x2c))
    return 

int64_t rbp_1 = sx.q(arg2)
int32_t* rsi_1 = *(*(*(rax + 0x30) + (rbp_1 << 3)) + 0xd0)
int32_t rcx = *rsi_1

if (rcx == 0)
    sub_1406b7e20(*(arg1 + 0x678), arg1 + 0x250)
    
    if (*(arg1 + 0x699) != 0 && *(arg1 + 0x210) != 0)
        *(arg1 + 0x210) = 0
    
    void* rbx_3 = *(arg1 + 0x678)
    *(arg1 + 0x699) = 0
    *(arg1 + 0x238) = 0
    avcodec_free_context(rbx_3 + 0x10)
    *(rbx_3 + 0x10) = 0
    *(arg1 + 0x14c) = 0xffffffff
    
    if (*(arg1 + 0x240) != 0)
        av_buffer_unref(arg1 + 0x240)
    
    int64_t* rcx_11 = *(arg1 + 0x7f0)
    
    if (rcx_11 != 0)
        int64_t rdx_4
        rdx_4.b = rcx_11 != arg1 + 0x7b8
        (*(*rcx_11 + 0x20))(rcx_11, rdx_4)
        *(arg1 + 0x7f0) = 0
    
    *(arg1 + 0x7f8) = 0xffffffff
else if (rcx == 1)
    sub_1406b7e20(*(arg1 + 0x668), arg1 + 0x3f0)
    
    if (*(arg1 + 0x69a) != 0 && *(arg1 + 0x218) != 0)
        *(arg1 + 0x218) = 0
    
    void* rbx_2 = *(arg1 + 0x668)
    *(arg1 + 0x69a) = 0
    avcodec_free_context(rbx_2 + 0x10)
    *(rbx_2 + 0x10) = 0
    swr_free(arg1 + 0x658)
    *(arg1 + 0x658) = 0
    av_freep(arg1 + 0x768)
    *(arg1 + 0x774) = 0
    *(arg1 + 0x760) = 0
    *(arg1 + 0x780) = 0
else if (rcx == 3)
    sub_1406b7e20(*(arg1 + 0x688), arg1 + 0x320)
    void* rbx_1 = *(arg1 + 0x688)
    avcodec_free_context(rbx_1 + 0x10)
    *(rbx_1 + 0x10) = 0

*(*(*(*(arg1 + 0xe8) + 0x30) + (rbp_1 << 3)) + 0x3c) = 0x30
int32_t rcx_13 = *rsi_1

if (rcx_13 == 0)
    *(arg1 + 0x228) = 0
    *(arg1 + 0x14c) = 0xffffffff
    return 

if (rcx_13 == 1)
    *(arg1 + 0x220) = 0
    *(arg1 + 0x140) = 0xffffffff
    return 

if (rcx_13 == 3)
    *(arg1 + 0x230) = 0
    *(arg1 + 0x144) = 0xffffffff
