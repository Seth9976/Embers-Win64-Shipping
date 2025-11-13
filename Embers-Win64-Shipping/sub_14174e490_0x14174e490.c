// 函数: sub_14174e490
// 地址: 0x14174e490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg3 + 4)

if (r10 != 0xffffffff)
    uint64_t rdx_4 = sx.q(*(arg1 + 0x78))
    int64_t r8_1 = sx.q(*(rdx_4 * 0x34 + *(arg1 + 0x70) - 0x1c))
    
    if (r8_1.d != *arg2)
        *(*(arg1 + 0x80) + r8_1 * 0x24 + 4) = r10
        r10 = *(arg3 + 4)
        rdx_4 = zx.q(*(arg1 + 0x78))
    
    int32_t rcx_11 = rdx_4.d - r10 - 1
    
    if (rcx_11 s>= 1)
        rcx_11 = 1
    
    if (rcx_11 != 0)
        memcpy(sx.q(r10) * 0x34 + *(arg1 + 0x70), sx.q(rdx_4.d - rcx_11) * 0x34 + *(arg1 + 0x70), 
            rcx_11 * 0x34)
        rdx_4 = zx.q(*(arg1 + 0x78))
    
    *(arg1 + 0x78) = (rdx_4 - 1).d
    return sub_1417503b0(arg1 + 0x70) __tailcall

for (int32_t i = *(arg3 + 8); i s<= *(arg3 + 0x14); i += 1)
    for (int32_t j = *(arg3 + 0xc); j s<= *(arg3 + 0x18); j += 1)
        for (int32_t k = *(arg3 + 0x10); k s<= *(arg3 + 0x1c); k += 1)
            int32_t r9_1 = 0
            int64_t* rdi_3 =
                (sx.q((*(arg1 + 0x54) * i + j) * *(arg1 + 0x58) + k) << 4) + *(arg1 + 0x60)
            void* r11_1 = *rdi_3
            uint64_t r10_1 = sx.q(rdi_3[1].d)
            void* rax = r11_1
            void* rdx_1 = r10_1 * 0x34 + r11_1
            
            if (r11_1 != rdx_1)
                do
                    if (*(rax + 0x18) == *arg2)
                        int32_t rcx_3 = r10_1.d - r9_1 - 1
                        
                        if (rcx_3 s>= r10 + 2)
                            rcx_3 = r10 + 2
                        
                        if (rcx_3 != 0)
                            memcpy(sx.q(r9_1) * 0x34 + r11_1, sx.q(r10_1.d - rcx_3) * 0x34 + r11_1, 
                                rcx_3 * 0x34)
                            r10_1 = zx.q(rdi_3[1].d)
                        
                        rdi_3[1].d = (r10_1 - 1).d
                        sub_1417503b0(rdi_3)
                        break
                    
                    r9_1 += 1
                    rax += 0x34
                while (rax != rdx_1)
