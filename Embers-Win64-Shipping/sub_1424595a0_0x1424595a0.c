// 函数: sub_1424595a0
// 地址: 0x1424595a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2
int64_t result

if (arg4 != 0)
    int128_t* rbx_1 = arg3 + 0x40
    int32_t i
    
    do
        int64_t* rdi_1 = rbp
        rbp = &rbp[0xe]
        
        if (rdi_1 != &rbx_1[-4])
            int64_t rsi_1 = sx.q(*(rbx_1 - 0x38))
            int64_t r14_1 = rbx_1[-4].q
            int32_t r8 = *(rdi_1 + 0xc)
            rdi_1[1].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_140809010(rdi_1, rsi_1.d, r8)
                memcpy(*rdi_1, r14_1, (rsi_1 * 0x48).d)
            else
                *(rdi_1 + 0xc) = 0
        
        rdi_1[2].d = rbx_1[-3].d
        sub_140780c40(&rdi_1[3], rbx_1 - 0x28)
        rdi_1[5].b = *(rbx_1 - 0x18)
        *(rdi_1 + 0x2c) = *(rbx_1 - 0x14)
        
        if (&rdi_1[6] != &rbx_1[-1])
            int64_t rsi_2 = sx.q(*(rbx_1 - 8))
            int64_t r14_2 = rbx_1[-1].q
            int32_t r8_3 = *(rdi_1 + 0x3c)
            rdi_1[7].d = rsi_2.d
            
            if (rsi_2.d != 0 || r8_3 != 0)
                sub_1407c3650(&rdi_1[6], rsi_2.d, r8_3)
                memcpy(rdi_1[6], r14_2, (rsi_2 * 0xc).d)
            else
                *(rdi_1 + 0x3c) = 0
        
        *(rdi_1 + 0x40) = *rbx_1
        rdi_1[0xa].d = rbx_1[1].d
        *(rdi_1 + 0x54) = *(rbx_1 + 0x14)
        *(rdi_1 + 0x64) = *(rbx_1 + 0x24)
        result = *(rbx_1 + 0x28)
        rbx_1 = &rbx_1[7]
        rdi_1[0xd] = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
