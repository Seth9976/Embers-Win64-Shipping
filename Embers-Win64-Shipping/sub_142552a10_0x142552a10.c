// 函数: sub_142552a10
// 地址: 0x142552a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* r8 = r15
        r15 = &r15[4]
        *r8 = *(rbx_1 - 8)
        r8[1].b ^= (r8[1].b ^ *rbx_1) & 1
        char rcx = ((r8[1].b ^ *rbx_1) & 2) ^ r8[1].b
        r8[1].b = rcx
        char rdx = ((rcx ^ *rbx_1) & 4) ^ rcx
        r8[1].b = rdx
        r8[1].b = ((rdx ^ *rbx_1) & 8) ^ rdx
        
        if (&r8[2] != rbx_1 + 8)
            int64_t rsi_1 = sx.q(*(rbx_1 + 0x10))
            int64_t r14_2 = *(rbx_1 + 8)
            int32_t r8_1 = *(r8 + 0x1c)
            r8[3].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8_1 != 0)
                sub_140638750(&r8[2], rsi_1.d, r8_1)
                memcpy(r8[2], r14_2, (rsi_1 << 2).d)
            else
                *(r8 + 0x1c) = 0
        
        rbx_1 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
