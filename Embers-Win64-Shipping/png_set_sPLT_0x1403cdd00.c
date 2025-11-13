// 函数: png_set_sPLT
// 地址: 0x1403cdd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

int64_t rax_1 = png_malloc_warn(arg1, zx.q(*(arg2 + 0x120) + arg4) << 5)

if (rax_1 == 0)
    return png_warning(arg1, "No memory for sPLT palettes") __tailcall

int64_t rbp_1 = *(arg2 + 0x118)
memcpy(rax_1, rbp_1, *(arg2 + 0x120) << 5)
png_free(arg1, rbp_1)
*(arg2 + 0x118) = 0

if (arg4 s> 0)
    uint64_t i_1 = zx.q(arg4)
    int32_t* rdi_2 = arg3 + 0x18
    int64_t r15_1 = rax_1
    uint64_t i
    
    do
        uint64_t r12_1 = zx.q(*(arg2 + 0x120))
        uint64_t rbp_3 =
            zx.q(MultiByteToWideChar(0, 0, *(rdi_2 - 0x18), 0xffffffff, nullptr, 0) + 1)
        int64_t rax_3 = png_malloc_warn(arg1, rbp_3)
        uint64_t r12_2 = r12_1 << 5
        *(r15_1 + r12_2) = rax_3
        
        if (rax_3 == 0)
            png_warning(arg1, "Out of memory while processing sPLT chunk")
        else
            memcpy(rax_3, *(rdi_2 - 0x18), rbp_3.d)
            int64_t rax_6 = png_malloc_warn(arg1, sx.q(*rdi_2) * 0xa)
            *(r15_1 + r12_2 + 0x10) = rax_6
            
            if (rax_6 == 0)
                png_warning(arg1, "Out of memory while processing sPLT chunk")
                png_free(arg1, *(r15_1 + r12_2))
                *(r15_1 + r12_2) = 0
            else
                int64_t rbp_4 = sx.q(*rdi_2)
                int64_t rcx_6 = rbp_4 * 2
                memcpy(rax_6, *(rdi_2 - 8), rcx_6.d + (rcx_6 << 2).d)
                *(r15_1 + r12_2 + 0x18) = rbp_4.d
                *(r15_1 + r12_2 + 8) = rdi_2[-4].b
        
        r15_1 += 0x20
        rdi_2 = &rdi_2[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg2 + 0x118) = rax_1
*(arg2 + 0x120) += arg4
*(arg2 + 9) |= 0x20
*(arg2 + 0xec) |= 0x20
