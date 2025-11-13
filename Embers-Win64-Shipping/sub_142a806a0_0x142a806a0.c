// 函数: sub_142a806a0
// 地址: 0x142a806a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0xc8)
void* rax_1
int64_t rax

if (*(arg1 + 0xd0) != arg1 + 0xd8)
    int64_t rcx_1 = *(arg1 + 0x50)
    int32_t rdi_1 = rdi << 4
    
    if (rcx_1 != 0)
        if (rdi_1 s<= *(arg1 + 0x28))
            goto label_142a807a7
        
        rax_1 = sub_142a7dd30(rcx_1, sx.q(rdi_1))
        
        if (rax_1 != 0)
            *(arg1 + 0x50) = rax_1
        label_142a807a0:
            *(arg1 + 0x28) = rdi_1
        label_142a807a7:
            *(arg1 + 0xd0) = *(arg1 + 0x50)
            rax.b = 1
            return rax
    else
        rax_1 = sub_142a7dd00(sx.q(rdi_1))
        *(arg1 + 0x50) = rax_1
        
        if (rax_1 != 0)
            goto label_142a807a0
else
    if (rdi s<= 0xa)
        rax.b = 1
        return rax
    
    int64_t rcx = *(arg1 + 0x50)
    
    if (rcx != 0)
        if (*(arg1 + 0x28) s>= 0xa0)
            goto label_142a806f8
        
        rax_1 = sub_142a7dd30(rcx, 0xa0)
        
        if (rax_1 != 0)
            *(arg1 + 0x50) = rax_1
        label_142a806f1:
            *(arg1 + 0x28) = 0xa0
        label_142a806f8:
            int128_t* rax_2 = *(arg1 + 0x50)
            int128_t zmm0 = *(arg1 + 0xd8)
            *(arg1 + 0xd0) = rax_2
            *rax_2 = zmm0
            rax_2[1] = *(arg1 + 0xe8)
            rax_2[2] = *(arg1 + 0xf8)
            rax_2[3] = *(arg1 + 0x108)
            rax_2[4] = *(arg1 + 0x118)
            rax_2.b = 1
            return rax_2
    else
        rax_1 = sub_142a7dd00(0xa0)
        *(arg1 + 0x50) = rax_1
        
        if (rax_1 != 0)
            goto label_142a806f1
rax_1.b = 0
return rax_1
