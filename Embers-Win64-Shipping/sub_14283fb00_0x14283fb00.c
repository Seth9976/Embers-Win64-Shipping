// 函数: sub_14283fb00
// 地址: 0x14283fb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *arg1
int32_t rax_2 = rdx u>> 6 & 0x1f
int32_t rcx_1 = rdx & 0x3f
int32_t var_18

if (rax_2 != 0x1f)
    if (rax_2 == 0)
        if (rcx_1 == 0)
            rax_2 = -0x70
        else
            rax_2 = 1
            
            do
                rax_2 -= 1
                rcx_1 *= 2
            while ((rcx_1.b & 0x40) == 0)
            
            rcx_1 &= 0x3f
    
    var_18 = (rax_2 + 0x70) << 0x17 | rcx_1 << 0x11
else
    var_18 = (rcx_1 | 0x3fc0) << 0x11

int32_t rcx_7 = rdx u>> 0xb & 0x3f
int32_t rax_8 = rdx u>> 0x11 & 0x1f
uint32_t rax_13

if (rax_8 != 0x1f)
    if ((rdx & 0x3e0000) == 0)
        if (rcx_7 == 0)
            rax_8 = -0x70
        else
            rax_8 = 1
            
            do
                rax_8 -= 1
                rcx_7 *= 2
            while ((rcx_7.b & 0x40) == 0)
            
            rcx_7 &= 0x3f
    
    rax_13 = (rax_8 + 0x70) << 0x17 | rcx_7 << 0x11
else
    rax_13 = ((rdx & 0x1f800) | 0x1fe0000) u>> 0xb << 0x11

uint32_t var_14 = rax_13
int32_t rcx_11 = rdx u>> 0x16 & 0x1f
uint32_t rax_17 = rdx u>> 0x1b

if (rax_17 == 0x1f)
    int32_t var_10 = (rcx_11 | 0x3fc0) << 0x11
    return __andps_xmmxud_memxud(data_143702c40, var_18.o)

if (rdx u< 0x8000000)
    if (rcx_11 == 0)
        rax_17 = -0x70
    else
        rax_17 = 1
        
        do
            rax_17 -= 1
            rcx_11 *= 2
        while ((rcx_11.b & 0x20) == 0)
        
        rcx_11 &= 0x1f

int32_t var_10_1 = (rax_17 + 0x70) << 0x17 | rcx_11 << 0x12
return __andps_xmmxud_memxud(data_143702c40, var_18.o)
