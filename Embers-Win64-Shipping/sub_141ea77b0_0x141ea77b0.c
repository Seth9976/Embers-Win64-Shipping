// 函数: sub_141ea77b0
// 地址: 0x141ea77b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x51]

if ((result == 0 || *(result + 0x16a) != 3) && arg1[0x1e].b == 1)
    if (arg1[0x84].b == 0)
        int32_t i_1 = arg1[0x83].d
        
        if (i_1 != 0)
            void* rbx_4 = arg1[0x82] + 0x58
            int32_t i
            
            do
                *(rbx_4 - 8) = &data_143258940
                sub_140596d80(rbx_4 + 0x10)
                sub_140596d80(rbx_4)
                rbx_4 += 0xa0
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        arg1[0x83].d = 0
        
        if (*(arg1 + 0x41c) != 0)
            sub_1407c4520(&arg1[0x82], 0)
    else
        int64_t rbx_1 = sx.q(arg1[0x83].d)
        int32_t rax = (rbx_1 + 1).d
        arg1[0x83].d = rax
        
        if (rax s> *(arg1 + 0x41c))
            sub_140775640(&arg1[0x82])
        
        memset(rbx_1 * 0xa0 + arg1[0x82], 0, 0xa0)
        void* rbx_2 = arg1[0x82]
        int64_t rdi_2 = sx.q(arg1[0x83].d) * 0xa0
        *(rdi_2 + rbx_2 - 0x98) = arg1[0x84].b
        *(rdi_2 + rbx_2 - 0x90) = arg1[0x85]
        *(rdi_2 + rbx_2 - 0x88) = arg1[0x86].d
        *(rdi_2 + rbx_2 - 0x84) = *(arg1 + 0x434)
        *(rdi_2 + rbx_2 - 0x7c) = *(arg1 + 0x43c)
        *(rdi_2 + rbx_2 - 0x78) = arg1[0x88]
        *(rdi_2 + rbx_2 - 0x70) = arg1[0x89].d
        *(rdi_2 + rbx_2 - 0x68) = arg1[0x8a]
        *(rdi_2 + rbx_2 - 0x60) = arg1[0x8b]
        *(rdi_2 + rbx_2 - 0x58) = arg1[0x8c].b
        *(rdi_2 + rbx_2 - 0x57) = *(arg1 + 0x461)
        sub_141ff71c0(rbx_2 - 0x50 + rdi_2, &arg1[0x8d])
        *(rdi_2 + rbx_2 - 0x18) = arg1[0x94]
        *(rdi_2 + rbx_2 - 0x10) = arg1[0x95].d
        *(rdi_2 + rbx_2 - 0xc) = *(arg1 + 0x4ac)
        *(rdi_2 + rbx_2 - 4) = *(arg1 + 0x4b4)
        *(rdi_2 + rbx_2 - 0xa0) = *((*(*arg1 + 0x150))(arg1) + 0x520)
    
    result = arg1[0x51]
    
    if (result != 0)
        *(result + 0x387) |= 0x40

return result
