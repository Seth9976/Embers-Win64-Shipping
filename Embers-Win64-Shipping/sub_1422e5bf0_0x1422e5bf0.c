// 函数: sub_1422e5bf0
// 地址: 0x1422e5bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg2 + 0x138))

if (*(arg1 + 8) != 0)
    if ((rax.b & 4) == 0)
        rax.b &= 8
        char temp0 = rax.b
        rax.b = neg.b(rax.b)
        return zx.q(sbb.d(rax, rax, temp0 != 0) + 4)
    
    return 1

int32_t r8 = 4

if ((rax.b & 8) != 0)
    int128_t zmm0 = *(arg2 + 0xe8)
    void* i = *arg3
    int32_t r10_1 = zmm0:0xc.d
    int32_t r11_1 = zmm0:8.d
    void* r9_3 = (sx.q(arg3[1].d) << 4) + i
    int32_t rbx_1 = zmm0:4.d
    int32_t rdi_1 = zmm0.d
    
    for (; i != r9_3; i += 0x10)
        if (((*(i + 4) ^ rbx_1) | (*(i + 8) ^ r11_1) | (*(i + 0xc) ^ r10_1) | (rdi_1 ^ *i)) == 0)
            return 0
    
    void* rax_10 = *(arg1 + 0x10)
    
    if (rax_10 == 0)
    label_1422e5ce6:
        void* rax_17 = *(arg1 + 0x18)
        
        if (rax_17 != 0)
            void* rsi_2 = *(rax_17 + 8)
            void* rdx_1 = rsi_2
            void* r9_9 = (sx.q(*(rax_17 + 0x10)) << 4) + rsi_2
            
            if (rsi_2 != r9_9)
                do
                    if (((*(rdx_1 + 4) ^ rbx_1) | (*(rdx_1 + 8) ^ r11_1) | (*(rdx_1 + 0xc) ^ r10_1)
                            | (*rdx_1 ^ rdi_1)) == 0)
                        if (((rdx_1 - rsi_2) s>> 4).d != 0xffffffff)
                            r8 = 3
                        
                        break
                    
                    rdx_1 += 0x10
                while (rdx_1 != r9_9)
    else
        void* rsi_1 = *(rax_10 + 8)
        void* rdx = rsi_1
        void* r9_6 = (sx.q(*(rax_10 + 0x10)) << 4) + rsi_1
        
        if (rsi_1 == r9_6)
            goto label_1422e5ce6
        
        while (((*(rdx + 4) ^ rbx_1) | (*(rdx + 8) ^ r11_1) | (*(rdx + 0xc) ^ r10_1)
                | (*rdx ^ rdi_1)) != 0)
            rdx += 0x10
            
            if (rdx == r9_6)
                goto label_1422e5ce6
        
        if (((rdx - rsi_1) s>> 4).d == 0xffffffff)
            goto label_1422e5ce6
        
        r8 = 1

return zx.q(r8)
