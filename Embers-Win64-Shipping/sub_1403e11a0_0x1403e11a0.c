// 函数: sub_1403e11a0
// 地址: 0x1403e11a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0x13880

if (arg2 s<= 0x13880)
    r10 = arg2
    
    if (arg2 s< 0x1388)
        r10 = 0x1388

if (r10 != *(arg1 + 0x1218))
    int32_t rax_1 = *(arg1 + 0x11f8)
    *(arg1 + 0x1218) = r10
    void* const rdx
    
    if (rax_1 != 8)
        rdx = &data_1436fc8f8
        
        if (rax_1 != 0xc)
            rdx = &data_1436fc918
    else
        rdx = &data_1436fc8d8
    
    if (*(arg1 + 0x11fc) == 2)
        r10 -= 0x898
    
    int32_t rcx = 1
    
    for (int64_t i = 1; i s< 8; )
        int32_t rbx_1 = *(rdx + (i << 2))
        
        if (r10 s<= rbx_1)
            int64_t rcx_1 = sx.q(rcx)
            int32_t rdx_1 = *(rdx + (rcx_1 << 2) - 4)
            int32_t r9_1 = sx.d(*((rcx_1 << 1) + 0x1436fc936))
            *(arg1 + 0x129c) = divs.dp.d(sx.q((r10 << 6) - (rdx_1 << 6)), rbx_1 - rdx_1)
                * (sx.d(*(&data_1436fc938 + (rcx_1 << 1))) - r9_1) + (r9_1 << 6)
            break
        
        i += 1
        rcx += 1
    
    if (*(arg1 + 0x1800) != 0)
        *(arg1 + 0x129c) += sx.d(0xc - *(arg1 + 0x1804)) * 0xffffffe1

return 0
