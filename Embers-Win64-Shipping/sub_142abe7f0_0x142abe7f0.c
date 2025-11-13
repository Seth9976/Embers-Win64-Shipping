// 函数: sub_142abe7f0
// 地址: 0x142abe7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rdx = (arg2 u>> 0xa).b & 1
uint8_t r9_1 = (arg2 u>> 9).b & 1
int32_t* rax_2

if (r9_1 != 0)
    if (rdx == 0)
        goto label_142abe826
    
    rax_2 = 0x190
else if (rdx == 0)
label_142abe826:
    int32_t* rdx_1
    
    if (((arg2 u>> 8).b & 1) == 0)
        rax_2 = 0xe0
        rdx_1 = 0x188
    else
        rax_2 = 0xd8
        rdx_1 = 0x180
    
    if (r9_1 != 0)
        rax_2 = rdx_1
else
    rax_2 = 0xe8

if (arg3 s>= 0)
    int32_t rdx_2 = *(rax_2 + arg1)
    
    if (arg3 s< *(rax_2 + arg1 + 4) - rdx_2)
        int32_t r9_2 = rdx_2 + arg3
        int16_t rdx_3 = *(arg1 + 0x10)
        int32_t rax_6
        
        if (rdx_3 s< 0)
            rax_6 = *(arg1 + 0x14)
        else
            rax_6 = sx.d(rdx_3) s>> 5
        
        if (r9_2 u>= rax_6)
            return 0xffff
        
        if ((rdx_3.b & 2) == 0)
            return zx.q(*(*(arg1 + 0x20) + (sx.q(r9_2) << 1)))
        
        return zx.q(*(arg1 + 0x12 + (sx.q(r9_2) << 1)))

abort()
noreturn
