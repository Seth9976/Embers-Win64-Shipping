// 函数: sub_142b784c0
// 地址: 0x142b784c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = 0

if (*(arg1 + 0x48) != 0)
    sub_142a4ab40(arg1 + 0x78)
    sub_142a479b0(arg2, arg1 + 0x78)
    return arg2

if ((*(arg1 + 0x80) & 1) == 0)
    *(arg1 + 0x80) &= 0x1f
else
    *(arg1 + 0x80) = 2

int32_t i = 0

if (*(arg1 + 0x58) s> 0)
    int64_t rbp_1 = 0
    int64_t rsi_1 = 0
    
    do
        void* rdx_3 = (sx.q(*(*(arg1 + 0x68) + rbp_1)) << 6) + *(*(arg1 + 0x50) + rsi_1)
        int16_t rax_4 = *(rdx_3 + 8)
        int32_t r9_2
        
        if (rax_4 s< 0)
            r9_2 = *(rdx_3 + 0xc)
        else
            r9_2 = sx.d(rax_4) s>> 5
        
        sub_142a48d00(arg1 + 0x78, rdx_3, 0, r9_2)
        i += 1
        rbp_1 += 4
        rsi_1 += 8
    while (i s< *(arg1 + 0x58))

int32_t rax_5 = *(arg1 + 0x70)
int64_t r8 = sx.q(rax_5 - 1)

if (rax_5 - 1 s>= 0)
    int64_t temp1_1
    
    do
        int64_t rax_7 = *(arg1 + 0x68)
        *(rax_7 + (r8 << 2)) += 1
        int32_t* r9_3 = *(arg1 + 0x68) + (r8 << 2)
        
        if (*r9_3 s< *(*(arg1 + 0x60) + (r8 << 2)))
            goto label_142b785f1
        
        temp1_1 = r8
        r8 -= 1
        *r9_3 = 0
    while (temp1_1 - 1 s>= 0)

*(arg1 + 0x48) = 1
label_142b785f1:
sub_142a479b0(arg2, arg1 + 0x78)
return arg2
