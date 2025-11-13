// 函数: sub_141c3ae10
// 地址: 0x141c3ae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xc] = arg2
*arg1 = 0xbf800000
uint64_t i_2 = zx.q(arg3)
arg1[0xe] = i_2.d
arg1[0xd] = arg2 * 0.5f - 1f
arg1[6] = 0

if (arg1[7] != arg3)
    sub_1405dadb0(&arg1[4], i_2.d)

if (i_2.d s> 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int64_t rdi = sx.q(arg1[6])
        int32_t rax_1 = (rdi + 1).d
        arg1[6] = rax_1
        
        if (rax_1 s> arg1[7])
            sub_1406105e0(&arg1[4])
        
        int32_t* rdx_3 = *(arg1 + 0x10) + (rdi << 2)
        
        if (rdx_3 != 0)
            *rdx_3 = 0
        
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x20) = *(arg1 + 0x10)
*(arg1 + 4) = 0
arg1[0xa] = 0
arg1[6] = 0

if (arg1[7] s<= 0xffffffff)
    sub_1405dadb0(&arg1[4], 0)

int64_t rsi_1 = sx.q(arg1[0xe])
int64_t rdi_1 = sx.q(arg1[6])
int32_t rax_4 = (rdi_1 + rsi_1).d
arg1[6] = rax_4

if (rax_4 s> arg1[7])
    sub_1406105e0(&arg1[4])

memset(*(arg1 + 0x10) + (rdi_1 << 2), 0, rsi_1 << 2)
int64_t result = *(arg1 + 0x10)
arg1[0xf] |= 1
*(arg1 + 0x20) = result
return result
