// 函数: png_set_unknown_chunks
// 地址: 0x1403cdf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg4 == 0)
    return 

void* rax_2 = png_malloc_warn(arg1, (sx.q(arg4) + sx.q(*(arg2 + 0xf8))) << 5)

if (rax_2 == 0)
    return png_warning(arg1, "Out of memory while processing unknown chunk") __tailcall

int64_t rbp_1 = *(arg2 + 0xf0)
memcpy(rax_2, rbp_1, *(arg2 + 0xf8) << 5)
png_free(arg1, rbp_1)
*(arg2 + 0xf0) = 0

if (arg4 s> 0)
    uint64_t* rdi_2 = rax_2 + 0x10
    int64_t i = 0
    
    do
        *(arg2 + 0xf8)
        *(&rdi_2[sx.q(*(arg2 + 0xf8)) * 4] - 0xc) = *(arg3 + 0x10 + i - 0xc)
        rdi_2[sx.q(*(arg2 + 0xf8)) * 4 - 2].d = *(arg3 + 0x10 + i - 0x10)
        *(&rdi_2[sx.q(*(arg2 + 0xf8)) * 4] - 0xc) = 0
        uint64_t rdx_5 = *(arg3 + 0x10 + i)
        rdi_2[sx.q(*(arg2 + 0xf8)) * 4] = rdx_5
        rdi_2[sx.q(*(arg2 + 0xf8)) * 4 + 1].b = *(arg1 + 0x154)
        
        if (rdx_5 == 0)
            rdi_2[sx.q(*(arg2 + 0xf8)) * 4 - 1] = 0
        else
            int64_t rax_6 = png_malloc_warn(arg1, rdx_5)
            rdi_2[sx.q(*(arg2 + 0xf8)) * 4 - 1] = rax_6
            
            if (rax_6 == 0)
                png_warning(arg1, "Out of memory while processing unknown chunk")
                rdi_2[sx.q(*(arg2 + 0xf8)) * 4] = 0
            else
                memcpy(rax_6, *(arg3 + 0x10 + i - 8), (*(arg3 + 0x10 + i)).d)
        
        rdi_2 = &rdi_2[4]
        i += 0x20
    while (zx.q(arg4) << 5 != i)

*(arg2 + 0xf0) = rax_2
*(arg2 + 0xf8) += arg4
*(arg2 + 0xed) |= 2
