// 函数: png_set_keep_unknown_chunks
// 地址: 0x1403ce100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint64_t rsi_1 = zx.q(arg4)

if (arg4 == 0)
    int32_t rcx_6 = *(arg1 + 0x158)
    int32_t rcx_7 = rcx_6 | 0x8000
    
    if ((arg2 | 1) != 3)
        rcx_7 = rcx_6 & 0xffff7fff
    
    int32_t rcx_8 = rcx_7 | 0x10000
    
    if (arg2 != 3)
        rcx_8 = rcx_7 & 0xfffeffff
    
    *(arg1 + 0x158) = rcx_8
else if (arg3 != 0)
    int64_t r13_1 = sx.q(*(arg1 + 0x400))
    int64_t rax_2 = sx.q(rsi_1.d) + r13_1
    void* rax_3 = png_malloc(arg1, rax_2 * 5)
    int64_t rbp_1 = *(arg1 + 0x408)
    int64_t r13_2 = r13_1 * 5
    
    if (rbp_1 != 0)
        memcpy(rax_3, rbp_1, r13_2.d)
        png_free(arg1, rbp_1)
        *(arg1 + 0x408) = 0
    
    void* rbx_2 = rax_3 + r13_2
    memcpy(rbx_2, arg3, (rsi_1 * 5).d)
    
    if (rsi_1.d s> 0)
        char* rbx_3 = rbx_2 + 4
        int32_t rax_6 = rsi_1.d & 7
        
        if ((rsi_1 - 1).d u>= 7)
            int32_t i_3 = rax_6 - rsi_1.d
            int32_t i
            
            do
                *rbx_3 = arg2.b
                rbx_3[5] = arg2.b
                rbx_3[0xa] = arg2.b
                rbx_3[0xf] = arg2.b
                rbx_3[0x14] = arg2.b
                rbx_3[0x19] = arg2.b
                rbx_3[0x1e] = arg2.b
                rbx_3[0x23] = arg2.b
                rbx_3 = &rbx_3[0x28]
                i = i_3
                i_3 += 8
            while (i != 0xfffffff8)
        
        if (rax_6 != 0)
            int32_t i_2 = neg.d(rax_6)
            int32_t i_1
            
            do
                *rbx_3 = arg2.b
                rbx_3 = &rbx_3[5]
                i_1 = i_2
                i_2 += 1
            while (i_1 != 0xffffffff)
    
    *(arg1 + 0x400) = rax_2.d
    *(arg1 + 0x408) = rax_3
    *(arg1 + 0x3e9) |= 4
