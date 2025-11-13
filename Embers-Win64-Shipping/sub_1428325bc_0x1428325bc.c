// 函数: sub_1428325bc
// 地址: 0x1428325bc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x78) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        memset(*(rdi_1 + *(arg1 + 0x80)), 0, 0x100)
        memset(*(*(arg1 + 0x88) + rdi_1), 0, 0x100)
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x78))

int32_t i_1 = 0

if (*(arg1 + 0x24) s> 0)
    int64_t* rdi_2 = nullptr
    
    do
        memset(*(*(arg1 + 0x90) + rdi_2), 0, 0x100)
        memset(*(rdi_2 + *(arg1 + 0x98)), 0, 0x100)
        i_1 += 1
        rdi_2 = &rdi_2[1]
    while (i_1 s< *(arg1 + 0x24))

int32_t* rsi

if (*(arg1 + 0xc) == 0)
    rsi = nullptr
else
    rsi = **(arg1 + 0x90)

int32_t* rdi_3

if (*(arg1 + 0xd) == 0)
    rdi_3 = nullptr
else
    rdi_3 = *(*(arg1 + 0x90) + 8)

int32_t i_2 = 0

if (*(arg1 + 8) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* r15_1 = *(r14_1 + *(arg1 + 0x68))
        int64_t rax_3
        rax_3.b = *(r15_1 + 4)
        rax_3.b -= 1
        
        if (rax_3.b u<= 1)
            int64_t rax_7 =
                sx.q(mods.dp.d(sx.q(sub_141840b50(sub_1405948a0(r15_1))), *(arg1 + 0x20)))
            sub_14283a8f8(r15_1, *(*(arg1 + 0x80) + (rax_7 << 3)), 
                *(*(arg1 + 0x88) + (rax_7 << 3)), rsi, rdi_3)
        
        i_2 += 1
        r14_1 = &r14_1[1]
    while (i_2 s< *(arg1 + 8))

if (arg2 == 0)
    if (rsi != 0)
        sub_14283b144(*(arg1 + 0xa0), rsi, **(arg1 + 0x80), **(arg1 + 0x88))
    
    if (rdi_3 != 0)
        sub_14283d5c8(*(arg1 + 0xa8), rdi_3, **(arg1 + 0x80), **(arg1 + 0x88))
else
    if (rsi != 0)
        sub_14283b374(*(arg1 + 0xa0), rsi, **(arg1 + 0x90), **(arg1 + 0x98))
    
    if (rdi_3 != 0)
        sub_14283d6f8(*(arg1 + 0xa8), rdi_3, *(*(arg1 + 0x90) + 8), *(*(arg1 + 0x98) + 8))

*(arg1 + 0x2c) += 0x40
return 0
