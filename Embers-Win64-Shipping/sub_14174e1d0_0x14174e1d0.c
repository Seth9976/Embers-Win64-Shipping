// 函数: sub_14174e1d0
// 地址: 0x14174e1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*arg2)

if (r9.d s>= *(arg1 + 0x88))
    return 

int64_t r11_1 = *(arg1 + 0x80)
int64_t r8_1 = r9 * 9
int32_t* r8_2 = r11_1 + (r8_1 << 2)

if (*(r11_1 + (r8_1 << 2) + 0x20) == 0 || r8_2 == 0)
    return 

int32_t r10_1 = *r8_2

if (r10_1 == 0xffffffff)
    sub_14174e490(arg1, arg2, r8_2)
else
    uint64_t rdx = sx.q(*(arg1 + 0x18))
    int64_t rax_2 = sx.q(*(rdx * 0x1c + *(arg1 + 0x10) - 0x1c))
    
    if (rax_2.d != r9.d)
        *(r11_1 + rax_2 * 0x24) = r10_1
        r10_1 = *r8_2
        rdx = zx.q(*(arg1 + 0x18))
    
    int32_t rcx_4 = rdx.d - r10_1 - 1
    
    if (rcx_4 s>= 1)
        rcx_4 = 1
    
    if (rcx_4 != 0)
        memcpy(sx.q(r10_1) * 0x1c + *(arg1 + 0x10), sx.q(rdx.d - rcx_4) * 0x1c + *(arg1 + 0x10), 
            rcx_4 * 0x1c)
        rdx = zx.q(*(arg1 + 0x18))
    
    *(arg1 + 0x18) = (rdx - 1).d
    sub_1405c5460(arg1 + 0x10)

int64_t rax = sx.q(*arg2)

if (rax.d s< 0 || rax.d s>= *(arg1 + 0x88))
    return 

int32_t* rdx_4 = *(arg1 + 0x80) + rax * 0x24
int32_t var_38
*rdx_4 = var_38
int32_t var_34
rdx_4[1] = var_34
int32_t var_30
rdx_4[2] = var_30
int32_t var_2c
rdx_4[3] = var_2c
int32_t var_28
rdx_4[4] = var_28
int32_t var_24
rdx_4[5] = var_24
int32_t var_20
rdx_4[6] = var_20
int32_t var_1c
rdx_4[7] = var_1c
rdx_4[8].b = 0
