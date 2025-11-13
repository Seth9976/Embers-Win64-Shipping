// 函数: sub_14221b480
// 地址: 0x14221b480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x118) s<= 0)
    return 

void* rcx = *(arg1 + 0x18)
int128_t zmm6 = zx.o(0)

if (rcx != 0)
    void* rax_2
    
    if (*(rcx + 0xa8) == 0)
        rax_2 = sub_141ee69e0(rcx)
    
    if (*(rcx + 0xa8) != 0 || rax_2 != 0)
        void* rcx_1 = *(arg1 + 0x18)
        void* rax_3 = *(rcx_1 + 0xa8)
        
        if (rax_3 == 0)
            rax_3 = sub_141ee69e0(rcx_1)
        
        zmm6 = *(rax_3 + 0x520)

int32_t rax_4 = *(arg1 + 0x118)
int64_t rbp
rbp.b = 0
int64_t rdi_1 = sx.q(rax_4 - 1)

if (rax_4 - 1 s< 0)
    return 

int64_t temp1_1

do
    int32_t r8_1 = *(arg1 + 0x114)
    int64_t r9_1 = *(arg1 + 0xf0)
    int64_t r11_1 = sx.q(*(arg1 + 0x30))
    uint32_t rsi_1 = zx.d(*(*(arg1 + 0xf8) + (rdi_1 << 1)))
    void* r10_2 = sx.q(rsi_1 * r8_1) + r9_1
    
    if (1f f< *(r10_2 + 0xc))
    label_14221b583:
        int32_t rax_7 = *(r11_1 + r10_2)
        int32_t rdx_2 = rax_7 & 0xf0000000
        
        if (rdx_2 == 0x40000000 || rdx_2 == 0x10000000)
            int32_t rax_29 = rax_7 & 0x3fff
            
            if (rax_29 != 0x3fff)
                int64_t r8_5 = sx.q(rax_29 * r8_1) + r11_1
                int32_t rcx_10 = *(r8_5 + r9_1)
                
                if ((rcx_10 & 0xf0000000) != 0x80000000)
                    int32_t rcx_13 = rcx_10 & 0xfffffff
                    rcx_10 = rcx_13 | 0x10000000
                    
                    if (rdx_2 == 0x40000000)
                        rcx_10 = rcx_13 | 0x40000000
                else if (rdx_2 == 0x40000000)
                    rcx_10 = (rcx_10 & 0xfffffff) | rdx_2
                else if (rdx_2 == 0x10000000)
                    rcx_10 = (rcx_10 & 0xfffffff) | rdx_2
                
                *(r8_5 + r9_1) = rcx_10 | 0xfffc000
        else if (rdx_2 == 0x80000000)
            int32_t rax_9 = rax_7 s>> 0xe & 0x3fff
            
            if (rax_9 != 0x3fff)
                int32_t* rcx_4 = sx.q(rax_9 * r8_1) + r11_1 + r9_1
                int32_t rax_11 = *rcx_4
                int32_t rdx_4 = rax_11 & 0xf0000000
                
                if (rdx_4 == 0x40000000)
                    *rcx_4 = (rax_11 & 0xfffffff) | rdx_4 | 0x3fff
                else if (rdx_4 != 0x10000000)
                    *rcx_4 = (rax_11 & 0xfffffff) | 0x80000000 | 0x3fff
                else
                    rcx_4[2] = 0
                    *rcx_4 = rax_11 | 0x3fff
                    rcx_4[7] = 1
        else if (rdx_2 == 0x20000000)
            int32_t rax_20 = rax_7 s>> 0xe & 0x3fff
            int32_t i = rax_7 & 0x3fff
            
            if (rax_20 != 0x3fff)
                int32_t* rdx_7 = sx.q(rax_20 * r8_1) + r11_1 + r9_1
                int32_t rax_22 = *rdx_7
                int32_t r8_3 = rax_22 & 0xf0000000
                
                if (r8_3 == 0x40000000)
                    rax_22 = (rax_22 & 0xfffffff) | r8_3
                else if (r8_3 != 0x10000000)
                    rax_22 = (rax_22 & 0xfffffff) | 0x80000000
                else
                    rdx_7[2] = 0
                    rdx_7[7] = 1
                
                *rdx_7 = rax_22 | 0x3fff
            
            if (i != 0x3fff)
                rbp.b = 1
                
                do
                    int32_t* rcx_8 =
                        sx.q(*(arg1 + 0x114) * i) + sx.q(*(arg1 + 0x30)) + *(arg1 + 0xf0)
                    *rcx_8 &= 0xfffffff
                    i = *rcx_8 & 0x3fff
                while (i != 0x3fff)
        
        int32_t rax_38 = *(r11_1 + r10_2)
        int32_t rcx_16 = rax_38 & 0x3fff
        
        if (rcx_16 != 0x3fff)
            int32_t* rcx_19 = sx.q(*(arg1 + 0x114) * rcx_16) + sx.q(*(arg1 + 0x30)) + *(arg1 + 0xf0)
            *rcx_19 |= 0xfffc000
            rax_38 = *(r11_1 + r10_2)
        
        int32_t rcx_22 = rax_38 s>> 0xe & 0x3fff
        
        if (rcx_22 != 0x3fff)
            int32_t* rcx_25 = sx.q(*(arg1 + 0x114) * rcx_22) + sx.q(*(arg1 + 0x30)) + *(arg1 + 0xf0)
            *rcx_25 |= 0x3fff
            rax_38 = *(r11_1 + r10_2)
        
        *(r11_1 + r10_2) = rax_38 | 0xfffffff
        int64_t rdx_8 = *(arg1 + 0xf8)
        *(rdx_8 + (rdi_1 << 1)) = *(rdx_8 + (sx.q(*(arg1 + 0x118)) << 1) - 2)
        *(*(arg1 + 0xf8) + (sx.q(*(arg1 + 0x118)) << 1) - 2) = rsi_1.w
        *(arg1 + 0x118) -= 1
    else if ((*(arg1 + 0x230) & 2) != 0 && not(zmm6.d f== 0f)
            && not(zmm6.d f- *(arg1 + 0x1e4) <= 1f f/ *(r10_2 + 0x1c)))
        goto label_14221b583
    
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)

if (rbp.b != 1)
    return 

int32_t rax_44 = *(arg1 + 0x118)
int64_t r8_6 = sx.q(rax_44 - 1)

if (rax_44 - 1 s< 0)
    return 

int64_t temp3_1

do
    uint32_t r9_2 = zx.d(*(*(arg1 + 0xf8) + (r8_6 << 1)))
    int32_t* rcx_30 = sx.q(r9_2 * *(arg1 + 0x114)) + sx.q(*(arg1 + 0x30)) + *(arg1 + 0xf0)
    uint64_t rax = zx.q(*rcx_30)
    
    if ((rax.d & 0xf0000000) == 0)
        *rcx_30 = rax.d | 0xfffffff
        int64_t rdx_9 = *(arg1 + 0xf8)
        *(rdx_9 + (r8_6 << 1)) = *(rdx_9 + (sx.q(*(arg1 + 0x118)) << 1) - 2)
        *(*(arg1 + 0xf8) + (sx.q(*(arg1 + 0x118)) << 1) - 2) = r9_2.w
        *(arg1 + 0x118) -= 1
    
    temp3_1 = r8_6
    r8_6 -= 1
while (temp3_1 - 1 s>= 0)
