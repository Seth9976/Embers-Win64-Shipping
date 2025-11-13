// 函数: sub_140371990
// 地址: 0x140371990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rdx_1 = *(arg1 + 0x28)
    
    if (rdx_1 != 0)
        *(rdx_1 + 0x2c) = 0
        *(rdx_1 + 0x34) = 0
        int64_t* rdx_2 = *(arg1 + 0x28)
        
        if (rdx_2 != 0)
            *(rdx_2 + 0x1c) = 0
            *(arg1 + 0x1c) = 0
            *(arg1 + 0xc) = 0
            *(arg1 + 0x20) = 0
            int32_t rax = rdx_2[1].d
            
            if (rax != 0)
                *(arg1 + 0x4c) = rax & 1
            
            *rdx_2 = 0
            *(rdx_2 + 0xc) = 0
            *(rdx_2 + 0x14) = 0x8000
            rdx_2[4] = 0
            rdx_2[8] = 0
            rdx_2[0x10] = &rdx_2[0xa9]
            rdx_2[0xc] = &rdx_2[0xa9]
            rdx_2[0xb] = &rdx_2[0xa9]
            rdx_2[0x37b] = -0xffffffff
            return 0

return 0xfffffffe
