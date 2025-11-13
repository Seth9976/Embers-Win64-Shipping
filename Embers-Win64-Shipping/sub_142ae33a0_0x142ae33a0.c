// 函数: sub_142ae33a0
// 地址: 0x142ae33a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) s< 0x34)
    while (true)
        void* rax_1 = *(arg1 + 0x10)
        int64_t rdx_1
        int32_t rax_2
        
        if (rax_1 == 0)
            int64_t r8_1 = sx.q(*(arg1 + 8))
            int64_t rax_3 = *(arg1 + 0x20)
            
            if (*(rax_3 + (r8_1 << 3) + 8) != 0)
                rdx_1 = *(rax_3 + (sx.q(*(arg1 + 8)) << 3) + 8)
            else
                rax_2 = (r8_1 + 1).d
                *(arg1 + 8) = rax_2
            label_142ae33e4:
                
                if (rax_2 s>= 0x34)
                    break
                
                continue
        else
            if (*(rax_1 + 0x98) == 0)
                *(arg1 + 8) += 1
                rax_2 = *(arg1 + 8)
                *(arg1 + 0x10) = 0
                goto label_142ae33e4
            
            rdx_1 = *(rax_1 + 0x98)
        *(arg1 + 0x10) = rdx_1
        break

void* rdx_3 = *(arg1 + 0x10)
void* rax_4 = *(arg1 + 0x18)

if (rdx_3 != 0)
    void* rdx_4 = *(rdx_3 + 0x48)
    *(rax_4 + 0x10) = *(rdx_4 + 8)
    *(rax_4 + 0x20) = *(rdx_4 + 0x18)
    *(rax_4 + 0x30) = *(rdx_4 + 0x28)
    *(rax_4 + 0x40) = *(rdx_4 + 0x38)
    *(rax_4 + 0x50) = *(rdx_4 + 0x48)
    *(rax_4 + 0x60) = *(rdx_4 + 0x58)
    *(rax_4 + 0x70) = *(rdx_4 + 0x68)
    *(rax_4 + 0x80) = *(rdx_4 + 0x78)
    return *(arg1 + 0x18)

*(rax_4 + 0x10) = rdx_3
*(rax_4 + 0x18) = rdx_3
*(rax_4 + 0x20) = rdx_3
*(rax_4 + 0x28) = rdx_3
*(rax_4 + 0x30) = rdx_3
*(rax_4 + 0x38) = rdx_3
*(rax_4 + 0x40) = rdx_3
*(rax_4 + 0x48) = rdx_3
*(rax_4 + 0x50) = rdx_3
*(rax_4 + 0x58) = rdx_3
*(rax_4 + 0x60) = rdx_3
*(rax_4 + 0x68) = rdx_3
*(rax_4 + 0x70) = rdx_3
*(rax_4 + 0x78) = rdx_3
*(rax_4 + 0x80) = rdx_3
*(rax_4 + 0x88) = rdx_3
return *(arg1 + 0x18)
